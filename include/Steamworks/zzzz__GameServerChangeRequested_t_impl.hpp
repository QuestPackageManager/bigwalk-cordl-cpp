#pragma once
// IWYU pragma private; include "Steamworks/GameServerChangeRequested_t.hpp"
#include "Steamworks/zzzz__GameServerChangeRequested_t_def.hpp"
//  Writing Method size for method: ::Steamworks::GameServerChangeRequested_t.get_m_rgchServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::GameServerChangeRequested_t::*)()>(&::Steamworks::GameServerChangeRequested_t::get_m_rgchServer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServerChangeRequested_t>(),
                        {"get_m_rgchServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameServerChangeRequested_t.set_m_rgchServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::GameServerChangeRequested_t::*)(::StringW)>(&::Steamworks::GameServerChangeRequested_t::set_m_rgchServer)> {
  constexpr static std::size_t size = 0xc10;
  constexpr static std::size_t addrs = 0x18054f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServerChangeRequested_t>(),
                        {"set_m_rgchServer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameServerChangeRequested_t.get_m_rgchPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::GameServerChangeRequested_t::*)()>(&::Steamworks::GameServerChangeRequested_t::get_m_rgchPassword)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServerChangeRequested_t>(),
                        {"get_m_rgchPassword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameServerChangeRequested_t.set_m_rgchPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::GameServerChangeRequested_t::*)(::StringW)>(&::Steamworks::GameServerChangeRequested_t::set_m_rgchPassword)> {
  constexpr static std::size_t size = 0xc10;
  constexpr static std::size_t addrs = 0x18054f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServerChangeRequested_t>(),
                        {"set_m_rgchPassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::GameServerChangeRequested_t::get_m_rgchServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServerChangeRequested_t>(),
                        {"get_m_rgchServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::GameServerChangeRequested_t::set_m_rgchServer(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServerChangeRequested_t>(),
                        {"set_m_rgchServer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::GameServerChangeRequested_t::get_m_rgchPassword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServerChangeRequested_t>(),
                        {"get_m_rgchPassword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::GameServerChangeRequested_t::set_m_rgchPassword(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServerChangeRequested_t>(),
                        {"set_m_rgchPassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_rgchServer_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchPassword_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GameServerChangeRequested_t::GameServerChangeRequested_t(::ArrayW<uint8_t>  m_rgchServer_, ::ArrayW<uint8_t>  m_rgchPassword_) noexcept  {
this->m_rgchServer_ = m_rgchServer_;
this->m_rgchPassword_ = m_rgchPassword_;
}
// Ctor Parameters []
constexpr ::Steamworks::GameServerChangeRequested_t::GameServerChangeRequested_t()   {
}
