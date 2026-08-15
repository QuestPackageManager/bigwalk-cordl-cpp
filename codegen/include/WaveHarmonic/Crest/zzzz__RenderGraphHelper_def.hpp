#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RenderGraphHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RenderGraphHelper)
namespace System::Reflection {
class FieldInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IUnsafeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace WaveHarmonic::Crest {
struct RenderGraphHelper_Handle;
}
namespace WaveHarmonic::Crest {
class RenderGraphHelper_PassData;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class RenderGraphHelper;
}
namespace WaveHarmonic::Crest {
class RenderGraphHelper_PassData;
}
namespace WaveHarmonic::Crest {
struct RenderGraphHelper_Handle;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::RenderGraphHelper*);
MARK_REF_T(::WaveHarmonic::Crest::RenderGraphHelper_PassData*);
MARK_VAL_T(::WaveHarmonic::Crest::RenderGraphHelper_Handle);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::RenderGraphHelper*, "WaveHarmonic.Crest", "RenderGraphHelper");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::RenderGraphHelper_PassData*, "WaveHarmonic.Crest", "RenderGraphHelper/PassData");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::RenderGraphHelper_Handle, "WaveHarmonic.Crest", "RenderGraphHelper/Handle");
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.RenderGraphHelper/Handle
struct CORDL_TYPE RenderGraphHelper_Handle {
public:
// Declarations
 __declspec(property(get=get_Texture)) ::UnityEngine::Rendering::RTHandle*  Texture;

/// @brief Method get_Texture, addr 0x182563e90, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* get_Texture() ;

/// @brief Method op_Implicit, addr 0x182563e90, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RTHandle* op_Implicit___UnityEngine__Rendering__RTHandle_(::WaveHarmonic::Crest::RenderGraphHelper_Handle  texture) ;

/// @brief Method op_Implicit, addr 0x18038fea0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle op_Implicit___UnityEngine__Rendering__RenderGraphModule__TextureHandle(::WaveHarmonic::Crest::RenderGraphHelper_Handle  texture) ;

/// @brief Method op_Implicit, addr 0x1825678b0, size 0x60, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::RenderGraphHelper_Handle op_Implicit___WaveHarmonic__Crest__RenderGraphHelper_Handle(::UnityEngine::Rendering::RTHandle*  handle) ;

/// @brief Method op_Implicit, addr 0x182567890, size 0x20, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::RenderGraphHelper_Handle op_Implicit___WaveHarmonic__Crest__RenderGraphHelper_Handle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  handle) ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphHelper_Handle() ;

// Ctor Parameters [CppParam { name: "_RTHandle", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam { name: "_TextureHandle", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }]
constexpr RenderGraphHelper_Handle(::UnityEngine::Rendering::RTHandle*  _RTHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  _TextureHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20144};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _RTHandle, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  _RTHandle;

/// @brief Field _TextureHandle, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  _TextureHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::RenderGraphHelper_Handle, _RTHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RenderGraphHelper_Handle, _TextureHandle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::RenderGraphHelper_Handle) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, WaveHarmonic.Crest.RenderGraphHelper::Handle
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.RenderGraphHelper/PassData
class CORDL_TYPE RenderGraphHelper_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field cameraData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraData, put=__cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData;

/// @brief Field colorTargetHandle, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_colorTargetHandle, put=__cordl_internal_set_colorTargetHandle)) ::WaveHarmonic::Crest::RenderGraphHelper_Handle  colorTargetHandle;

/// @brief Field depthTargetHandle, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_depthTargetHandle, put=__cordl_internal_set_depthTargetHandle)) ::WaveHarmonic::Crest::RenderGraphHelper_Handle  depthTargetHandle;

/// @brief Field renderingData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderingData, put=__cordl_internal_set_renderingData)) ::UnityEngine::Rendering::Universal::UniversalRenderingData*  renderingData;

/// @brief Method Init, addr 0x18256b1b0, size 0x290, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*  builder) ;

static inline ::WaveHarmonic::Crest::RenderGraphHelper_PassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData() ;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle const& __cordl_internal_get_colorTargetHandle() const;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle& __cordl_internal_get_colorTargetHandle() ;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle const& __cordl_internal_get_depthTargetHandle() const;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle& __cordl_internal_get_depthTargetHandle() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData* const& __cordl_internal_get_renderingData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData*& __cordl_internal_get_renderingData() ;

constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value) ;

constexpr void __cordl_internal_set_colorTargetHandle(::WaveHarmonic::Crest::RenderGraphHelper_Handle  value) ;

constexpr void __cordl_internal_set_depthTargetHandle(::WaveHarmonic::Crest::RenderGraphHelper_Handle  value) ;

constexpr void __cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::UniversalRenderingData*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphHelper_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderGraphHelper_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderGraphHelper_PassData(RenderGraphHelper_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderGraphHelper_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderGraphHelper_PassData(RenderGraphHelper_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20145};

/// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalCameraData*  ___cameraData;

/// @brief Field renderingData, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalRenderingData*  ___renderingData;

/// @brief Field colorTargetHandle, offset: 0x20, size: 0x18, def value: None
 ::WaveHarmonic::Crest::RenderGraphHelper_Handle  ___colorTargetHandle;

/// @brief Field depthTargetHandle, offset: 0x38, size: 0x18, def value: None
 ::WaveHarmonic::Crest::RenderGraphHelper_Handle  ___depthTargetHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::RenderGraphHelper_PassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RenderGraphHelper_PassData, ___renderingData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RenderGraphHelper_PassData, ___colorTargetHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::RenderGraphHelper_PassData, ___depthTargetHandle) == 0x38, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::RenderGraphHelper_PassData) == 0x50, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.RenderGraphHelper
class CORDL_TYPE RenderGraphHelper : public ::System::Object {
public:
// Declarations
using Handle = ::WaveHarmonic::Crest::RenderGraphHelper_Handle;

using PassData = ::WaveHarmonic::Crest::RenderGraphHelper_PassData;

/// @brief Field s_WrappedContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_WrappedContext, put=setStaticF_s_WrappedContext)) ::System::Reflection::FieldInfo*  s_WrappedContext;

/// @brief Method GetFrameData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ContextContainer* GetFrameData(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method GetRenderContext, addr 0x18256c960, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ScriptableRenderContext GetRenderContext(::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  unsafeContext) ;

static inline ::System::Reflection::FieldInfo* getStaticF_s_WrappedContext() ;

static inline void setStaticF_s_WrappedContext(::System::Reflection::FieldInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderGraphHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderGraphHelper(RenderGraphHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderGraphHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderGraphHelper(RenderGraphHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20146};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::RenderGraphHelper) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
