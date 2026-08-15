#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionsInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionsInterface_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSession_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AddNotifyJoinSessionAcceptedOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AddNotifyLeaveSessionRequestedOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AddNotifySendSessionNativeInviteRequestedOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AddNotifySessionInviteAcceptedOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AddNotifySessionInviteReceivedOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AddNotifySessionInviteRejectedOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CopyActiveSessionHandleOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CopySessionHandleByInviteIdOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CopySessionHandleByUiEventIdOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CopySessionHandleForPresenceOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CreateSessionModificationOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CreateSessionSearchOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__DestroySessionOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__DumpSessionStateOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__EndSessionOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__GetInviteCountOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__GetInviteIdByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__IsUserInSessionOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__JoinSessionOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnDestroySessionCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnEndSessionCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnJoinSessionAcceptedCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnJoinSessionCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnLeaveSessionRequestedCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnQueryInvitesCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnRegisterPlayersCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnRejectInviteCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSendInviteCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSendSessionNativeInviteRequestedCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSessionInviteAcceptedCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSessionInviteReceivedCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSessionInviteRejectedCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnStartSessionCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnUnregisterPlayersCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnUpdateSessionCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__QueryInvitesOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__RegisterPlayersOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__RejectInviteOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SendInviteOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetails_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModification_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearch_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__StartSessionOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UnregisterPlayersOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UpdateSessionModificationOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UpdateSessionOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)()>(&::Epic::OnlineServices::Sessions::SessionsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Sessions::SessionsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.AddNotifyJoinSessionAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::AddNotifyJoinSessionAcceptedOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::AddNotifyJoinSessionAccepted)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804f3810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifyJoinSessionAccepted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifyJoinSessionAcceptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.AddNotifyLeaveSessionRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::AddNotifyLeaveSessionRequestedOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::AddNotifyLeaveSessionRequested)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804f3a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifyLeaveSessionRequested", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifyLeaveSessionRequestedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.AddNotifySendSessionNativeInviteRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::AddNotifySendSessionNativeInviteRequested)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804f3c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifySendSessionNativeInviteRequested", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.AddNotifySessionInviteAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteAcceptedOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::AddNotifySessionInviteAccepted)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804f3e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifySessionInviteAccepted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteAcceptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.AddNotifySessionInviteReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::AddNotifySessionInviteReceived)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804f4010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifySessionInviteReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.AddNotifySessionInviteRejected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteRejectedOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::AddNotifySessionInviteRejected)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804f4210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifySessionInviteRejected", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteRejectedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.CopyActiveSessionHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>, ::by_ref<::Epic::OnlineServices::Sessions::ActiveSession*>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::CopyActiveSessionHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f4410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CopyActiveSessionHandle", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSession*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.CopySessionHandleByInviteId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::CopySessionHandleByInviteId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f4490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CopySessionHandleByInviteId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.CopySessionHandleByUiEventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions>, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::CopySessionHandleByUiEventId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f4510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CopySessionHandleByUiEventId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.CopySessionHandleForPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions>, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::CopySessionHandleForPresence)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f4590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CopySessionHandleForPresence", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.CreateSessionModification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>, ::by_ref<::Epic::OnlineServices::Sessions::SessionModification*>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::CreateSessionModification)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804f4610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CreateSessionModification", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModification*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.CreateSessionSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::CreateSessionSearchOptions>, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearch*>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::CreateSessionSearch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f46b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CreateSessionSearch", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CreateSessionSearchOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearch*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.DestroySession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::DestroySessionOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnDestroySessionCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::DestroySession)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804f4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"DestroySession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::DestroySessionOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnDestroySessionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.DumpSessionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::DumpSessionStateOptions>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::DumpSessionState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804f4920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"DumpSessionState", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::DumpSessionStateOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.EndSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::EndSessionOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnEndSessionCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::EndSession)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804f4970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"EndSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::EndSessionOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnEndSessionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.GetInviteCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::GetInviteCountOptions>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::GetInviteCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804f4b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"GetInviteCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::GetInviteCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.GetInviteIdByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions>, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::GetInviteIdByIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f4bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"GetInviteIdByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.IsUserInSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::IsUserInSessionOptions>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::IsUserInSession)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804f4c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"IsUserInSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::IsUserInSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.JoinSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnJoinSessionCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::JoinSession)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1804f4cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"JoinSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::JoinSessionOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnJoinSessionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.QueryInvites
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnQueryInvitesCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::QueryInvites)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804f4ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"QueryInvites", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnQueryInvitesCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.RegisterPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::RegisterPlayers)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1804f50c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RegisterPlayers", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.RejectInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::RejectInviteOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnRejectInviteCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::RejectInvite)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804f5300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RejectInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RejectInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnRejectInviteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.RemoveNotifyJoinSessionAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(uint64_t)>(&::Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifyJoinSessionAccepted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f5530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifyJoinSessionAccepted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.RemoveNotifyLeaveSessionRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(uint64_t)>(&::Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifyLeaveSessionRequested)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f5560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifyLeaveSessionRequested", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.RemoveNotifySendSessionNativeInviteRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(uint64_t)>(&::Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifySendSessionNativeInviteRequested)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f5590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifySendSessionNativeInviteRequested", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.RemoveNotifySessionInviteAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(uint64_t)>(&::Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifySessionInviteAccepted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f55c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifySessionInviteAccepted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.RemoveNotifySessionInviteReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(uint64_t)>(&::Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifySessionInviteReceived)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f55f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifySessionInviteReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.RemoveNotifySessionInviteRejected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(uint64_t)>(&::Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifySessionInviteRejected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f5620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifySessionInviteRejected", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.SendInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::SendInviteOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSendInviteCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::SendInvite)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1804f5650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"SendInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SendInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnSendInviteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.StartSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::StartSessionOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnStartSessionCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::StartSession)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804f58a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"StartSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::StartSessionOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnStartSessionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.UnregisterPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::UnregisterPlayers)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1804f5aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"UnregisterPlayers", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.UpdateSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::OnUpdateSessionCallback*)>(&::Epic::OnlineServices::Sessions::SessionsInterface::UpdateSession)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804f5d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"UpdateSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnUpdateSessionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionsInterface.UpdateSessionModification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionsInterface::*)(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions>, ::by_ref<::Epic::OnlineServices::Sessions::SessionModification*>)>(&::Epic::OnlineServices::Sessions::SessionsInterface::UpdateSessionModification)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804f5ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"UpdateSessionModification", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModification*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionsInterface::setStaticF_SEARCH_BUCKET_ID(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "SEARCH_BUCKET_ID", ::Epic::OnlineServices::Sessions::SessionsInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::SessionsInterface::getStaticF_SEARCH_BUCKET_ID()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "SEARCH_BUCKET_ID", ::Epic::OnlineServices::Sessions::SessionsInterface*>();
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::setStaticF_SEARCH_EMPTY_SERVERS_ONLY(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "SEARCH_EMPTY_SERVERS_ONLY", ::Epic::OnlineServices::Sessions::SessionsInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::SessionsInterface::getStaticF_SEARCH_EMPTY_SERVERS_ONLY()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "SEARCH_EMPTY_SERVERS_ONLY", ::Epic::OnlineServices::Sessions::SessionsInterface*>();
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::setStaticF_SEARCH_MINSLOTSAVAILABLE(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "SEARCH_MINSLOTSAVAILABLE", ::Epic::OnlineServices::Sessions::SessionsInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::SessionsInterface::getStaticF_SEARCH_MINSLOTSAVAILABLE()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "SEARCH_MINSLOTSAVAILABLE", ::Epic::OnlineServices::Sessions::SessionsInterface*>();
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::setStaticF_SEARCH_NONEMPTY_SERVERS_ONLY(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "SEARCH_NONEMPTY_SERVERS_ONLY", ::Epic::OnlineServices::Sessions::SessionsInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sessions::SessionsInterface::getStaticF_SEARCH_NONEMPTY_SERVERS_ONLY()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "SEARCH_NONEMPTY_SERVERS_ONLY", ::Epic::OnlineServices::Sessions::SessionsInterface*>();
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::Sessions::SessionsInterface::AddNotifyJoinSessionAccepted(::by_ref<::Epic::OnlineServices::Sessions::AddNotifyJoinSessionAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifyJoinSessionAccepted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifyJoinSessionAcceptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::Sessions::SessionsInterface::AddNotifyLeaveSessionRequested(::by_ref<::Epic::OnlineServices::Sessions::AddNotifyLeaveSessionRequestedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifyLeaveSessionRequested", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifyLeaveSessionRequestedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::Sessions::SessionsInterface::AddNotifySendSessionNativeInviteRequested(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifySendSessionNativeInviteRequested", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::Sessions::SessionsInterface::AddNotifySessionInviteAccepted(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifySessionInviteAccepted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteAcceptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::Sessions::SessionsInterface::AddNotifySessionInviteReceived(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifySessionInviteReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::Sessions::SessionsInterface::AddNotifySessionInviteRejected(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteRejectedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"AddNotifySessionInviteRejected", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteRejectedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionsInterface::CopyActiveSessionHandle(::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::ActiveSession*>  outSessionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CopyActiveSessionHandle", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSession*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionsInterface::CopySessionHandleByInviteId(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>  outSessionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CopySessionHandleByInviteId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionsInterface::CopySessionHandleByUiEventId(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>  outSessionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CopySessionHandleByUiEventId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionsInterface::CopySessionHandleForPresence(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>  outSessionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CopySessionHandleForPresence", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionsInterface::CreateSessionModification(::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionModification*>  outSessionModificationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CreateSessionModification", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModification*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionModificationHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionsInterface::CreateSessionSearch(::by_ref<::Epic::OnlineServices::Sessions::CreateSessionSearchOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearch*>  outSessionSearchHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"CreateSessionSearch", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CreateSessionSearchOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearch*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionSearchHandle);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::DestroySession(::by_ref<::Epic::OnlineServices::Sessions::DestroySessionOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnDestroySessionCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"DestroySession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::DestroySessionOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnDestroySessionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionsInterface::DumpSessionState(::by_ref<::Epic::OnlineServices::Sessions::DumpSessionStateOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"DumpSessionState", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::DumpSessionStateOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::EndSession(::by_ref<::Epic::OnlineServices::Sessions::EndSessionOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnEndSessionCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"EndSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::EndSessionOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnEndSessionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint32_t Epic::OnlineServices::Sessions::SessionsInterface::GetInviteCount(::by_ref<::Epic::OnlineServices::Sessions::GetInviteCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"GetInviteCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::GetInviteCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionsInterface::GetInviteIdByIndex(::by_ref<::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"GetInviteIdByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBuffer);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionsInterface::IsUserInSession(::by_ref<::Epic::OnlineServices::Sessions::IsUserInSessionOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"IsUserInSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::IsUserInSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::JoinSession(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnJoinSessionCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"JoinSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::JoinSessionOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnJoinSessionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::QueryInvites(::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnQueryInvitesCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"QueryInvites", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnQueryInvitesCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::RegisterPlayers(::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RegisterPlayers", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnRegisterPlayersCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::RejectInvite(::by_ref<::Epic::OnlineServices::Sessions::RejectInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnRejectInviteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RejectInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RejectInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnRejectInviteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifyJoinSessionAccepted(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifyJoinSessionAccepted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifyLeaveSessionRequested(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifyLeaveSessionRequested", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifySendSessionNativeInviteRequested(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifySendSessionNativeInviteRequested", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifySessionInviteAccepted(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifySessionInviteAccepted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifySessionInviteReceived(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifySessionInviteReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::RemoveNotifySessionInviteRejected(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"RemoveNotifySessionInviteRejected", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::SendInvite(::by_ref<::Epic::OnlineServices::Sessions::SendInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnSendInviteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"SendInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SendInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnSendInviteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::StartSession(::by_ref<::Epic::OnlineServices::Sessions::StartSessionOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnStartSessionCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"StartSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::StartSessionOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnStartSessionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::UnregisterPlayers(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"UnregisterPlayers", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Sessions::SessionsInterface::UpdateSession(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnUpdateSessionCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"UpdateSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::OnUpdateSessionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionsInterface::UpdateSessionModification(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionModification*>  outSessionModificationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionsInterface*>(),
                        {"UpdateSessionModification", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModification*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionModificationHandle);
}
inline ::Epic::OnlineServices::Sessions::SessionsInterface* Epic::OnlineServices::Sessions::SessionsInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::SessionsInterface*>());
}
inline ::Epic::OnlineServices::Sessions::SessionsInterface* Epic::OnlineServices::Sessions::SessionsInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::SessionsInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionsInterface::SessionsInterface()   {
}
