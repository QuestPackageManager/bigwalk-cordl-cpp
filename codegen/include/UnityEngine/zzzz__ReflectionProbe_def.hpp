#pragma once
// IWYU pragma private; include "UnityEngine/ReflectionProbe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbe)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeClearFlags;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeMode;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeRefreshMode;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeTimeSlicingMode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct ReflectionProbe_ReflectionProbeEvent;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct ReflectionProbe_ReflectionProbeEvent;
}
namespace UnityEngine {
class ReflectionProbe;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ReflectionProbe_ReflectionProbeEvent);
MARK_REF_T(::UnityEngine::ReflectionProbe*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ReflectionProbe_ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ReflectionProbe/ReflectionProbeEvent
struct CORDL_TYPE ReflectionProbe_ReflectionProbeEvent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReflectionProbe_ReflectionProbeEvent_Unwrapped
enum struct __ReflectionProbe_ReflectionProbeEvent_Unwrapped : int32_t {
__E_ReflectionProbeAdded = static_cast<int32_t>(0x0),
__E_ReflectionProbeRemoved = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReflectionProbe_ReflectionProbeEvent_Unwrapped () const noexcept {
return static_cast<__ReflectionProbe_ReflectionProbeEvent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReflectionProbe_ReflectionProbeEvent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReflectionProbe_ReflectionProbeEvent(int32_t  value__) noexcept;

/// @brief Field ReflectionProbeAdded value: I32(0)
static ::UnityEngine::ReflectionProbe_ReflectionProbeEvent const ReflectionProbeAdded;

/// @brief Field ReflectionProbeRemoved value: I32(1)
static ::UnityEngine::ReflectionProbe_ReflectionProbeEvent const ReflectionProbeRemoved;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10453};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ReflectionProbe_ReflectionProbeEvent, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ReflectionProbe_ReflectionProbeEvent) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ReflectionProbe
class CORDL_TYPE ReflectionProbe : public ::UnityEngine::Behaviour {
public:
// Declarations
using ReflectionProbeEvent = ::UnityEngine::ReflectionProbe_ReflectionProbeEvent;

 __declspec(property(get=get_backgroundColor)) ::UnityEngine::Color  backgroundColor;

 __declspec(property(get=get_clearFlags)) ::UnityEngine::Rendering::ReflectionProbeClearFlags  clearFlags;

 __declspec(property(get=get_cullingMask, put=set_cullingMask)) int32_t  cullingMask;

 __declspec(property(put=set_customBakedTexture)) ::UnityW<::UnityEngine::Texture>  customBakedTexture;

 __declspec(property(get=get_farClipPlane)) float_t  farClipPlane;

 __declspec(property(get=get_hdr)) bool  hdr;

 __declspec(property(put=set_intensity)) float_t  intensity;

 __declspec(property(get=get_mode, put=set_mode)) ::UnityEngine::Rendering::ReflectionProbeMode  mode;

 __declspec(property(get=get_nearClipPlane)) float_t  nearClipPlane;

/// @brief Field reflectionProbeChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reflectionProbeChanged, put=setStaticF_reflectionProbeChanged)) ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*  reflectionProbeChanged;

 __declspec(property(get=get_refreshMode, put=set_refreshMode)) ::UnityEngine::Rendering::ReflectionProbeRefreshMode  refreshMode;

/// @brief Field registeredDefaultReflectionSetActions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registeredDefaultReflectionSetActions, put=setStaticF_registeredDefaultReflectionSetActions)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  registeredDefaultReflectionSetActions;

/// @brief Field registeredDefaultReflectionTextureActions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registeredDefaultReflectionTextureActions, put=setStaticF_registeredDefaultReflectionTextureActions)) ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  registeredDefaultReflectionTextureActions;

 __declspec(property(get=get_resolution, put=set_resolution)) int32_t  resolution;

 __declspec(property(put=set_size)) ::UnityEngine::Vector3  size;

 __declspec(property(get=get_texture)) ::UnityW<::UnityEngine::Texture>  texture;

 __declspec(property(get=get_timeSlicingMode, put=set_timeSlicingMode)) ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode  timeSlicingMode;

/// @brief Method CallReflectionProbeEvent, addr 0x18224aaa0, size 0x60, virtual false, abstract: false, final false
static inline void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe*  probe, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent  probeEvent) ;

/// @brief Method CallSetDefaultReflection, addr 0x18224ab00, size 0xb0, virtual false, abstract: false, final false
static inline void CallSetDefaultReflection(::UnityEngine::Texture*  defaultReflectionCubemap) ;

/// @brief Method IsFinishedRendering, addr 0x18224abc0, size 0x40, virtual false, abstract: false, final false
inline bool IsFinishedRendering(int32_t  renderId) ;

/// @brief Method IsFinishedRendering_Injected, addr 0x18224abb0, size 0x10, virtual false, abstract: false, final false
static inline bool IsFinishedRendering_Injected(::System::IntPtr  _unity_self, int32_t  renderId) ;

static inline ::UnityEngine::ReflectionProbe* New_ctor() ;

/// @brief Method RenderProbe, addr 0x18224ac00, size 0x60, virtual false, abstract: false, final false
inline int32_t RenderProbe() ;

/// @brief Method RenderProbe, addr 0x18224ac60, size 0x80, virtual false, abstract: false, final false
inline int32_t RenderProbe(::UnityEngine::RenderTexture*  targetTexture) ;

/// @brief Method ScheduleRender, addr 0x18224acf0, size 0x60, virtual false, abstract: false, final false
inline int32_t ScheduleRender(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode  timeSlicingMode, ::UnityEngine::RenderTexture*  targetTexture) ;

/// @brief Method ScheduleRender_Injected, addr 0x18224ace0, size 0x10, virtual false, abstract: false, final false
static inline int32_t ScheduleRender_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode  timeSlicingMode, ::System::IntPtr  targetTexture) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* getStaticF_reflectionProbeChanged() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionSetActions() ;

static inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionTextureActions() ;

/// @brief Method get_backgroundColor, addr 0x18224ae10, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundColor_Injected, addr 0x18224ae00, size 0x10, virtual false, abstract: false, final false
static inline void get_backgroundColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_clearFlags, addr 0x18224ae60, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ReflectionProbeClearFlags get_clearFlags() ;

/// @brief Method get_clearFlags_Injected, addr 0x18224ae50, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ReflectionProbeClearFlags get_clearFlags_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_cullingMask, addr 0x18224aea0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_cullingMask() ;

/// @brief Method get_cullingMask_Injected, addr 0x18224ae90, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_cullingMask_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_defaultTexture, addr 0x18224af10, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> get_defaultTexture() ;

/// @brief Method get_defaultTextureHDRDecodeValues, addr 0x18224aee0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 get_defaultTextureHDRDecodeValues() ;

/// @brief Method get_defaultTextureHDRDecodeValues_Injected, addr 0x18224aed0, size 0x10, virtual false, abstract: false, final false
static inline void get_defaultTextureHDRDecodeValues_Injected(::by_ref<::UnityEngine::Vector4>  ret) ;

/// @brief Method get_defaultTexture_Injected, addr 0x18224af00, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_defaultTexture_Injected() ;

/// @brief Method get_farClipPlane, addr 0x18224af40, size 0x30, virtual false, abstract: false, final false
inline float_t get_farClipPlane() ;

/// @brief Method get_farClipPlane_Injected, addr 0x18224af30, size 0x10, virtual false, abstract: false, final false
static inline float_t get_farClipPlane_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hdr, addr 0x18224af80, size 0x30, virtual false, abstract: false, final false
inline bool get_hdr() ;

/// @brief Method get_hdr_Injected, addr 0x18224af70, size 0x10, virtual false, abstract: false, final false
static inline bool get_hdr_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_mode, addr 0x18224afc0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ReflectionProbeMode get_mode() ;

/// @brief Method get_mode_Injected, addr 0x18224afb0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ReflectionProbeMode get_mode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_nearClipPlane, addr 0x18224b000, size 0x30, virtual false, abstract: false, final false
inline float_t get_nearClipPlane() ;

/// @brief Method get_nearClipPlane_Injected, addr 0x18224aff0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_nearClipPlane_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_refreshMode, addr 0x18224b040, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode() ;

/// @brief Method get_refreshMode_Injected, addr 0x18224b030, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_resolution, addr 0x18224b080, size 0x30, virtual false, abstract: false, final false
inline int32_t get_resolution() ;

/// @brief Method get_resolution_Injected, addr 0x18224b070, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_resolution_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_texture, addr 0x18224b0c0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_texture() ;

/// @brief Method get_texture_Injected, addr 0x18224b0b0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_texture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_timeSlicingMode, addr 0x18224b110, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode get_timeSlicingMode() ;

/// @brief Method get_timeSlicingMode_Injected, addr 0x18224b100, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode get_timeSlicingMode_Injected(::System::IntPtr  _unity_self) ;

static inline void setStaticF_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*  value) ;

static inline void setStaticF_registeredDefaultReflectionSetActions(::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  value) ;

static inline void setStaticF_registeredDefaultReflectionTextureActions(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  value) ;

/// @brief Method set_cullingMask, addr 0x18224b150, size 0x30, virtual false, abstract: false, final false
inline void set_cullingMask(int32_t  value) ;

/// @brief Method set_cullingMask_Injected, addr 0x18224b140, size 0x10, virtual false, abstract: false, final false
static inline void set_cullingMask_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_customBakedTexture, addr 0x18224b190, size 0x50, virtual false, abstract: false, final false
inline void set_customBakedTexture(::UnityEngine::Texture*  value) ;

/// @brief Method set_customBakedTexture_Injected, addr 0x18224b180, size 0x10, virtual false, abstract: false, final false
static inline void set_customBakedTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_intensity, addr 0x18224b1f0, size 0x40, virtual false, abstract: false, final false
inline void set_intensity(float_t  value) ;

/// @brief Method set_intensity_Injected, addr 0x18224b1e0, size 0x10, virtual false, abstract: false, final false
static inline void set_intensity_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_mode, addr 0x18224b240, size 0x30, virtual false, abstract: false, final false
inline void set_mode(::UnityEngine::Rendering::ReflectionProbeMode  value) ;

/// @brief Method set_mode_Injected, addr 0x18224b230, size 0x10, virtual false, abstract: false, final false
static inline void set_mode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ReflectionProbeMode  value) ;

/// @brief Method set_refreshMode, addr 0x18224b280, size 0x30, virtual false, abstract: false, final false
inline void set_refreshMode(::UnityEngine::Rendering::ReflectionProbeRefreshMode  value) ;

/// @brief Method set_refreshMode_Injected, addr 0x18224b270, size 0x10, virtual false, abstract: false, final false
static inline void set_refreshMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ReflectionProbeRefreshMode  value) ;

/// @brief Method set_resolution, addr 0x18224b2c0, size 0x30, virtual false, abstract: false, final false
inline void set_resolution(int32_t  value) ;

/// @brief Method set_resolution_Injected, addr 0x18224b2b0, size 0x10, virtual false, abstract: false, final false
static inline void set_resolution_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_size, addr 0x18224b300, size 0x30, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector3  value) ;

/// @brief Method set_size_Injected, addr 0x18224b2f0, size 0x10, virtual false, abstract: false, final false
static inline void set_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_timeSlicingMode, addr 0x18224b340, size 0x30, virtual false, abstract: false, final false
inline void set_timeSlicingMode(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode  value) ;

/// @brief Method set_timeSlicingMode_Injected, addr 0x18224b330, size 0x10, virtual false, abstract: false, final false
static inline void set_timeSlicingMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionProbe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionProbe(ReflectionProbe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionProbe(ReflectionProbe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10454};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ReflectionProbe) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
