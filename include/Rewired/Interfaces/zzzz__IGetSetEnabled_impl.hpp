#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IGetSetEnabled.hpp"
#include "Rewired/Interfaces/zzzz__IGetSetEnabled_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IGetSetEnabled.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::IGetSetEnabled::*)()>(&::Rewired::Interfaces::IGetSetEnabled::get_enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IGetSetEnabled*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IGetSetEnabled*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IGetSetEnabled.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IGetSetEnabled::*)(bool)>(&::Rewired::Interfaces::IGetSetEnabled::set_enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IGetSetEnabled*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IGetSetEnabled*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Interfaces::IGetSetEnabled::get_enabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IGetSetEnabled*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Interfaces::IGetSetEnabled::set_enabled(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IGetSetEnabled*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
