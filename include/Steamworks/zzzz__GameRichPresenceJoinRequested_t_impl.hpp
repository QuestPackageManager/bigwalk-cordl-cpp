#pragma once
// IWYU pragma private; include "Steamworks/GameRichPresenceJoinRequested_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__GameRichPresenceJoinRequested_t_def.hpp"
//  Writing Method size for method: ::Steamworks::GameRichPresenceJoinRequested_t.get_m_rgchConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::GameRichPresenceJoinRequested_t::*)()>(&::Steamworks::GameRichPresenceJoinRequested_t::get_m_rgchConnect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameRichPresenceJoinRequested_t>(),
                        {"get_m_rgchConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameRichPresenceJoinRequested_t.set_m_rgchConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::GameRichPresenceJoinRequested_t::*)(::StringW)>(&::Steamworks::GameRichPresenceJoinRequested_t::set_m_rgchConnect)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18054f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameRichPresenceJoinRequested_t>(),
                        {"set_m_rgchConnect", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::GameRichPresenceJoinRequested_t::get_m_rgchConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameRichPresenceJoinRequested_t>(),
                        {"get_m_rgchConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::GameRichPresenceJoinRequested_t::set_m_rgchConnect(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameRichPresenceJoinRequested_t>(),
                        {"set_m_rgchConnect", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_steamIDFriend", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchConnect_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GameRichPresenceJoinRequested_t::GameRichPresenceJoinRequested_t(::Steamworks::CSteamID  m_steamIDFriend, ::ArrayW<uint8_t>  m_rgchConnect_) noexcept  {
this->m_steamIDFriend = m_steamIDFriend;
this->m_rgchConnect_ = m_rgchConnect_;
}
// Ctor Parameters []
constexpr ::Steamworks::GameRichPresenceJoinRequested_t::GameRichPresenceJoinRequested_t()   {
}
