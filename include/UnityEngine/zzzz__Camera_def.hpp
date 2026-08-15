#pragma once
// IWYU pragma private; include "UnityEngine/Camera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Camera)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct OpaqueSortMode;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine {
struct CameraClearFlags;
}
namespace UnityEngine {
struct CameraType;
}
namespace UnityEngine {
class Camera_CameraCallback;
}
namespace UnityEngine {
struct Camera_MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct Camera_StereoscopicEye;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct RenderingPath;
}
namespace UnityEngine {
struct StereoTargetEyeMask;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct Camera_MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct Camera_StereoscopicEye;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Camera_CameraCallback;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Camera_MonoOrStereoscopicEye);
MARK_VAL_T(::UnityEngine::Camera_StereoscopicEye);
MARK_REF_T(::UnityEngine::Camera*);
MARK_REF_T(::UnityEngine::Camera_CameraCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_MonoOrStereoscopicEye, "UnityEngine", "Camera/MonoOrStereoscopicEye");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_StereoscopicEye, "UnityEngine", "Camera/StereoscopicEye");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera*, "UnityEngine", "Camera");
DEFINE_IL2CPP_CLASS(::UnityEngine::Camera_CameraCallback*, "UnityEngine", "Camera/CameraCallback");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/StereoscopicEye
struct CORDL_TYPE Camera_StereoscopicEye {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Camera_StereoscopicEye_Unwrapped
enum struct __Camera_StereoscopicEye_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Camera_StereoscopicEye_Unwrapped () const noexcept {
return static_cast<__Camera_StereoscopicEye_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Camera_StereoscopicEye() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Camera_StereoscopicEye(int32_t  value__) noexcept;

/// @brief Field Left value: I32(0)
static ::UnityEngine::Camera_StereoscopicEye const Left;

/// @brief Field Right value: I32(1)
static ::UnityEngine::Camera_StereoscopicEye const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10443};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_StereoscopicEye, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera_StereoscopicEye) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/MonoOrStereoscopicEye
struct CORDL_TYPE Camera_MonoOrStereoscopicEye {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Camera_MonoOrStereoscopicEye_Unwrapped
enum struct __Camera_MonoOrStereoscopicEye_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
__E_Mono = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Camera_MonoOrStereoscopicEye_Unwrapped () const noexcept {
return static_cast<__Camera_MonoOrStereoscopicEye_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Camera_MonoOrStereoscopicEye() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Camera_MonoOrStereoscopicEye(int32_t  value__) noexcept;

/// @brief Field Left value: I32(0)
static ::UnityEngine::Camera_MonoOrStereoscopicEye const Left;

/// @brief Field Mono value: I32(2)
static ::UnityEngine::Camera_MonoOrStereoscopicEye const Mono;

/// @brief Field Right value: I32(1)
static ::UnityEngine::Camera_MonoOrStereoscopicEye const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10444};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_MonoOrStereoscopicEye, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera_MonoOrStereoscopicEye) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Camera/CameraCallback
class CORDL_TYPE Camera_CameraCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Camera*  cam) ;

static inline ::UnityEngine::Camera_CameraCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Camera_CameraCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Camera_CameraCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Camera_CameraCallback(Camera_CameraCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Camera_CameraCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Camera_CameraCallback(Camera_CameraCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10445};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Camera_CameraCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Camera
class CORDL_TYPE Camera : public ::UnityEngine::Behaviour {
public:
// Declarations
using CameraCallback = ::UnityEngine::Camera_CameraCallback;

using MonoOrStereoscopicEye = ::UnityEngine::Camera_MonoOrStereoscopicEye;

using StereoscopicEye = ::UnityEngine::Camera_StereoscopicEye;

 __declspec(property(get=get_actualRenderingPath)) ::UnityEngine::RenderingPath  actualRenderingPath;

 __declspec(property(get=get_allowDynamicResolution, put=set_allowDynamicResolution)) bool  allowDynamicResolution;

 __declspec(property(get=get_allowHDR, put=set_allowHDR)) bool  allowHDR;

 __declspec(property(get=get_allowMSAA, put=set_allowMSAA)) bool  allowMSAA;

 __declspec(property(get=get_aspect, put=set_aspect)) float_t  aspect;

 __declspec(property(get=get_backgroundColor, put=set_backgroundColor)) ::UnityEngine::Color  backgroundColor;

 __declspec(property(get=get_cameraToWorldMatrix)) ::UnityEngine::Matrix4x4  cameraToWorldMatrix;

 __declspec(property(get=get_cameraType, put=set_cameraType)) ::UnityEngine::CameraType  cameraType;

 __declspec(property(get=get_clearFlags, put=set_clearFlags)) ::UnityEngine::CameraClearFlags  clearFlags;

 __declspec(property(get=get_cullingMask, put=set_cullingMask)) int32_t  cullingMask;

 __declspec(property(put=set_cullingMatrix)) ::UnityEngine::Matrix4x4  cullingMatrix;

 __declspec(property(get=get_depth)) float_t  depth;

 __declspec(property(get=get_depthTextureMode, put=set_depthTextureMode)) ::UnityEngine::DepthTextureMode  depthTextureMode;

 __declspec(property(get=get_eventMask)) int32_t  eventMask;

 __declspec(property(get=get_farClipPlane, put=set_farClipPlane)) float_t  farClipPlane;

 __declspec(property(get=get_fieldOfView, put=set_fieldOfView)) float_t  fieldOfView;

 __declspec(property(put=set_focalLength)) float_t  focalLength;

 __declspec(property(put=set_forceIntoRenderTexture)) bool  forceIntoRenderTexture;

 __declspec(property(get=get_isProcessingRenderRequest)) bool  isProcessingRenderRequest;

 __declspec(property(get=get_layerCullDistances, put=set_layerCullDistances)) ::ArrayW<float_t>  layerCullDistances;

 __declspec(property(put=set_layerCullSpherical)) bool  layerCullSpherical;

 __declspec(property(put=set_layerCullSphericalInternal)) bool  layerCullSphericalInternal;

/// @brief Field m_NonSerializedVersion, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NonSerializedVersion, put=__cordl_internal_set_m_NonSerializedVersion)) uint32_t  m_NonSerializedVersion;

 __declspec(property(get=get_nearClipPlane, put=set_nearClipPlane)) float_t  nearClipPlane;

 __declspec(property(put=set_nonJitteredProjectionMatrix)) ::UnityEngine::Matrix4x4  nonJitteredProjectionMatrix;

/// @brief Field onPostRender, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPostRender, put=setStaticF_onPostRender)) ::UnityEngine::Camera_CameraCallback*  onPostRender;

/// @brief Field onPreCull, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPreCull, put=setStaticF_onPreCull)) ::UnityEngine::Camera_CameraCallback*  onPreCull;

/// @brief Field onPreRender, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPreRender, put=setStaticF_onPreRender)) ::UnityEngine::Camera_CameraCallback*  onPreRender;

 __declspec(property(get=get_opaqueSortMode)) ::UnityEngine::Rendering::OpaqueSortMode  opaqueSortMode;

 __declspec(property(get=get_orthographic, put=set_orthographic)) bool  orthographic;

 __declspec(property(get=get_orthographicSize, put=set_orthographicSize)) float_t  orthographicSize;

 __declspec(property(get=get_pixelHeight)) int32_t  pixelHeight;

 __declspec(property(get=get_pixelRect)) ::UnityEngine::Rect  pixelRect;

 __declspec(property(get=get_pixelWidth)) int32_t  pixelWidth;

 __declspec(property(get=get_projectionMatrix, put=set_projectionMatrix)) ::UnityEngine::Matrix4x4  projectionMatrix;

 __declspec(property(get=get_rect)) ::UnityEngine::Rect  rect;

 __declspec(property(get=get_scaledPixelHeight)) int32_t  scaledPixelHeight;

 __declspec(property(get=get_scaledPixelWidth)) int32_t  scaledPixelWidth;

 __declspec(property(put=set_sensorSize)) ::UnityEngine::Vector2  sensorSize;

 __declspec(property(get=get_stereoActiveEye)) ::UnityEngine::Camera_MonoOrStereoscopicEye  stereoActiveEye;

 __declspec(property(get=get_stereoEnabled)) bool  stereoEnabled;

 __declspec(property(get=get_stereoTargetEye)) ::UnityEngine::StereoTargetEyeMask  stereoTargetEye;

 __declspec(property(get=get_stereoTargetEyeInternal)) ::UnityEngine::StereoTargetEyeMask  stereoTargetEyeInternal;

 __declspec(property(get=get_targetDisplay)) int32_t  targetDisplay;

 __declspec(property(get=get_targetTexture, put=set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture>  targetTexture;

 __declspec(property(put=set_useJitteredProjectionMatrixForTransparentRendering)) bool  useJitteredProjectionMatrixForTransparentRendering;

 __declspec(property(get=get_useOcclusionCulling, put=set_useOcclusionCulling)) bool  useOcclusionCulling;

 __declspec(property(get=get_usePhysicalProperties, put=set_usePhysicalProperties)) bool  usePhysicalProperties;

 __declspec(property(get=get_worldToCameraMatrix, put=set_worldToCameraMatrix)) ::UnityEngine::Matrix4x4  worldToCameraMatrix;

/// @brief Method AddCommandBuffer, addr 0x182240ee0, size 0x140, virtual false, abstract: false, final false
inline void AddCommandBuffer(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method AddCommandBufferImpl, addr 0x182240e60, size 0x80, virtual false, abstract: false, final false
inline void AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method AddCommandBufferImpl_Injected, addr 0x182240e50, size 0x10, virtual false, abstract: false, final false
static inline void AddCommandBufferImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::CameraEvent  evt, ::System::IntPtr  buffer) ;

/// @brief Method BumpNonSerializedVersion, addr 0x1809ba810, size 0x5910, virtual false, abstract: false, final false
static inline void BumpNonSerializedVersion(::UnityEngine::Camera*  cam) ;

/// @brief Method CalculateObliqueMatrix, addr 0x182241030, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 CalculateObliqueMatrix(::UnityEngine::Vector4  clipPlane) ;

/// @brief Method CalculateObliqueMatrix_Injected, addr 0x182241020, size 0x10, virtual false, abstract: false, final false
static inline void CalculateObliqueMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector4>  clipPlane, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered, addr 0x1822410a0, size 0x30, virtual false, abstract: false, final false
inline void CopyStereoDeviceProjectionMatrixToNonJittered(::UnityEngine::Camera_StereoscopicEye  eye) ;

/// @brief Method CopyStereoDeviceProjectionMatrixToNonJittered_Injected, addr 0x182241090, size 0x10, virtual false, abstract: false, final false
static inline void CopyStereoDeviceProjectionMatrixToNonJittered_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Camera_StereoscopicEye  eye) ;

/// @brief Method FireOnPostRender, addr 0x1822410d0, size 0x30, virtual false, abstract: false, final false
static inline void FireOnPostRender(::UnityEngine::Camera*  cam) ;

/// @brief Method FireOnPreCull, addr 0x182241100, size 0x30, virtual false, abstract: false, final false
static inline void FireOnPreCull(::UnityEngine::Camera*  cam) ;

/// @brief Method FireOnPreRender, addr 0x182241130, size 0x30, virtual false, abstract: false, final false
static inline void FireOnPreRender(::UnityEngine::Camera*  cam) ;

/// @brief Method GetAllCameras, addr 0x1822411b0, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetAllCameras(::ArrayW<::UnityEngine::Camera*>  cameras) ;

/// @brief Method GetAllCamerasCount, addr 0x182241160, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetAllCamerasCount() ;

/// @brief Method GetAllCamerasImpl, addr 0x182241180, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetAllCamerasImpl(::by_ref<::ArrayW<::UnityEngine::Camera*>>  cam) ;

/// @brief Method GetAllCamerasImpl_Injected, addr 0x182241170, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetAllCamerasImpl_Injected(::by_ref<::ArrayW<::UnityEngine::Camera*>>  cam) ;

/// @brief Method GetCullingParameters_Internal, addr 0x182241230, size 0x20, virtual false, abstract: false, final false
static inline bool GetCullingParameters_Internal(::UnityEngine::Camera*  camera, bool  stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, int32_t  managedCullingParametersSize) ;

/// @brief Method GetCullingParameters_Internal_Injected, addr 0x182241220, size 0x10, virtual false, abstract: false, final false
static inline bool GetCullingParameters_Internal_Injected(::System::IntPtr  camera, bool  stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, int32_t  managedCullingParametersSize) ;

/// @brief Method GetLayerCullDistances, addr 0x182241260, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<float_t> GetLayerCullDistances() ;

/// @brief Method GetLayerCullDistances_Injected, addr 0x182241250, size 0x10, virtual false, abstract: false, final false
static inline void GetLayerCullDistances_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetStereoNonJitteredProjectionMatrix, addr 0x182241310, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetStereoNonJitteredProjectionMatrix(::UnityEngine::Camera_StereoscopicEye  eye) ;

/// @brief Method GetStereoNonJitteredProjectionMatrix_Injected, addr 0x182241300, size 0x10, virtual false, abstract: false, final false
static inline void GetStereoNonJitteredProjectionMatrix_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Camera_StereoscopicEye  eye, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetStereoProjectionMatrix, addr 0x182241380, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye  eye) ;

/// @brief Method GetStereoProjectionMatrix_Injected, addr 0x182241370, size 0x10, virtual false, abstract: false, final false
static inline void GetStereoProjectionMatrix_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Camera_StereoscopicEye  eye, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetStereoViewMatrix, addr 0x1822413f0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye  eye) ;

/// @brief Method GetStereoViewMatrix_Injected, addr 0x1822413e0, size 0x10, virtual false, abstract: false, final false
static inline void GetStereoViewMatrix_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Camera_StereoscopicEye  eye, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

static inline ::UnityEngine::Camera* New_ctor() ;

/// @brief Method RemoveCommandBuffer, addr 0x1822414e0, size 0x140, virtual false, abstract: false, final false
inline void RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method RemoveCommandBufferImpl, addr 0x182241460, size 0x80, virtual false, abstract: false, final false
inline void RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method RemoveCommandBufferImpl_Injected, addr 0x182241450, size 0x10, virtual false, abstract: false, final false
static inline void RemoveCommandBufferImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::CameraEvent  evt, ::System::IntPtr  buffer) ;

/// @brief Method Render, addr 0x182241630, size 0x30, virtual false, abstract: false, final false
inline void Render() ;

/// @brief Method Render_Injected, addr 0x182241620, size 0x10, virtual false, abstract: false, final false
static inline void Render_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ResetProjectionMatrix, addr 0x182241670, size 0x30, virtual false, abstract: false, final false
inline void ResetProjectionMatrix() ;

/// @brief Method ResetProjectionMatrix_Injected, addr 0x182241660, size 0x10, virtual false, abstract: false, final false
static inline void ResetProjectionMatrix_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ResetStereoProjectionMatrices, addr 0x1822416b0, size 0x30, virtual false, abstract: false, final false
inline void ResetStereoProjectionMatrices() ;

/// @brief Method ResetStereoProjectionMatrices_Injected, addr 0x1822416a0, size 0x10, virtual false, abstract: false, final false
static inline void ResetStereoProjectionMatrices_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ResetWorldToCameraMatrix, addr 0x1822416f0, size 0x30, virtual false, abstract: false, final false
inline void ResetWorldToCameraMatrix() ;

/// @brief Method ResetWorldToCameraMatrix_Injected, addr 0x1822416e0, size 0x10, virtual false, abstract: false, final false
static inline void ResetWorldToCameraMatrix_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ScreenPointToRay, addr 0x182241800, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector2  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenPointToRay, addr 0x182241730, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3  pos) ;

/// @brief Method ScreenPointToRay, addr 0x182241790, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenPointToRay_Injected, addr 0x182241720, size 0x10, virtual false, abstract: false, final false
static inline void ScreenPointToRay_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::by_ref<::UnityEngine::Ray>  ret) ;

/// @brief Method ScreenToViewportPoint, addr 0x182241870, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ScreenToViewportPoint_Injected, addr 0x182241860, size 0x10, virtual false, abstract: false, final false
static inline void ScreenToViewportPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method SetLayerCullDistances, addr 0x1822418d0, size 0xb0, virtual false, abstract: false, final false
inline void SetLayerCullDistances(::ArrayW<float_t>  d) ;

/// @brief Method SetLayerCullDistances_Injected, addr 0x1822418c0, size 0x10, virtual false, abstract: false, final false
static inline void SetLayerCullDistances_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  d) ;

/// @brief Method SetStereoProjectionMatrix, addr 0x182241990, size 0x40, virtual false, abstract: false, final false
inline void SetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye  eye, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method SetStereoProjectionMatrix_Injected, addr 0x182241980, size 0x10, virtual false, abstract: false, final false
static inline void SetStereoProjectionMatrix_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Camera_StereoscopicEye  eye, ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method SetStereoViewMatrix, addr 0x1822419e0, size 0x40, virtual false, abstract: false, final false
inline void SetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye  eye, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method SetStereoViewMatrix_Injected, addr 0x1822419d0, size 0x10, virtual false, abstract: false, final false
static inline void SetStereoViewMatrix_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Camera_StereoscopicEye  eye, ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method SetTargetBuffers, addr 0x182241a70, size 0x50, virtual false, abstract: false, final false
inline void SetTargetBuffers(::UnityEngine::RenderBuffer  colorBuffer, ::UnityEngine::RenderBuffer  depthBuffer) ;

/// @brief Method SetTargetBuffersImpl, addr 0x182241a30, size 0x40, virtual false, abstract: false, final false
inline void SetTargetBuffersImpl(::UnityEngine::RenderBuffer  color, ::UnityEngine::RenderBuffer  depth) ;

/// @brief Method SetTargetBuffersImpl_Injected, addr 0x182241a20, size 0x10, virtual false, abstract: false, final false
static inline void SetTargetBuffersImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RenderBuffer>  color, ::by_ref<::UnityEngine::RenderBuffer>  depth) ;

/// @brief Method SetupCurrent, addr 0x182241ad0, size 0x20, virtual false, abstract: false, final false
static inline void SetupCurrent(::UnityEngine::Camera*  cur) ;

/// @brief Method SetupCurrent_Injected, addr 0x182241ac0, size 0x10, virtual false, abstract: false, final false
static inline void SetupCurrent_Injected(::System::IntPtr  cur) ;

/// @brief Method SubmitRenderRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename RequestData>
inline void SubmitRenderRequest(RequestData  renderRequest) ;

/// @brief Method SubmitRenderRequestsInternal, addr 0x182241b00, size 0x30, virtual false, abstract: false, final false
inline void SubmitRenderRequestsInternal(::System::Object*  requests) ;

/// @brief Method SubmitRenderRequestsInternal_Injected, addr 0x182241af0, size 0x10, virtual false, abstract: false, final false
static inline void SubmitRenderRequestsInternal_Injected(::System::IntPtr  _unity_self, ::System::Object*  requests) ;

/// @brief Method TryGetCullingParameters, addr 0x182241b60, size 0x20, virtual false, abstract: false, final false
inline bool TryGetCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters) ;

/// @brief Method TryGetCullingParameters, addr 0x182241b30, size 0x30, virtual false, abstract: false, final false
inline bool TryGetCullingParameters(bool  stereoAware, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters) ;

/// @brief Method ViewportPointToRay, addr 0x182241b90, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector2  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ViewportPointToRay, addr 0x182241bf0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3  pos) ;

/// @brief Method ViewportPointToRay, addr 0x182241c50, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ViewportPointToRay_Injected, addr 0x182241b80, size 0x10, virtual false, abstract: false, final false
static inline void ViewportPointToRay_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::by_ref<::UnityEngine::Ray>  ret) ;

/// @brief Method ViewportToWorldPoint, addr 0x182241cd0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ViewportToWorldPoint, addr 0x182241d30, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ViewportToWorldPoint(::UnityEngine::Vector3  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ViewportToWorldPoint_Injected, addr 0x182241cc0, size 0x10, virtual false, abstract: false, final false
static inline void ViewportToWorldPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method WorldToScreenPoint, addr 0x182241da0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3  position) ;

/// @brief Method WorldToScreenPoint, addr 0x182241e00, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method WorldToScreenPoint_Injected, addr 0x182241d90, size 0x10, virtual false, abstract: false, final false
static inline void WorldToScreenPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method WorldToViewportPoint, addr 0x182241e70, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3  position) ;

/// @brief Method WorldToViewportPoint, addr 0x182241ed0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method WorldToViewportPoint_Injected, addr 0x182241e60, size 0x10, virtual false, abstract: false, final false
static inline void WorldToViewportPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::by_ref<::UnityEngine::Vector3>  ret) ;

constexpr uint32_t const& __cordl_internal_get_m_NonSerializedVersion() const;

constexpr uint32_t& __cordl_internal_get_m_NonSerializedVersion() ;

constexpr void __cordl_internal_set_m_NonSerializedVersion(uint32_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPostRender() ;

static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreCull() ;

static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreRender() ;

/// @brief Method get_actualRenderingPath, addr 0x182241f40, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderingPath get_actualRenderingPath() ;

/// @brief Method get_actualRenderingPath_Injected, addr 0x182241f30, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderingPath get_actualRenderingPath_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_allCameras, addr 0x182241f70, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Camera>> get_allCameras() ;

/// @brief Method get_allCamerasCount, addr 0x182241160, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_allCamerasCount() ;

/// @brief Method get_allowDynamicResolution, addr 0x182241fd0, size 0x30, virtual false, abstract: false, final false
inline bool get_allowDynamicResolution() ;

/// @brief Method get_allowDynamicResolution_Injected, addr 0x182241fc0, size 0x10, virtual false, abstract: false, final false
static inline bool get_allowDynamicResolution_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_allowHDR, addr 0x182242010, size 0x30, virtual false, abstract: false, final false
inline bool get_allowHDR() ;

/// @brief Method get_allowHDR_Injected, addr 0x182242000, size 0x10, virtual false, abstract: false, final false
static inline bool get_allowHDR_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_allowMSAA, addr 0x182242050, size 0x30, virtual false, abstract: false, final false
inline bool get_allowMSAA() ;

/// @brief Method get_allowMSAA_Injected, addr 0x182242040, size 0x10, virtual false, abstract: false, final false
static inline bool get_allowMSAA_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_aspect, addr 0x182242090, size 0x30, virtual false, abstract: false, final false
inline float_t get_aspect() ;

/// @brief Method get_aspect_Injected, addr 0x182242080, size 0x10, virtual false, abstract: false, final false
static inline float_t get_aspect_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_backgroundColor, addr 0x1822420d0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundColor_Injected, addr 0x1822420c0, size 0x10, virtual false, abstract: false, final false
static inline void get_backgroundColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_cameraToWorldMatrix, addr 0x182242120, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_cameraToWorldMatrix() ;

/// @brief Method get_cameraToWorldMatrix_Injected, addr 0x182242110, size 0x10, virtual false, abstract: false, final false
static inline void get_cameraToWorldMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_cameraType, addr 0x182242180, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::CameraType get_cameraType() ;

/// @brief Method get_cameraType_Injected, addr 0x182242170, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::CameraType get_cameraType_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_clearFlags, addr 0x1822421c0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::CameraClearFlags get_clearFlags() ;

/// @brief Method get_clearFlags_Injected, addr 0x1822421b0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::CameraClearFlags get_clearFlags_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_cullingMask, addr 0x182242200, size 0x30, virtual false, abstract: false, final false
inline int32_t get_cullingMask() ;

/// @brief Method get_cullingMask_Injected, addr 0x1822421f0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_cullingMask_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_current, addr 0x182242240, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_current() ;

/// @brief Method get_currentInternal, addr 0x182242240, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_currentInternal() ;

/// @brief Method get_currentInternal_Injected, addr 0x182242230, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_currentInternal_Injected() ;

/// @brief Method get_depth, addr 0x1822422b0, size 0x30, virtual false, abstract: false, final false
inline float_t get_depth() ;

/// @brief Method get_depthTextureMode, addr 0x182242270, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::DepthTextureMode get_depthTextureMode() ;

/// @brief Method get_depthTextureMode_Injected, addr 0x182242260, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::DepthTextureMode get_depthTextureMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_depth_Injected, addr 0x1822422a0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_depth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_eventMask, addr 0x1822422f0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_eventMask() ;

/// @brief Method get_eventMask_Injected, addr 0x1822422e0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_eventMask_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_farClipPlane, addr 0x182242330, size 0x30, virtual false, abstract: false, final false
inline float_t get_farClipPlane() ;

/// @brief Method get_farClipPlane_Injected, addr 0x182242320, size 0x10, virtual false, abstract: false, final false
static inline float_t get_farClipPlane_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_fieldOfView, addr 0x182242370, size 0x30, virtual false, abstract: false, final false
inline float_t get_fieldOfView() ;

/// @brief Method get_fieldOfView_Injected, addr 0x182242360, size 0x10, virtual false, abstract: false, final false
static inline float_t get_fieldOfView_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isProcessingRenderRequest, addr 0x1822423b0, size 0x30, virtual false, abstract: false, final false
inline bool get_isProcessingRenderRequest() ;

/// @brief Method get_isProcessingRenderRequest_Injected, addr 0x1822423a0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isProcessingRenderRequest_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_layerCullDistances, addr 0x1822423e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_layerCullDistances() ;

/// @brief Method get_main, addr 0x182242400, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_main() ;

/// @brief Method get_main_Injected, addr 0x1822423f0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_main_Injected() ;

/// @brief Method get_nearClipPlane, addr 0x182242430, size 0x30, virtual false, abstract: false, final false
inline float_t get_nearClipPlane() ;

/// @brief Method get_nearClipPlane_Injected, addr 0x182242420, size 0x10, virtual false, abstract: false, final false
static inline float_t get_nearClipPlane_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_opaqueSortMode, addr 0x182242470, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode() ;

/// @brief Method get_opaqueSortMode_Injected, addr 0x182242460, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_orthographic, addr 0x1822424f0, size 0x30, virtual false, abstract: false, final false
inline bool get_orthographic() ;

/// @brief Method get_orthographicSize, addr 0x1822424b0, size 0x30, virtual false, abstract: false, final false
inline float_t get_orthographicSize() ;

/// @brief Method get_orthographicSize_Injected, addr 0x1822424a0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_orthographicSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_orthographic_Injected, addr 0x1822424e0, size 0x10, virtual false, abstract: false, final false
static inline bool get_orthographic_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pixelHeight, addr 0x182242530, size 0x30, virtual false, abstract: false, final false
inline int32_t get_pixelHeight() ;

/// @brief Method get_pixelHeight_Injected, addr 0x182242520, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_pixelHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pixelRect, addr 0x182242570, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_pixelRect() ;

/// @brief Method get_pixelRect_Injected, addr 0x182242560, size 0x10, virtual false, abstract: false, final false
static inline void get_pixelRect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  ret) ;

/// @brief Method get_pixelWidth, addr 0x1822425c0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_pixelWidth() ;

/// @brief Method get_pixelWidth_Injected, addr 0x1822425b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_pixelWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_projectionMatrix, addr 0x182242600, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_projectionMatrix() ;

/// @brief Method get_projectionMatrix_Injected, addr 0x1822425f0, size 0x10, virtual false, abstract: false, final false
static inline void get_projectionMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_rect, addr 0x182242660, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_rect() ;

/// @brief Method get_rect_Injected, addr 0x182242650, size 0x10, virtual false, abstract: false, final false
static inline void get_rect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  ret) ;

/// @brief Method get_scaledPixelHeight, addr 0x1822426b0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_scaledPixelHeight() ;

/// @brief Method get_scaledPixelHeight_Injected, addr 0x1822426a0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_scaledPixelHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_scaledPixelWidth, addr 0x1822426f0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_scaledPixelWidth() ;

/// @brief Method get_scaledPixelWidth_Injected, addr 0x1822426e0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_scaledPixelWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stereoActiveEye, addr 0x182242730, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Camera_MonoOrStereoscopicEye get_stereoActiveEye() ;

/// @brief Method get_stereoActiveEye_Injected, addr 0x182242720, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Camera_MonoOrStereoscopicEye get_stereoActiveEye_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stereoEnabled, addr 0x182242770, size 0x30, virtual false, abstract: false, final false
inline bool get_stereoEnabled() ;

/// @brief Method get_stereoEnabled_Injected, addr 0x182242760, size 0x10, virtual false, abstract: false, final false
static inline bool get_stereoEnabled_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stereoTargetEye, addr 0x1822427b0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEye() ;

/// @brief Method get_stereoTargetEyeInternal, addr 0x1822427b0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEyeInternal() ;

/// @brief Method get_stereoTargetEyeInternal_Injected, addr 0x1822427a0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEyeInternal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_targetDisplay, addr 0x1822427f0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_targetDisplay() ;

/// @brief Method get_targetDisplay_Injected, addr 0x1822427e0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_targetDisplay_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_targetTexture, addr 0x182242830, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture() ;

/// @brief Method get_targetTexture_Injected, addr 0x182242820, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_targetTexture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useOcclusionCulling, addr 0x182242880, size 0x30, virtual false, abstract: false, final false
inline bool get_useOcclusionCulling() ;

/// @brief Method get_useOcclusionCulling_Injected, addr 0x182242870, size 0x10, virtual false, abstract: false, final false
static inline bool get_useOcclusionCulling_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_usePhysicalProperties, addr 0x1822428c0, size 0x30, virtual false, abstract: false, final false
inline bool get_usePhysicalProperties() ;

/// @brief Method get_usePhysicalProperties_Injected, addr 0x1822428b0, size 0x10, virtual false, abstract: false, final false
static inline bool get_usePhysicalProperties_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_worldToCameraMatrix, addr 0x182242900, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_worldToCameraMatrix() ;

/// @brief Method get_worldToCameraMatrix_Injected, addr 0x1822428f0, size 0x10, virtual false, abstract: false, final false
static inline void get_worldToCameraMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

static inline void setStaticF_onPostRender(::UnityEngine::Camera_CameraCallback*  value) ;

static inline void setStaticF_onPreCull(::UnityEngine::Camera_CameraCallback*  value) ;

static inline void setStaticF_onPreRender(::UnityEngine::Camera_CameraCallback*  value) ;

/// @brief Method set_allowDynamicResolution, addr 0x182242960, size 0x30, virtual false, abstract: false, final false
inline void set_allowDynamicResolution(bool  value) ;

/// @brief Method set_allowDynamicResolution_Injected, addr 0x182242950, size 0x10, virtual false, abstract: false, final false
static inline void set_allowDynamicResolution_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_allowHDR, addr 0x1822429a0, size 0x30, virtual false, abstract: false, final false
inline void set_allowHDR(bool  value) ;

/// @brief Method set_allowHDR_Injected, addr 0x182242990, size 0x10, virtual false, abstract: false, final false
static inline void set_allowHDR_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_allowMSAA, addr 0x1822429e0, size 0x30, virtual false, abstract: false, final false
inline void set_allowMSAA(bool  value) ;

/// @brief Method set_allowMSAA_Injected, addr 0x1822429d0, size 0x10, virtual false, abstract: false, final false
static inline void set_allowMSAA_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_aspect, addr 0x182242a20, size 0x40, virtual false, abstract: false, final false
inline void set_aspect(float_t  value) ;

/// @brief Method set_aspect_Injected, addr 0x182242a10, size 0x10, virtual false, abstract: false, final false
static inline void set_aspect_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_backgroundColor, addr 0x182242a70, size 0x30, virtual false, abstract: false, final false
inline void set_backgroundColor(::UnityEngine::Color  value) ;

/// @brief Method set_backgroundColor_Injected, addr 0x182242a60, size 0x10, virtual false, abstract: false, final false
static inline void set_backgroundColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_cameraType, addr 0x182242ab0, size 0x30, virtual false, abstract: false, final false
inline void set_cameraType(::UnityEngine::CameraType  value) ;

/// @brief Method set_cameraType_Injected, addr 0x182242aa0, size 0x10, virtual false, abstract: false, final false
static inline void set_cameraType_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CameraType  value) ;

/// @brief Method set_clearFlags, addr 0x182242af0, size 0x30, virtual false, abstract: false, final false
inline void set_clearFlags(::UnityEngine::CameraClearFlags  value) ;

/// @brief Method set_clearFlags_Injected, addr 0x182242ae0, size 0x10, virtual false, abstract: false, final false
static inline void set_clearFlags_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CameraClearFlags  value) ;

/// @brief Method set_cullingMask, addr 0x182242b30, size 0x30, virtual false, abstract: false, final false
inline void set_cullingMask(int32_t  value) ;

/// @brief Method set_cullingMask_Injected, addr 0x182242b20, size 0x10, virtual false, abstract: false, final false
static inline void set_cullingMask_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_cullingMatrix, addr 0x182242b70, size 0x30, virtual false, abstract: false, final false
inline void set_cullingMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_cullingMatrix_Injected, addr 0x182242b60, size 0x10, virtual false, abstract: false, final false
static inline void set_cullingMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method set_depthTextureMode, addr 0x182242bb0, size 0x30, virtual false, abstract: false, final false
inline void set_depthTextureMode(::UnityEngine::DepthTextureMode  value) ;

/// @brief Method set_depthTextureMode_Injected, addr 0x182242ba0, size 0x10, virtual false, abstract: false, final false
static inline void set_depthTextureMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::DepthTextureMode  value) ;

/// @brief Method set_farClipPlane, addr 0x182242bf0, size 0x40, virtual false, abstract: false, final false
inline void set_farClipPlane(float_t  value) ;

/// @brief Method set_farClipPlane_Injected, addr 0x182242be0, size 0x10, virtual false, abstract: false, final false
static inline void set_farClipPlane_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_fieldOfView, addr 0x182242c40, size 0x40, virtual false, abstract: false, final false
inline void set_fieldOfView(float_t  value) ;

/// @brief Method set_fieldOfView_Injected, addr 0x182242c30, size 0x10, virtual false, abstract: false, final false
static inline void set_fieldOfView_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_focalLength, addr 0x182242c90, size 0x40, virtual false, abstract: false, final false
inline void set_focalLength(float_t  value) ;

/// @brief Method set_focalLength_Injected, addr 0x182242c80, size 0x10, virtual false, abstract: false, final false
static inline void set_focalLength_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_forceIntoRenderTexture, addr 0x182242ce0, size 0x30, virtual false, abstract: false, final false
inline void set_forceIntoRenderTexture(bool  value) ;

/// @brief Method set_forceIntoRenderTexture_Injected, addr 0x182242cd0, size 0x10, virtual false, abstract: false, final false
static inline void set_forceIntoRenderTexture_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_layerCullDistances, addr 0x182242d10, size 0xc0, virtual false, abstract: false, final false
inline void set_layerCullDistances(::ArrayW<float_t>  value) ;

/// @brief Method set_layerCullSpherical, addr 0x182242e10, size 0xb0, virtual false, abstract: false, final false
inline void set_layerCullSpherical(bool  value) ;

/// @brief Method set_layerCullSphericalInternal, addr 0x182242de0, size 0x30, virtual false, abstract: false, final false
inline void set_layerCullSphericalInternal(bool  value) ;

/// @brief Method set_layerCullSphericalInternal_Injected, addr 0x182242dd0, size 0x10, virtual false, abstract: false, final false
static inline void set_layerCullSphericalInternal_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_nearClipPlane, addr 0x182242ed0, size 0x40, virtual false, abstract: false, final false
inline void set_nearClipPlane(float_t  value) ;

/// @brief Method set_nearClipPlane_Injected, addr 0x182242ec0, size 0x10, virtual false, abstract: false, final false
static inline void set_nearClipPlane_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_nonJitteredProjectionMatrix, addr 0x182242f20, size 0x30, virtual false, abstract: false, final false
inline void set_nonJitteredProjectionMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_nonJitteredProjectionMatrix_Injected, addr 0x182242f10, size 0x10, virtual false, abstract: false, final false
static inline void set_nonJitteredProjectionMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method set_orthographic, addr 0x182242fb0, size 0x30, virtual false, abstract: false, final false
inline void set_orthographic(bool  value) ;

/// @brief Method set_orthographicSize, addr 0x182242f60, size 0x40, virtual false, abstract: false, final false
inline void set_orthographicSize(float_t  value) ;

/// @brief Method set_orthographicSize_Injected, addr 0x182242f50, size 0x10, virtual false, abstract: false, final false
static inline void set_orthographicSize_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_orthographic_Injected, addr 0x182242fa0, size 0x10, virtual false, abstract: false, final false
static inline void set_orthographic_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_projectionMatrix, addr 0x182242ff0, size 0x30, virtual false, abstract: false, final false
inline void set_projectionMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_projectionMatrix_Injected, addr 0x182242fe0, size 0x10, virtual false, abstract: false, final false
static inline void set_projectionMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method set_sensorSize, addr 0x182243030, size 0x40, virtual false, abstract: false, final false
inline void set_sensorSize(::UnityEngine::Vector2  value) ;

/// @brief Method set_sensorSize_Injected, addr 0x182243020, size 0x10, virtual false, abstract: false, final false
static inline void set_sensorSize_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_targetTexture, addr 0x182243080, size 0x50, virtual false, abstract: false, final false
inline void set_targetTexture(::UnityEngine::RenderTexture*  value) ;

/// @brief Method set_targetTexture_Injected, addr 0x182243070, size 0x10, virtual false, abstract: false, final false
static inline void set_targetTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_useJitteredProjectionMatrixForTransparentRendering, addr 0x1822430e0, size 0x30, virtual false, abstract: false, final false
inline void set_useJitteredProjectionMatrixForTransparentRendering(bool  value) ;

/// @brief Method set_useJitteredProjectionMatrixForTransparentRendering_Injected, addr 0x1822430d0, size 0x10, virtual false, abstract: false, final false
static inline void set_useJitteredProjectionMatrixForTransparentRendering_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useOcclusionCulling, addr 0x182243120, size 0x30, virtual false, abstract: false, final false
inline void set_useOcclusionCulling(bool  value) ;

/// @brief Method set_useOcclusionCulling_Injected, addr 0x182243110, size 0x10, virtual false, abstract: false, final false
static inline void set_useOcclusionCulling_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_usePhysicalProperties, addr 0x182243160, size 0x30, virtual false, abstract: false, final false
inline void set_usePhysicalProperties(bool  value) ;

/// @brief Method set_usePhysicalProperties_Injected, addr 0x182243150, size 0x10, virtual false, abstract: false, final false
static inline void set_usePhysicalProperties_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_worldToCameraMatrix, addr 0x1822431a0, size 0x30, virtual false, abstract: false, final false
inline void set_worldToCameraMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_worldToCameraMatrix_Injected, addr 0x182243190, size 0x10, virtual false, abstract: false, final false
static inline void set_worldToCameraMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Camera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Camera(Camera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Camera(Camera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10446};

/// @brief Field kMaxAperture offset 0xffffffff size 0x4
static constexpr float_t  kMaxAperture{static_cast<float_t>(32.0f)};

/// @brief Field kMaxBladeCount offset 0xffffffff size 0x4
static constexpr int32_t  kMaxBladeCount{static_cast<int32_t>(0xb)};

/// @brief Field kMinAperture offset 0xffffffff size 0x4
static constexpr float_t  kMinAperture{static_cast<float_t>(0.7f)};

/// @brief Field kMinBladeCount offset 0xffffffff size 0x4
static constexpr int32_t  kMinBladeCount{static_cast<int32_t>(0x3)};

/// @brief Field m_NonSerializedVersion, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___m_NonSerializedVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera, ___m_NonSerializedVersion) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Camera) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
