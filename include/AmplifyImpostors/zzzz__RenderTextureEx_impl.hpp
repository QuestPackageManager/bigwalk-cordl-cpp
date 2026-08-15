#pragma once
// IWYU pragma private; include "AmplifyImpostors/RenderTextureEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AmplifyImpostors/zzzz__RenderTextureEx_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::AmplifyImpostors::RenderTextureEx.GetTemporary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::RenderTexture*)>(&::AmplifyImpostors::RenderTextureEx::GetTemporary)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802d9d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::RenderTextureEx*>(),
                        {"GetTemporary", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::RenderTexture> AmplifyImpostors::RenderTextureEx::GetTemporary(::UnityEngine::RenderTexture*  renderTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::RenderTextureEx*>(),
                        {"GetTemporary", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, renderTexture);
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::RenderTextureEx::RenderTextureEx()   {
}
