#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModification.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModification_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationAddAttributeOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationRemoveAttributeOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetAllowedPlatformIdsOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetBucketIdOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetHostAddressOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetInvitesAllowedOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetJoinInProgressAllowedOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetMaxPlayersOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetPermissionLevelOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModification::*)()>(&::Epic::OnlineServices::Sessions::SessionModification::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModification::*)(::System::IntPtr)>(&::Epic::OnlineServices::Sessions::SessionModification::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification.AddAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionModification::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>)>(&::Epic::OnlineServices::Sessions::SessionModification::AddAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f2ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"AddAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModification::*)()>(&::Epic::OnlineServices::Sessions::SessionModification::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f2b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification.RemoveAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionModification::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions>)>(&::Epic::OnlineServices::Sessions::SessionModification::RemoveAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f2b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"RemoveAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification.SetAllowedPlatformIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionModification::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>)>(&::Epic::OnlineServices::Sessions::SessionModification::SetAllowedPlatformIds)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f2bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetAllowedPlatformIds", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification.SetBucketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionModification::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions>)>(&::Epic::OnlineServices::Sessions::SessionModification::SetBucketId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f2c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetBucketId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification.SetHostAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionModification::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>)>(&::Epic::OnlineServices::Sessions::SessionModification::SetHostAddress)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f2ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetHostAddress", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification.SetInvitesAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionModification::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions>)>(&::Epic::OnlineServices::Sessions::SessionModification::SetInvitesAllowed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f2d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetInvitesAllowed", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification.SetJoinInProgressAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionModification::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions>)>(&::Epic::OnlineServices::Sessions::SessionModification::SetJoinInProgressAllowed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f2db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetJoinInProgressAllowed", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification.SetMaxPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionModification::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>)>(&::Epic::OnlineServices::Sessions::SessionModification::SetMaxPlayers)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f2e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetMaxPlayers", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModification.SetPermissionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionModification::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions>)>(&::Epic::OnlineServices::Sessions::SessionModification::SetPermissionLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f2e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetPermissionLevel", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionModification::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionModification::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionModification::AddAttribute(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"AddAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Sessions::SessionModification::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionModification::RemoveAttribute(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"RemoveAttribute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionModification::SetAllowedPlatformIds(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetAllowedPlatformIds", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionModification::SetBucketId(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetBucketId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionModification::SetHostAddress(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetHostAddress", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionModification::SetInvitesAllowed(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetInvitesAllowed", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionModification::SetJoinInProgressAllowed(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetJoinInProgressAllowed", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionModification::SetMaxPlayers(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetMaxPlayers", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionModification::SetPermissionLevel(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModification*>(),
                        {"SetPermissionLevel", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Sessions::SessionModification* Epic::OnlineServices::Sessions::SessionModification::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::SessionModification*>());
}
inline ::Epic::OnlineServices::Sessions::SessionModification* Epic::OnlineServices::Sessions::SessionModification::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::SessionModification*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModification::SessionModification()   {
}
