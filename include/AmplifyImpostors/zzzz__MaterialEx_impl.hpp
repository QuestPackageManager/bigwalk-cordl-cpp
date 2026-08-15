#pragma once
// IWYU pragma private; include "AmplifyImpostors/MaterialEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AmplifyImpostors/zzzz__MaterialEx_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::AmplifyImpostors::MaterialEx.EnsureTextureKeywordState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::AmplifyImpostors::MaterialEx::EnsureTextureKeywordState)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1802d9ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::MaterialEx*>(),
                        {"EnsureTextureKeywordState", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::MaterialEx.EnsureKeywordState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, bool)>(&::AmplifyImpostors::MaterialEx::EnsureKeywordState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802d9b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::MaterialEx*>(),
                        {"EnsureKeywordState", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void AmplifyImpostors::MaterialEx::EnsureTextureKeywordState(::UnityEngine::Material*  material, ::StringW  property, ::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::MaterialEx*>(),
                        {"EnsureTextureKeywordState", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, property, keyword);
}
inline void AmplifyImpostors::MaterialEx::EnsureKeywordState(::UnityEngine::Material*  material, ::StringW  keyword, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::MaterialEx*>(),
                        {"EnsureKeywordState", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, keyword, state);
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::MaterialEx::MaterialEx()   {
}
