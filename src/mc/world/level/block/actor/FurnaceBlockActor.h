#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class FurnaceBlockActor {
public:
    // prevent constructor by default
    FurnaceBlockActor& operator=(FurnaceBlockActor const&);
    FurnaceBlockActor(FurnaceBlockActor const&);
    FurnaceBlockActor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@FurnaceBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // symbol: ?_onUpdatePacket@FurnaceBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?canPullOutItem@FurnaceBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const;

    // symbol: ?canPushInItem@FurnaceBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;

    // symbol: ?fixupOnLoad@FurnaceBlockActor@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void fixupOnLoad(class LevelChunk&);

    // symbol: ?getContainer@FurnaceBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@FurnaceBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@FurnaceBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@FurnaceBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@FurnaceBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?getName@FurnaceBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?load@FurnaceBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // symbol: ?onCustomTagLoadDone@FurnaceBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onCustomTagLoadDone(class BlockSource& region);

    // symbol: ?onMove@FurnaceBlockActor@@UEAAXXZ
    MCVAPI void onMove();

    // symbol: ?onNeighborChanged@FurnaceBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI void onNeighborChanged(class BlockSource& region, class BlockPos const& position);

    // symbol: ?save@FurnaceBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@FurnaceBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>);

    // symbol: ?setItem@FurnaceBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player& player);

    // symbol: ?stopOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player& player);

    // symbol: ?tick@FurnaceBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource& region);

    // symbol: ??1FurnaceBlockActor@@UEAA@XZ
    MCVAPI ~FurnaceBlockActor();

    // symbol: ??0FurnaceBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit FurnaceBlockActor(class BlockPos const& pos);

    // symbol: ?checkForAlternativeFuelAchievement@FurnaceBlockActor@@QEAAXAEAVBlockSource@@AEBVItemStack@@@Z
    MCAPI void checkForAlternativeFuelAchievement(class BlockSource& region, class ItemStack const& item);

    // symbol: ?checkForSmeltEverythingAchievement@FurnaceBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource& region);

    // symbol: ?getLitDuration@FurnaceBlockActor@@QEBAHXZ
    MCAPI int getLitDuration() const;

    // symbol: ?getLitTime@FurnaceBlockActor@@QEBAHXZ
    MCAPI int getLitTime() const;

    // symbol: ?getStoredXP@FurnaceBlockActor@@QEBAHXZ
    MCAPI int getStoredXP() const;

    // symbol: ?getTickCount@FurnaceBlockActor@@QEBAHXZ
    MCAPI int getTickCount() const;

    // symbol: ?isEmptiedByHopper@FurnaceBlockActor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool isEmptiedByHopper(class BlockSource& region);

    // symbol: ?onFurnaceBlockRemoved@FurnaceBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void onFurnaceBlockRemoved(class BlockSource& region);

    // symbol: ?setLitDuration@FurnaceBlockActor@@QEAAXH@Z
    MCAPI void setLitDuration(int value);

    // symbol: ?setLitTime@FurnaceBlockActor@@QEAAXH@Z
    MCAPI void setLitTime(int value);

    // symbol: ?setStoredXP@FurnaceBlockActor@@QEAAXH@Z
    MCAPI void setStoredXP(int value);

    // symbol: ?setTickCount@FurnaceBlockActor@@QEAAXH@Z
    MCAPI void setTickCount(int value);

    // symbol: ?storeXPRewardForRemovingWithHopper@FurnaceBlockActor@@QEAAXAEBVItemStackBase@@H@Z
    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const&, int);

    // symbol: ?withdrawStoredXPReward@FurnaceBlockActor@@QEAAHXZ
    MCAPI int withdrawStoredXPReward();

    // symbol: ?getAvailableFuelSetCount@FurnaceBlockActor@@SAHHAEBVItemStackBase@@@Z
    MCAPI static int getAvailableFuelSetCount(int, class ItemStackBase const&);

    // symbol: ?getBurnDuration@FurnaceBlockActor@@SAMAEBVItemStackBase@@M@Z
    MCAPI static float getBurnDuration(class ItemStackBase const&, float);

    // symbol: ?getItemBurnDuration@FurnaceBlockActor@@SAMAEBVItem@@M@Z
    MCAPI static float getItemBurnDuration(class Item const&, float);

    // symbol: ?getXPRewardFromSmeltingItems@FurnaceBlockActor@@SAHAEBVItemStackBase@@H@Z
    MCAPI static int getXPRewardFromSmeltingItems(class ItemStackBase const&, int);

    // symbol: ?isItemAllowedInFuelSlot@FurnaceBlockActor@@SA_NHAEBVItemStackBase@@H@Z
    MCAPI static bool isItemAllowedInFuelSlot(int, class ItemStackBase const&, int);

    // symbol: ?BURN_INTERVAL@FurnaceBlockActor@@2HB
    MCAPI static int const BURN_INTERVAL;

    // symbol: ?DEFAULT_SMELTING_TIME@FurnaceBlockActor@@2MB
    MCAPI static float const DEFAULT_SMELTING_TIME;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0FurnaceBlockActor@@IEAA@W4BlockActorType@@AEBVBlockPos@@AEBVHashedString@@W4LevelSoundEvent@Legacy@Puv@@W4ContainerType@@HAEBVBlock@@5@Z
    MCAPI FurnaceBlockActor(
        ::BlockActorType               blockActorType,
        class BlockPos const&          pos,
        class HashedString const&      recipeTag,
        ::Puv::Legacy::LevelSoundEvent smeltSound,
        ::ContainerType                containerType,
        int                            burnInterval,
        class Block const&             unlitFurnace,
        class Block const&             litFurnace
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_refreshFurnaceBlockLitState@FurnaceBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource& region);

    // symbol: ?burn@FurnaceBlockActor@@AEAAXAEBVRecipes@@@Z
    MCAPI void burn(class Recipes const& recipes);

    // symbol: ?canBurn@FurnaceBlockActor@@AEAA_NAEBVRecipes@@@Z
    MCAPI bool canBurn(class Recipes const& recipes);

    // symbol: ?_getXPRewardMultiplier@FurnaceBlockActor@@CAMAEBVItemStackBase@@@Z
    MCAPI static float _getXPRewardMultiplier(class ItemStackBase const&);

    // symbol: ?_roundXPReward@FurnaceBlockActor@@CAHM@Z
    MCAPI static int _roundXPReward(float);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?BURN_DURATION_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BURN_DURATION_KEY;

    // symbol: ?BURN_TIME_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BURN_TIME_KEY;

    // symbol: ?COOK_TIME_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const COOK_TIME_KEY;

    // symbol: ?CUSTOM_NAME_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const CUSTOM_NAME_KEY;

    // symbol: ?ITEMS_LIST_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ITEMS_LIST_KEY;

    // symbol: ?LAST_FUEL_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const LAST_FUEL_KEY;

    // symbol: ?SLOT_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SLOT_KEY;

    // symbol:
    // ?STORED_XP_DEPRECATED_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORED_XP_DEPRECATED_KEY;

    // symbol: ?STORED_XP_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORED_XP_KEY;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $BURN_DURATION_KEY() { return BURN_DURATION_KEY; }

    static auto& $BURN_TIME_KEY() { return BURN_TIME_KEY; }

    static auto& $COOK_TIME_KEY() { return COOK_TIME_KEY; }

    static auto& $CUSTOM_NAME_KEY() { return CUSTOM_NAME_KEY; }

    static auto& $ITEMS_LIST_KEY() { return ITEMS_LIST_KEY; }

    static auto& $LAST_FUEL_KEY() { return LAST_FUEL_KEY; }

    static auto& $SLOT_KEY() { return SLOT_KEY; }

    static auto& $STORED_XP_DEPRECATED_KEY() { return STORED_XP_DEPRECATED_KEY; }

    static auto& $STORED_XP_KEY() { return STORED_XP_KEY; }

    // NOLINTEND
};
