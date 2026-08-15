#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/RTCDataInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__RTCDataInterface_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__AddNotifyDataReceivedOptions_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__AddNotifyParticipantUpdatedOptions_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnDataReceivedCallback_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnParticipantUpdatedCallback_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnUpdateReceivingCallback_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnUpdateSendingCallback_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__SendDataOptions_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__UpdateReceivingOptions_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__UpdateSendingOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::RTCDataInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::RTCDataInterface::*)()>(&::Epic::OnlineServices::RTCData::RTCDataInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::RTCDataInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::RTCDataInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::RTCData::RTCDataInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::RTCDataInterface.AddNotifyDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTCData::RTCDataInterface::*)(::by_ref<::Epic::OnlineServices::RTCData::AddNotifyDataReceivedOptions>, ::System::Object*, ::Epic::OnlineServices::RTCData::OnDataReceivedCallback*)>(&::Epic::OnlineServices::RTCData::RTCDataInterface::AddNotifyDataReceived)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1804f0520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"AddNotifyDataReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::AddNotifyDataReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCData::OnDataReceivedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::RTCDataInterface.AddNotifyParticipantUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTCData::RTCDataInterface::*)(::by_ref<::Epic::OnlineServices::RTCData::AddNotifyParticipantUpdatedOptions>, ::System::Object*, ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallback*)>(&::Epic::OnlineServices::RTCData::RTCDataInterface::AddNotifyParticipantUpdated)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1804f0770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"AddNotifyParticipantUpdated", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::AddNotifyParticipantUpdatedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::RTCDataInterface.RemoveNotifyDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::RTCDataInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTCData::RTCDataInterface::RemoveNotifyDataReceived)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f09c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"RemoveNotifyDataReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::RTCDataInterface.RemoveNotifyParticipantUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::RTCDataInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTCData::RTCDataInterface::RemoveNotifyParticipantUpdated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f09f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"RemoveNotifyParticipantUpdated", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::RTCDataInterface.SendData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCData::RTCDataInterface::*)(::by_ref<::Epic::OnlineServices::RTCData::SendDataOptions>)>(&::Epic::OnlineServices::RTCData::RTCDataInterface::SendData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f0a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"SendData", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::SendDataOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::RTCDataInterface.UpdateReceiving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::RTCDataInterface::*)(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingOptions>, ::System::Object*, ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*)>(&::Epic::OnlineServices::RTCData::RTCDataInterface::UpdateReceiving)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1804f0ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"UpdateReceiving", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::RTCDataInterface.UpdateSending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::RTCDataInterface::*)(::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingOptions>, ::System::Object*, ::Epic::OnlineServices::RTCData::OnUpdateSendingCallback*)>(&::Epic::OnlineServices::RTCData::RTCDataInterface::UpdateSending)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1804f0d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"UpdateSending", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCData::OnUpdateSendingCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCData::RTCDataInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::RTCData::RTCDataInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::RTCData::RTCDataInterface::AddNotifyDataReceived(::by_ref<::Epic::OnlineServices::RTCData::AddNotifyDataReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCData::OnDataReceivedCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"AddNotifyDataReceived", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::AddNotifyDataReceivedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCData::OnDataReceivedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::RTCData::RTCDataInterface::AddNotifyParticipantUpdated(::by_ref<::Epic::OnlineServices::RTCData::AddNotifyParticipantUpdatedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"AddNotifyParticipantUpdated", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::AddNotifyParticipantUpdatedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCData::RTCDataInterface::RemoveNotifyDataReceived(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"RemoveNotifyDataReceived", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::RTCData::RTCDataInterface::RemoveNotifyParticipantUpdated(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"RemoveNotifyParticipantUpdated", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCData::RTCDataInterface::SendData(::by_ref<::Epic::OnlineServices::RTCData::SendDataOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"SendData", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::SendDataOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::RTCData::RTCDataInterface::UpdateReceiving(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"UpdateReceiving", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCData::RTCDataInterface::UpdateSending(::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCData::OnUpdateSendingCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::RTCDataInterface*>(),
                        {"UpdateSending", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCData::OnUpdateSendingCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::RTCData::RTCDataInterface* Epic::OnlineServices::RTCData::RTCDataInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCData::RTCDataInterface*>());
}
inline ::Epic::OnlineServices::RTCData::RTCDataInterface* Epic::OnlineServices::RTCData::RTCDataInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCData::RTCDataInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCData::RTCDataInterface::RTCDataInterface()   {
}
