#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/UnderwaterEffectPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
CORDL_MODULE_EXPORT(UnderwaterEffectPass)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class UnderwaterEffectPass;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::UnderwaterEffectPass*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::UnderwaterEffectPass*, "WaveHarmonic.Crest", "UnderwaterEffectPass");
// Dependencies System.Object, UnityEngine.Experimental.Rendering.GraphicsFormat
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.UnderwaterEffectPass
class CORDL_TYPE UnderwaterEffectPass : public ::System::Object {
public:
// Declarations
/// @brief Field _AllocatedColor, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllocatedColor, put=__cordl_internal_set__AllocatedColor)) bool  _AllocatedColor;

/// @brief Field _ColorTarget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ColorTarget, put=__cordl_internal_set__ColorTarget)) ::UnityEngine::Rendering::RTHandle*  _ColorTarget;

/// @brief Field _ColorTexture, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ColorTexture, put=__cordl_internal_set__ColorTexture)) ::UnityEngine::Rendering::RTHandle*  _ColorTexture;

/// @brief Field _CopyColorTexture, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyColorTexture, put=__cordl_internal_set__CopyColorTexture)) ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  _CopyColorTexture;

/// @brief Field _DepthTarget, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__DepthTarget, put=__cordl_internal_set__DepthTarget)) ::UnityEngine::Rendering::RTHandle*  _DepthTarget;

/// @brief Field _GraphicsFormat, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__GraphicsFormat, put=__cordl_internal_set__GraphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  _GraphicsFormat;

/// @brief Field _Renderer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Renderer, put=__cordl_internal_set__Renderer)) ::WaveHarmonic::Crest::UnderwaterRenderer*  _Renderer;

/// @brief Field _SetRenderTargetToBackBuffers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__SetRenderTargetToBackBuffers, put=__cordl_internal_set__SetRenderTargetToBackBuffers)) ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  _SetRenderTargetToBackBuffers;

/// @brief Method Allocate, addr 0x1825a4830, size 0x150, virtual false, abstract: false, final false
inline void Allocate(::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method CopyColorTexture, addr 0x1825a4980, size 0x70, virtual false, abstract: false, final false
inline void CopyColorTexture(::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method Execute, addr 0x1825a49f0, size 0x310, virtual false, abstract: false, final false
inline void Execute(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RTHandle*  color, ::UnityEngine::Rendering::RTHandle*  depth, ::UnityEngine::MaterialPropertyBlock*  mpb) ;

static inline ::WaveHarmonic::Crest::UnderwaterEffectPass* New_ctor(::WaveHarmonic::Crest::UnderwaterRenderer*  renderer) ;

/// @brief Method ReAllocate, addr 0x1825a4d00, size 0x90, virtual false, abstract: false, final false
inline void ReAllocate(::UnityEngine::RenderTextureDescriptor  descriptor) ;

/// @brief Method Release, addr 0x1825a4d90, size 0x40, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method SetRenderTargetToBackBuffers, addr 0x1825a4dd0, size 0x40, virtual false, abstract: false, final false
inline void SetRenderTargetToBackBuffers(::UnityEngine::Rendering::CommandBuffer*  commands) ;

constexpr bool const& __cordl_internal_get__AllocatedColor() const;

constexpr bool& __cordl_internal_get__AllocatedColor() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__ColorTarget() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__ColorTarget() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__ColorTexture() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__ColorTexture() ;

constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* const& __cordl_internal_get__CopyColorTexture() const;

constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*& __cordl_internal_get__CopyColorTexture() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__DepthTarget() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__DepthTarget() ;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get__GraphicsFormat() const;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get__GraphicsFormat() ;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer* const& __cordl_internal_get__Renderer() const;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer*& __cordl_internal_get__Renderer() ;

constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* const& __cordl_internal_get__SetRenderTargetToBackBuffers() const;

constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*& __cordl_internal_get__SetRenderTargetToBackBuffers() ;

constexpr void __cordl_internal_set__AllocatedColor(bool  value) ;

constexpr void __cordl_internal_set__ColorTarget(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__ColorTexture(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__CopyColorTexture(::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  value) ;

constexpr void __cordl_internal_set__DepthTarget(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__GraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

constexpr void __cordl_internal_set__Renderer(::WaveHarmonic::Crest::UnderwaterRenderer*  value) ;

constexpr void __cordl_internal_set__SetRenderTargetToBackBuffers(::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  value) ;

/// @brief Method .ctor, addr 0x1825a4e10, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::UnderwaterRenderer*  renderer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnderwaterEffectPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterEffectPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnderwaterEffectPass(UnderwaterEffectPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterEffectPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnderwaterEffectPass(UnderwaterEffectPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16704};

/// @brief Field _Renderer, offset: 0x10, size: 0x8, def value: None
 ::WaveHarmonic::Crest::UnderwaterRenderer*  ____Renderer;

/// @brief Field _ColorTexture, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____ColorTexture;

/// @brief Field _ColorTarget, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____ColorTarget;

/// @brief Field _DepthTarget, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____DepthTarget;

/// @brief Field _CopyColorTexture, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  ____CopyColorTexture;

/// @brief Field _SetRenderTargetToBackBuffers, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  ____SetRenderTargetToBackBuffers;

/// @brief Field _AllocatedColor, offset: 0x40, size: 0x1, def value: None
 bool  ____AllocatedColor;

/// @brief Field _GraphicsFormat, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::Experimental::Rendering::GraphicsFormat  ____GraphicsFormat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPass, ____Renderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPass, ____ColorTexture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPass, ____ColorTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPass, ____DepthTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPass, ____CopyColorTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPass, ____SetRenderTargetToBackBuffers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPass, ____AllocatedColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPass, ____GraphicsFormat) == 0x44, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::UnderwaterEffectPass) == 0x48, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
