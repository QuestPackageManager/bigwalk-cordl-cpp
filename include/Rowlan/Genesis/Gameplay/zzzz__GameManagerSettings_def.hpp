#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Gameplay/GameManagerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(GameManagerSettings)
// Forward declare root types
namespace Rowlan::Genesis::Gameplay {
class GameManagerSettings;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::Gameplay::GameManagerSettings*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Gameplay::GameManagerSettings*, "Rowlan.Genesis.Gameplay", "GameManagerSettings");
// Dependencies UnityEngine.ScriptableObject
namespace Rowlan::Genesis::Gameplay {
// Is value type: false
// CS Name: Rowlan.Genesis.Gameplay.GameManagerSettings
class CORDL_TYPE GameManagerSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::Rowlan::Genesis::Gameplay::GameManagerSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameManagerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameManagerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameManagerSettings(GameManagerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameManagerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameManagerSettings(GameManagerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20422};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::Genesis::Gameplay::GameManagerSettings) == 0x18, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Gameplay
