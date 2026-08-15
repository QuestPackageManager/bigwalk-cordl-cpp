#pragma once
// IWYU pragma private; include "Rewired/ControllerElementRole.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__ControllerElementRole_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerElementRole.get_s_names
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::Rewired::ControllerElementRole::get_s_names)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x181985100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementRole*>(),
                        {"get_s_names", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementRole.GetNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::Rewired::ControllerElementRole::GetNames)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181985090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementRole*>(),
                        {"GetNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ControllerElementRole::setStaticF___s_names(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "__s_names", ::Rewired::ControllerElementRole*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Rewired::ControllerElementRole::getStaticF___s_names()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "__s_names", ::Rewired::ControllerElementRole*>();
}
inline ::ArrayW<::StringW> Rewired::ControllerElementRole::get_s_names()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementRole*>(),
                        {"get_s_names", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> Rewired::ControllerElementRole::GetNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementRole*>(),
                        {"GetNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Rewired::ControllerElementRole::ControllerElementRole()   {
}
