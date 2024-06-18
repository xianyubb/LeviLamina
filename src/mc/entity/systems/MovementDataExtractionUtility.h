#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace MovementDataExtractionUtility { struct Extractors; }
namespace MovementDataExtractionUtility { struct MovementSnapshotComponent; }
// clang-format on

namespace MovementDataExtractionUtility {
// NOLINTBEGIN
// symbol: ?extractPackedSnapshot@MovementDataExtractionUtility@@YAXAEAVEntityRegistry@@0AEBVStrictEntityContext@@1_N@Z
MCAPI void extractPackedSnapshot(
    class EntityRegistry&,
    class EntityRegistry&,
    class StrictEntityContext const&,
    class StrictEntityContext const&,
    bool
);

// symbol: ?getOrCreateSnapshotExtractors@MovementDataExtractionUtility@@YAAEBUExtractors@1@XZ
MCAPI struct MovementDataExtractionUtility::Extractors const& getOrCreateSnapshotExtractors();
// NOLINTEND

}; // namespace MovementDataExtractionUtility
