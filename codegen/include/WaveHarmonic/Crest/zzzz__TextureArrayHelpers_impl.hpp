#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/TextureArrayHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__TextureArrayHelpers_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::TextureArrayHelpers.CreateTexture2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::UnityEngine::Color, ::UnityEngine::TextureFormat)>(&::WaveHarmonic::Crest::TextureArrayHelpers::CreateTexture2D)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18256d830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::TextureArrayHelpers*>(),
                        {"CreateTexture2D", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::TextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::TextureArrayHelpers.CreateTexture2DArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2DArray> (*)(::UnityEngine::Texture2D*, int32_t)>(&::WaveHarmonic::Crest::TextureArrayHelpers::CreateTexture2DArray)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18256d760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::TextureArrayHelpers*>(),
                        {"CreateTexture2DArray", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Texture2D> WaveHarmonic::Crest::TextureArrayHelpers::CreateTexture2D(::UnityEngine::Color  color, ::UnityEngine::TextureFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::TextureArrayHelpers*>(),
                        {"CreateTexture2D", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::TextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, color, format);
}
inline ::UnityW<::UnityEngine::Texture2DArray> WaveHarmonic::Crest::TextureArrayHelpers::CreateTexture2DArray(::UnityEngine::Texture2D*  texture, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::TextureArrayHelpers*>(),
                        {"CreateTexture2DArray", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2DArray>>(nullptr, ___internal_method, texture, depth);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::TextureArrayHelpers::TextureArrayHelpers()   {
}
