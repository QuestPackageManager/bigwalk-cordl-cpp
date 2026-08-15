#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/MicroSplatRuntimeUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatRuntimeUtil_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatRuntimeUtil.UnityUVScaleToUVScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Terrain*)>(&::JBooth::MicroSplat::MicroSplatRuntimeUtil::UnityUVScaleToUVScale)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181401d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatRuntimeUtil*>(),
                        {"UnityUVScaleToUVScale", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatRuntimeUtil.UVScaleToUnityUVScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Terrain*)>(&::JBooth::MicroSplat::MicroSplatRuntimeUtil::UVScaleToUnityUVScale)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181401c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatRuntimeUtil*>(),
                        {"UVScaleToUnityUVScale", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatRuntimeUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatRuntimeUtil::*)()>(&::JBooth::MicroSplat::MicroSplatRuntimeUtil::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatRuntimeUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 JBooth::MicroSplat::MicroSplatRuntimeUtil::UnityUVScaleToUVScale(::UnityEngine::Vector2  uv, ::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatRuntimeUtil*>(),
                        {"UnityUVScaleToUVScale", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, uv, t);
}
inline ::UnityEngine::Vector2 JBooth::MicroSplat::MicroSplatRuntimeUtil::UVScaleToUnityUVScale(::UnityEngine::Vector2  uv, ::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatRuntimeUtil*>(),
                        {"UVScaleToUnityUVScale", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, uv, t);
}
inline void JBooth::MicroSplat::MicroSplatRuntimeUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatRuntimeUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::MicroSplatRuntimeUtil* JBooth::MicroSplat::MicroSplatRuntimeUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::MicroSplatRuntimeUtil*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::MicroSplatRuntimeUtil::MicroSplatRuntimeUtil()   {
}
