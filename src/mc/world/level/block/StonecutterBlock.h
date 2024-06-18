#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class StonecutterBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    StonecutterBlock& operator=(StonecutterBlock const&);
    StonecutterBlock(StonecutterBlock const&);
    StonecutterBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StonecutterBlock@@UEAA@XZ
    virtual ~StonecutterBlock() = default;

    // vIndex: 23, symbol: ?canProvideSupport@StonecutterBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 32, symbol: ?isCraftingBlock@StonecutterBlock@@UEBA_NXZ
    virtual bool isCraftingBlock() const;

    // vIndex: 57, symbol: ?canContainLiquid@StonecutterBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 136, symbol: ?init@StonecutterBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy& init();

    // vIndex: 150, symbol: ?isInteractiveBlock@StonecutterBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 152, symbol: ?use@StonecutterBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0StonecutterBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI StonecutterBlock(std::string const& nameId, int id);

    // NOLINTEND
};
