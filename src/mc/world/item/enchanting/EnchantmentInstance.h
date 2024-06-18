#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantmentInstance {
public:
    // prevent constructor by default
    EnchantmentInstance& operator=(EnchantmentInstance const&);
    EnchantmentInstance(EnchantmentInstance const&);

public:
    // NOLINTBEGIN
    // symbol: ??0EnchantmentInstance@@QEAA@XZ
    MCAPI EnchantmentInstance();

    // symbol: ??0EnchantmentInstance@@QEAA@W4Type@Enchant@@H@Z
    MCAPI EnchantmentInstance(::Enchant::Type enchantType, int level);

    // symbol: ?getEnchantLevel@EnchantmentInstance@@QEBAHXZ
    MCAPI int getEnchantLevel() const;

    // symbol: ?getEnchantType@EnchantmentInstance@@QEBA?AW4Type@Enchant@@XZ
    MCAPI ::Enchant::Type getEnchantType() const;

    // symbol: ??8EnchantmentInstance@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class EnchantmentInstance const& rhs) const;

    // symbol: ?setEnchantLevel@EnchantmentInstance@@QEAAXH@Z
    MCAPI void setEnchantLevel(int level);

    // symbol: ?setEnchantType@EnchantmentInstance@@QEAAXW4Type@Enchant@@@Z
    MCAPI void setEnchantType(::Enchant::Type enchantType);

    // NOLINTEND
};
