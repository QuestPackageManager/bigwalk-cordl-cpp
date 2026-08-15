#pragma once
// IWYU pragma private; include "LobbyNetworking/ITicketed.hpp"
#include "LobbyNetworking/zzzz__ITicketed_def.hpp"
//  Writing Method size for method: ::LobbyNetworking::ITicketed.get_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::LobbyNetworking::ITicketed::*)()>(&::LobbyNetworking::ITicketed::get_ticket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LobbyNetworking::ITicketed*>(),
                    {::i2c::class_of<::LobbyNetworking::ITicketed*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::ITicketed.set_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::ITicketed::*)(uint16_t)>(&::LobbyNetworking::ITicketed::set_ticket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LobbyNetworking::ITicketed*>(),
                    {::i2c::class_of<::LobbyNetworking::ITicketed*>(), 1}
                ));
    return ___internal_method;
  }
};
inline uint16_t LobbyNetworking::ITicketed::get_ticket()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LobbyNetworking::ITicketed*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void LobbyNetworking::ITicketed::set_ticket(uint16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LobbyNetworking::ITicketed*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
