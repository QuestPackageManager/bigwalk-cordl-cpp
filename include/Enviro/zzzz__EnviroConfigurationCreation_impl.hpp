#pragma once
// IWYU pragma private; include "Enviro/EnviroConfigurationCreation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroConfigurationCreation_def.hpp"
#include "Enviro/zzzz__EnviroConfiguration_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroConfigurationCreation.CreateMyAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Enviro::EnviroConfiguration> (*)()>(&::Enviro::EnviroConfigurationCreation::CreateMyAsset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805fe110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroConfigurationCreation*>(),
                        {"CreateMyAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroConfigurationCreation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroConfigurationCreation::*)()>(&::Enviro::EnviroConfigurationCreation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroConfigurationCreation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Enviro::EnviroConfiguration> Enviro::EnviroConfigurationCreation::CreateMyAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroConfigurationCreation*>(),
                        {"CreateMyAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Enviro::EnviroConfiguration>>(nullptr, ___internal_method);
}
inline void Enviro::EnviroConfigurationCreation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroConfigurationCreation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroConfigurationCreation* Enviro::EnviroConfigurationCreation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroConfigurationCreation*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroConfigurationCreation::EnviroConfigurationCreation()   {
}
