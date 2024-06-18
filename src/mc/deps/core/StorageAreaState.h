#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/LevelStorageState.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

namespace Core {

class StorageAreaState {
public:
    // prevent constructor by default
    StorageAreaState& operator=(StorageAreaState const&);
    StorageAreaState(StorageAreaState const&);
    StorageAreaState();

public:
    // NOLINTBEGIN
    // symbol: ?checkUserStorage@StorageAreaState@Core@@QEAAXAEAV?$weak_ptr@VFileStorageArea@Core@@@std@@_K11@Z
    MCAPI void checkUserStorage(std::weak_ptr<class Core::FileStorageArea>&, uint64, uint64, uint64);

    // symbol: ?isCriticalDiskError@StorageAreaState@Core@@QEBA_NXZ
    MCAPI bool isCriticalDiskError() const;

    // symbol: ?isOutOfDiskSpaceError@StorageAreaState@Core@@QEBA_NXZ
    MCAPI bool isOutOfDiskSpaceError() const;

    // symbol: ?notifyCriticalDiskError@StorageAreaState@Core@@QEAAXAEBW4LevelStorageState@2@@Z
    MCAPI void notifyCriticalDiskError(::Core::LevelStorageState const& errorCode);

    // symbol: ??1StorageAreaState@Core@@QEAA@XZ
    MCAPI ~StorageAreaState();

    // NOLINTEND
};

}; // namespace Core
