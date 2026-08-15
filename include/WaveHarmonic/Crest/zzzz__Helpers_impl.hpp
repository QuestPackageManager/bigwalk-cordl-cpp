#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Helpers.hpp"
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormatUsage_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Helpers_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormatUsage_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineAsset_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipeline_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__FindObjectsInactive_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__WaitForEndOfFrame_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Helpers_def.hpp"
inline void WaveHarmonic::Crest::Helpers_ShaderIDs::setStaticF_s_MainTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_MainTexture", ::WaveHarmonic::Crest::Helpers_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::Helpers_ShaderIDs::getStaticF_s_MainTexture()  {
return ::cordl_internals::getStaticField<int32_t, "s_MainTexture", ::WaveHarmonic::Crest::Helpers_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Helpers_ShaderIDs::Helpers_ShaderIDs()   {
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Undo_Helpers_Symbols::Undo_Helpers_Symbols()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers_Undo.RecordObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&::WaveHarmonic::Crest::Helpers_Undo::RecordObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers_Undo*>(),
                        {"RecordObject", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers_Undo.SetSiblingIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, int32_t, ::StringW)>(&::WaveHarmonic::Crest::Helpers_Undo::SetSiblingIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers_Undo*>(),
                        {"SetSiblingIndex", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers_Undo.RegisterCreatedObjectUndo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&::WaveHarmonic::Crest::Helpers_Undo::RegisterCreatedObjectUndo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers_Undo*>(),
                        {"RegisterCreatedObjectUndo", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Helpers_Undo::RecordObject(::UnityEngine::Object*  object, ::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers_Undo*>(),
                        {"RecordObject", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, object, label);
}
inline void WaveHarmonic::Crest::Helpers_Undo::SetSiblingIndex(::UnityEngine::Transform*  transform, int32_t  index, ::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers_Undo*>(),
                        {"SetSiblingIndex", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, index, label);
}
inline void WaveHarmonic::Crest::Helpers_Undo::RegisterCreatedObjectUndo(::UnityEngine::Object*  object, ::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers_Undo*>(),
                        {"RegisterCreatedObjectUndo", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, object, label);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Helpers_Undo::Helpers_Undo()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.get_PlaneMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::WaveHarmonic::Crest::Helpers::get_PlaneMesh)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18256ae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_PlaneMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.get_QuadMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::WaveHarmonic::Crest::Helpers::get_QuadMesh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18256aeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_QuadMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.get_SphereMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::WaveHarmonic::Crest::Helpers::get_SphereMesh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18256af90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_SphereMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.SiblingIndexComparison
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::Helpers::SiblingIndexComparison)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256a160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SiblingIndexComparison", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.DuplicateComparison
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::Helpers::DuplicateComparison)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825688a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"DuplicateComparison", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.FindObjectsByType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*, ::UnityEngine::FindObjectsInactive)>(&::WaveHarmonic::Crest::Helpers::FindObjectsByType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182568900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"FindObjectsByType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::FindObjectsInactive>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.CalculateResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2, int32_t)>(&::WaveHarmonic::Crest::Helpers::CalculateResolution)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182568170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateResolution", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.CalculateResolutionFromTexelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2, float_t, int32_t)>(&::WaveHarmonic::Crest::Helpers::CalculateResolutionFromTexelSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825680e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateResolutionFromTexelSize", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.CalculateResolutionFromTexelDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2, float_t, int32_t)>(&::WaveHarmonic::Crest::Helpers::CalculateResolutionFromTexelDensity)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182568030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateResolutionFromTexelDensity", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.RotateAndEncapsulateXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::WaveHarmonic::Crest::Helpers::RotateAndEncapsulateXZ)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182569c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RotateAndEncapsulateXZ", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.get_WaitForEndOfFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::WaitForEndOfFrame* (*)()>(&::WaveHarmonic::Crest::Helpers::get_WaitForEndOfFrame)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256b040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_WaitForEndOfFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.Fmod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::WaveHarmonic::Crest::Helpers::Fmod)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182568910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Fmod", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.NonLinearToLinear01Depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::Helpers::NonLinearToLinear01Depth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825691f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"NonLinearToLinear01Depth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.NonLinearToLinearEyeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::Helpers::NonLinearToLinearEyeDepth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182569210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"NonLinearToLinearEyeDepth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.LinearDepthToNonLinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::Helpers::LinearDepthToNonLinear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825691c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"LinearDepthToNonLinear", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.EyeDepthToNonLinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::Helpers::EyeDepthToNonLinear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825688d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"EyeDepthToNonLinear", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.GetZBufferParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Helpers::GetZBufferParameters)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x182568de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetZBufferParameters", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.InstantiatePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*)>(&::WaveHarmonic::Crest::Helpers::InstantiatePrefab)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182568f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"InstantiatePrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.StartsWithNoAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::WaveHarmonic::Crest::Helpers::StartsWithNoAlloc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18256a180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"StartsWithNoAlloc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.ReadRenderTexturePixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTexture*>, ::by_ref<::UnityEngine::Texture2D*>, int32_t)>(&::WaveHarmonic::Crest::Helpers::ReadRenderTexturePixels)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x182569420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"ReadRenderTexturePixels", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.ReadRenderTexturePixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTexture*>, ::by_ref<::UnityEngine::Texture2D*>, int32_t, int32_t, int32_t)>(&::WaveHarmonic::Crest::Helpers::ReadRenderTexturePixel)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x182569230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"ReadRenderTexturePixel", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::WaveHarmonic::Crest::Helpers::Blit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182567c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.ConvertDepthBufferValueToDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Camera*, float_t)>(&::WaveHarmonic::Crest::Helpers::ConvertDepthBufferValueToDistance)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1825684c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"ConvertDepthBufferValueToDistance", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.IsMSAAEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Helpers::IsMSAAEnabled)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182568fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"IsMSAAEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.IsIntelGPU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::Helpers::IsIntelGPU)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182568f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"IsIntelGPU", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.MaskIncludesLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::Helpers::MaskIncludesLayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825691e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"MaskIncludesLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.get_IsWebGPU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::Helpers::get_IsWebGPU)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_IsWebGPU", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.get_RequiresCustomClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::Helpers::get_RequiresCustomClear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256af60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_RequiresCustomClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.SupportsRandomWriteOnRenderTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::WaveHarmonic::Crest::Helpers::SupportsRandomWriteOnRenderTextureFormat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18256a210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SupportsRandomWriteOnRenderTextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.GetWebGPUTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::WaveHarmonic::Crest::Helpers::GetWebGPUTextureFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182568db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetWebGPUTextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.GetCompatibleTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage, ::StringW, bool)>(&::WaveHarmonic::Crest::Helpers::GetCompatibleTextureFormat)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182568960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetCompatibleTextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUsage>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.GetCompatibleTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(&::WaveHarmonic::Crest::Helpers::GetCompatibleTextureFormat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182568aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetCompatibleTextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.SetGlobalKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::WaveHarmonic::Crest::Helpers::SetGlobalKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256a070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SetGlobalKeyword", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.RenderTargetIdentifierXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTexture*>, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>)>(&::WaveHarmonic::Crest::Helpers::RenderTargetIdentifierXR)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825699f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderTargetIdentifierXR", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.RenderTargetIdentifierXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (*)(int32_t)>(&::WaveHarmonic::Crest::Helpers::RenderTargetIdentifierXR)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825699b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderTargetIdentifierXR", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.CreateRenderTargetTextureReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTexture*>, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>)>(&::WaveHarmonic::Crest::Helpers::CreateRenderTargetTextureReference)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825685c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CreateRenderTargetTextureReference", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.SafeCreateRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTexture*>, ::UnityEngine::RenderTextureDescriptor)>(&::WaveHarmonic::Crest::Helpers::SafeCreateRenderTexture)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182569d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SafeCreateRenderTexture", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.SafeCreateRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::UnityEngine::RenderTexture*>, ::UnityEngine::RenderTextureDescriptor)>(&::WaveHarmonic::Crest::Helpers::SafeCreateRenderTexture)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182569e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SafeCreateRenderTexture", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.ClearRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, ::UnityEngine::Color, bool, bool)>(&::WaveHarmonic::Crest::Helpers::ClearRenderTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182568400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"ClearRenderTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.VerticallyFlipRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, bool)>(&::WaveHarmonic::Crest::Helpers::VerticallyFlipRenderTexture)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18256aa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"VerticallyFlipRenderTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.RenderTargetTextureNeedsUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTextureDescriptor)>(&::WaveHarmonic::Crest::Helpers::RenderTargetTextureNeedsUpdating)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182569a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderTargetTextureNeedsUpdating", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.RenderTextureNeedsUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::WaveHarmonic::Crest::Helpers::RenderTextureNeedsUpdating)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182569b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderTextureNeedsUpdating", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.RenderTextureNeedsUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RenderTextureDescriptor, ::UnityEngine::RenderTextureDescriptor)>(&::WaveHarmonic::Crest::Helpers::RenderTextureNeedsUpdating)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182569c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderTextureNeedsUpdating", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.CalculateMipMapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::WaveHarmonic::Crest::Helpers::CalculateMipMapCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182567ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateMipMapCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::WaveHarmonic::Crest::Helpers::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182568490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Clear", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, bool)>(&::WaveHarmonic::Crest::Helpers::Destroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1825687f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.DestroyGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, bool)>(&::WaveHarmonic::Crest::Helpers::DestroyGameObject)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182568680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"DestroyGameObject", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::CommandBuffer*>)>(&::WaveHarmonic::Crest::Helpers::Destroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182568790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Destroy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CommandBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::ComputeBuffer*>)>(&::WaveHarmonic::Crest::Helpers::Destroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825687c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Destroy", {}, {::i2c::type_of<::by_ref<::UnityEngine::ComputeBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.CalculateFrustumPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::ArrayW<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::Helpers::CalculateFrustumPoints)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x182567ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateFrustumPoints", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.CalculateFrustumPlanesAndPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::ArrayW<::UnityEngine::Plane>, ::ArrayW<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::Helpers::CalculateFrustumPlanesAndPoints)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182567cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateFrustumPlanesAndPoints", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.TestPointsAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Bounds)>(&::WaveHarmonic::Crest::Helpers::TestPointsAABB)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18256a490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"TestPointsAABB", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.TestPlanesAndPointsAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Plane>, ::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Bounds)>(&::WaveHarmonic::Crest::Helpers::TestPlanesAndPointsAABB)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18256a280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"TestPlanesAndPointsAABB", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.CalculateWorldToCameraMatrixRHS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::WaveHarmonic::Crest::Helpers::CalculateWorldToCameraMatrixRHS)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1825681e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateWorldToCameraMatrixRHS", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::Helpers::Blit)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182567b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, int32_t, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::Helpers::Blit)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1825679c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.ScaleViewport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*)>(&::WaveHarmonic::Crest::Helpers::ScaleViewport)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182569f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"ScaleViewport", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.SetShaderVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, int32_t, ::UnityEngine::Vector4, bool)>(&::WaveHarmonic::Crest::Helpers::SetShaderVector)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18256a110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SetShaderVector", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.SetShaderInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, int32_t, int32_t, bool)>(&::WaveHarmonic::Crest::Helpers::SetShaderInteger)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256a0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SetShaderInteger", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.SetShaderFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, int32_t, float_t, bool)>(&::WaveHarmonic::Crest::Helpers::SetShaderFloat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256a090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SetShaderFloat", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.GetGlobalBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::WaveHarmonic::Crest::Helpers::GetGlobalBoolean)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182568af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetGlobalBoolean", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.SetGlobalBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::WaveHarmonic::Crest::Helpers::SetGlobalBoolean)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256a050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SetGlobalBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.RenderCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Helpers::RenderCamera)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182569870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.UniversalRendererData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>> (*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*)>(&::WaveHarmonic::Crest::Helpers::UniversalRendererData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256aa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"UniversalRendererData", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.GetRendererIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Helpers::GetRendererIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182568b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetRendererIndex", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.IsSSAOEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Helpers::IsSSAOEnabled)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1825690c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"IsSSAOEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.UniversalRenderCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*, int32_t)>(&::WaveHarmonic::Crest::Helpers::UniversalRenderCamera)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18256a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"UniversalRenderCamera", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.UniversalRenderCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*, int32_t, bool)>(&::WaveHarmonic::Crest::Helpers::UniversalRenderCamera)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x18256a610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"UniversalRenderCamera", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.RenderCameraWithoutCustomPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Helpers::RenderCameraWithoutCustomPasses)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x182569600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderCameraWithoutCustomPasses", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.RenderCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::ScriptableRenderContext, int32_t, bool)>(&::WaveHarmonic::Crest::Helpers::RenderCamera)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182569910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Helpers.GetTerrainAtPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Terrain> (*)(::UnityEngine::Vector2)>(&::WaveHarmonic::Crest::Helpers::GetTerrainAtPosition)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x182568bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetTerrainAtPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_Plane(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_Plane", ::WaveHarmonic::Crest::Helpers*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> WaveHarmonic::Crest::Helpers::getStaticF_s_Plane()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_Plane", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_Quad(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_Quad", ::WaveHarmonic::Crest::Helpers*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> WaveHarmonic::Crest::Helpers::getStaticF_s_Quad()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_Quad", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_SphereMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_SphereMesh", ::WaveHarmonic::Crest::Helpers*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> WaveHarmonic::Crest::Helpers::getStaticF_s_SphereMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_SphereMesh", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_AnyMethod(::System::Reflection::BindingFlags  value)  {
::cordl_internals::setStaticField<::System::Reflection::BindingFlags, "s_AnyMethod", ::WaveHarmonic::Crest::Helpers*>(std::forward<::System::Reflection::BindingFlags>(value));
}
inline ::System::Reflection::BindingFlags WaveHarmonic::Crest::Helpers::getStaticF_s_AnyMethod()  {
return ::cordl_internals::getStaticField<::System::Reflection::BindingFlags, "s_AnyMethod", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF__WaitForEndOfFrame_k__BackingField(::UnityEngine::WaitForEndOfFrame*  value)  {
::cordl_internals::setStaticField<::UnityEngine::WaitForEndOfFrame*, "<WaitForEndOfFrame>k__BackingField", ::WaveHarmonic::Crest::Helpers*>(std::forward<::UnityEngine::WaitForEndOfFrame*>(value));
}
inline ::UnityEngine::WaitForEndOfFrame* WaveHarmonic::Crest::Helpers::getStaticF__WaitForEndOfFrame_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::WaitForEndOfFrame*, "<WaitForEndOfFrame>k__BackingField", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_FallbackGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::GraphicsFormat, "s_FallbackGraphicsFormat", ::WaveHarmonic::Crest::Helpers*>(std::forward<::UnityEngine::Experimental::Rendering::GraphicsFormat>(value));
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Helpers::getStaticF_s_FallbackGraphicsFormat()  {
return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::GraphicsFormat, "s_FallbackGraphicsFormat", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_DataGraphicsFormatUsage(::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  value)  {
::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::GraphicsFormatUsage, "s_DataGraphicsFormatUsage", ::WaveHarmonic::Crest::Helpers*>(std::forward<::UnityEngine::Experimental::Rendering::GraphicsFormatUsage>(value));
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage WaveHarmonic::Crest::Helpers::getStaticF_s_DataGraphicsFormatUsage()  {
return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::GraphicsFormatUsage, "s_DataGraphicsFormatUsage", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_ScaleMatrix(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setStaticField<::UnityEngine::Matrix4x4, "s_ScaleMatrix", ::WaveHarmonic::Crest::Helpers*>(std::forward<::UnityEngine::Matrix4x4>(value));
}
inline ::UnityEngine::Matrix4x4 WaveHarmonic::Crest::Helpers::getStaticF_s_ScaleMatrix()  {
return ::cordl_internals::getStaticField<::UnityEngine::Matrix4x4, "s_ScaleMatrix", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_RenderFeatureActiveStates(::System::Collections::Generic::List_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<bool>*, "s_RenderFeatureActiveStates", ::WaveHarmonic::Crest::Helpers*>(std::forward<::System::Collections::Generic::List_1<bool>*>(value));
}
inline ::System::Collections::Generic::List_1<bool>* WaveHarmonic::Crest::Helpers::getStaticF_s_RenderFeatureActiveStates()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<bool>*, "s_RenderFeatureActiveStates", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_RendererIndex(::System::Reflection::FieldInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::FieldInfo*, "s_RendererIndex", ::WaveHarmonic::Crest::Helpers*>(std::forward<::System::Reflection::FieldInfo*>(value));
}
inline ::System::Reflection::FieldInfo* WaveHarmonic::Crest::Helpers::getStaticF_s_RendererIndex()  {
return ::cordl_internals::getStaticField<::System::Reflection::FieldInfo*, "s_RendererIndex", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_RenderSingleCameraRequest(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*, "s_RenderSingleCameraRequest", ::WaveHarmonic::Crest::Helpers*>(std::forward<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*>(value));
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest* WaveHarmonic::Crest::Helpers::getStaticF_s_RenderSingleCameraRequest()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*, "s_RenderSingleCameraRequest", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_RenderStandardRequest(::UnityEngine::Rendering::RenderPipeline_StandardRequest*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderPipeline_StandardRequest*, "s_RenderStandardRequest", ::WaveHarmonic::Crest::Helpers*>(std::forward<::UnityEngine::Rendering::RenderPipeline_StandardRequest*>(value));
}
inline ::UnityEngine::Rendering::RenderPipeline_StandardRequest* WaveHarmonic::Crest::Helpers::getStaticF_s_RenderStandardRequest()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderPipeline_StandardRequest*, "s_RenderStandardRequest", ::WaveHarmonic::Crest::Helpers*>();
}
inline void WaveHarmonic::Crest::Helpers::setStaticF_s_Terrains(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*, "s_Terrains", ::WaveHarmonic::Crest::Helpers*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* WaveHarmonic::Crest::Helpers::getStaticF_s_Terrains()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*, "s_Terrains", ::WaveHarmonic::Crest::Helpers*>();
}
inline ::UnityW<::UnityEngine::Mesh> WaveHarmonic::Crest::Helpers::get_PlaneMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_PlaneMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> WaveHarmonic::Crest::Helpers::get_QuadMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_QuadMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> WaveHarmonic::Crest::Helpers::get_SphereMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_SphereMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::Helpers::SiblingIndexComparison(int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SiblingIndexComparison", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline int32_t WaveHarmonic::Crest::Helpers::DuplicateComparison(int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"DuplicateComparison", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> WaveHarmonic::Crest::Helpers::FindObjectsByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  inactive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"FindObjectsByType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::FindObjectsInactive>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, type, inactive);
}
template<typename T>
inline ::ArrayW<T> WaveHarmonic::Crest::Helpers::FindObjectsByType(::UnityEngine::FindObjectsInactive  inactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                    {"FindObjectsByType", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::FindObjectsInactive>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, inactive);
}
inline ::UnityEngine::Vector2Int WaveHarmonic::Crest::Helpers::CalculateResolution(::UnityEngine::Vector2  resolution, int32_t  maximum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateResolution", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, resolution, maximum);
}
inline ::UnityEngine::Vector2Int WaveHarmonic::Crest::Helpers::CalculateResolutionFromTexelSize(::UnityEngine::Vector2  worldSize, float_t  texelSize, int32_t  maximum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateResolutionFromTexelSize", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, worldSize, texelSize, maximum);
}
inline ::UnityEngine::Vector2Int WaveHarmonic::Crest::Helpers::CalculateResolutionFromTexelDensity(::UnityEngine::Vector2  worldSize, float_t  texelDensity, int32_t  maximum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateResolutionFromTexelDensity", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, worldSize, texelDensity, maximum);
}
inline ::UnityEngine::Vector2 WaveHarmonic::Crest::Helpers::RotateAndEncapsulateXZ(::UnityEngine::Vector2  size, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RotateAndEncapsulateXZ", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, size, angle);
}
template<typename T>
inline T WaveHarmonic::Crest::Helpers::GetCustomAttribute(::System::Type*  type)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                    {"GetCustomAttribute", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Type*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, type);
}
inline ::UnityEngine::WaitForEndOfFrame* WaveHarmonic::Crest::Helpers::get_WaitForEndOfFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_WaitForEndOfFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitForEndOfFrame*>(nullptr, ___internal_method);
}
inline float_t WaveHarmonic::Crest::Helpers::Fmod(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Fmod", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, y);
}
inline float_t WaveHarmonic::Crest::Helpers::NonLinearToLinear01Depth(float_t  depth, ::UnityEngine::Vector4  zBufferParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"NonLinearToLinear01Depth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, depth, zBufferParameters);
}
inline float_t WaveHarmonic::Crest::Helpers::NonLinearToLinearEyeDepth(float_t  depth, ::UnityEngine::Vector4  zBufferParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"NonLinearToLinearEyeDepth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, depth, zBufferParameters);
}
inline float_t WaveHarmonic::Crest::Helpers::LinearDepthToNonLinear(float_t  depth, ::UnityEngine::Vector4  zBufferParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"LinearDepthToNonLinear", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, depth, zBufferParameters);
}
inline float_t WaveHarmonic::Crest::Helpers::EyeDepthToNonLinear(float_t  depth, ::UnityEngine::Vector4  zBufferParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"EyeDepthToNonLinear", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, depth, zBufferParameters);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::Helpers::GetZBufferParameters(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetZBufferParameters", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, camera);
}
inline ::UnityW<::UnityEngine::GameObject> WaveHarmonic::Crest::Helpers::InstantiatePrefab(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"InstantiatePrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab);
}
inline bool WaveHarmonic::Crest::Helpers::StartsWithNoAlloc(::StringW  a, ::StringW  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"StartsWithNoAlloc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline void WaveHarmonic::Crest::Helpers::ReadRenderTexturePixels(::by_ref<::UnityEngine::RenderTexture*>  rt, ::by_ref<::UnityEngine::Texture2D*>  texture, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"ReadRenderTexturePixels", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt, texture, slice);
}
inline void WaveHarmonic::Crest::Helpers::ReadRenderTexturePixel(::by_ref<::UnityEngine::RenderTexture*>  rt, ::by_ref<::UnityEngine::Texture2D*>  texture, int32_t  x, int32_t  y, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"ReadRenderTexturePixel", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt, texture, x, y, slice);
}
inline void WaveHarmonic::Crest::Helpers::Blit(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, target);
}
inline float_t WaveHarmonic::Crest::Helpers::ConvertDepthBufferValueToDistance(::UnityEngine::Camera*  camera, float_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"ConvertDepthBufferValueToDistance", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, camera, depth);
}
inline bool WaveHarmonic::Crest::Helpers::IsMSAAEnabled(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"IsMSAAEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool WaveHarmonic::Crest::Helpers::IsIntelGPU()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"IsIntelGPU", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool WaveHarmonic::Crest::Helpers::MaskIncludesLayer(int32_t  mask, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"MaskIncludesLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mask, layer);
}
inline bool WaveHarmonic::Crest::Helpers::get_IsWebGPU()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_IsWebGPU", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool WaveHarmonic::Crest::Helpers::get_RequiresCustomClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"get_RequiresCustomClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool WaveHarmonic::Crest::Helpers::SupportsRandomWriteOnRenderTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SupportsRandomWriteOnRenderTextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Helpers::GetWebGPUTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetWebGPUTextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Helpers::GetCompatibleTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  usage, ::StringW  label, bool  randomWrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetCompatibleTextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUsage>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format, usage, label, randomWrite);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Helpers::GetCompatibleTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  randomWrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetCompatibleTextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format, randomWrite);
}
inline void WaveHarmonic::Crest::Helpers::SetGlobalKeyword(::StringW  keyword, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SetGlobalKeyword", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword, enabled);
}
inline void WaveHarmonic::Crest::Helpers::RenderTargetIdentifierXR(::by_ref<::UnityEngine::RenderTexture*>  texture, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderTargetIdentifierXR", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture, target);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier WaveHarmonic::Crest::Helpers::RenderTargetIdentifierXR(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderTargetIdentifierXR", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(nullptr, ___internal_method, id);
}
inline void WaveHarmonic::Crest::Helpers::CreateRenderTargetTextureReference(::by_ref<::UnityEngine::RenderTexture*>  texture, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CreateRenderTargetTextureReference", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture, target);
}
inline void WaveHarmonic::Crest::Helpers::SafeCreateRenderTexture(::by_ref<::UnityEngine::RenderTexture*>  texture, ::UnityEngine::RenderTextureDescriptor  descriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SafeCreateRenderTexture", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture, descriptor);
}
inline void WaveHarmonic::Crest::Helpers::SafeCreateRenderTexture(::StringW  name, ::by_ref<::UnityEngine::RenderTexture*>  texture, ::UnityEngine::RenderTextureDescriptor  descriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SafeCreateRenderTexture", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, texture, descriptor);
}
inline void WaveHarmonic::Crest::Helpers::ClearRenderTexture(::UnityEngine::RenderTexture*  texture, ::UnityEngine::Color  clear, bool  depth, bool  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"ClearRenderTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture, clear, depth, color);
}
inline void WaveHarmonic::Crest::Helpers::VerticallyFlipRenderTexture(::UnityEngine::RenderTexture*  target, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"VerticallyFlipRenderTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, force);
}
inline bool WaveHarmonic::Crest::Helpers::RenderTargetTextureNeedsUpdating(::UnityEngine::RenderTexture*  texture, ::UnityEngine::RenderTextureDescriptor  descriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderTargetTextureNeedsUpdating", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, texture, descriptor);
}
inline bool WaveHarmonic::Crest::Helpers::RenderTextureNeedsUpdating(::UnityEngine::RenderTexture*  t1, ::UnityEngine::RenderTexture*  t2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderTextureNeedsUpdating", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool WaveHarmonic::Crest::Helpers::RenderTextureNeedsUpdating(::UnityEngine::RenderTextureDescriptor  t1, ::UnityEngine::RenderTextureDescriptor  t2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderTextureNeedsUpdating", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline int32_t WaveHarmonic::Crest::Helpers::CalculateMipMapCount(int32_t  maximumDimension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateMipMapCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, maximumDimension);
}
inline void WaveHarmonic::Crest::Helpers::Clear(::UnityEngine::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Clear", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, object);
}
inline void WaveHarmonic::Crest::Helpers::Destroy(::UnityEngine::Object*  object, bool  undo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, object, undo);
}
template<typename T>
inline void WaveHarmonic::Crest::Helpers::Destroy(::by_ref<T>  object, bool  undo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                    {"Destroy", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, object, undo);
}
inline void WaveHarmonic::Crest::Helpers::DestroyGameObject(::UnityEngine::Component*  object, bool  undo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"DestroyGameObject", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, object, undo);
}
template<typename T>
inline void WaveHarmonic::Crest::Helpers::DestroyGameObject(::by_ref<T>  object, bool  undo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                    {"DestroyGameObject", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, object, undo);
}
inline void WaveHarmonic::Crest::Helpers::Destroy(::by_ref<::UnityEngine::Rendering::CommandBuffer*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Destroy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CommandBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void WaveHarmonic::Crest::Helpers::Destroy(::by_ref<::UnityEngine::ComputeBuffer*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Destroy", {}, {::i2c::type_of<::by_ref<::UnityEngine::ComputeBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void WaveHarmonic::Crest::Helpers::CalculateFrustumPoints(::UnityEngine::Camera*  camera, ::ArrayW<::UnityEngine::Vector3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateFrustumPoints", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, points);
}
inline void WaveHarmonic::Crest::Helpers::CalculateFrustumPlanesAndPoints(::UnityEngine::Camera*  camera, ::ArrayW<::UnityEngine::Plane>  planes, ::ArrayW<::UnityEngine::Vector3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateFrustumPlanesAndPoints", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, planes, points);
}
inline bool WaveHarmonic::Crest::Helpers::TestPointsAABB(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"TestPointsAABB", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, points, bounds);
}
inline bool WaveHarmonic::Crest::Helpers::TestPlanesAndPointsAABB(::ArrayW<::UnityEngine::Plane>  planes, ::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"TestPlanesAndPointsAABB", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, planes, points, bounds);
}
inline ::UnityEngine::Matrix4x4 WaveHarmonic::Crest::Helpers::CalculateWorldToCameraMatrixRHS(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"CalculateWorldToCameraMatrixRHS", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, position, rotation);
}
inline void WaveHarmonic::Crest::Helpers::Blit(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, ::UnityEngine::Material*  material, int32_t  pass, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, target, material, pass, properties);
}
inline void WaveHarmonic::Crest::Helpers::Blit(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::RenderTexture*  target, ::UnityEngine::Material*  material, int32_t  pass, int32_t  depthSlice, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, target, material, pass, depthSlice, properties);
}
inline void WaveHarmonic::Crest::Helpers::ScaleViewport(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RTHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"ScaleViewport", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, buffer, handle);
}
inline void WaveHarmonic::Crest::Helpers::SetShaderVector(::UnityEngine::Material*  material, int32_t  nameID, ::UnityEngine::Vector4  value, bool  global)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SetShaderVector", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, nameID, value, global);
}
inline void WaveHarmonic::Crest::Helpers::SetShaderInteger(::UnityEngine::Material*  material, int32_t  nameID, int32_t  value, bool  global)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SetShaderInteger", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, nameID, value, global);
}
inline void WaveHarmonic::Crest::Helpers::SetShaderFloat(::UnityEngine::Material*  material, int32_t  nameID, float_t  value, bool  global)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SetShaderFloat", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, nameID, value, global);
}
inline bool WaveHarmonic::Crest::Helpers::GetGlobalBoolean(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetGlobalBoolean", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id);
}
inline void WaveHarmonic::Crest::Helpers::SetGlobalBoolean(int32_t  id, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"SetGlobalBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, value);
}
inline void WaveHarmonic::Crest::Helpers::RenderCamera(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>> WaveHarmonic::Crest::Helpers::UniversalRendererData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"UniversalRendererData", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>>(nullptr, ___internal_method, asset);
}
inline int32_t WaveHarmonic::Crest::Helpers::GetRendererIndex(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetRendererIndex", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, camera);
}
inline bool WaveHarmonic::Crest::Helpers::IsSSAOEnabled(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"IsSSAOEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::Helpers::UniversalRenderCamera(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"UniversalRenderCamera", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, camera, slice);
}
inline void WaveHarmonic::Crest::Helpers::UniversalRenderCamera(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, int32_t  slice, bool  noRenderFeatures)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"UniversalRenderCamera", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, camera, slice, noRenderFeatures);
}
inline void WaveHarmonic::Crest::Helpers::RenderCameraWithoutCustomPasses(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderCameraWithoutCustomPasses", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::Helpers::RenderCamera(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::ScriptableRenderContext  context, int32_t  slice, bool  noRenderFeatures)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"RenderCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, context, slice, noRenderFeatures);
}
inline ::UnityW<::UnityEngine::Terrain> WaveHarmonic::Crest::Helpers::GetTerrainAtPosition(::UnityEngine::Vector2  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Helpers*>(),
                        {"GetTerrainAtPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Terrain>>(nullptr, ___internal_method, position);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Helpers::Helpers()   {
}
