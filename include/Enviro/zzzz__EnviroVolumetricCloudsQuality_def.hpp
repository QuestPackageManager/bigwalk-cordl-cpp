#pragma once
// IWYU pragma private; include "Enviro/EnviroVolumetricCloudsQuality.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroVolumetricCloudsQuality)
// Forward declare root types
namespace Enviro {
class EnviroVolumetricCloudsQuality;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroVolumetricCloudsQuality*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroVolumetricCloudsQuality*, "Enviro", "EnviroVolumetricCloudsQuality");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroVolumetricCloudsQuality
class CORDL_TYPE EnviroVolumetricCloudsQuality : public ::System::Object {
public:
// Declarations
/// @brief Field blueNoiseIntensity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_blueNoiseIntensity, put=__cordl_internal_set_blueNoiseIntensity)) float_t  blueNoiseIntensity;

/// @brief Field downsampling, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_downsampling, put=__cordl_internal_set_downsampling)) int32_t  downsampling;

/// @brief Field lightningSupport, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_lightningSupport, put=__cordl_internal_set_lightningSupport)) bool  lightningSupport;

/// @brief Field lodDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lodDistance, put=__cordl_internal_set_lodDistance)) float_t  lodDistance;

/// @brief Field reprojectionBlendTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_reprojectionBlendTime, put=__cordl_internal_set_reprojectionBlendTime)) float_t  reprojectionBlendTime;

/// @brief Field stepsLayer1, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_stepsLayer1, put=__cordl_internal_set_stepsLayer1)) int32_t  stepsLayer1;

/// @brief Field stepsLayer2, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_stepsLayer2, put=__cordl_internal_set_stepsLayer2)) int32_t  stepsLayer2;

/// @brief Field variableBottomNoise, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_variableBottomNoise, put=__cordl_internal_set_variableBottomNoise)) bool  variableBottomNoise;

/// @brief Field volumetricClouds, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_volumetricClouds, put=__cordl_internal_set_volumetricClouds)) bool  volumetricClouds;

static inline ::Enviro::EnviroVolumetricCloudsQuality* New_ctor() ;

constexpr float_t const& __cordl_internal_get_blueNoiseIntensity() const;

constexpr float_t& __cordl_internal_get_blueNoiseIntensity() ;

constexpr int32_t const& __cordl_internal_get_downsampling() const;

constexpr int32_t& __cordl_internal_get_downsampling() ;

constexpr bool const& __cordl_internal_get_lightningSupport() const;

constexpr bool& __cordl_internal_get_lightningSupport() ;

constexpr float_t const& __cordl_internal_get_lodDistance() const;

constexpr float_t& __cordl_internal_get_lodDistance() ;

constexpr float_t const& __cordl_internal_get_reprojectionBlendTime() const;

constexpr float_t& __cordl_internal_get_reprojectionBlendTime() ;

constexpr int32_t const& __cordl_internal_get_stepsLayer1() const;

constexpr int32_t& __cordl_internal_get_stepsLayer1() ;

constexpr int32_t const& __cordl_internal_get_stepsLayer2() const;

constexpr int32_t& __cordl_internal_get_stepsLayer2() ;

constexpr bool const& __cordl_internal_get_variableBottomNoise() const;

constexpr bool& __cordl_internal_get_variableBottomNoise() ;

constexpr bool const& __cordl_internal_get_volumetricClouds() const;

constexpr bool& __cordl_internal_get_volumetricClouds() ;

constexpr void __cordl_internal_set_blueNoiseIntensity(float_t  value) ;

constexpr void __cordl_internal_set_downsampling(int32_t  value) ;

constexpr void __cordl_internal_set_lightningSupport(bool  value) ;

constexpr void __cordl_internal_set_lodDistance(float_t  value) ;

constexpr void __cordl_internal_set_reprojectionBlendTime(float_t  value) ;

constexpr void __cordl_internal_set_stepsLayer1(int32_t  value) ;

constexpr void __cordl_internal_set_stepsLayer2(int32_t  value) ;

constexpr void __cordl_internal_set_variableBottomNoise(bool  value) ;

constexpr void __cordl_internal_set_volumetricClouds(bool  value) ;

/// @brief Method .ctor, addr 0x180625e30, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroVolumetricCloudsQuality() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroVolumetricCloudsQuality", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroVolumetricCloudsQuality(EnviroVolumetricCloudsQuality && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroVolumetricCloudsQuality", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroVolumetricCloudsQuality(EnviroVolumetricCloudsQuality const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18501};

/// @brief Field volumetricClouds, offset: 0x10, size: 0x1, def value: None
 bool  ___volumetricClouds;

/// @brief Field lightningSupport, offset: 0x11, size: 0x1, def value: None
 bool  ___lightningSupport;

/// @brief Field variableBottomNoise, offset: 0x12, size: 0x1, def value: None
 bool  ___variableBottomNoise;

/// @brief Field downsampling, offset: 0x14, size: 0x4, def value: None
 int32_t  ___downsampling;

/// @brief Field stepsLayer1, offset: 0x18, size: 0x4, def value: None
 int32_t  ___stepsLayer1;

/// @brief Field stepsLayer2, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___stepsLayer2;

/// @brief Field blueNoiseIntensity, offset: 0x20, size: 0x4, def value: None
 float_t  ___blueNoiseIntensity;

/// @brief Field reprojectionBlendTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___reprojectionBlendTime;

/// @brief Field lodDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___lodDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroVolumetricCloudsQuality, ___volumetricClouds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsQuality, ___lightningSupport) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsQuality, ___variableBottomNoise) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsQuality, ___downsampling) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsQuality, ___stepsLayer1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsQuality, ___stepsLayer2) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsQuality, ___blueNoiseIntensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsQuality, ___reprojectionBlendTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsQuality, ___lodDistance) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroVolumetricCloudsQuality) == 0x30, "Size mismatch!");

} // namespace end def Enviro
