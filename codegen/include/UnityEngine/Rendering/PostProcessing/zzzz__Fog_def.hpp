#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Fog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Fog)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
struct DepthTextureMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class Fog;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::Fog*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Fog*, "UnityEngine.Rendering.PostProcessing", "Fog");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.Fog
class CORDL_TYPE Fog : public ::System::Object {
public:
// Declarations
/// @brief Field enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

/// @brief Field excludeSkybox, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_excludeSkybox, put=__cordl_internal_set_excludeSkybox)) bool  excludeSkybox;

/// @brief Method GetCameraFlags, addr 0x1802edd00, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

/// @brief Method IsEnabledAndSupported, addr 0x181fb6cb0, size 0x80, virtual false, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::Fog* New_ctor() ;

/// @brief Method Render, addr 0x181fb6d30, size 0x230, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr bool const& __cordl_internal_get_excludeSkybox() const;

constexpr bool& __cordl_internal_get_excludeSkybox() ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

constexpr void __cordl_internal_set_excludeSkybox(bool  value) ;

/// @brief Method .ctor, addr 0x181780550, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Fog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Fog", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Fog(Fog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Fog", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Fog(Fog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18569};

/// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___enabled;

/// @brief Field excludeSkybox, offset: 0x11, size: 0x1, def value: None
 bool  ___excludeSkybox;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Fog, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Fog, ___excludeSkybox) == 0x11, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Fog) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
