#pragma once
// IWYU pragma private; include "UnityEngine/CombineInstance.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/zzzz__CombineInstance_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::CombineInstance.set_mesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CombineInstance::*)(::UnityEngine::Mesh*)>(&::UnityEngine::CombineInstance::set_mesh)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18224d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CombineInstance>(),
                        {"set_mesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CombineInstance.set_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CombineInstance::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::CombineInstance::set_transform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18224d0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CombineInstance>(),
                        {"set_transform", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CombineInstance.set_lightmapScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CombineInstance::*)(::UnityEngine::Vector4)>(&::UnityEngine::CombineInstance::set_lightmapScaleOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817eed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CombineInstance>(),
                        {"set_lightmapScaleOffset", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CombineInstance.set_realtimeLightmapScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CombineInstance::*)(::UnityEngine::Vector4)>(&::UnityEngine::CombineInstance::set_realtimeLightmapScaleOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181a73fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CombineInstance>(),
                        {"set_realtimeLightmapScaleOffset", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::CombineInstance::set_mesh(::UnityEngine::Mesh*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CombineInstance>(),
                        {"set_mesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::CombineInstance::set_transform(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CombineInstance>(),
                        {"set_transform", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::CombineInstance::set_lightmapScaleOffset(::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CombineInstance>(),
                        {"set_lightmapScaleOffset", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::CombineInstance::set_realtimeLightmapScaleOffset(::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CombineInstance>(),
                        {"set_realtimeLightmapScaleOffset", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_MeshInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SubMeshIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LightmapScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RealtimeLightmapScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CombineInstance::CombineInstance(int32_t  m_MeshInstanceID, int32_t  m_SubMeshIndex, ::UnityEngine::Matrix4x4  m_Transform, ::UnityEngine::Vector4  m_LightmapScaleOffset, ::UnityEngine::Vector4  m_RealtimeLightmapScaleOffset) noexcept  {
this->m_MeshInstanceID = m_MeshInstanceID;
this->m_SubMeshIndex = m_SubMeshIndex;
this->m_Transform = m_Transform;
this->m_LightmapScaleOffset = m_LightmapScaleOffset;
this->m_RealtimeLightmapScaleOffset = m_RealtimeLightmapScaleOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::CombineInstance::CombineInstance()   {
}
