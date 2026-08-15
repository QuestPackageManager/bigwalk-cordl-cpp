#pragma once
// IWYU pragma private; include "AmplifyImpostors/AmplifyImpostor.hpp"
#include "AmplifyImpostors/zzzz__CutMode_impl.hpp"
#include "AmplifyImpostors/zzzz__LODReplacement_impl.hpp"
#include "AmplifyImpostors/zzzz__RenderPipelineInUse_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "AmplifyImpostors/zzzz__AmplifyImpostor_def.hpp"
#include "AmplifyImpostors/zzzz__AmplifyImpostorAsset_def.hpp"
#include "AmplifyImpostors/zzzz__AmplifyImpostor_def.hpp"
#include "AmplifyImpostors/zzzz__ImpostorType_def.hpp"
#include "AmplifyImpostors/zzzz__TextureOutput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LODGroup_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode::AmplifyImpostor_RenderImpostorMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode::AmplifyImpostor_RenderImpostorMode()   {
}
constexpr ::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode  AmplifyImpostors::AmplifyImpostor_RenderImpostorMode::Alpha{static_cast<int32_t>(0x0)};
constexpr ::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode  AmplifyImpostors::AmplifyImpostor_RenderImpostorMode::Normal{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::AmplifyImpostors::AmplifyImpostorAsset> (::AmplifyImpostors::AmplifyImpostor::*)()>(&::AmplifyImpostors::AmplifyImpostor::get_Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)(::AmplifyImpostors::AmplifyImpostorAsset*)>(&::AmplifyImpostors::AmplifyImpostor::set_Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"set_Data", {}, {::i2c::type_of<::AmplifyImpostors::AmplifyImpostorAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.get_RootTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::AmplifyImpostors::AmplifyImpostor::*)()>(&::AmplifyImpostors::AmplifyImpostor::get_RootTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"get_RootTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.set_RootTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)(::UnityEngine::Transform*)>(&::AmplifyImpostors::AmplifyImpostor::set_RootTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"set_RootTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.get_LodGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::LODGroup> (::AmplifyImpostors::AmplifyImpostor::*)()>(&::AmplifyImpostors::AmplifyImpostor::get_LodGroup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"get_LodGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.set_LodGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)(::UnityEngine::LODGroup*)>(&::AmplifyImpostors::AmplifyImpostor::set_LodGroup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"set_LodGroup", {}, {::i2c::type_of<::UnityEngine::LODGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.get_Renderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Renderer>> (::AmplifyImpostors::AmplifyImpostor::*)()>(&::AmplifyImpostors::AmplifyImpostor::get_Renderers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"get_Renderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.set_Renderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)(::ArrayW<::UnityEngine::Renderer*>)>(&::AmplifyImpostors::AmplifyImpostor::set_Renderers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"set_Renderers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Renderer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.GenerateTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)(::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*, bool)>(&::AmplifyImpostors::AmplifyImpostor::GenerateTextures)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x1802d67d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GenerateTextures", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.GenerateAlphaTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)(int32_t)>(&::AmplifyImpostors::AmplifyImpostor::GenerateAlphaTextures)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802d5d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GenerateAlphaTextures", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.ClearBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)()>(&::AmplifyImpostors::AmplifyImpostor::ClearBuffers)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802d5a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"ClearBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.ClearAlphaBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)()>(&::AmplifyImpostors::AmplifyImpostor::ClearAlphaBuffers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802d5970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"ClearAlphaBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.GetFrameInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::AmplifyImpostors::AmplifyImpostorAsset*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::AmplifyImpostors::AmplifyImpostor::GetFrameInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802d74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GetFrameInfo", {}, {::i2c::type_of<::AmplifyImpostors::AmplifyImpostorAsset*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.CreateBlackCubemap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (::AmplifyImpostors::AmplifyImpostor::*)()>(&::AmplifyImpostors::AmplifyImpostor::CreateBlackCubemap)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1802d5bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"CreateBlackCubemap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.CopyConstantStructToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)(::System::Object*, ::ArrayW<::UnityEngine::Vector4>, int32_t)>(&::AmplifyImpostors::AmplifyImpostor::CopyConstantStructToArray)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802d5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"CopyConstantStructToArray", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.RenderImpostor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)(int32_t, ::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode, bool, ::UnityEngine::Shader*)>(&::AmplifyImpostors::AmplifyImpostor::RenderImpostor)> {
  constexpr static std::size_t size = 0x1f80;
  constexpr static std::size_t addrs = 0x1802d7790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"RenderImpostor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.GetCameraRotationMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::AmplifyImpostors::ImpostorType, int32_t, int32_t, int32_t, int32_t)>(&::AmplifyImpostors::AmplifyImpostor::GetCameraRotationMatrix)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x1802d6e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GetCameraRotationMatrix", {}, {::i2c::type_of<::AmplifyImpostors::ImpostorType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.OctahedronToVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&::AmplifyImpostors::AmplifyImpostor::OctahedronToVector)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802d75a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"OctahedronToVector", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.OctahedronToVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::AmplifyImpostors::AmplifyImpostor::OctahedronToVector)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802d76a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"OctahedronToVector", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.HemiOctahedronToVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::AmplifyImpostors::AmplifyImpostor::HemiOctahedronToVector)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802d74f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"HemiOctahedronToVector", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.GenerateAutomaticMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)(::AmplifyImpostors::AmplifyImpostorAsset*)>(&::AmplifyImpostors::AmplifyImpostor::GenerateAutomaticMesh)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1802d5eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GenerateAutomaticMesh", {}, {::i2c::type_of<::AmplifyImpostors::AmplifyImpostorAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor.GenerateMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::AmplifyImpostors::AmplifyImpostor::*)(::ArrayW<::UnityEngine::Vector2>, ::UnityEngine::Vector3, float_t, float_t, bool)>(&::AmplifyImpostors::AmplifyImpostor::GenerateMesh)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x1802d6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GenerateMesh", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostor::*)()>(&::AmplifyImpostors::AmplifyImpostor::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802d9740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::AmplifyImpostors::AmplifyImpostorAsset>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_data;
}
constexpr ::UnityW<::AmplifyImpostors::AmplifyImpostorAsset> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_data;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_data(::UnityW<::AmplifyImpostors::AmplifyImpostorAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_data = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_rootTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rootTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_rootTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rootTransform;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_rootTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_rootTransform = value;
}
constexpr ::UnityW<::UnityEngine::LODGroup>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_lodGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lodGroup;
}
constexpr ::UnityW<::UnityEngine::LODGroup> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_lodGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lodGroup;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_lodGroup(::UnityW<::UnityEngine::LODGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_lodGroup = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_renderers;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_renderers = value;
}
constexpr ::AmplifyImpostors::LODReplacement& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_lodReplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lodReplacement;
}
constexpr ::AmplifyImpostors::LODReplacement const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_lodReplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lodReplacement;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_lodReplacement(::AmplifyImpostors::LODReplacement  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_lodReplacement = value;
}
constexpr ::AmplifyImpostors::RenderPipelineInUse& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_renderPipelineInUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_renderPipelineInUse;
}
constexpr ::AmplifyImpostors::RenderPipelineInUse const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_renderPipelineInUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_renderPipelineInUse;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_renderPipelineInUse(::AmplifyImpostors::RenderPipelineInUse  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_renderPipelineInUse = value;
}
constexpr int32_t& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_insertIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_insertIndex;
}
constexpr int32_t const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_insertIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_insertIndex;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_insertIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_insertIndex = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_lastImpostor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lastImpostor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_lastImpostor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lastImpostor;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_lastImpostor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_lastImpostor = value;
}
constexpr ::StringW& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_folderPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_folderPath;
}
constexpr ::StringW const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_folderPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_folderPath;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_folderPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_folderPath = value;
}
constexpr ::StringW& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_impostorName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_impostorName;
}
constexpr ::StringW const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_impostorName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_impostorName;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_impostorName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_impostorName = value;
}
constexpr ::AmplifyImpostors::CutMode& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_cutMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cutMode;
}
constexpr ::AmplifyImpostors::CutMode const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_cutMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cutMode;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_cutMode(::AmplifyImpostors::CutMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cutMode = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_rtGBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rtGBuffers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_rtGBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rtGBuffers;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_rtGBuffers(::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_rtGBuffers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_outBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_outBuffers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_outBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_outBuffers;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_outBuffers(::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_outBuffers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_alphaGBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alphaGBuffers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_alphaGBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alphaGBuffers;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_alphaGBuffers(::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_alphaGBuffers = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_trueDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_trueDepth;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_trueDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_trueDepth;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_trueDepth(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_trueDepth = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_alphaTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alphaTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_alphaTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alphaTex;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_alphaTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_alphaTex = value;
}
constexpr float_t& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_xyFitSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_xyFitSize;
}
constexpr float_t const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_xyFitSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_xyFitSize;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_xyFitSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_xyFitSize = value;
}
constexpr float_t& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_depthFitSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_depthFitSize;
}
constexpr float_t const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_depthFitSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_depthFitSize;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_depthFitSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_depthFitSize = value;
}
constexpr ::UnityEngine::Vector2& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_pixelOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pixelOffset;
}
constexpr ::UnityEngine::Vector2 const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_pixelOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pixelOffset;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_pixelOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pixelOffset = value;
}
constexpr ::UnityEngine::Bounds& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_originalBound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_originalBound;
}
constexpr ::UnityEngine::Bounds const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_originalBound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_originalBound;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_originalBound(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_originalBound = value;
}
constexpr ::UnityEngine::Vector3& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_oriPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_oriPos;
}
constexpr ::UnityEngine::Vector3 const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_oriPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_oriPos;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_oriPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_oriPos = value;
}
constexpr ::UnityEngine::Quaternion& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_oriRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_oriRot;
}
constexpr ::UnityEngine::Quaternion const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_oriRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_oriRot;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_oriRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_oriRot = value;
}
constexpr ::UnityEngine::Vector3& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_oriSca()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_oriSca;
}
constexpr ::UnityEngine::Vector3 const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_oriSca() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_oriSca;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_oriSca(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_oriSca = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_cameraInvViewProjPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cameraInvViewProjPerFrame;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& AmplifyImpostors::AmplifyImpostor::__cordl_internal_get_m_cameraInvViewProjPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cameraInvViewProjPerFrame;
}
constexpr void AmplifyImpostors::AmplifyImpostor::__cordl_internal_set_m_cameraInvViewProjPerFrame(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cameraInvViewProjPerFrame = value;
}
inline void AmplifyImpostors::AmplifyImpostor::setStaticF__DetailNormalMap_PID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DetailNormalMap_PID", ::AmplifyImpostors::AmplifyImpostor*>(std::forward<int32_t>(value));
}
inline int32_t AmplifyImpostors::AmplifyImpostor::getStaticF__DetailNormalMap_PID()  {
return ::cordl_internals::getStaticField<int32_t, "_DetailNormalMap_PID", ::AmplifyImpostors::AmplifyImpostor*>();
}
inline ::UnityW<::AmplifyImpostors::AmplifyImpostorAsset> AmplifyImpostors::AmplifyImpostor::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::AmplifyImpostors::AmplifyImpostorAsset>>(this, ___internal_method);
}
inline void AmplifyImpostors::AmplifyImpostor::set_Data(::AmplifyImpostors::AmplifyImpostorAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"set_Data", {}, {::i2c::type_of<::AmplifyImpostors::AmplifyImpostorAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> AmplifyImpostors::AmplifyImpostor::get_RootTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"get_RootTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void AmplifyImpostors::AmplifyImpostor::set_RootTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"set_RootTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::LODGroup> AmplifyImpostors::AmplifyImpostor::get_LodGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"get_LodGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::LODGroup>>(this, ___internal_method);
}
inline void AmplifyImpostors::AmplifyImpostor::set_LodGroup(::UnityEngine::LODGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"set_LodGroup", {}, {::i2c::type_of<::UnityEngine::LODGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Renderer>> AmplifyImpostors::AmplifyImpostor::get_Renderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"get_Renderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Renderer>>>(this, ___internal_method);
}
inline void AmplifyImpostors::AmplifyImpostor::set_Renderers(::ArrayW<::UnityEngine::Renderer*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"set_Renderers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Renderer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void AmplifyImpostors::AmplifyImpostor::GenerateTextures(::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*  outputList, bool  standardRendering)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GenerateTextures", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputList, standardRendering);
}
inline void AmplifyImpostors::AmplifyImpostor::GenerateAlphaTextures(int32_t  targetAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GenerateAlphaTextures", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetAmount);
}
inline void AmplifyImpostors::AmplifyImpostor::ClearBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"ClearBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void AmplifyImpostors::AmplifyImpostor::ClearAlphaBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"ClearAlphaBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void AmplifyImpostors::AmplifyImpostor::GetFrameInfo(::AmplifyImpostors::AmplifyImpostorAsset*  data, ::by_ref<int32_t>  hframes, ::by_ref<int32_t>  vframes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GetFrameInfo", {}, {::i2c::type_of<::AmplifyImpostors::AmplifyImpostorAsset*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, hframes, vframes);
}
inline ::UnityW<::UnityEngine::Cubemap> AmplifyImpostors::AmplifyImpostor::CreateBlackCubemap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"CreateBlackCubemap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(this, ___internal_method);
}
inline void AmplifyImpostors::AmplifyImpostor::CopyConstantStructToArray(::System::Object*  constants, ::ArrayW<::UnityEngine::Vector4>  array, int32_t  stride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"CopyConstantStructToArray", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constants, array, stride);
}
inline void AmplifyImpostors::AmplifyImpostor::RenderImpostor(int32_t  targetAmount, ::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode  mode, bool  useMinResolution, ::UnityEngine::Shader*  customShader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"RenderImpostor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetAmount, mode, useMinResolution, customShader);
}
inline ::UnityEngine::Matrix4x4 AmplifyImpostors::AmplifyImpostor::GetCameraRotationMatrix(::AmplifyImpostors::ImpostorType  impostorType, int32_t  hframes, int32_t  vframes, int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GetCameraRotationMatrix", {}, {::i2c::type_of<::AmplifyImpostors::ImpostorType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, impostorType, hframes, vframes, x, y);
}
inline ::UnityEngine::Vector3 AmplifyImpostors::AmplifyImpostor::OctahedronToVector(::UnityEngine::Vector2  oct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"OctahedronToVector", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, oct);
}
inline ::UnityEngine::Vector3 AmplifyImpostors::AmplifyImpostor::OctahedronToVector(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"OctahedronToVector", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, x, y);
}
inline ::UnityEngine::Vector3 AmplifyImpostors::AmplifyImpostor::HemiOctahedronToVector(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"HemiOctahedronToVector", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, x, y);
}
inline void AmplifyImpostors::AmplifyImpostor::GenerateAutomaticMesh(::AmplifyImpostors::AmplifyImpostorAsset*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GenerateAutomaticMesh", {}, {::i2c::type_of<::AmplifyImpostors::AmplifyImpostorAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityW<::UnityEngine::Mesh> AmplifyImpostors::AmplifyImpostor::GenerateMesh(::ArrayW<::UnityEngine::Vector2>  points, ::UnityEngine::Vector3  offset, float_t  width, float_t  height, bool  invertY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {"GenerateMesh", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method, points, offset, width, height, invertY);
}
inline void AmplifyImpostors::AmplifyImpostor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::AmplifyImpostors::AmplifyImpostor* AmplifyImpostors::AmplifyImpostor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AmplifyImpostors::AmplifyImpostor*>());
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::AmplifyImpostor::AmplifyImpostor()   {
}
