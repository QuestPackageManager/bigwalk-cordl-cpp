#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/RegisterPlayersOptions.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__RegisterPlayersOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::RegisterPlayersOptions.get_SessionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sessions::RegisterPlayersOptions::*)()>(&::Epic::OnlineServices::Sessions::RegisterPlayersOptions::get_SessionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>(),
                        {"get_SessionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::RegisterPlayersOptions.set_SessionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::RegisterPlayersOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sessions::RegisterPlayersOptions::set_SessionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>(),
                        {"set_SessionName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::RegisterPlayersOptions.get_PlayersToRegister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::ProductUserId*> (::Epic::OnlineServices::Sessions::RegisterPlayersOptions::*)()>(&::Epic::OnlineServices::Sessions::RegisterPlayersOptions::get_PlayersToRegister)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>(),
                        {"get_PlayersToRegister", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::RegisterPlayersOptions.set_PlayersToRegister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::RegisterPlayersOptions::*)(::ArrayW<::Epic::OnlineServices::ProductUserId*>)>(&::Epic::OnlineServices::Sessions::RegisterPlayersOptions::set_PlayersToRegister)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>(),
                        {"set_PlayersToRegister", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::ProductUserId*>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::RegisterPlayersOptions::get_SessionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>(),
                        {"get_SessionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::RegisterPlayersOptions::set_SessionName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>(),
                        {"set_SessionName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::Epic::OnlineServices::ProductUserId*> Epic::OnlineServices::Sessions::RegisterPlayersOptions::get_PlayersToRegister()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>(),
                        {"get_PlayersToRegister", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::ProductUserId*>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::RegisterPlayersOptions::set_PlayersToRegister(::ArrayW<::Epic::OnlineServices::ProductUserId*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>(),
                        {"set_PlayersToRegister", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::ProductUserId*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_SessionName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayersToRegister_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::ProductUserId*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::RegisterPlayersOptions::RegisterPlayersOptions(::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField, ::ArrayW<::Epic::OnlineServices::ProductUserId*>  _PlayersToRegister_k__BackingField) noexcept  {
this->_SessionName_k__BackingField = _SessionName_k__BackingField;
this->_PlayersToRegister_k__BackingField = _PlayersToRegister_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::RegisterPlayersOptions::RegisterPlayersOptions()   {
}
