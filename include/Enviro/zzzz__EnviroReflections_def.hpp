#pragma once
// IWYU pragma private; include "Enviro/EnviroReflections.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeTimeSlicingMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroReflections)
namespace Enviro {
struct EnviroReflections_GlobalReflectionResolution;
}
namespace UnityEngine {
class Cubemap;
}
// Forward declare root types
namespace Enviro {
struct EnviroReflections_GlobalReflectionResolution;
}
namespace Enviro {
class EnviroReflections;
}
// Write type traits
MARK_VAL_T(::Enviro::EnviroReflections_GlobalReflectionResolution);
MARK_REF_T(::Enviro::EnviroReflections*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflections_GlobalReflectionResolution, "Enviro", "EnviroReflections/GlobalReflectionResolution");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroReflections*, "Enviro", "EnviroReflections");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroReflections/GlobalReflectionResolution
struct CORDL_TYPE EnviroReflections_GlobalReflectionResolution {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroReflections_GlobalReflectionResolution_Unwrapped
enum struct __EnviroReflections_GlobalReflectionResolution_Unwrapped : int32_t {
__E_R16 = static_cast<int32_t>(0x0),
__E_R32 = static_cast<int32_t>(0x1),
__E_R64 = static_cast<int32_t>(0x2),
__E_R128 = static_cast<int32_t>(0x3),
__E_R256 = static_cast<int32_t>(0x4),
__E_R512 = static_cast<int32_t>(0x5),
__E_R1024 = static_cast<int32_t>(0x6),
__E_R2048 = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroReflections_GlobalReflectionResolution_Unwrapped () const noexcept {
return static_cast<__EnviroReflections_GlobalReflectionResolution_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroReflections_GlobalReflectionResolution() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroReflections_GlobalReflectionResolution(int32_t  value__) noexcept;

/// @brief Field R1024 value: I32(6)
static ::Enviro::EnviroReflections_GlobalReflectionResolution const R1024;

/// @brief Field R128 value: I32(3)
static ::Enviro::EnviroReflections_GlobalReflectionResolution const R128;

/// @brief Field R16 value: I32(0)
static ::Enviro::EnviroReflections_GlobalReflectionResolution const R16;

/// @brief Field R2048 value: I32(7)
static ::Enviro::EnviroReflections_GlobalReflectionResolution const R2048;

/// @brief Field R256 value: I32(4)
static ::Enviro::EnviroReflections_GlobalReflectionResolution const R256;

/// @brief Field R32 value: I32(1)
static ::Enviro::EnviroReflections_GlobalReflectionResolution const R32;

/// @brief Field R512 value: I32(5)
static ::Enviro::EnviroReflections_GlobalReflectionResolution const R512;

/// @brief Field R64 value: I32(2)
static ::Enviro::EnviroReflections_GlobalReflectionResolution const R64;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18487};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflections_GlobalReflectionResolution, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflections_GlobalReflectionResolution) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroReflections::GlobalReflectionResolution, System.Object, UnityEngine.LayerMask, UnityEngine.Rendering.ReflectionProbeTimeSlicingMode
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroReflections
class CORDL_TYPE EnviroReflections : public ::System::Object {
public:
// Declarations
using GlobalReflectionResolution = ::Enviro::EnviroReflections_GlobalReflectionResolution;

/// @brief Field customRendering, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_customRendering, put=__cordl_internal_set_customRendering)) bool  customRendering;

/// @brief Field customRenderingTimeSlicing, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_customRenderingTimeSlicing, put=__cordl_internal_set_customRenderingTimeSlicing)) bool  customRenderingTimeSlicing;

/// @brief Field defaultSkyReflectionTex, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultSkyReflectionTex, put=__cordl_internal_set_defaultSkyReflectionTex)) ::UnityW<::UnityEngine::Cubemap>  defaultSkyReflectionTex;

/// @brief Field globalReflectionLayers, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalReflectionLayers, put=__cordl_internal_set_globalReflectionLayers)) ::UnityEngine::LayerMask  globalReflectionLayers;

/// @brief Field globalReflectionResolution, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalReflectionResolution, put=__cordl_internal_set_globalReflectionResolution)) ::Enviro::EnviroReflections_GlobalReflectionResolution  globalReflectionResolution;

/// @brief Field globalReflectionTimeSlicingMode, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalReflectionTimeSlicingMode, put=__cordl_internal_set_globalReflectionTimeSlicingMode)) ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode  globalReflectionTimeSlicingMode;

/// @brief Field globalReflections, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_globalReflections, put=__cordl_internal_set_globalReflections)) bool  globalReflections;

/// @brief Field globalReflectionsIntensity, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalReflectionsIntensity, put=__cordl_internal_set_globalReflectionsIntensity)) float_t  globalReflectionsIntensity;

/// @brief Field globalReflectionsPositionTreshold, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalReflectionsPositionTreshold, put=__cordl_internal_set_globalReflectionsPositionTreshold)) float_t  globalReflectionsPositionTreshold;

/// @brief Field globalReflectionsScale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalReflectionsScale, put=__cordl_internal_set_globalReflectionsScale)) float_t  globalReflectionsScale;

/// @brief Field globalReflectionsTimeTreshold, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalReflectionsTimeTreshold, put=__cordl_internal_set_globalReflectionsTimeTreshold)) float_t  globalReflectionsTimeTreshold;

/// @brief Field globalReflectionsUpdateOnGameTime, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_globalReflectionsUpdateOnGameTime, put=__cordl_internal_set_globalReflectionsUpdateOnGameTime)) bool  globalReflectionsUpdateOnGameTime;

/// @brief Field globalReflectionsUpdateOnPosition, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_globalReflectionsUpdateOnPosition, put=__cordl_internal_set_globalReflectionsUpdateOnPosition)) bool  globalReflectionsUpdateOnPosition;

/// @brief Field updateDefaultEnvironmentReflections, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateDefaultEnvironmentReflections, put=__cordl_internal_set_updateDefaultEnvironmentReflections)) bool  updateDefaultEnvironmentReflections;

static inline ::Enviro::EnviroReflections* New_ctor() ;

constexpr bool const& __cordl_internal_get_customRendering() const;

constexpr bool& __cordl_internal_get_customRendering() ;

constexpr bool const& __cordl_internal_get_customRenderingTimeSlicing() const;

constexpr bool& __cordl_internal_get_customRenderingTimeSlicing() ;

constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get_defaultSkyReflectionTex() const;

constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get_defaultSkyReflectionTex() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_globalReflectionLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_globalReflectionLayers() ;

constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution const& __cordl_internal_get_globalReflectionResolution() const;

constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution& __cordl_internal_get_globalReflectionResolution() ;

constexpr ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode const& __cordl_internal_get_globalReflectionTimeSlicingMode() const;

constexpr ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode& __cordl_internal_get_globalReflectionTimeSlicingMode() ;

constexpr bool const& __cordl_internal_get_globalReflections() const;

constexpr bool& __cordl_internal_get_globalReflections() ;

constexpr float_t const& __cordl_internal_get_globalReflectionsIntensity() const;

constexpr float_t& __cordl_internal_get_globalReflectionsIntensity() ;

constexpr float_t const& __cordl_internal_get_globalReflectionsPositionTreshold() const;

constexpr float_t& __cordl_internal_get_globalReflectionsPositionTreshold() ;

constexpr float_t const& __cordl_internal_get_globalReflectionsScale() const;

constexpr float_t& __cordl_internal_get_globalReflectionsScale() ;

constexpr float_t const& __cordl_internal_get_globalReflectionsTimeTreshold() const;

constexpr float_t& __cordl_internal_get_globalReflectionsTimeTreshold() ;

constexpr bool const& __cordl_internal_get_globalReflectionsUpdateOnGameTime() const;

constexpr bool& __cordl_internal_get_globalReflectionsUpdateOnGameTime() ;

constexpr bool const& __cordl_internal_get_globalReflectionsUpdateOnPosition() const;

constexpr bool& __cordl_internal_get_globalReflectionsUpdateOnPosition() ;

constexpr bool const& __cordl_internal_get_updateDefaultEnvironmentReflections() const;

constexpr bool& __cordl_internal_get_updateDefaultEnvironmentReflections() ;

constexpr void __cordl_internal_set_customRendering(bool  value) ;

constexpr void __cordl_internal_set_customRenderingTimeSlicing(bool  value) ;

constexpr void __cordl_internal_set_defaultSkyReflectionTex(::UnityW<::UnityEngine::Cubemap>  value) ;

constexpr void __cordl_internal_set_globalReflectionLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_globalReflectionResolution(::Enviro::EnviroReflections_GlobalReflectionResolution  value) ;

constexpr void __cordl_internal_set_globalReflectionTimeSlicingMode(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode  value) ;

constexpr void __cordl_internal_set_globalReflections(bool  value) ;

constexpr void __cordl_internal_set_globalReflectionsIntensity(float_t  value) ;

constexpr void __cordl_internal_set_globalReflectionsPositionTreshold(float_t  value) ;

constexpr void __cordl_internal_set_globalReflectionsScale(float_t  value) ;

constexpr void __cordl_internal_set_globalReflectionsTimeTreshold(float_t  value) ;

constexpr void __cordl_internal_set_globalReflectionsUpdateOnGameTime(bool  value) ;

constexpr void __cordl_internal_set_globalReflectionsUpdateOnPosition(bool  value) ;

constexpr void __cordl_internal_set_updateDefaultEnvironmentReflections(bool  value) ;

/// @brief Method .ctor, addr 0x1806199c0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroReflections() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflections", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroReflections(EnviroReflections && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroReflections", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroReflections(EnviroReflections const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18488};

/// @brief Field globalReflections, offset: 0x10, size: 0x1, def value: None
 bool  ___globalReflections;

/// @brief Field customRendering, offset: 0x11, size: 0x1, def value: None
 bool  ___customRendering;

/// @brief Field customRenderingTimeSlicing, offset: 0x12, size: 0x1, def value: None
 bool  ___customRenderingTimeSlicing;

/// @brief Field globalReflectionTimeSlicingMode, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode  ___globalReflectionTimeSlicingMode;

/// @brief Field globalReflectionsUpdateOnGameTime, offset: 0x18, size: 0x1, def value: None
 bool  ___globalReflectionsUpdateOnGameTime;

/// @brief Field globalReflectionsUpdateOnPosition, offset: 0x19, size: 0x1, def value: None
 bool  ___globalReflectionsUpdateOnPosition;

/// @brief Field globalReflectionsIntensity, offset: 0x1c, size: 0x4, def value: None
 float_t  ___globalReflectionsIntensity;

/// @brief Field globalReflectionsTimeTreshold, offset: 0x20, size: 0x4, def value: None
 float_t  ___globalReflectionsTimeTreshold;

/// @brief Field globalReflectionsPositionTreshold, offset: 0x24, size: 0x4, def value: None
 float_t  ___globalReflectionsPositionTreshold;

/// @brief Field globalReflectionsScale, offset: 0x28, size: 0x4, def value: None
 float_t  ___globalReflectionsScale;

/// @brief Field globalReflectionResolution, offset: 0x2c, size: 0x4, def value: None
 ::Enviro::EnviroReflections_GlobalReflectionResolution  ___globalReflectionResolution;

/// @brief Field globalReflectionLayers, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___globalReflectionLayers;

/// @brief Field updateDefaultEnvironmentReflections, offset: 0x34, size: 0x1, def value: None
 bool  ___updateDefaultEnvironmentReflections;

/// @brief Field defaultSkyReflectionTex, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Cubemap>  ___defaultSkyReflectionTex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroReflections, ___globalReflections) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___customRendering) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___customRenderingTimeSlicing) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___globalReflectionTimeSlicingMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___globalReflectionsUpdateOnGameTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___globalReflectionsUpdateOnPosition) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___globalReflectionsIntensity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___globalReflectionsTimeTreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___globalReflectionsPositionTreshold) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___globalReflectionsScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___globalReflectionResolution) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___globalReflectionLayers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___updateDefaultEnvironmentReflections) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroReflections, ___defaultSkyReflectionTex) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroReflections) == 0x40, "Size mismatch!");

} // namespace end def Enviro
