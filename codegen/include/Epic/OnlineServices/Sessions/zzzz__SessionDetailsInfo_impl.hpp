#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsInfo.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsSettings_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsInfo_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsSettings_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::get_SessionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_SessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.set_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::set_SessionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_SessionId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.get_HostAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::get_HostAddress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_HostAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.set_HostAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::set_HostAddress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_HostAddress", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.get_NumOpenPublicConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::get_NumOpenPublicConnections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_NumOpenPublicConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.set_NumOpenPublicConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)(uint32_t)>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::set_NumOpenPublicConnections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_NumOpenPublicConnections", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings> (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::get_Settings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.set_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>)>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::set_Settings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e67b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_Settings", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.get_OwnerUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::get_OwnerUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_OwnerUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.set_OwnerUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::set_OwnerUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_OwnerUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.get_OwnerServerClientId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::get_OwnerServerClientId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_OwnerServerClientId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfo.set_OwnerServerClientId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sessions::SessionDetailsInfo::set_OwnerServerClientId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_OwnerServerClientId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::SessionDetailsInfo::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsInfo::set_SessionId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_SessionId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::SessionDetailsInfo::get_HostAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_HostAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsInfo::set_HostAddress(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_HostAddress", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Sessions::SessionDetailsInfo::get_NumOpenPublicConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_NumOpenPublicConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsInfo::set_NumOpenPublicConnections(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_NumOpenPublicConnections", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings> Epic::OnlineServices::Sessions::SessionDetailsInfo::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsInfo::set_Settings(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_Settings", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Sessions::SessionDetailsInfo::get_OwnerUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_OwnerUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsInfo::set_OwnerUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_OwnerUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::SessionDetailsInfo::get_OwnerServerClientId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"get_OwnerServerClientId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsInfo::set_OwnerServerClientId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>(),
                        {"set_OwnerServerClientId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_SessionId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_HostAddress_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_NumOpenPublicConnections_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Settings_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OwnerUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OwnerServerClientId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsInfo::SessionDetailsInfo(::Epic::OnlineServices::Utf8String*  _SessionId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _HostAddress_k__BackingField, uint32_t  _NumOpenPublicConnections_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>  _Settings_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _OwnerUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _OwnerServerClientId_k__BackingField) noexcept  {
this->_SessionId_k__BackingField = _SessionId_k__BackingField;
this->_HostAddress_k__BackingField = _HostAddress_k__BackingField;
this->_NumOpenPublicConnections_k__BackingField = _NumOpenPublicConnections_k__BackingField;
this->_Settings_k__BackingField = _Settings_k__BackingField;
this->_OwnerUserId_k__BackingField = _OwnerUserId_k__BackingField;
this->_OwnerServerClientId_k__BackingField = _OwnerServerClientId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsInfo::SessionDetailsInfo()   {
}
