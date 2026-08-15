#pragma once
// IWYU pragma private; include "Enviro/EnviroAuroraQualitySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroAuroraQualitySettings)
// Forward declare root types
namespace Enviro {
class EnviroAuroraQualitySettings;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroAuroraQualitySettings*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroAuroraQualitySettings*, "Enviro", "EnviroAuroraQualitySettings");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroAuroraQualitySettings
class CORDL_TYPE EnviroAuroraQualitySettings : public ::System::Object {
public:
// Declarations
/// @brief Field aurora, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_aurora, put=__cordl_internal_set_aurora)) bool  aurora;

/// @brief Field steps, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_steps, put=__cordl_internal_set_steps)) int32_t  steps;

static inline ::Enviro::EnviroAuroraQualitySettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_aurora() const;

constexpr bool& __cordl_internal_get_aurora() ;

constexpr int32_t const& __cordl_internal_get_steps() const;

constexpr int32_t& __cordl_internal_get_steps() ;

constexpr void __cordl_internal_set_aurora(bool  value) ;

constexpr void __cordl_internal_set_steps(int32_t  value) ;

/// @brief Method .ctor, addr 0x18060c290, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroAuroraQualitySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroAuroraQualitySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroAuroraQualitySettings(EnviroAuroraQualitySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroAuroraQualitySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroAuroraQualitySettings(EnviroAuroraQualitySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18475};

/// @brief Field aurora, offset: 0x10, size: 0x1, def value: None
 bool  ___aurora;

/// @brief Field steps, offset: 0x14, size: 0x4, def value: None
 int32_t  ___steps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroAuroraQualitySettings, ___aurora) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAuroraQualitySettings, ___steps) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroAuroraQualitySettings) == 0x18, "Size mismatch!");

} // namespace end def Enviro
