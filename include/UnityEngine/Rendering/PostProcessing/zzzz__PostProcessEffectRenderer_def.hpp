#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessEffectRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PostProcessEffectRenderer)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectSettings;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
struct DepthTextureMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*, "UnityEngine.Rendering.PostProcessing", "PostProcessEffectRenderer");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
class CORDL_TYPE PostProcessEffectRenderer : public ::System::Object {
public:
// Declarations
/// @brief Field m_ResetHistory, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ResetHistory, put=__cordl_internal_set_m_ResetHistory)) bool  m_ResetHistory;

/// @brief Method GetCameraFlags, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

/// @brief Method Init, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Init() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer* New_ctor() ;

/// @brief Method Release, addr 0x181163b60, size 0x1b0, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method Render, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method ResetHistory, addr 0x1803b3b50, size 0x10, virtual true, abstract: false, final false
inline void ResetHistory() ;

/// @brief Method SetSettings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetSettings(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  settings) ;

constexpr bool const& __cordl_internal_get_m_ResetHistory() const;

constexpr bool& __cordl_internal_get_m_ResetHistory() ;

constexpr void __cordl_internal_set_m_ResetHistory(bool  value) ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessEffectRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessEffectRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessEffectRenderer(PostProcessEffectRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessEffectRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessEffectRenderer(PostProcessEffectRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18624};

/// @brief Field m_ResetHistory, offset: 0x10, size: 0x1, def value: None
 bool  ___m_ResetHistory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer, ___m_ResetHistory) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
