#pragma once
// IWYU pragma private; include "UnityEngine/Light.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__LightShape_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Light)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct LightEvent;
}
namespace UnityEngine::Rendering {
struct LightShadowResolution;
}
namespace UnityEngine::Rendering {
struct ShadowMapPass;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LightBakingOutput;
}
namespace UnityEngine {
struct LightShadows;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Light;
}
// Write type traits
MARK_REF_T(::UnityEngine::Light*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Light*, "UnityEngine", "Light");
// Dependencies UnityEngine.Behaviour, UnityEngine.LightShape
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Light
class CORDL_TYPE Light : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_ShadowResolution)) ::UnityEngine::Rendering::LightShadowResolution  ShadowResolution;

/// @brief Field <shape>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__shape_k__BackingField, put=__cordl_internal_set__shape_k__BackingField)) ::UnityEngine::LightShape  _shape_k__BackingField;

 __declspec(property(get=get_areaSize)) ::UnityEngine::Vector2  areaSize;

 __declspec(property(get=get_bakingOutput)) ::UnityEngine::LightBakingOutput  bakingOutput;

 __declspec(property(get=get_bounceIntensity)) float_t  bounceIntensity;

 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

 __declspec(property(get=get_colorTemperature)) float_t  colorTemperature;

 __declspec(property(get=get_cookie)) ::UnityW<::UnityEngine::Texture>  cookie;

 __declspec(property(get=get_cookieSize2D)) ::UnityEngine::Vector2  cookieSize2D;

 __declspec(property(put=set_cullingMask)) int32_t  cullingMask;

 __declspec(property(get=get_dilatedRange)) float_t  dilatedRange;

 __declspec(property(get=get_enableSpotReflector)) bool  enableSpotReflector;

 __declspec(property(get=get_innerSpotAngle)) float_t  innerSpotAngle;

 __declspec(property(get=get_intensity, put=set_intensity)) float_t  intensity;

 __declspec(property(get=get_luxAtDistance)) float_t  luxAtDistance;

/// @brief Field m_BakedIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BakedIndex, put=__cordl_internal_set_m_BakedIndex)) int32_t  m_BakedIndex;

 __declspec(property(get=get_range)) float_t  range;

 __declspec(property(put=set_renderingLayerMask)) int32_t  renderingLayerMask;

 __declspec(property(get=get_shadowBias)) float_t  shadowBias;

 __declspec(property(get=get_shadowNearPlane)) float_t  shadowNearPlane;

 __declspec(property(get=get_shadowNormalBias)) float_t  shadowNormalBias;

 __declspec(property(get=get_shadowResolution)) ::UnityEngine::Rendering::LightShadowResolution  shadowResolution;

 __declspec(property(get=get_shadowStrength, put=set_shadowStrength)) float_t  shadowStrength;

 __declspec(property(get=get_shadows, put=set_shadows)) ::UnityEngine::LightShadows  shadows;

 __declspec(property(get=get_spotAngle)) float_t  spotAngle;

 __declspec(property(get=get_type, put=set_type)) ::UnityEngine::LightType  type;

 __declspec(property(get=get_useColorTemperature)) bool  useColorTemperature;

/// @brief Method AddCommandBuffer, addr 0x182251360, size 0xa0, virtual false, abstract: false, final false
inline void AddCommandBuffer(::UnityEngine::Rendering::LightEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method AddCommandBuffer, addr 0x1822512b0, size 0xb0, virtual false, abstract: false, final false
inline void AddCommandBuffer(::UnityEngine::Rendering::LightEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::ShadowMapPass  shadowPassMask) ;

/// @brief Method AddCommandBufferInternal, addr 0x182251240, size 0x70, virtual false, abstract: false, final false
inline void AddCommandBufferInternal(::UnityEngine::Rendering::LightEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::ShadowMapPass  shadowPassMask) ;

/// @brief Method AddCommandBufferInternal_Injected, addr 0x182251230, size 0x10, virtual false, abstract: false, final false
static inline void AddCommandBufferInternal_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::LightEvent  evt, ::System::IntPtr  buffer, ::UnityEngine::Rendering::ShadowMapPass  shadowPassMask) ;

/// @brief Method LogWarningOnlyBuiltIn, addr 0x182251400, size 0x30, virtual false, abstract: false, final false
static inline void LogWarningOnlyBuiltIn(::StringW  propertyName) ;

static inline ::UnityEngine::Light* New_ctor() ;

/// @brief Method RemoveCommandBuffer, addr 0x1822514a0, size 0xa0, virtual false, abstract: false, final false
inline void RemoveCommandBuffer(::UnityEngine::Rendering::LightEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method RemoveCommandBufferInternal, addr 0x182251440, size 0x60, virtual false, abstract: false, final false
inline void RemoveCommandBufferInternal(::UnityEngine::Rendering::LightEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method RemoveCommandBufferInternal_Injected, addr 0x182251430, size 0x10, virtual false, abstract: false, final false
static inline void RemoveCommandBufferInternal_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::LightEvent  evt, ::System::IntPtr  buffer) ;

constexpr ::UnityEngine::LightShape const& __cordl_internal_get__shape_k__BackingField() const;

constexpr ::UnityEngine::LightShape& __cordl_internal_get__shape_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_BakedIndex() const;

constexpr int32_t& __cordl_internal_get_m_BakedIndex() ;

constexpr void __cordl_internal_set__shape_k__BackingField(::UnityEngine::LightShape  value) ;

constexpr void __cordl_internal_set_m_BakedIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ShadowResolution, addr 0x182251550, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LightShadowResolution get_ShadowResolution() ;

/// @brief Method get_ShadowResolution_Injected, addr 0x182251540, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::LightShadowResolution get_ShadowResolution_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_areaSize, addr 0x182251590, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_areaSize() ;

/// @brief Method get_areaSize_Injected, addr 0x182251580, size 0x10, virtual false, abstract: false, final false
static inline void get_areaSize_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_bakingOutput, addr 0x1822515e0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::LightBakingOutput get_bakingOutput() ;

/// @brief Method get_bakingOutput_Injected, addr 0x1822515d0, size 0x10, virtual false, abstract: false, final false
static inline void get_bakingOutput_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::LightBakingOutput>  ret) ;

/// @brief Method get_bounceIntensity, addr 0x182251630, size 0x30, virtual false, abstract: false, final false
inline float_t get_bounceIntensity() ;

/// @brief Method get_bounceIntensity_Injected, addr 0x182251620, size 0x10, virtual false, abstract: false, final false
static inline float_t get_bounceIntensity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_color, addr 0x1822516b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_colorTemperature, addr 0x182251670, size 0x30, virtual false, abstract: false, final false
inline float_t get_colorTemperature() ;

/// @brief Method get_colorTemperature_Injected, addr 0x182251660, size 0x10, virtual false, abstract: false, final false
static inline float_t get_colorTemperature_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_color_Injected, addr 0x1822516a0, size 0x10, virtual false, abstract: false, final false
static inline void get_color_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_cookie, addr 0x182251750, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_cookie() ;

/// @brief Method get_cookieSize2D, addr 0x182251700, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_cookieSize2D() ;

/// @brief Method get_cookieSize2D_Injected, addr 0x1822516f0, size 0x10, virtual false, abstract: false, final false
static inline void get_cookieSize2D_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_cookie_Injected, addr 0x182251740, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_cookie_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_dilatedRange, addr 0x1822517a0, size 0x30, virtual false, abstract: false, final false
inline float_t get_dilatedRange() ;

/// @brief Method get_dilatedRange_Injected, addr 0x182251790, size 0x10, virtual false, abstract: false, final false
static inline float_t get_dilatedRange_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enableSpotReflector, addr 0x1822517e0, size 0x30, virtual false, abstract: false, final false
inline bool get_enableSpotReflector() ;

/// @brief Method get_enableSpotReflector_Injected, addr 0x1822517d0, size 0x10, virtual false, abstract: false, final false
static inline bool get_enableSpotReflector_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_innerSpotAngle, addr 0x182251820, size 0x30, virtual false, abstract: false, final false
inline float_t get_innerSpotAngle() ;

/// @brief Method get_innerSpotAngle_Injected, addr 0x182251810, size 0x10, virtual false, abstract: false, final false
static inline float_t get_innerSpotAngle_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_intensity, addr 0x182251860, size 0x30, virtual false, abstract: false, final false
inline float_t get_intensity() ;

/// @brief Method get_intensity_Injected, addr 0x182251850, size 0x10, virtual false, abstract: false, final false
static inline float_t get_intensity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_luxAtDistance, addr 0x1822518a0, size 0x30, virtual false, abstract: false, final false
inline float_t get_luxAtDistance() ;

/// @brief Method get_luxAtDistance_Injected, addr 0x182251890, size 0x10, virtual false, abstract: false, final false
static inline float_t get_luxAtDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_range, addr 0x1822518e0, size 0x30, virtual false, abstract: false, final false
inline float_t get_range() ;

/// @brief Method get_range_Injected, addr 0x1822518d0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_range_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowBias, addr 0x182251920, size 0x30, virtual false, abstract: false, final false
inline float_t get_shadowBias() ;

/// @brief Method get_shadowBias_Injected, addr 0x182251910, size 0x10, virtual false, abstract: false, final false
static inline float_t get_shadowBias_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowNearPlane, addr 0x182251960, size 0x30, virtual false, abstract: false, final false
inline float_t get_shadowNearPlane() ;

/// @brief Method get_shadowNearPlane_Injected, addr 0x182251950, size 0x10, virtual false, abstract: false, final false
static inline float_t get_shadowNearPlane_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowNormalBias, addr 0x1822519a0, size 0x30, virtual false, abstract: false, final false
inline float_t get_shadowNormalBias() ;

/// @brief Method get_shadowNormalBias_Injected, addr 0x182251990, size 0x10, virtual false, abstract: false, final false
static inline float_t get_shadowNormalBias_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowResolution, addr 0x182251550, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LightShadowResolution get_shadowResolution() ;

/// @brief Method get_shadowStrength, addr 0x1822519e0, size 0x30, virtual false, abstract: false, final false
inline float_t get_shadowStrength() ;

/// @brief Method get_shadowStrength_Injected, addr 0x1822519d0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_shadowStrength_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadows, addr 0x182251a20, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::LightShadows get_shadows() ;

/// @brief Method get_shadows_Injected, addr 0x182251a10, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::LightShadows get_shadows_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_spotAngle, addr 0x182251a60, size 0x30, virtual false, abstract: false, final false
inline float_t get_spotAngle() ;

/// @brief Method get_spotAngle_Injected, addr 0x182251a50, size 0x10, virtual false, abstract: false, final false
static inline float_t get_spotAngle_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_type, addr 0x182251aa0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::LightType get_type() ;

/// @brief Method get_type_Injected, addr 0x182251a90, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::LightType get_type_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useColorTemperature, addr 0x182251ae0, size 0x30, virtual false, abstract: false, final false
inline bool get_useColorTemperature() ;

/// @brief Method get_useColorTemperature_Injected, addr 0x182251ad0, size 0x10, virtual false, abstract: false, final false
static inline bool get_useColorTemperature_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_color, addr 0x182251b20, size 0x30, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0x182251b10, size 0x10, virtual false, abstract: false, final false
static inline void set_color_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_cullingMask, addr 0x182251b60, size 0x30, virtual false, abstract: false, final false
inline void set_cullingMask(int32_t  value) ;

/// @brief Method set_cullingMask_Injected, addr 0x182251b50, size 0x10, virtual false, abstract: false, final false
static inline void set_cullingMask_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_intensity, addr 0x182251ba0, size 0x40, virtual false, abstract: false, final false
inline void set_intensity(float_t  value) ;

/// @brief Method set_intensity_Injected, addr 0x182251b90, size 0x10, virtual false, abstract: false, final false
static inline void set_intensity_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_renderingLayerMask, addr 0x182251bf0, size 0x30, virtual false, abstract: false, final false
inline void set_renderingLayerMask(int32_t  value) ;

/// @brief Method set_renderingLayerMask_Injected, addr 0x182251be0, size 0x10, virtual false, abstract: false, final false
static inline void set_renderingLayerMask_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_shadowStrength, addr 0x182251c30, size 0x40, virtual false, abstract: false, final false
inline void set_shadowStrength(float_t  value) ;

/// @brief Method set_shadowStrength_Injected, addr 0x182251c20, size 0x10, virtual false, abstract: false, final false
static inline void set_shadowStrength_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_shadows, addr 0x182251c80, size 0x30, virtual false, abstract: false, final false
inline void set_shadows(::UnityEngine::LightShadows  value) ;

/// @brief Method set_shadows_Injected, addr 0x182251c70, size 0x10, virtual false, abstract: false, final false
static inline void set_shadows_Injected(::System::IntPtr  _unity_self, ::UnityEngine::LightShadows  value) ;

/// @brief Method set_type, addr 0x182251cc0, size 0x30, virtual false, abstract: false, final false
inline void set_type(::UnityEngine::LightType  value) ;

/// @brief Method set_type_Injected, addr 0x182251cb0, size 0x10, virtual false, abstract: false, final false
static inline void set_type_Injected(::System::IntPtr  _unity_self, ::UnityEngine::LightType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Light() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Light", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Light(Light && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Light", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Light(Light const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10527};

/// @brief Field <shape>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::LightShape  ____shape_k__BackingField;

/// @brief Field m_BakedIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_BakedIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Light, ____shape_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Light, ___m_BakedIndex) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Light) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
