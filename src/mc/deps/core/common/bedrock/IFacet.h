#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace OreUI {

class IFacet : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IFacet& operator=(IFacet const&);
    IFacet(IFacet const&);
    IFacet();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IFacet@OreUI@@UEAA@XZ
    virtual ~IFacet() = default;

    // NOLINTEND
};

}; // namespace OreUI