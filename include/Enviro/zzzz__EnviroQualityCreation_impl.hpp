#pragma once
// IWYU pragma private; include "Enviro/EnviroQualityCreation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroQualityCreation_def.hpp"
#include "Enviro/zzzz__EnviroQuality_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroQualityCreation.CreateMyAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Enviro::EnviroQuality> (*)()>(&::Enviro::EnviroQualityCreation::CreateMyAsset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180615c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityCreation*>(),
                        {"CreateMyAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroQualityCreation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualityCreation::*)()>(&::Enviro::EnviroQualityCreation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityCreation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Enviro::EnviroQuality> Enviro::EnviroQualityCreation::CreateMyAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityCreation*>(),
                        {"CreateMyAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Enviro::EnviroQuality>>(nullptr, ___internal_method);
}
inline void Enviro::EnviroQualityCreation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualityCreation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroQualityCreation* Enviro::EnviroQualityCreation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroQualityCreation*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroQualityCreation::EnviroQualityCreation()   {
}
