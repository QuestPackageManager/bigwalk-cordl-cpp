#pragma once
// IWYU pragma private; include "Enviro/EnviroVolumetricFogLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroVolumetricFogLight)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace Enviro {
class EnviroVolumetricFogLight;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroVolumetricFogLight*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroVolumetricFogLight*, "Enviro", "EnviroVolumetricFogLight");
// Dependencies UnityEngine.MonoBehaviour
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroVolumetricFogLight
class CORDL_TYPE EnviroVolumetricFogLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cascadeShadowCB, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cascadeShadowCB, put=__cordl_internal_set_cascadeShadowCB)) ::UnityEngine::Rendering::CommandBuffer*  cascadeShadowCB;

/// @brief Field initialized, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field intensity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) float_t  intensity;

 __declspec(property(get=get_isOn, put=set_isOn)) bool  isOn;

 __declspec(property(get=get_light, put=set_light)) ::UnityW<::UnityEngine::Light>  light;

/// @brief Field myLight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myLight, put=__cordl_internal_set_myLight)) ::UnityW<::UnityEngine::Light>  myLight;

/// @brief Field range, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) float_t  range;

/// @brief Method AddToLightManager, addr 0x180619a30, size 0x130, virtual false, abstract: false, final false
inline void AddToLightManager() ;

/// @brief Method Init, addr 0x180619b60, size 0x40, virtual false, abstract: false, final false
inline void Init() ;

static inline ::Enviro::EnviroVolumetricFogLight* New_ctor() ;

/// @brief Method OnDisable, addr 0x180619ba0, size 0x120, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180619cc0, size 0x1a0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveFromLightManager, addr 0x180619e60, size 0xe0, virtual false, abstract: false, final false
inline void RemoveFromLightManager() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_cascadeShadowCB() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_cascadeShadowCB() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr float_t const& __cordl_internal_get_intensity() const;

constexpr float_t& __cordl_internal_get_intensity() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_myLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_myLight() ;

constexpr float_t const& __cordl_internal_get_range() const;

constexpr float_t& __cordl_internal_get_range() ;

constexpr void __cordl_internal_set_cascadeShadowCB(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_intensity(float_t  value) ;

constexpr void __cordl_internal_set_myLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_range(float_t  value) ;

/// @brief Method .ctor, addr 0x180619f40, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isOn, addr 0x180619f60, size 0x60, virtual false, abstract: false, final false
inline bool get_isOn() ;

/// @brief Method get_light, addr 0x180619fc0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Light> get_light() ;

/// @brief Method set_isOn, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void set_isOn(bool  value) ;

/// @brief Method set_light, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void set_light(::UnityEngine::Light*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroVolumetricFogLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroVolumetricFogLight", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroVolumetricFogLight(EnviroVolumetricFogLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroVolumetricFogLight", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroVolumetricFogLight(EnviroVolumetricFogLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18459};

/// @brief Field intensity, offset: 0x20, size: 0x4, def value: None
 float_t  ___intensity;

/// @brief Field range, offset: 0x24, size: 0x4, def value: None
 float_t  ___range;

/// @brief Field myLight, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___myLight;

/// @brief Field initialized, offset: 0x30, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field cascadeShadowCB, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ___cascadeShadowCB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroVolumetricFogLight, ___intensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricFogLight, ___range) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricFogLight, ___myLight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricFogLight, ___initialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricFogLight, ___cascadeShadowCB) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroVolumetricFogLight) == 0x40, "Size mismatch!");

} // namespace end def Enviro
