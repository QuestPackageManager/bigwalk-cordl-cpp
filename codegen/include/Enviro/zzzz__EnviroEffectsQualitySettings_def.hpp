#pragma once
// IWYU pragma private; include "Enviro/EnviroEffectsQualitySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroEffectsQualitySettings)
// Forward declare root types
namespace Enviro {
class EnviroEffectsQualitySettings;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroEffectsQualitySettings*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEffectsQualitySettings*, "Enviro", "EnviroEffectsQualitySettings");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroEffectsQualitySettings
class CORDL_TYPE EnviroEffectsQualitySettings : public ::System::Object {
public:
// Declarations
/// @brief Field particeEmissionRateModifier, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_particeEmissionRateModifier, put=__cordl_internal_set_particeEmissionRateModifier)) float_t  particeEmissionRateModifier;

static inline ::Enviro::EnviroEffectsQualitySettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_particeEmissionRateModifier() const;

constexpr float_t& __cordl_internal_get_particeEmissionRateModifier() ;

constexpr void __cordl_internal_set_particeEmissionRateModifier(float_t  value) ;

/// @brief Method .ctor, addr 0x1803eeeb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroEffectsQualitySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffectsQualitySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroEffectsQualitySettings(EnviroEffectsQualitySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffectsQualitySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroEffectsQualitySettings(EnviroEffectsQualitySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18476};

/// @brief Field particeEmissionRateModifier, offset: 0x10, size: 0x4, def value: None
 float_t  ___particeEmissionRateModifier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEffectsQualitySettings, ___particeEmissionRateModifier) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEffectsQualitySettings) == 0x18, "Size mismatch!");

} // namespace end def Enviro
