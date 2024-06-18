#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ChestBlock : public ::ActorBlock {
public:
    // ChestBlock inner types define
    enum class ChestType {};

public:
    // prevent constructor by default
    ChestBlock& operator=(ChestBlock const&);
    ChestBlock(ChestBlock const&);
    ChestBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ChestBlock@@UEAA@XZ
    virtual ~ChestBlock();

    // vIndex: 23, symbol: ?canProvideSupport@ChestBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 31, symbol: ?isContainerBlock@ChestBlock@@UEBA_NXZ
    virtual bool isContainerBlock() const;

    // vIndex: 47, symbol: ?isSignalSource@ChestBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 59, symbol:
    // ?shouldConnectToRedstone@ChestBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 64, symbol: ?dispense@ChestBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    // vIndex: 67, symbol: ?onMove@ChestBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void onMove(class BlockSource& region, class BlockPos const& from, class BlockPos const& to) const;

    // vIndex: 68, symbol: ?detachesOnPistonMove@ChestBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool detachesOnPistonMove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 72, symbol: ?setupRedstoneComponent@ChestBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 90, symbol: ?breaksFallingBlocks@ChestBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 94, symbol: ?getSecondPart@ChestBlock@@UEBA_NAEBVIConstBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 111, symbol: ?hasComparatorSignal@ChestBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 112, symbol: ?getComparatorSignal@ChestBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 132, symbol: ?getMappedFace@ChestBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 136, symbol: ?init@ChestBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy& init();

    // vIndex: 143, symbol: ?onRemove@ChestBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146, symbol: ?onPlace@ChestBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150, symbol: ?isInteractiveBlock@ChestBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 152, symbol: ?use@ChestBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol:
    // ??0ChestBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ChestType@0@W4MaterialType@@@Z
    MCAPI ChestBlock(std::string const& nameId, int id, ::ChestBlock::ChestType type, ::MaterialType materialType);

    // symbol: ?updateSignalStrength@ChestBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void updateSignalStrength(class BlockSource& region, class BlockPos const& pos, int strength) const;

    // NOLINTEND
};
