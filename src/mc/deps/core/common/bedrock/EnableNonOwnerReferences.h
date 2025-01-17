#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class EnableNonOwnerReferences {
public:
    struct ControlBlock {
        EnableNonOwnerReferences* mPtr;
    };

    std::shared_ptr<ControlBlock> mControlBlock; // this+0x8

    template <std::derived_from<EnableNonOwnerReferences> Self>
    [[nodiscard]] inline NotNullNonOwnerPtr<Self> getNonOwnerRef();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnableNonOwnerReferences();

    MCAPI EnableNonOwnerReferences();

    // NOLINTEND
};

}; // namespace Bedrock
