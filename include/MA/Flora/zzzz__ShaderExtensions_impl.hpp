#pragma once
// IWYU pragma private; include "MA/Flora/ShaderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__ShaderExtensions_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::MA::Flora::ShaderExtensions.HasOverridableGlobalKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Shader*, ::StringW)>(&::MA::Flora::ShaderExtensions::HasOverridableGlobalKeyword)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18150d540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderExtensions*>(),
                        {"HasOverridableGlobalKeyword", {}, {::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderExtensions.HasDOTSKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Shader*)>(&::MA::Flora::ShaderExtensions::HasDOTSKeyword)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18150d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderExtensions*>(),
                        {"HasDOTSKeyword", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderExtensions.HasLODFadeKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Shader*)>(&::MA::Flora::ShaderExtensions::HasLODFadeKeyword)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18150d4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderExtensions*>(),
                        {"HasLODFadeKeyword", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::ShaderExtensions::HasOverridableGlobalKeyword(::UnityEngine::Shader*  shader, ::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderExtensions*>(),
                        {"HasOverridableGlobalKeyword", {}, {::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, shader, keyword);
}
inline bool MA::Flora::ShaderExtensions::HasDOTSKeyword(::UnityEngine::Shader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderExtensions*>(),
                        {"HasDOTSKeyword", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, shader);
}
inline bool MA::Flora::ShaderExtensions::HasLODFadeKeyword(::UnityEngine::Shader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderExtensions*>(),
                        {"HasLODFadeKeyword", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, shader);
}
// Ctor Parameters []
constexpr ::MA::Flora::ShaderExtensions::ShaderExtensions()   {
}
