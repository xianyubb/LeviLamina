#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
// clang-format on

namespace Bedrock::JSONObject {

class NumberNode {
public:
    // prevent constructor by default
    NumberNode& operator=(NumberNode const&);
    NumberNode(NumberNode const&);
    NumberNode();

    // private:
    // NOLINTBEGIN
    // symbol: ??0NumberNode@JSONObject@Bedrock@@AEAA@PEAVMemoryPage@12@_J@Z
    MCAPI NumberNode(class Bedrock::JSONObject::MemoryPage*, int64 value);

    // symbol: ??0NumberNode@JSONObject@Bedrock@@AEAA@PEAVMemoryPage@12@N@Z
    MCAPI NumberNode(class Bedrock::JSONObject::MemoryPage*, double value);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
