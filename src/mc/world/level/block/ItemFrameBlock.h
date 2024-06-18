#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
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

class ItemFrameBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ItemFrameBlock& operator=(ItemFrameBlock const&);
    ItemFrameBlock(ItemFrameBlock const&);
    ItemFrameBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemFrameBlock@@UEAA@XZ
    virtual ~ItemFrameBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@ItemFrameBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@ItemFrameBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 33, symbol: ?isWaterBlocking@ItemFrameBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 56, symbol: ?waterSpreadCausesSpawn@ItemFrameBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57, symbol: ?canContainLiquid@ItemFrameBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 85, symbol: ?mayPlace@ItemFrameBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 92, symbol: ?getIgnoresDestroyPermissions@ItemFrameBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@@Z
    virtual bool getIgnoresDestroyPermissions(class Actor& entity, class BlockPos const& pos) const;

    // vIndex: 93, symbol: ?neighborChanged@ItemFrameBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?playerWillDestroy@ItemFrameBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 96, symbol: ?asItemInstance@ItemFrameBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 97, symbol:
    // ?spawnAfterBreak@ItemFrameBlock@@EEBAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@AEBUResourceDropsContext@@@Z
    virtual void
    spawnAfterBreak(class BlockSource&, class Block const&, class BlockPos const&, struct ResourceDropsContext const&)
        const;

    // vIndex: 98, symbol: ?getPlacementBlock@ItemFrameBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 101, symbol: ?attack@ItemFrameBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 111, symbol: ?hasComparatorSignal@ItemFrameBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 112, symbol: ?getComparatorSignal@ItemFrameBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 143, symbol: ?onRemove@ItemFrameBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146, symbol: ?onPlace@ItemFrameBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148, symbol: ?tick@ItemFrameBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150, symbol: ?isInteractiveBlock@ItemFrameBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 152, symbol: ?use@ItemFrameBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 154, symbol: ?canSurvive@ItemFrameBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?getSpawnedItemName@ItemFrameBlock@@UEBA?AVHashedString@@XZ
    virtual class HashedString getSpawnedItemName() const;

    // symbol: ??0ItemFrameBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ItemFrameBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkAchievements@ItemFrameBlock@@AEBAXAEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI void _checkAchievements(class Player& player, class BlockPos const& currentPos) const;

    // NOLINTEND
};
