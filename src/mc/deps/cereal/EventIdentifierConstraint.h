#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace Puv {

class EventIdentifierConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    EventIdentifierConstraint& operator=(EventIdentifierConstraint const&);
    EventIdentifierConstraint(EventIdentifierConstraint const&);
    EventIdentifierConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doValidate@EventIdentifierConstraint@Puv@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1, symbol: __gen_??1EventIdentifierConstraint@Puv@@UEAA@XZ
    virtual ~EventIdentifierConstraint() = default;

    // vIndex: 2, symbol: ?description@EventIdentifierConstraint@Puv@@UEBA?AUConstraintDescription@internal@cereal@@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // NOLINTEND
};

}; // namespace Puv
