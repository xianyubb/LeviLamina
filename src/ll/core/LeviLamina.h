#pragma once

#include "ll/api/io/Logger.h"
#include "ll/api/mod/NativeMod.h"
namespace ll {

constexpr const std::string_view selfModName = "LeviLamina";

std::shared_ptr<mod::NativeMod> const& getSelfModIns();

io::Logger& getLogger();

void printWelcomeMsg();

} // namespace ll
