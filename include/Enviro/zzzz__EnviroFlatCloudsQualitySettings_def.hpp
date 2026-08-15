#pragma once
// IWYU pragma private; include "Enviro/EnviroFlatCloudsQualitySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroFlatCloudsQualitySettings)
// Forward declare root types
namespace Enviro {
class EnviroFlatCloudsQualitySettings;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroFlatCloudsQualitySettings*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroFlatCloudsQualitySettings*, "Enviro", "EnviroFlatCloudsQualitySettings");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroFlatCloudsQualitySettings
class CORDL_TYPE EnviroFlatCloudsQualitySettings : public ::System::Object {
public:
// Declarations
/// @brief Field cirrusClouds, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_cirrusClouds, put=__cordl_internal_set_cirrusClouds)) bool  cirrusClouds;

/// @brief Field flatClouds, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_flatClouds, put=__cordl_internal_set_flatClouds)) bool  flatClouds;

/// @brief Field flatCloudsShadowSteps, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsShadowSteps, put=__cordl_internal_set_flatCloudsShadowSteps)) int32_t  flatCloudsShadowSteps;

static inline ::Enviro::EnviroFlatCloudsQualitySettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_cirrusClouds() const;

constexpr bool& __cordl_internal_get_cirrusClouds() ;

constexpr bool const& __cordl_internal_get_flatClouds() const;

constexpr bool& __cordl_internal_get_flatClouds() ;

constexpr int32_t const& __cordl_internal_get_flatCloudsShadowSteps() const;

constexpr int32_t& __cordl_internal_get_flatCloudsShadowSteps() ;

constexpr void __cordl_internal_set_cirrusClouds(bool  value) ;

constexpr void __cordl_internal_set_flatClouds(bool  value) ;

constexpr void __cordl_internal_set_flatCloudsShadowSteps(int32_t  value) ;

/// @brief Method .ctor, addr 0x18060eb70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroFlatCloudsQualitySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroFlatCloudsQualitySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroFlatCloudsQualitySettings(EnviroFlatCloudsQualitySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroFlatCloudsQualitySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroFlatCloudsQualitySettings(EnviroFlatCloudsQualitySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18474};

/// @brief Field cirrusClouds, offset: 0x10, size: 0x1, def value: None
 bool  ___cirrusClouds;

/// @brief Field flatClouds, offset: 0x11, size: 0x1, def value: None
 bool  ___flatClouds;

/// @brief Field flatCloudsShadowSteps, offset: 0x14, size: 0x4, def value: None
 int32_t  ___flatCloudsShadowSteps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroFlatCloudsQualitySettings, ___cirrusClouds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatCloudsQualitySettings, ___flatClouds) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatCloudsQualitySettings, ___flatCloudsShadowSteps) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroFlatCloudsQualitySettings) == 0x18, "Size mismatch!");

} // namespace end def Enviro
