#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/JumpFloodSDF.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__JumpFloodSDF_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::JumpFloodSDF.CreateTemporaryRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Texture*, int32_t, float_t, int32_t, bool)>(&::JBooth::MicroVerseCore::JumpFloodSDF::CreateTemporaryRT)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814305b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::JumpFloodSDF*>(),
                        {"CreateTemporaryRT", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::JumpFloodSDF.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, int32_t, float_t, int32_t)>(&::JBooth::MicroVerseCore::JumpFloodSDF::Generate)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1814306c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::JumpFloodSDF*>(),
                        {"Generate", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::JumpFloodSDF._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::JumpFloodSDF::*)()>(&::JBooth::MicroVerseCore::JumpFloodSDF::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::JumpFloodSDF*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::JumpFloodSDF::setStaticF_jumpFloodShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "jumpFloodShader", ::JBooth::MicroVerseCore::JumpFloodSDF*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::JumpFloodSDF::getStaticF_jumpFloodShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "jumpFloodShader", ::JBooth::MicroVerseCore::JumpFloodSDF*>();
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::JumpFloodSDF::CreateTemporaryRT(::UnityEngine::Texture*  source, int32_t  channel, float_t  zoom, int32_t  downscale, bool  r8)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::JumpFloodSDF*>(),
                        {"CreateTemporaryRT", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, source, channel, zoom, downscale, r8);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::JumpFloodSDF::Generate(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  output, int32_t  channel, float_t  zoom, int32_t  downscale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::JumpFloodSDF*>(),
                        {"Generate", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, source, output, channel, zoom, downscale);
}
inline void JBooth::MicroVerseCore::JumpFloodSDF::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::JumpFloodSDF*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::JumpFloodSDF* JBooth::MicroVerseCore::JumpFloodSDF::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::JumpFloodSDF*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::JumpFloodSDF::JumpFloodSDF()   {
}
