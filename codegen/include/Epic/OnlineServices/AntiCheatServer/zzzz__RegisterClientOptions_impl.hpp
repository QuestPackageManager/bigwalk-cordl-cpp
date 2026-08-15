#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/RegisterClientOptions.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientPlatform_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__RegisterClientOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientPlatform_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientType_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.get_ClientHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_ClientHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_ClientHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.set_ClientHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_ClientHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_ClientHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.get_ClientType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_ClientType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_ClientType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.set_ClientType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType)>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_ClientType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_ClientType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.get_ClientPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_ClientPlatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_ClientPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.set_ClientPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform)>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_ClientPlatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_ClientPlatform", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.get_AccountId_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_AccountId_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_AccountId_DEPRECATED", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.set_AccountId_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_AccountId_DEPRECATED)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_AccountId_DEPRECATED", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.get_IpAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_IpAddress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_IpAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.set_IpAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_IpAddress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_IpAddress", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_UserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_UserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_UserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.get_Reserved01
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_Reserved01)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_Reserved01", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions.set_Reserved01
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::*)(int32_t)>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_Reserved01)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_Reserved01", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_ClientHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_ClientHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_ClientHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_ClientHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_ClientType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_ClientType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_ClientType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_ClientType", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_ClientPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_ClientPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_ClientPlatform(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_ClientPlatform", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_AccountId_DEPRECATED()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_AccountId_DEPRECATED", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_AccountId_DEPRECATED(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_AccountId_DEPRECATED", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_IpAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_IpAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_IpAddress(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_IpAddress", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_UserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_UserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::get_Reserved01()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"get_Reserved01", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::set_Reserved01(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>(),
                        {"set_Reserved01", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientPlatform_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AccountId_DEPRECATED_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IpAddress_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Reserved01_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::RegisterClientOptions(::System::IntPtr  _ClientHandle_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  _ClientType_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  _ClientPlatform_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AccountId_DEPRECATED_k__BackingField, ::Epic::OnlineServices::Utf8String*  _IpAddress_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField, int32_t  _Reserved01_k__BackingField) noexcept  {
this->_ClientHandle_k__BackingField = _ClientHandle_k__BackingField;
this->_ClientType_k__BackingField = _ClientType_k__BackingField;
this->_ClientPlatform_k__BackingField = _ClientPlatform_k__BackingField;
this->_AccountId_DEPRECATED_k__BackingField = _AccountId_DEPRECATED_k__BackingField;
this->_IpAddress_k__BackingField = _IpAddress_k__BackingField;
this->_UserId_k__BackingField = _UserId_k__BackingField;
this->_Reserved01_k__BackingField = _Reserved01_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions::RegisterClientOptions()   {
}
