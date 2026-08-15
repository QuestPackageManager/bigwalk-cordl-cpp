#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/BeginSessionOptions.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__BeginSessionOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions.get_RegisterTimeoutSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::get_RegisterTimeoutSeconds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"get_RegisterTimeoutSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions.set_RegisterTimeoutSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::*)(uint32_t)>(&::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::set_RegisterTimeoutSeconds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"set_RegisterTimeoutSeconds", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions.get_ServerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::get_ServerName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"get_ServerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions.set_ServerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::set_ServerName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"set_ServerName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions.get_EnableGameplayData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::get_EnableGameplayData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"get_EnableGameplayData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions.set_EnableGameplayData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::*)(bool)>(&::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::set_EnableGameplayData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"set_EnableGameplayData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::get_RegisterTimeoutSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"get_RegisterTimeoutSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::set_RegisterTimeoutSeconds(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"set_RegisterTimeoutSeconds", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::get_ServerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"get_ServerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::set_ServerName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"set_ServerName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::get_EnableGameplayData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"get_EnableGameplayData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::set_EnableGameplayData(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"set_EnableGameplayData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_RegisterTimeoutSeconds_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ServerName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EnableGameplayData_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::BeginSessionOptions(uint32_t  _RegisterTimeoutSeconds_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ServerName_k__BackingField, bool  _EnableGameplayData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept  {
this->_RegisterTimeoutSeconds_k__BackingField = _RegisterTimeoutSeconds_k__BackingField;
this->_ServerName_k__BackingField = _ServerName_k__BackingField;
this->_EnableGameplayData_k__BackingField = _EnableGameplayData_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions::BeginSessionOptions()   {
}
