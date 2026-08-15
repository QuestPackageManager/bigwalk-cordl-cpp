#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeCreation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeCreation_def.hpp"
#include "Enviro/zzzz__EnviroWeatherType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Keyframe_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeCreation.CreateMyAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Enviro::EnviroWeatherType> (*)()>(&::Enviro::EnviroWeatherTypeCreation::CreateMyAsset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180629970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"CreateMyAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeCreation.GetAssetPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW)>(&::Enviro::EnviroWeatherTypeCreation::GetAssetPrefab)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"GetAssetPrefab", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeCreation.GetAssetCubemap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)(::StringW)>(&::Enviro::EnviroWeatherTypeCreation::GetAssetCubemap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"GetAssetCubemap", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeCreation.GetAssetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::StringW)>(&::Enviro::EnviroWeatherTypeCreation::GetAssetTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"GetAssetTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeCreation.CreateGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (*)()>(&::Enviro::EnviroWeatherTypeCreation::CreateGradient)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180629810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"CreateGradient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeCreation.GetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::StringW)>(&::Enviro::EnviroWeatherTypeCreation::GetColor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180629980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"GetColor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeCreation.CreateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (*)(float_t, float_t)>(&::Enviro::EnviroWeatherTypeCreation::CreateKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180629920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"CreateKey", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeCreation.CreateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (*)(float_t, float_t, float_t, float_t)>(&::Enviro::EnviroWeatherTypeCreation::CreateKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1806298b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"CreateKey", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroWeatherTypeCreation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherTypeCreation::*)()>(&::Enviro::EnviroWeatherTypeCreation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Enviro::EnviroWeatherType> Enviro::EnviroWeatherTypeCreation::CreateMyAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"CreateMyAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Enviro::EnviroWeatherType>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Enviro::EnviroWeatherTypeCreation::GetAssetPrefab(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"GetAssetPrefab", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Cubemap> Enviro::EnviroWeatherTypeCreation::GetAssetCubemap(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"GetAssetCubemap", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Texture> Enviro::EnviroWeatherTypeCreation::GetAssetTexture(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"GetAssetTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::Gradient* Enviro::EnviroWeatherTypeCreation::CreateGradient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"CreateGradient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color Enviro::EnviroWeatherTypeCreation::GetColor(::StringW  hex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"GetColor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, hex);
}
inline ::UnityEngine::Keyframe Enviro::EnviroWeatherTypeCreation::CreateKey(float_t  value, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"CreateKey", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(nullptr, ___internal_method, value, time);
}
inline ::UnityEngine::Keyframe Enviro::EnviroWeatherTypeCreation::CreateKey(float_t  value, float_t  time, float_t  inTangent, float_t  outTangent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {"CreateKey", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(nullptr, ___internal_method, value, time, inTangent, outTangent);
}
inline void Enviro::EnviroWeatherTypeCreation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherTypeCreation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherTypeCreation* Enviro::EnviroWeatherTypeCreation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherTypeCreation*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherTypeCreation::EnviroWeatherTypeCreation()   {
}
