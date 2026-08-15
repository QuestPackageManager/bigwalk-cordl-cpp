#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetMaxPlayersOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetMaxPlayersOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions.get_MaxPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions::get_MaxPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>(),
                        {"get_MaxPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions.set_MaxPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions::*)(uint32_t)>(&::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions::set_MaxPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>(),
                        {"set_MaxPlayers", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions::get_MaxPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>(),
                        {"get_MaxPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions::set_MaxPlayers(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>(),
                        {"set_MaxPlayers", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_MaxPlayers_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions::SessionModificationSetMaxPlayersOptions(uint32_t  _MaxPlayers_k__BackingField) noexcept  {
this->_MaxPlayers_k__BackingField = _MaxPlayers_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions::SessionModificationSetMaxPlayersOptions()   {
}
