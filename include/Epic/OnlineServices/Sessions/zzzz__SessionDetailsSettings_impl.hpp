#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsSettings.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionPermissionLevel_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsSettings_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionPermissionLevel_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.get_BucketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::get_BucketId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_BucketId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.set_BucketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::set_BucketId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_BucketId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.get_NumPublicConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::get_NumPublicConnections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_NumPublicConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.set_NumPublicConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)(uint32_t)>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::set_NumPublicConnections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_NumPublicConnections", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.get_AllowJoinInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::get_AllowJoinInProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e67e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_AllowJoinInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.set_AllowJoinInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)(bool)>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::set_AllowJoinInProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e6800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_AllowJoinInProgress", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.get_PermissionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::get_PermissionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_PermissionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.set_PermissionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel)>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::set_PermissionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_PermissionLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.get_InvitesAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::get_InvitesAllowed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_InvitesAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.set_InvitesAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)(bool)>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::set_InvitesAllowed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_InvitesAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.get_SanctionsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::get_SanctionsEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e67f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_SanctionsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.set_SanctionsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)(bool)>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::set_SanctionsEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e6810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_SanctionsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.get_AllowedPlatformIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::get_AllowedPlatformIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_AllowedPlatformIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettings.set_AllowedPlatformIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsSettings::*)(::ArrayW<uint32_t>)>(&::Epic::OnlineServices::Sessions::SessionDetailsSettings::set_AllowedPlatformIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_AllowedPlatformIds", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::SessionDetailsSettings::get_BucketId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_BucketId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsSettings::set_BucketId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_BucketId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Sessions::SessionDetailsSettings::get_NumPublicConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_NumPublicConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsSettings::set_NumPublicConnections(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_NumPublicConnections", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Sessions::SessionDetailsSettings::get_AllowJoinInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_AllowJoinInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsSettings::set_AllowJoinInProgress(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_AllowJoinInProgress", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel Epic::OnlineServices::Sessions::SessionDetailsSettings::get_PermissionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_PermissionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsSettings::set_PermissionLevel(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_PermissionLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Sessions::SessionDetailsSettings::get_InvitesAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_InvitesAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsSettings::set_InvitesAllowed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_InvitesAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Sessions::SessionDetailsSettings::get_SanctionsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_SanctionsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsSettings::set_SanctionsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_SanctionsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<uint32_t> Epic::OnlineServices::Sessions::SessionDetailsSettings::get_AllowedPlatformIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"get_AllowedPlatformIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsSettings::set_AllowedPlatformIds(::ArrayW<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettings>(),
                        {"set_AllowedPlatformIds", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_BucketId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_NumPublicConnections_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AllowJoinInProgress_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PermissionLevel_k__BackingField", ty: "::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "_InvitesAllowed_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SanctionsEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AllowedPlatformIds_k__BackingField", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsSettings::SessionDetailsSettings(::Epic::OnlineServices::Utf8String*  _BucketId_k__BackingField, uint32_t  _NumPublicConnections_k__BackingField, bool  _AllowJoinInProgress_k__BackingField, ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  _PermissionLevel_k__BackingField, bool  _InvitesAllowed_k__BackingField, bool  _SanctionsEnabled_k__BackingField, ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField) noexcept  {
this->_BucketId_k__BackingField = _BucketId_k__BackingField;
this->_NumPublicConnections_k__BackingField = _NumPublicConnections_k__BackingField;
this->_AllowJoinInProgress_k__BackingField = _AllowJoinInProgress_k__BackingField;
this->_PermissionLevel_k__BackingField = _PermissionLevel_k__BackingField;
this->_InvitesAllowed_k__BackingField = _InvitesAllowed_k__BackingField;
this->_SanctionsEnabled_k__BackingField = _SanctionsEnabled_k__BackingField;
this->_AllowedPlatformIds_k__BackingField = _AllowedPlatformIds_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsSettings::SessionDetailsSettings()   {
}
