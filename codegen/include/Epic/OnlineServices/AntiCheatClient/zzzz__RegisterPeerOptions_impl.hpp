#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/RegisterPeerOptions.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientPlatform_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__RegisterPeerOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientPlatform_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientType_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.get_PeerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_PeerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_PeerHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.set_PeerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_PeerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_PeerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.get_ClientType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_ClientType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_ClientType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.set_ClientType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType)>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_ClientType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_ClientType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.get_ClientPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_ClientPlatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_ClientPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.set_ClientPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform)>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_ClientPlatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_ClientPlatform", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.get_AuthenticationTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_AuthenticationTimeout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_AuthenticationTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.set_AuthenticationTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)(uint32_t)>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_AuthenticationTimeout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_AuthenticationTimeout", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.get_AccountId_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_AccountId_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_AccountId_DEPRECATED", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.set_AccountId_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_AccountId_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_AccountId_DEPRECATED", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.get_IpAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_IpAddress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_IpAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.set_IpAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_IpAddress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_IpAddress", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.get_PeerProductUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_PeerProductUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_PeerProductUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions.set_PeerProductUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_PeerProductUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_PeerProductUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_PeerHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_PeerHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_PeerHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_PeerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_ClientType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_ClientType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_ClientType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_ClientType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_ClientPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_ClientPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_ClientPlatform(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_ClientPlatform", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_AuthenticationTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_AuthenticationTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_AuthenticationTimeout(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_AuthenticationTimeout", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_AccountId_DEPRECATED()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_AccountId_DEPRECATED", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_AccountId_DEPRECATED(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_AccountId_DEPRECATED", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_IpAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_IpAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_IpAddress(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_IpAddress", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::get_PeerProductUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"get_PeerProductUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::set_PeerProductUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>(),
                        {"set_PeerProductUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PeerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientPlatform_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AuthenticationTimeout_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AccountId_DEPRECATED_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IpAddress_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PeerProductUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::RegisterPeerOptions(::System::IntPtr  _PeerHandle_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  _ClientType_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  _ClientPlatform_k__BackingField, uint32_t  _AuthenticationTimeout_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AccountId_DEPRECATED_k__BackingField, ::Epic::OnlineServices::Utf8String*  _IpAddress_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _PeerProductUserId_k__BackingField) noexcept  {
this->_PeerHandle_k__BackingField = _PeerHandle_k__BackingField;
this->_ClientType_k__BackingField = _ClientType_k__BackingField;
this->_ClientPlatform_k__BackingField = _ClientPlatform_k__BackingField;
this->_AuthenticationTimeout_k__BackingField = _AuthenticationTimeout_k__BackingField;
this->_AccountId_DEPRECATED_k__BackingField = _AccountId_DEPRECATED_k__BackingField;
this->_IpAddress_k__BackingField = _IpAddress_k__BackingField;
this->_PeerProductUserId_k__BackingField = _PeerProductUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions::RegisterPeerOptions()   {
}
