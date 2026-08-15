#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/JoinRoomOptionsInternal.hpp"
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomFlags_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::JoinRoomOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptions>)>(&::Epic::OnlineServices::RTC::JoinRoomOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1804f8100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::JoinRoomOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::JoinRoomOptionsInternal::*)()>(&::Epic::OnlineServices::RTC::JoinRoomOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::JoinRoomOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTC::JoinRoomOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::JoinRoomOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::JoinRoomOptions>"
constexpr  Epic::OnlineServices::RTC::JoinRoomOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::JoinRoomOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::JoinRoomOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::JoinRoomOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::JoinRoomOptions>* Epic::OnlineServices::RTC::JoinRoomOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTC__JoinRoomOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::JoinRoomOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTC::JoinRoomOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTC::JoinRoomOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientBaseUrl", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParticipantToken", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParticipantId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::Epic::OnlineServices::RTC::JoinRoomFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ManualAudioInputEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ManualAudioOutputEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTC::JoinRoomOptionsInternal::JoinRoomOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_ClientBaseUrl, ::System::IntPtr  m_ParticipantToken, ::System::IntPtr  m_ParticipantId, ::Epic::OnlineServices::RTC::JoinRoomFlags  m_Flags, int32_t  m_ManualAudioInputEnabled, int32_t  m_ManualAudioOutputEnabled) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_RoomName = m_RoomName;
this->m_ClientBaseUrl = m_ClientBaseUrl;
this->m_ParticipantToken = m_ParticipantToken;
this->m_ParticipantId = m_ParticipantId;
this->m_Flags = m_Flags;
this->m_ManualAudioInputEnabled = m_ManualAudioInputEnabled;
this->m_ManualAudioOutputEnabled = m_ManualAudioOutputEnabled;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::JoinRoomOptionsInternal::JoinRoomOptionsInternal()   {
}
