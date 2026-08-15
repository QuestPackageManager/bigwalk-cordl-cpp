#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/ParticipantStatusChangedCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/RTC/zzzz__RTCParticipantStatus_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__ParticipantStatusChangedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__ParticipantStatusChangedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>)>(&::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804fc370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>"
constexpr  Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>* Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTC__ParticipantStatusChangedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParticipantId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParticipantStatus", ty: "::Epic::OnlineServices::RTC::RTCParticipantStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParticipantMetadataCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParticipantMetadata", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParticipantInBlocklist", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::ParticipantStatusChangedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_ParticipantId, ::Epic::OnlineServices::RTC::RTCParticipantStatus  m_ParticipantStatus, uint32_t  m_ParticipantMetadataCount, ::System::IntPtr  m_ParticipantMetadata, int32_t  m_ParticipantInBlocklist) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_RoomName = m_RoomName;
this->m_ParticipantId = m_ParticipantId;
this->m_ParticipantStatus = m_ParticipantStatus;
this->m_ParticipantMetadataCount = m_ParticipantMetadataCount;
this->m_ParticipantMetadata = m_ParticipantMetadata;
this->m_ParticipantInBlocklist = m_ParticipantInBlocklist;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal::ParticipantStatusChangedCallbackInfoInternal()   {
}
