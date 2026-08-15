#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsGetMemberByIndexOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsGetMemberByIndexOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions.get_MemberIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions::get_MemberIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions>(),
                        {"get_MemberIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions.set_MemberIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions::set_MemberIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions>(),
                        {"set_MemberIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions::get_MemberIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions>(),
                        {"get_MemberIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions::set_MemberIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions>(),
                        {"set_MemberIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_MemberIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions::LobbyDetailsGetMemberByIndexOptions(uint32_t  _MemberIndex_k__BackingField) noexcept  {
this->_MemberIndex_k__BackingField = _MemberIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions::LobbyDetailsGetMemberByIndexOptions()   {
}
