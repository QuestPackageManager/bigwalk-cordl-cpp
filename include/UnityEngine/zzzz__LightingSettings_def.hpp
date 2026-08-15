#pragma once
// IWYU pragma private; include "UnityEngine/LightingSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LightingSettings)
// Forward declare root types
namespace UnityEngine {
class LightingSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::LightingSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LightingSettings*, "UnityEngine", "LightingSettings");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightingSettings
class CORDL_TYPE LightingSettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method LightingSettingsDontStripMe, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void LightingSettingsDontStripMe() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightingSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightingSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightingSettings(LightingSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightingSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightingSettings(LightingSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10475};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LightingSettings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
