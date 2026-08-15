#pragma once
// IWYU pragma private; include "UnityEngine/RenderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RenderSettings)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct AmbientMode;
}
namespace UnityEngine::Rendering {
struct DefaultReflectionMode;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FogMode;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
class RenderSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::RenderSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RenderSettings*, "UnityEngine", "RenderSettings");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RenderSettings
class CORDL_TYPE RenderSettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method get_ambientEquatorColor, addr 0x18225ad60, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_ambientEquatorColor() ;

/// @brief Method get_ambientEquatorColor_Injected, addr 0x18225ad50, size 0x10, virtual false, abstract: false, final false
static inline void get_ambientEquatorColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_ambientGroundColor, addr 0x18225ad90, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_ambientGroundColor() ;

/// @brief Method get_ambientGroundColor_Injected, addr 0x18225ad80, size 0x10, virtual false, abstract: false, final false
static inline void get_ambientGroundColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_ambientIntensity, addr 0x18225adb0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_ambientIntensity() ;

/// @brief Method get_ambientProbe, addr 0x18225add0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::SphericalHarmonicsL2 get_ambientProbe() ;

/// @brief Method get_ambientProbe_Injected, addr 0x18225adc0, size 0x10, virtual false, abstract: false, final false
static inline void get_ambientProbe_Injected(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>  ret) ;

/// @brief Method get_ambientSkyColor, addr 0x18225ae20, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_ambientSkyColor() ;

/// @brief Method get_ambientSkyColor_Injected, addr 0x18225ae10, size 0x10, virtual false, abstract: false, final false
static inline void get_ambientSkyColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_fog, addr 0x18225aea0, size 0x10, virtual false, abstract: false, final false
static inline bool get_fog() ;

/// @brief Method get_fogColor, addr 0x18225ae50, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_fogColor() ;

/// @brief Method get_fogColor_Injected, addr 0x18225ae40, size 0x10, virtual false, abstract: false, final false
static inline void get_fogColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_fogDensity, addr 0x18225ae70, size 0x10, virtual false, abstract: false, final false
static inline float_t get_fogDensity() ;

/// @brief Method get_fogEndDistance, addr 0x18225ae80, size 0x10, virtual false, abstract: false, final false
static inline float_t get_fogEndDistance() ;

/// @brief Method get_fogStartDistance, addr 0x18225ae90, size 0x10, virtual false, abstract: false, final false
static inline float_t get_fogStartDistance() ;

/// @brief Method get_reflectionIntensity, addr 0x18225aeb0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_reflectionIntensity() ;

/// @brief Method get_skybox, addr 0x18225aed0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_skybox() ;

/// @brief Method get_skybox_Injected, addr 0x18225aec0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_skybox_Injected() ;

/// @brief Method get_subtractiveShadowColor, addr 0x18225af00, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_subtractiveShadowColor() ;

/// @brief Method get_subtractiveShadowColor_Injected, addr 0x18225aef0, size 0x10, virtual false, abstract: false, final false
static inline void get_subtractiveShadowColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_sun, addr 0x18225af30, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Light> get_sun() ;

/// @brief Method get_sun_Injected, addr 0x18225af20, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_sun_Injected() ;

/// @brief Method set_ambientEquatorColor, addr 0x18225af60, size 0x10, virtual false, abstract: false, final false
static inline void set_ambientEquatorColor(::UnityEngine::Color  value) ;

/// @brief Method set_ambientEquatorColor_Injected, addr 0x18225af50, size 0x10, virtual false, abstract: false, final false
static inline void set_ambientEquatorColor_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_ambientGroundColor, addr 0x18225af80, size 0x10, virtual false, abstract: false, final false
static inline void set_ambientGroundColor(::UnityEngine::Color  value) ;

/// @brief Method set_ambientGroundColor_Injected, addr 0x18225af70, size 0x10, virtual false, abstract: false, final false
static inline void set_ambientGroundColor_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_ambientIntensity, addr 0x18225af90, size 0x10, virtual false, abstract: false, final false
static inline void set_ambientIntensity(float_t  value) ;

/// @brief Method set_ambientMode, addr 0x18225afa0, size 0x10, virtual false, abstract: false, final false
static inline void set_ambientMode(::UnityEngine::Rendering::AmbientMode  value) ;

/// @brief Method set_ambientSkyColor, addr 0x18225afc0, size 0x10, virtual false, abstract: false, final false
static inline void set_ambientSkyColor(::UnityEngine::Color  value) ;

/// @brief Method set_ambientSkyColor_Injected, addr 0x18225afb0, size 0x10, virtual false, abstract: false, final false
static inline void set_ambientSkyColor_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_customReflectionTexture, addr 0x18225afe0, size 0x20, virtual false, abstract: false, final false
static inline void set_customReflectionTexture(::UnityEngine::Texture*  value) ;

/// @brief Method set_customReflectionTexture_Injected, addr 0x18225afd0, size 0x10, virtual false, abstract: false, final false
static inline void set_customReflectionTexture_Injected(::System::IntPtr  value) ;

/// @brief Method set_defaultReflectionMode, addr 0x18225b000, size 0x10, virtual false, abstract: false, final false
static inline void set_defaultReflectionMode(::UnityEngine::Rendering::DefaultReflectionMode  value) ;

/// @brief Method set_fog, addr 0x18225b070, size 0x10, virtual false, abstract: false, final false
static inline void set_fog(bool  value) ;

/// @brief Method set_fogColor, addr 0x18225b020, size 0x10, virtual false, abstract: false, final false
static inline void set_fogColor(::UnityEngine::Color  value) ;

/// @brief Method set_fogColor_Injected, addr 0x18225b010, size 0x10, virtual false, abstract: false, final false
static inline void set_fogColor_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_fogDensity, addr 0x18225b030, size 0x10, virtual false, abstract: false, final false
static inline void set_fogDensity(float_t  value) ;

/// @brief Method set_fogEndDistance, addr 0x18225b040, size 0x10, virtual false, abstract: false, final false
static inline void set_fogEndDistance(float_t  value) ;

/// @brief Method set_fogMode, addr 0x18225b050, size 0x10, virtual false, abstract: false, final false
static inline void set_fogMode(::UnityEngine::FogMode  value) ;

/// @brief Method set_fogStartDistance, addr 0x18225b060, size 0x10, virtual false, abstract: false, final false
static inline void set_fogStartDistance(float_t  value) ;

/// @brief Method set_reflectionIntensity, addr 0x18225b080, size 0x10, virtual false, abstract: false, final false
static inline void set_reflectionIntensity(float_t  value) ;

/// @brief Method set_skybox, addr 0x18225b0a0, size 0x20, virtual false, abstract: false, final false
static inline void set_skybox(::UnityEngine::Material*  value) ;

/// @brief Method set_skybox_Injected, addr 0x18225b090, size 0x10, virtual false, abstract: false, final false
static inline void set_skybox_Injected(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderSettings(RenderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderSettings(RenderSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10515};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RenderSettings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
