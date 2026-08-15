#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/BeginSessionOptions.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientMode_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__BeginSessionOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientMode_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode (::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::get_Mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>(),
                        {"get_Mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions.set_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::*)(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode)>(&::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::set_Mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>(),
                        {"set_Mode", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::set_Mode(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>(),
                        {"set_Mode", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Mode_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::BeginSessionOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode  _Mode_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_Mode_k__BackingField = _Mode_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions::BeginSessionOptions()   {
}
