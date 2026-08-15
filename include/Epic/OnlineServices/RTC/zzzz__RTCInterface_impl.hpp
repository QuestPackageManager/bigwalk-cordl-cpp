#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/RTCInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__RTCInterface_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__AddNotifyDisconnectedOptions_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__AddNotifyParticipantStatusChangedOptions_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__AddNotifyRoomBeforeJoinOptions_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__AddNotifyRoomStatisticsUpdatedOptions_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__BlockParticipantOptions_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomOptions_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__LeaveRoomOptions_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnBlockParticipantCallback_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnDisconnectedCallback_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnJoinRoomCallback_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnLeaveRoomCallback_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnParticipantStatusChangedCallback_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnRoomBeforeJoinCallback_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnRoomStatisticsUpdatedCallback_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__SetRoomSettingOptions_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__SetSettingOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__RTCAudioInterface_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__RTCDataInterface_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::RTCInterface::*)()>(&::Epic::OnlineServices::RTC::RTCInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::RTCInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::RTC::RTCInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.AddNotifyDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTC::RTCInterface::*)(::by_ref<::Epic::OnlineServices::RTC::AddNotifyDisconnectedOptions>, ::System::Object*, ::Epic::OnlineServices::RTC::OnDisconnectedCallback*)>(&::Epic::OnlineServices::RTC::RTCInterface::AddNotifyDisconnected)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180500b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"AddNotifyDisconnected", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::AddNotifyDisconnectedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnDisconnectedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.AddNotifyParticipantStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTC::RTCInterface::*)(::by_ref<::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions>, ::System::Object*, ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallback*)>(&::Epic::OnlineServices::RTC::RTCInterface::AddNotifyParticipantStatusChanged)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180500dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"AddNotifyParticipantStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.AddNotifyRoomBeforeJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTC::RTCInterface::*)(::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>, ::System::Object*, ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallback*)>(&::Epic::OnlineServices::RTC::RTCInterface::AddNotifyRoomBeforeJoin)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x180501020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"AddNotifyRoomBeforeJoin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.AddNotifyRoomStatisticsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTC::RTCInterface::*)(::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomStatisticsUpdatedOptions>, ::System::Object*, ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*)>(&::Epic::OnlineServices::RTC::RTCInterface::AddNotifyRoomStatisticsUpdated)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180501240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"AddNotifyRoomStatisticsUpdated", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomStatisticsUpdatedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.BlockParticipant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::RTCInterface::*)(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantOptions>, ::System::Object*, ::Epic::OnlineServices::RTC::OnBlockParticipantCallback*)>(&::Epic::OnlineServices::RTC::RTCInterface::BlockParticipant)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180501490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"BlockParticipant", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::BlockParticipantOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.GetAudioInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::RTCAudioInterface* (::Epic::OnlineServices::RTC::RTCInterface::*)()>(&::Epic::OnlineServices::RTC::RTCInterface::GetAudioInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180501700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"GetAudioInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.GetDataInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCData::RTCDataInterface* (::Epic::OnlineServices::RTC::RTCInterface::*)()>(&::Epic::OnlineServices::RTC::RTCInterface::GetDataInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180501740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"GetDataInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.JoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::RTCInterface::*)(::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptions>, ::System::Object*, ::Epic::OnlineServices::RTC::OnJoinRoomCallback*)>(&::Epic::OnlineServices::RTC::RTCInterface::JoinRoom)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180501780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnJoinRoomCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.LeaveRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::RTCInterface::*)(::by_ref<::Epic::OnlineServices::RTC::LeaveRoomOptions>, ::System::Object*, ::Epic::OnlineServices::RTC::OnLeaveRoomCallback*)>(&::Epic::OnlineServices::RTC::RTCInterface::LeaveRoom)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180501990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"LeaveRoom", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::LeaveRoomOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnLeaveRoomCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.RemoveNotifyDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::RTCInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTC::RTCInterface::RemoveNotifyDisconnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180501bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"RemoveNotifyDisconnected", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.RemoveNotifyParticipantStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::RTCInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTC::RTCInterface::RemoveNotifyParticipantStatusChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180501bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"RemoveNotifyParticipantStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.RemoveNotifyRoomBeforeJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::RTCInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTC::RTCInterface::RemoveNotifyRoomBeforeJoin)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180501c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"RemoveNotifyRoomBeforeJoin", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.RemoveNotifyRoomStatisticsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::RTCInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTC::RTCInterface::RemoveNotifyRoomStatisticsUpdated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180501c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"RemoveNotifyRoomStatisticsUpdated", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.SetRoomSetting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTC::RTCInterface::*)(::by_ref<::Epic::OnlineServices::RTC::SetRoomSettingOptions>)>(&::Epic::OnlineServices::RTC::RTCInterface::SetRoomSetting)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180501c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"SetRoomSetting", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::SetRoomSettingOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::RTCInterface.SetSetting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTC::RTCInterface::*)(::by_ref<::Epic::OnlineServices::RTC::SetSettingOptions>)>(&::Epic::OnlineServices::RTC::RTCInterface::SetSetting)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180501d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"SetSetting", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::SetSettingOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::RTCInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::RTCInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::RTC::RTCInterface::AddNotifyDisconnected(::by_ref<::Epic::OnlineServices::RTC::AddNotifyDisconnectedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnDisconnectedCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"AddNotifyDisconnected", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::AddNotifyDisconnectedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnDisconnectedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::RTC::RTCInterface::AddNotifyParticipantStatusChanged(::by_ref<::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"AddNotifyParticipantStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::RTC::RTCInterface::AddNotifyRoomBeforeJoin(::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"AddNotifyRoomBeforeJoin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::RTC::RTCInterface::AddNotifyRoomStatisticsUpdated(::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomStatisticsUpdatedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"AddNotifyRoomStatisticsUpdated", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomStatisticsUpdatedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTC::RTCInterface::BlockParticipant(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnBlockParticipantCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"BlockParticipant", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::BlockParticipantOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnBlockParticipantCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::RTCAudio::RTCAudioInterface* Epic::OnlineServices::RTC::RTCInterface::GetAudioInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"GetAudioInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::RTCData::RTCDataInterface* Epic::OnlineServices::RTC::RTCInterface::GetDataInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"GetDataInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCData::RTCDataInterface*>(this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::RTCInterface::JoinRoom(::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnJoinRoomCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnJoinRoomCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTC::RTCInterface::LeaveRoom(::by_ref<::Epic::OnlineServices::RTC::LeaveRoomOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnLeaveRoomCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"LeaveRoom", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::LeaveRoomOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTC::OnLeaveRoomCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTC::RTCInterface::RemoveNotifyDisconnected(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"RemoveNotifyDisconnected", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::RTC::RTCInterface::RemoveNotifyParticipantStatusChanged(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"RemoveNotifyParticipantStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::RTC::RTCInterface::RemoveNotifyRoomBeforeJoin(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"RemoveNotifyRoomBeforeJoin", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::RTC::RTCInterface::RemoveNotifyRoomStatisticsUpdated(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"RemoveNotifyRoomStatisticsUpdated", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTC::RTCInterface::SetRoomSetting(::by_ref<::Epic::OnlineServices::RTC::SetRoomSettingOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"SetRoomSetting", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::SetRoomSettingOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTC::RTCInterface::SetSetting(::by_ref<::Epic::OnlineServices::RTC::SetSettingOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::RTCInterface*>(),
                        {"SetSetting", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::SetSettingOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::RTC::RTCInterface* Epic::OnlineServices::RTC::RTCInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTC::RTCInterface*>());
}
inline ::Epic::OnlineServices::RTC::RTCInterface* Epic::OnlineServices::RTC::RTCInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTC::RTCInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::RTCInterface::RTCInterface()   {
}
