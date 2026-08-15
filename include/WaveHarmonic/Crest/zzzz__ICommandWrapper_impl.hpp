#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ICommandWrapper.hpp"
#include "WaveHarmonic/Crest/zzzz__ICommandWrapper_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IPropertyWrapper_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ICommandWrapper.SetInvertCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ICommandWrapper::*)(bool)>(&::WaveHarmonic::Crest::ICommandWrapper::SetInvertCulling)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ICommandWrapper*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ICommandWrapper*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ICommandWrapper.DrawFullScreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ICommandWrapper::*)(::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::ICommandWrapper::DrawFullScreenTriangle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ICommandWrapper*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ICommandWrapper*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ICommandWrapper.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ICommandWrapper::*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::ICommandWrapper::DrawMesh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ICommandWrapper*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ICommandWrapper*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::ICommandWrapper::SetInvertCulling(bool  invert)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ICommandWrapper*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, invert);
}
inline void WaveHarmonic::Crest::ICommandWrapper::DrawFullScreenTriangle(::UnityEngine::Material*  material, int32_t  pass, ::UnityEngine::MaterialPropertyBlock*  block)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ICommandWrapper*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, pass, block);
}
inline void WaveHarmonic::Crest::ICommandWrapper::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  pass, ::UnityEngine::MaterialPropertyBlock*  block)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ICommandWrapper*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, matrix, material, pass, block);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr  WaveHarmonic::Crest::ICommandWrapper::operator ::WaveHarmonic::Crest::IPropertyWrapper*() noexcept {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* WaveHarmonic::Crest::ICommandWrapper::i___WaveHarmonic__Crest__IPropertyWrapper() noexcept {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(this));
}
