#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/CustomInvitesInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__CustomInvitesInterface_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AcceptRequestToJoinOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyCustomInviteAcceptedOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyCustomInviteReceivedOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyCustomInviteRejectedOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyRequestToJoinAcceptedOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyRequestToJoinReceivedOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyRequestToJoinRejectedOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyRequestToJoinResponseReceivedOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifySendCustomNativeInviteRequestedOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__FinalizeInviteOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnAcceptRequestToJoinCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteAcceptedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteReceivedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteRejectedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRejectRequestToJoinCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinAcceptedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinReceivedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinRejectedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinResponseReceivedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendCustomInviteCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendCustomNativeInviteRequestedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendRequestToJoinCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RejectRequestToJoinOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendCustomInviteOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendRequestToJoinOptions_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SetCustomInviteOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)()>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.AcceptRequestToJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AcceptRequestToJoin)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1805124c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AcceptRequestToJoin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.AddNotifyCustomInviteAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyCustomInviteAccepted)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805126f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyCustomInviteAccepted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.AddNotifyCustomInviteReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyCustomInviteReceived)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805128e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyCustomInviteReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.AddNotifyCustomInviteRejected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyCustomInviteRejected)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180512ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyCustomInviteRejected", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.AddNotifyRequestToJoinAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyRequestToJoinAccepted)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180512cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyRequestToJoinAccepted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.AddNotifyRequestToJoinReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinReceivedCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyRequestToJoinReceived)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180512dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyRequestToJoinReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinReceivedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.AddNotifyRequestToJoinRejected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinRejectedOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyRequestToJoinRejected)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180512ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyRequestToJoinRejected", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinRejectedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.AddNotifyRequestToJoinResponseReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyRequestToJoinResponseReceived)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180512fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyRequestToJoinResponseReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.AddNotifySendCustomNativeInviteRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifySendCustomNativeInviteRequestedOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifySendCustomNativeInviteRequested)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805130c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifySendCustomNativeInviteRequested", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifySendCustomNativeInviteRequestedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.FinalizeInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::FinalizeInvite)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805131c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"FinalizeInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.RejectRequestToJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RejectRequestToJoin)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180513280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RejectRequestToJoin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.RemoveNotifyCustomInviteAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(uint64_t)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyCustomInviteAccepted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180513480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyCustomInviteAccepted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.RemoveNotifyCustomInviteReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(uint64_t)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyCustomInviteReceived)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805134b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyCustomInviteReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.RemoveNotifyCustomInviteRejected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(uint64_t)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyCustomInviteRejected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805134e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyCustomInviteRejected", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.RemoveNotifyRequestToJoinAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(uint64_t)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyRequestToJoinAccepted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180513510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyRequestToJoinAccepted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.RemoveNotifyRequestToJoinReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(uint64_t)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyRequestToJoinReceived)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180513540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyRequestToJoinReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.RemoveNotifyRequestToJoinRejected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(uint64_t)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyRequestToJoinRejected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180513570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyRequestToJoinRejected", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.RemoveNotifyRequestToJoinResponseReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(uint64_t)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyRequestToJoinResponseReceived)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805135a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyRequestToJoinResponseReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.RemoveNotifySendCustomNativeInviteRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(uint64_t)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifySendCustomNativeInviteRequested)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805135d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifySendCustomNativeInviteRequested", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.SendCustomInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::SendCustomInvite)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180513600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"SendCustomInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.SendRequestToJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinOptions>, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallback*)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::SendRequestToJoin)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180513700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"SendRequestToJoin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface.SetCustomInvite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions>)>(&::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::SetCustomInvite)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180513800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"SetCustomInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AcceptRequestToJoin(::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AcceptRequestToJoin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyCustomInviteAccepted(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyCustomInviteAccepted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyCustomInviteReceived(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyCustomInviteReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyCustomInviteRejected(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyCustomInviteRejected", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyRequestToJoinAccepted(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyRequestToJoinAccepted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyRequestToJoinReceived(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinReceivedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyRequestToJoinReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinReceivedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyRequestToJoinRejected(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinRejectedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyRequestToJoinRejected", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinRejectedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifyRequestToJoinResponseReceived(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifyRequestToJoinResponseReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::CustomInvites::CustomInvitesInterface::AddNotifySendCustomNativeInviteRequested(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifySendCustomNativeInviteRequestedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"AddNotifySendCustomNativeInviteRequested", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifySendCustomNativeInviteRequestedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::CustomInvites::CustomInvitesInterface::FinalizeInvite(::by_ref<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"FinalizeInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RejectRequestToJoin(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RejectRequestToJoin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyCustomInviteAccepted(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyCustomInviteAccepted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyCustomInviteReceived(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyCustomInviteReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyCustomInviteRejected(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyCustomInviteRejected", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyRequestToJoinAccepted(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyRequestToJoinAccepted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyRequestToJoinReceived(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyRequestToJoinReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyRequestToJoinRejected(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyRequestToJoinRejected", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifyRequestToJoinResponseReceived(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifyRequestToJoinResponseReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::RemoveNotifySendCustomNativeInviteRequested(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"RemoveNotifySendCustomNativeInviteRequested", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::SendCustomInvite(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"SendCustomInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::CustomInvites::CustomInvitesInterface::SendRequestToJoin(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"SendRequestToJoin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::CustomInvites::CustomInvitesInterface::SetCustomInvite(::by_ref<::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(),
                        {"SetCustomInvite", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface* Epic::OnlineServices::CustomInvites::CustomInvitesInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>());
}
inline ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface* Epic::OnlineServices::CustomInvites::CustomInvitesInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface::CustomInvitesInterface()   {
}
