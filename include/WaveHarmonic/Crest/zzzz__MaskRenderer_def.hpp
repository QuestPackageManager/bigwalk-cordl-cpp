#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/MaskRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskRenderer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
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
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class MaskRenderer_IMaskProvider;
}
namespace WaveHarmonic::Crest {
class MaskRenderer_IMaskReceiver;
}
namespace WaveHarmonic::Crest {
struct MaskRenderer_MaskInput;
}
namespace WaveHarmonic::Crest {
class MaskRenderer_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct MaskRenderer_MaskInput;
}
namespace WaveHarmonic::Crest {
class MaskRenderer;
}
namespace WaveHarmonic::Crest {
class MaskRenderer_IMaskProvider;
}
namespace WaveHarmonic::Crest {
class MaskRenderer_IMaskReceiver;
}
namespace WaveHarmonic::Crest {
class MaskRenderer_ShaderIDs;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::MaskRenderer_MaskInput);
MARK_REF_T(::WaveHarmonic::Crest::MaskRenderer*);
MARK_REF_T(::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*);
MARK_REF_T(::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*);
MARK_REF_T(::WaveHarmonic::Crest::MaskRenderer_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaskRenderer_MaskInput, "WaveHarmonic.Crest", "MaskRenderer/MaskInput");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaskRenderer*, "WaveHarmonic.Crest", "MaskRenderer");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*, "WaveHarmonic.Crest", "MaskRenderer/IMaskProvider");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*, "WaveHarmonic.Crest", "MaskRenderer/IMaskReceiver");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaskRenderer_ShaderIDs*, "WaveHarmonic.Crest", "MaskRenderer/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.MaskRenderer/ShaderIDs
class CORDL_TYPE MaskRenderer_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_WaterMaskDepthTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaterMaskDepthTexture, put=setStaticF_s_WaterMaskDepthTexture)) int32_t  s_WaterMaskDepthTexture;

/// @brief Field s_WaterMaskTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaterMaskTexture, put=setStaticF_s_WaterMaskTexture)) int32_t  s_WaterMaskTexture;

static inline int32_t getStaticF_s_WaterMaskDepthTexture() ;

static inline int32_t getStaticF_s_WaterMaskTexture() ;

static inline void setStaticF_s_WaterMaskDepthTexture(int32_t  value) ;

static inline void setStaticF_s_WaterMaskTexture(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskRenderer_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskRenderer_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskRenderer_ShaderIDs(MaskRenderer_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskRenderer_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskRenderer_ShaderIDs(MaskRenderer_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::MaskRenderer_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.MaskRenderer/MaskInput
struct CORDL_TYPE MaskRenderer_MaskInput {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MaskRenderer_MaskInput_Unwrapped
enum struct __MaskRenderer_MaskInput_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Zero = static_cast<int32_t>(0x1),
__E_Color = static_cast<int32_t>(0x2),
__E_Depth = static_cast<int32_t>(0x4),
__E_Both = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskRenderer_MaskInput_Unwrapped () const noexcept {
return static_cast<__MaskRenderer_MaskInput_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MaskRenderer_MaskInput() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaskRenderer_MaskInput(int32_t  value__) noexcept;

/// @brief Field Both value: I32(6)
static ::WaveHarmonic::Crest::MaskRenderer_MaskInput const Both;

/// @brief Field Color value: I32(2)
static ::WaveHarmonic::Crest::MaskRenderer_MaskInput const Color;

/// @brief Field Depth value: I32(4)
static ::WaveHarmonic::Crest::MaskRenderer_MaskInput const Depth;

/// @brief Field None value: I32(0)
static ::WaveHarmonic::Crest::MaskRenderer_MaskInput const None;

/// @brief Field Zero value: I32(1)
static ::WaveHarmonic::Crest::MaskRenderer_MaskInput const Zero;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderer_MaskInput, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::MaskRenderer_MaskInput) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.MaskRenderer/IMaskProvider
class CORDL_TYPE MaskRenderer_IMaskProvider {
public:
// Declarations
/// @brief Method Allocate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput Allocate() ;

/// @brief Method OnMaskPass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnMaskPass(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Camera*  camera, ::WaveHarmonic::Crest::MaskRenderer*  mask) ;

/// @brief Method Write, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput Write(::UnityEngine::Camera*  camera) ;

// Ctor Parameters [CppParam { name: "", ty: "MaskRenderer_IMaskProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskRenderer_IMaskProvider(MaskRenderer_IMaskProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16687};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.MaskRenderer/IMaskReceiver
class CORDL_TYPE MaskRenderer_IMaskReceiver {
public:
// Declarations
/// @brief Method Allocate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput Allocate() ;

// Ctor Parameters [CppParam { name: "", ty: "MaskRenderer_IMaskReceiver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskRenderer_IMaskReceiver(MaskRenderer_IMaskReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16688};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Rendering.RenderTargetIdentifier, WaveHarmonic.Crest.MaskRenderer::MaskInput
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.MaskRenderer
class CORDL_TYPE MaskRenderer : public ::System::Object {
public:
// Declarations
using IMaskProvider = ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider;

using IMaskReceiver = ::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver;

using MaskInput = ::WaveHarmonic::Crest::MaskRenderer_MaskInput;

using ShaderIDs = ::WaveHarmonic::Crest::MaskRenderer_ShaderIDs;

 __declspec(property(get=get_ColorDescriptor)) ::UnityEngine::RenderTextureDescriptor  ColorDescriptor;

 __declspec(property(get=get_ColorRT)) ::UnityW<::UnityEngine::RenderTexture>  ColorRT;

 __declspec(property(get=get_ColorRTH)) ::UnityEngine::Rendering::RTHandle*  ColorRTH;

 __declspec(property(get=get_ColorT)) ::UnityW<::UnityEngine::Texture>  ColorT;

 __declspec(property(get=get_DepthDescriptor)) ::UnityEngine::RenderTextureDescriptor  DepthDescriptor;

 __declspec(property(get=get_DepthRT)) ::UnityW<::UnityEngine::RenderTexture>  DepthRT;

 __declspec(property(get=get_DepthRTH)) ::UnityEngine::Rendering::RTHandle*  DepthRTH;

 __declspec(property(get=get_DepthT)) ::UnityW<::UnityEngine::Texture>  DepthT;

 __declspec(property(get=get_Enabled)) bool  Enabled;

/// @brief Field _ColorRTH, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__ColorRTH, put=__cordl_internal_set__ColorRTH)) ::UnityEngine::Rendering::RTHandle*  _ColorRTH;

/// @brief Field _ColorRTI, offset 0x10, size 0x28 
 __declspec(property(get=__cordl_internal_get__ColorRTI, put=__cordl_internal_set__ColorRTI)) ::UnityEngine::Rendering::RenderTargetIdentifier  _ColorRTI;

/// @brief Field _DepthRTH, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__DepthRTH, put=__cordl_internal_set__DepthRTH)) ::UnityEngine::Rendering::RTHandle*  _DepthRTH;

/// @brief Field _DepthRTI, offset 0x38, size 0x28 
 __declspec(property(get=__cordl_internal_get__DepthRTI, put=__cordl_internal_set__DepthRTI)) ::UnityEngine::Rendering::RenderTargetIdentifier  _DepthRTI;

/// @brief Field _Inputs, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__Inputs, put=__cordl_internal_set__Inputs)) ::WaveHarmonic::Crest::MaskRenderer_MaskInput  _Inputs;

/// @brief Field _Providers, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Providers, put=__cordl_internal_set__Providers)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>*  _Providers;

/// @brief Field _Receivers, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Receivers, put=__cordl_internal_set__Receivers)) ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>*  _Receivers;

/// @brief Field _Water, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Field s_OnAllocate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OnAllocate, put=setStaticF_s_OnAllocate)) ::System::Action*  s_OnAllocate;

/// @brief Field s_OnReAllocate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OnReAllocate, put=setStaticF_s_OnReAllocate)) ::System::Action_1<::UnityEngine::RenderTextureDescriptor>*  s_OnReAllocate;

/// @brief Field s_OnRelease, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OnRelease, put=setStaticF_s_OnRelease)) ::System::Action*  s_OnRelease;

/// @brief Method Add, addr 0x1825a1ed0, size 0x70, virtual false, abstract: false, final false
inline void Add(int32_t  queue, ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*  provider) ;

/// @brief Method Add, addr 0x1825a1e30, size 0xa0, virtual false, abstract: false, final false
inline void Add(::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*  receiver) ;

/// @brief Method Allocate, addr 0x1825a1f40, size 0x360, virtual false, abstract: false, final false
inline void Allocate() ;

/// @brief Method Destroy, addr 0x1825a22a0, size 0xa0, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Disable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method Execute, addr 0x1825a2340, size 0x190, virtual false, abstract: false, final false
inline void Execute(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  commands) ;

/// @brief Method Initialize, addr 0x1825a24d0, size 0x120, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method Instantiate, addr 0x1825a25f0, size 0xb0, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::MaskRenderer* Instantiate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

static inline ::WaveHarmonic::Crest::MaskRenderer* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnBeginCameraRendering, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRendering, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method ReAllocate, addr 0x1825a26a0, size 0x1c0, virtual false, abstract: false, final false
inline void ReAllocate(::UnityEngine::RenderTextureDescriptor  descriptor) ;

/// @brief Method Release, addr 0x1825a22a0, size 0xa0, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method Remove, addr 0x1825a28a0, size 0x40, virtual false, abstract: false, final false
inline void Remove(::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*  provider) ;

/// @brief Method Remove, addr 0x1825a2860, size 0x40, virtual false, abstract: false, final false
inline void Remove(::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*  receiver) ;

/// @brief Method ResetRenderTarget, addr 0x1825a28e0, size 0x40, virtual false, abstract: false, final false
inline void ResetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  commands) ;

/// @brief Method ShouldExecute, addr 0x1825a2920, size 0x130, virtual false, abstract: false, final false
inline bool ShouldExecute(::UnityEngine::Camera*  camera) ;

/// @brief Method UpdateColor, addr 0x1825a2a50, size 0x90, virtual false, abstract: false, final false
inline void UpdateColor(::UnityEngine::Texture*  color) ;

/// @brief Method UpdateDepth, addr 0x1825a2ae0, size 0x90, virtual false, abstract: false, final false
inline void UpdateDepth(::UnityEngine::Texture*  depth) ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__ColorRTH() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__ColorRTH() ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__ColorRTI() const;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__ColorRTI() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__DepthRTH() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__DepthRTH() ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__DepthRTI() const;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__DepthRTI() ;

constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput const& __cordl_internal_get__Inputs() const;

constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput& __cordl_internal_get__Inputs() ;

constexpr ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>* const& __cordl_internal_get__Providers() const;

constexpr ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>*& __cordl_internal_get__Providers() ;

constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>* const& __cordl_internal_get__Receivers() const;

constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>*& __cordl_internal_get__Receivers() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__ColorRTH(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__ColorRTI(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

constexpr void __cordl_internal_set__DepthRTH(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__DepthRTI(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

constexpr void __cordl_internal_set__Inputs(::WaveHarmonic::Crest::MaskRenderer_MaskInput  value) ;

constexpr void __cordl_internal_set__Providers(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>*  value) ;

constexpr void __cordl_internal_set__Receivers(::System::Collections::Generic::List_1<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>*  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x1825a2b70, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

static inline ::System::Action* getStaticF_s_OnAllocate() ;

static inline ::System::Action_1<::UnityEngine::RenderTextureDescriptor>* getStaticF_s_OnReAllocate() ;

static inline ::System::Action* getStaticF_s_OnRelease() ;

/// @brief Method get_ColorDescriptor, addr 0x1825a2c30, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_ColorDescriptor() ;

/// @brief Method get_ColorRT, addr 0x1825a2c70, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_ColorRT() ;

/// @brief Method get_ColorRTH, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* get_ColorRTH() ;

/// @brief Method get_ColorT, addr 0x1825a2c80, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_ColorT() ;

/// @brief Method get_DepthDescriptor, addr 0x1825a2ca0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_DepthDescriptor() ;

/// @brief Method get_DepthRT, addr 0x1825a2ce0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_DepthRT() ;

/// @brief Method get_DepthRTH, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* get_DepthRTH() ;

/// @brief Method get_DepthT, addr 0x1825a2cf0, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_DepthT() ;

/// @brief Method get_Enabled, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool get_Enabled() ;

static inline void setStaticF_s_OnAllocate(::System::Action*  value) ;

static inline void setStaticF_s_OnReAllocate(::System::Action_1<::UnityEngine::RenderTextureDescriptor>*  value) ;

static inline void setStaticF_s_OnRelease(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskRenderer(MaskRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskRenderer(MaskRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16689};

/// @brief Field k_MaskColor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MaskColor{u"_Crest_MaskColor"};

/// @brief Field k_MaskDepth offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MaskDepth{u"_Crest_MaskDepth"};

/// @brief Field _ColorRTI, offset: 0x10, size: 0x28, def value: None
 ::UnityEngine::Rendering::RenderTargetIdentifier  ____ColorRTI;

/// @brief Field _DepthRTI, offset: 0x38, size: 0x28, def value: None
 ::UnityEngine::Rendering::RenderTargetIdentifier  ____DepthRTI;

/// @brief Field _Inputs, offset: 0x60, size: 0x4, def value: None
 ::WaveHarmonic::Crest::MaskRenderer_MaskInput  ____Inputs;

/// @brief Field _Water, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _Providers, offset: 0x70, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>*  ____Providers;

/// @brief Field _Receivers, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>*  ____Receivers;

/// @brief Field _ColorRTH, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____ColorRTH;

/// @brief Field _DepthRTH, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____DepthRTH;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderer, ____ColorRTI) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderer, ____DepthRTI) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderer, ____Inputs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderer, ____Water) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderer, ____Providers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderer, ____Receivers) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderer, ____ColorRTH) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderer, ____DepthRTH) == 0x88, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::MaskRenderer) == 0x90, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
