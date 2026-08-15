#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModification.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModification_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationAddAttributeOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationAddMemberAttributeOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationRemoveAttributeOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationRemoveMemberAttributeOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetAllowedPlatformIdsOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetBucketIdOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetInvitesAllowedOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetMaxMembersOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetPermissionLevelOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModification::*)()>(&::Epic::OnlineServices::Lobby::LobbyModification::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModification::*)(::System::IntPtr)>(&::Epic::OnlineServices::Lobby::LobbyModification::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification.AddAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyModification::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModification::AddAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18050aef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"AddAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification.AddMemberAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyModification::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModification::AddMemberAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18050afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"AddMemberAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModification::*)()>(&::Epic::OnlineServices::Lobby::LobbyModification::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18050b070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification.RemoveAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyModification::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveAttributeOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModification::RemoveAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18050b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"RemoveAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveAttributeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification.RemoveMemberAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyModification::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModification::RemoveMemberAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18050b0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"RemoveMemberAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification.SetAllowedPlatformIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyModification::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetAllowedPlatformIdsOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModification::SetAllowedPlatformIds)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18050b160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"SetAllowedPlatformIds", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetAllowedPlatformIdsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification.SetBucketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyModification::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModification::SetBucketId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18050b1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"SetBucketId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification.SetInvitesAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyModification::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModification::SetInvitesAllowed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050b250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"SetInvitesAllowed", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification.SetMaxMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyModification::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModification::SetMaxMembers)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18050b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"SetMaxMembers", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModification.SetPermissionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyModification::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModification::SetPermissionLevel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18050b2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"SetPermissionLevel", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbyModification::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyModification::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyModification::AddAttribute(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"AddAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyModification::AddMemberAttribute(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"AddMemberAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Lobby::LobbyModification::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyModification::RemoveAttribute(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveAttributeOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"RemoveAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveAttributeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyModification::RemoveMemberAttribute(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"RemoveMemberAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyModification::SetAllowedPlatformIds(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetAllowedPlatformIdsOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"SetAllowedPlatformIds", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetAllowedPlatformIdsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyModification::SetBucketId(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"SetBucketId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyModification::SetInvitesAllowed(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"SetInvitesAllowed", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyModification::SetMaxMembers(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"SetMaxMembers", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyModification::SetPermissionLevel(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModification*>(),
                        {"SetPermissionLevel", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Lobby::LobbyModification* Epic::OnlineServices::Lobby::LobbyModification::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Lobby::LobbyModification*>());
}
inline ::Epic::OnlineServices::Lobby::LobbyModification* Epic::OnlineServices::Lobby::LobbyModification::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Lobby::LobbyModification*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyModification::LobbyModification()   {
}
