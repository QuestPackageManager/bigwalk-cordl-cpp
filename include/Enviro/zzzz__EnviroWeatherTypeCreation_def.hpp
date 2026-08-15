#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeCreation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroWeatherTypeCreation)
namespace Enviro {
class EnviroWeatherType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Keyframe;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Enviro {
class EnviroWeatherTypeCreation;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherTypeCreation*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherTypeCreation*, "Enviro", "EnviroWeatherTypeCreation");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherTypeCreation
class CORDL_TYPE EnviroWeatherTypeCreation : public ::System::Object {
public:
// Declarations
/// @brief Method CreateGradient, addr 0x180629810, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Gradient* CreateGradient() ;

/// @brief Method CreateKey, addr 0x180629920, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Keyframe CreateKey(float_t  value, float_t  time) ;

/// @brief Method CreateKey, addr 0x1806298b0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Keyframe CreateKey(float_t  value, float_t  time, float_t  inTangent, float_t  outTangent) ;

/// @brief Method CreateMyAsset, addr 0x180629970, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::Enviro::EnviroWeatherType> CreateMyAsset() ;

/// @brief Method GetAssetCubemap, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Cubemap> GetAssetCubemap(::StringW  name) ;

/// @brief Method GetAssetPrefab, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> GetAssetPrefab(::StringW  name) ;

/// @brief Method GetAssetTexture, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetAssetTexture(::StringW  name) ;

/// @brief Method GetColor, addr 0x180629980, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetColor(::StringW  hex) ;

static inline ::Enviro::EnviroWeatherTypeCreation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherTypeCreation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeCreation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherTypeCreation(EnviroWeatherTypeCreation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeCreation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherTypeCreation(EnviroWeatherTypeCreation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18522};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroWeatherTypeCreation) == 0x10, "Size mismatch!");

} // namespace end def Enviro
