#pragma once
// IWYU pragma private; include "Mirror/NetworkLobbyManager.hpp"
#include "Mirror/zzzz__NetworkRoomManager_impl.hpp"
#include "Mirror/zzzz__NetworkLobbyManager_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkLobbyManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkLobbyManager::*)()>(&::Mirror::NetworkLobbyManager::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18151ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLobbyManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkLobbyManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLobbyManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkLobbyManager* Mirror::NetworkLobbyManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkLobbyManager*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkLobbyManager::NetworkLobbyManager()   {
}
