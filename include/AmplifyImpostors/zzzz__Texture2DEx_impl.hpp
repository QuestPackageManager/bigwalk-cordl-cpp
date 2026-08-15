#pragma once
// IWYU pragma private; include "AmplifyImpostors/Texture2DEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AmplifyImpostors/zzzz__Texture2DEx_def.hpp"
#include "AmplifyImpostors/zzzz__Texture2DEx_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::Texture2DEx_Compression::Texture2DEx_Compression(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::Texture2DEx_Compression::Texture2DEx_Compression()   {
}
constexpr ::AmplifyImpostors::Texture2DEx_Compression  AmplifyImpostors::Texture2DEx_Compression::None{static_cast<int32_t>(0x0)};
constexpr ::AmplifyImpostors::Texture2DEx_Compression  AmplifyImpostors::Texture2DEx_Compression::RLE{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::AmplifyImpostors::Texture2DEx.EncodeToTGA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*, ::AmplifyImpostors::Texture2DEx_Compression)>(&::AmplifyImpostors::Texture2DEx::EncodeToTGA)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0x1802da140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Texture2DEx*>(),
                        {"EncodeToTGA", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::AmplifyImpostors::Texture2DEx_Compression>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::Texture2DEx.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::AmplifyImpostors::Texture2DEx::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802daa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Texture2DEx*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
inline void AmplifyImpostors::Texture2DEx::setStaticF_Footer(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Footer", ::AmplifyImpostors::Texture2DEx*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> AmplifyImpostors::Texture2DEx::getStaticF_Footer()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Footer", ::AmplifyImpostors::Texture2DEx*>();
}
inline ::ArrayW<uint8_t> AmplifyImpostors::Texture2DEx::EncodeToTGA(::UnityEngine::Texture2D*  tex, ::AmplifyImpostors::Texture2DEx_Compression  compression)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Texture2DEx*>(),
                        {"EncodeToTGA", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::AmplifyImpostors::Texture2DEx_Compression>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, tex, compression);
}
inline bool AmplifyImpostors::Texture2DEx::Equals(::UnityEngine::Color32  first, ::UnityEngine::Color32  second)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Texture2DEx*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, first, second);
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::Texture2DEx::Texture2DEx()   {
}
