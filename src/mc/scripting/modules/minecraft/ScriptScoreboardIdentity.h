#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
class Level;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
struct ScoreboardId;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardIdentity {
public:
    // prevent constructor by default
    ScriptScoreboardIdentity& operator=(ScriptScoreboardIdentity const&);
    ScriptScoreboardIdentity(ScriptScoreboardIdentity const&);
    ScriptScoreboardIdentity();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptScoreboardIdentity@ScriptModuleMinecraft@@QEAA@AEBVIdentityDefinition@@AEBVLevel@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptScoreboardIdentity(
        class IdentityDefinition const&           identity,
        class Level const&                        level,
        class Scripting::WeakLifetimeScope const& scope
    );

    // symbol:
    // ?getActor@ScriptScoreboardIdentity@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getActor() const;

    // symbol:
    // ?getName@ScriptScoreboardIdentity@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getName() const;

    // symbol: ?getScoreboardId@ScriptScoreboardIdentity@ScriptModuleMinecraft@@QEBAAEBUScoreboardId@@XZ
    MCAPI struct ScoreboardId const& getScoreboardId() const;

    // symbol: ?isValid@ScriptScoreboardIdentity@ScriptModuleMinecraft@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??1ScriptScoreboardIdentity@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptScoreboardIdentity();

    // symbol:
    // ?bind@ScriptScoreboardIdentity@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboardIdentity> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
