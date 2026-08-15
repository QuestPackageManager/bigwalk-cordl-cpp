#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/FriendsInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Friends/zzzz__FriendsInterface_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__AcceptInviteOptions_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__AddNotifyBlockedUsersUpdateOptions_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__AddNotifyFriendsUpdateOptions_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__FriendsStatus_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__GetBlockedUserAtIndexOptions_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__GetBlockedUsersCountOptions_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__GetFriendAtIndexOptions_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__GetFriendsCountOptions_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__GetStatusOptions_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnAcceptInviteCallback_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnBlockedUsersUpdateCallback_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnFriendsUpdateCallback_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnQueryFriendsCallback_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnRejectInviteCallback_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnSendInviteCallback_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__QueryFriendsOptions_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__RejectInviteOptions_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__SendInviteOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::FriendsInterface::*)()>(&::Epic::OnlineServices::Friends::FriendsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::FriendsInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Friends::FriendsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.AcceptInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::AcceptInviteOptions>, ::System::Object*, ::Epic::OnlineServices::Friends::OnAcceptInviteCallback*)>(&::Epic::OnlineServices::Friends::FriendsInterface::AcceptInvite)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180515e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"AcceptInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::AcceptInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnAcceptInviteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.AddNotifyBlockedUsersUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptions>, ::System::Object*, ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallback*)>(&::Epic::OnlineServices::Friends::FriendsInterface::AddNotifyBlockedUsersUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180516050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"AddNotifyBlockedUsersUpdate", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.AddNotifyFriendsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>, ::System::Object*, ::Epic::OnlineServices::Friends::OnFriendsUpdateCallback*)>(&::Epic::OnlineServices::Friends::FriendsInterface::AddNotifyFriendsUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180516240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"AddNotifyFriendsUpdate", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnFriendsUpdateCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.GetBlockedUserAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::GetBlockedUserAtIndexOptions>)>(&::Epic::OnlineServices::Friends::FriendsInterface::GetBlockedUserAtIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180516430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"GetBlockedUserAtIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::GetBlockedUserAtIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.GetBlockedUsersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::GetBlockedUsersCountOptions>)>(&::Epic::OnlineServices::Friends::FriendsInterface::GetBlockedUsersCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805164d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"GetBlockedUsersCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::GetBlockedUsersCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.GetFriendAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::GetFriendAtIndexOptions>)>(&::Epic::OnlineServices::Friends::FriendsInterface::GetFriendAtIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180516540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"GetFriendAtIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::GetFriendAtIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.GetFriendsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::GetFriendsCountOptions>)>(&::Epic::OnlineServices::Friends::FriendsInterface::GetFriendsCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805165e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"GetFriendsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::GetFriendsCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Friends::FriendsStatus (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::GetStatusOptions>)>(&::Epic::OnlineServices::Friends::FriendsInterface::GetStatus)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180516650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"GetStatus", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::GetStatusOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.QueryFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::QueryFriendsOptions>, ::System::Object*, ::Epic::OnlineServices::Friends::OnQueryFriendsCallback*)>(&::Epic::OnlineServices::Friends::FriendsInterface::QueryFriends)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805166e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"QueryFriends", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::QueryFriendsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnQueryFriendsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.RejectInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::RejectInviteOptions>, ::System::Object*, ::Epic::OnlineServices::Friends::OnRejectInviteCallback*)>(&::Epic::OnlineServices::Friends::FriendsInterface::RejectInvite)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1805168e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"RejectInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::RejectInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnRejectInviteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.RemoveNotifyBlockedUsersUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::FriendsInterface::*)(uint64_t)>(&::Epic::OnlineServices::Friends::FriendsInterface::RemoveNotifyBlockedUsersUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180516b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"RemoveNotifyBlockedUsersUpdate", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.RemoveNotifyFriendsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::FriendsInterface::*)(uint64_t)>(&::Epic::OnlineServices::Friends::FriendsInterface::RemoveNotifyFriendsUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180516b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"RemoveNotifyFriendsUpdate", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::FriendsInterface.SendInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::FriendsInterface::*)(::by_ref<::Epic::OnlineServices::Friends::SendInviteOptions>, ::System::Object*, ::Epic::OnlineServices::Friends::OnSendInviteCallback*)>(&::Epic::OnlineServices::Friends::FriendsInterface::SendInvite)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x180516b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"SendInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::SendInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnSendInviteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Friends::FriendsInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Friends::FriendsInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline void Epic::OnlineServices::Friends::FriendsInterface::AcceptInvite(::by_ref<::Epic::OnlineServices::Friends::AcceptInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnAcceptInviteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"AcceptInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::AcceptInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnAcceptInviteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::Friends::FriendsInterface::AddNotifyBlockedUsersUpdate(::by_ref<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallback*  blockedUsersUpdateHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"AddNotifyBlockedUsersUpdate", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::AddNotifyBlockedUsersUpdateOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, blockedUsersUpdateHandler);
}
inline uint64_t Epic::OnlineServices::Friends::FriendsInterface::AddNotifyFriendsUpdate(::by_ref<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnFriendsUpdateCallback*  friendsUpdateHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"AddNotifyFriendsUpdate", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnFriendsUpdateCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, friendsUpdateHandler);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Friends::FriendsInterface::GetBlockedUserAtIndex(::by_ref<::Epic::OnlineServices::Friends::GetBlockedUserAtIndexOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"GetBlockedUserAtIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::GetBlockedUserAtIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(this, ___internal_method, options);
}
inline int32_t Epic::OnlineServices::Friends::FriendsInterface::GetBlockedUsersCount(::by_ref<::Epic::OnlineServices::Friends::GetBlockedUsersCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"GetBlockedUsersCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::GetBlockedUsersCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Friends::FriendsInterface::GetFriendAtIndex(::by_ref<::Epic::OnlineServices::Friends::GetFriendAtIndexOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"GetFriendAtIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::GetFriendAtIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(this, ___internal_method, options);
}
inline int32_t Epic::OnlineServices::Friends::FriendsInterface::GetFriendsCount(::by_ref<::Epic::OnlineServices::Friends::GetFriendsCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"GetFriendsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::GetFriendsCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Friends::FriendsStatus Epic::OnlineServices::Friends::FriendsInterface::GetStatus(::by_ref<::Epic::OnlineServices::Friends::GetStatusOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"GetStatus", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::GetStatusOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Friends::FriendsStatus>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Friends::FriendsInterface::QueryFriends(::by_ref<::Epic::OnlineServices::Friends::QueryFriendsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnQueryFriendsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"QueryFriends", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::QueryFriendsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnQueryFriendsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Friends::FriendsInterface::RejectInvite(::by_ref<::Epic::OnlineServices::Friends::RejectInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnRejectInviteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"RejectInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::RejectInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnRejectInviteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Friends::FriendsInterface::RemoveNotifyBlockedUsersUpdate(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"RemoveNotifyBlockedUsersUpdate", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::Friends::FriendsInterface::RemoveNotifyFriendsUpdate(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"RemoveNotifyFriendsUpdate", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::Friends::FriendsInterface::SendInvite(::by_ref<::Epic::OnlineServices::Friends::SendInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Friends::OnSendInviteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::FriendsInterface*>(),
                        {"SendInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::SendInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Friends::OnSendInviteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Friends::FriendsInterface* Epic::OnlineServices::Friends::FriendsInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Friends::FriendsInterface*>());
}
inline ::Epic::OnlineServices::Friends::FriendsInterface* Epic::OnlineServices::Friends::FriendsInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Friends::FriendsInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Friends::FriendsInterface::FriendsInterface()   {
}
