#pragma once

#include "ll/api/event/Event.h"
#include "ll/api/event/ListenerBase.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event {
class DynamicListener : public ListenerBase {
public:
    using callback_fn = std::function<void(CompoundTag&)>;

    explicit DynamicListener(
        callback_fn             fn,
        EventPriority           priority = EventPriority::Normal,
        std::weak_ptr<mod::Mod> mod      = mod::NativeMod::current()
    )
    : ListenerBase(priority, std::move(mod)),
      callback(std::move(fn)) {}

    ~DynamicListener() override = default;

    void call(Event& event) override {
        CompoundTag data{};
        event.serialize(data);
        callback(data);
        event.deserialize(data);
    }

    static std::shared_ptr<DynamicListener> create(
        callback_fn             fn,
        EventPriority           priority = EventPriority::Normal,
        std::weak_ptr<mod::Mod> mod      = mod::NativeMod::current()
    ) {
        return std::make_shared<DynamicListener>(std::move(fn), priority, std::move(mod));
    }

private:
    callback_fn callback;
};
} // namespace ll::event
