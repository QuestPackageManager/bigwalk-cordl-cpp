#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/LightmapperUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightmapperUtils)
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DirectionalLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DiscLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct PointLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct RectangleLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct SpotLight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct LightmapBakeType;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
class LightmapperUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*, "UnityEngine.Experimental.GlobalIllumination", "LightmapperUtils");
// Dependencies System.Object
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// CS Name: UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
class CORDL_TYPE LightmapperUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ApplyColorTemperature, addr 0x1822aa450, size 0x60, virtual false, abstract: false, final false
static inline void ApplyColorTemperature(::UnityEngine::Color  cct, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::LinearColor>  lightColor) ;

/// @brief Method Extract, addr 0x1822ab4a0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::GlobalIllumination::LightMode Extract(::UnityEngine::LightmapBakeType  baketype) ;

/// @brief Method Extract, addr 0x1822abef0, size 0xd0, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::Cookie>  cookie) ;

/// @brief Method Extract, addr 0x1822aaae0, size 0x4d0, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight>  dir) ;

/// @brief Method Extract, addr 0x1822aba00, size 0x4f0, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::DiscLight>  disc) ;

/// @brief Method Extract, addr 0x1822aafb0, size 0x4f0, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::PointLight>  point) ;

/// @brief Method Extract, addr 0x1822aa5f0, size 0x4f0, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::RectangleLight>  rect) ;

/// @brief Method Extract, addr 0x1822ab4c0, size 0x540, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::SpotLight>  spot) ;

/// @brief Method ExtractColorTemperature, addr 0x1822aa4b0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ExtractColorTemperature(::UnityEngine::Light*  l) ;

/// @brief Method ExtractIndirect, addr 0x1822aa530, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor ExtractIndirect(::UnityEngine::Light*  l) ;

/// @brief Method ExtractInnerCone, addr 0x1822aa5b0, size 0x40, virtual false, abstract: false, final false
static inline float_t ExtractInnerCone(::UnityEngine::Light*  l) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightmapperUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightmapperUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightmapperUtils(LightmapperUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightmapperUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightmapperUtils(LightmapperUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11311};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
