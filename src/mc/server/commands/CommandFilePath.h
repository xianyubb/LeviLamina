#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {
public:
    std::string mText; // this+0x0

public:
    // NOLINTBEGIN
    // symbol: ??0CommandFilePath@@QEAA@XZ
    MCAPI CommandFilePath();

    // symbol: ?findInvalidCharacter@CommandFilePath@@QEBAHXZ
    MCAPI int findInvalidCharacter() const;

    // symbol: ?getText@CommandFilePath@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getText() const;

    // symbol: ??1CommandFilePath@@QEAA@XZ
    MCAPI ~CommandFilePath();

    // NOLINTEND
};
