#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
// clang-format on

namespace gametest {

class GameTestBatch {
public:
    // prevent constructor by default
    GameTestBatch& operator=(GameTestBatch const&);
    GameTestBatch();

public:
    // NOLINTBEGIN
    // symbol: ??0GameTestBatch@gametest@@QEAA@AEBV01@@Z
    MCAPI
    GameTestBatch(class gametest::GameTestBatch const&);

    // symbol:
    // ??0GameTestBatch@gametest@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$shared_ptr@VBaseGameTestFunction@gametest@@@std@@V?$allocator@V?$shared_ptr@VBaseGameTestFunction@gametest@@@std@@@2@@3@V?$function@$$A6AXXZ@3@@Z
    MCAPI
    GameTestBatch(std::string name, std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>>, std::function<void()>);

    // symbol: ??1GameTestBatch@gametest@@QEAA@XZ
    MCAPI ~GameTestBatch();

    // NOLINTEND
};

}; // namespace gametest
