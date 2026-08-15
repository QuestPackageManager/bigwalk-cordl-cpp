#pragma once
// IWYU pragma private; include "Mirror/PortTransport.hpp"
#include "Mirror/zzzz__PortTransport_def.hpp"
//  Writing Method size for method: ::Mirror::PortTransport.get_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Mirror::PortTransport::*)()>(&::Mirror::PortTransport::get_Port)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::PortTransport*>(),
                    {::i2c::class_of<::Mirror::PortTransport*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::PortTransport.set_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::PortTransport::*)(uint16_t)>(&::Mirror::PortTransport::set_Port)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::PortTransport*>(),
                    {::i2c::class_of<::Mirror::PortTransport*>(), 1}
                ));
    return ___internal_method;
  }
};
inline uint16_t Mirror::PortTransport::get_Port()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::PortTransport*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Mirror::PortTransport::set_Port(uint16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::PortTransport*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
