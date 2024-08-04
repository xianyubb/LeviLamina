#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackRequestSlotInfo.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionTransferBase : public ::ItemStackRequestAction {
public:
    bool                     mIsDstSerialized;
    bool                     mIsAmountSerialized;
    uchar                    mAmount;
    ItemStackRequestSlotInfo mSrc;
    ItemStackRequestSlotInfo mDst;

public:
    // prevent constructor by default
    ItemStackRequestActionTransferBase& operator=(ItemStackRequestActionTransferBase const&);
    ItemStackRequestActionTransferBase(ItemStackRequestActionTransferBase const&);
    ItemStackRequestActionTransferBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemStackRequestActionTransferBase@@UEAA@XZ
    virtual ~ItemStackRequestActionTransferBase();

    // symbol: ?getSrc@ItemStackRequestActionTransferBase@@QEBAAEBUItemStackRequestSlotInfo@@XZ
    MCAPI struct ItemStackRequestSlotInfo const& getSrc() const;

    // NOLINTEND
};
