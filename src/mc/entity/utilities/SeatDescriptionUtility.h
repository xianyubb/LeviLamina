#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SeatDescriptionUtility {
public:
    // prevent constructor by default
    SeatDescriptionUtility& operator=(SeatDescriptionUtility const&);
    SeatDescriptionUtility(SeatDescriptionUtility const&);
    SeatDescriptionUtility();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getSeatDescriptionOfPassenger@SeatDescriptionUtility@@SAAEBUSeatDescription@@AEBV?$vector@USeatDescription@@V?$allocator@USeatDescription@@@std@@@std@@HH@Z
    MCAPI static struct SeatDescription const&
    getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const&, int, int);

    // symbol:
    // ?getSeatDescriptionOfPassenger@SeatDescriptionUtility@@SAAEBUSeatDescription@@AEBV?$vector@USeatDescription@@V?$allocator@USeatDescription@@@std@@@std@@AEBUVehicleComponent@@AEBVStrictEntityContext@@@Z
    MCAPI static struct SeatDescription const&
    getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const&, struct VehicleComponent const&, class StrictEntityContext const&);

    // symbol: ?getSeatRidingHeightOffset@SeatDescriptionUtility@@SAMMMM@Z
    MCAPI static float getSeatRidingHeightOffset(float, float, float);

    // symbol:
    // ?setValuesToSynchedActorData@SeatDescriptionUtility@@SAXAEAUActorDataSeatOffsetComponent@@AEAUActorDataDirtyFlagsComponent@@VSynchedActorDataWriter@@AEBVVec3@@AEBUSeatDescription@@M@Z
    MCAPI static void setValuesToSynchedActorData(
        struct ActorDataSeatOffsetComponent&,
        struct ActorDataDirtyFlagsComponent&,
        class SynchedActorDataWriter,
        class Vec3 const&,
        struct SeatDescription const&,
        float
    );

    // NOLINTEND
};
