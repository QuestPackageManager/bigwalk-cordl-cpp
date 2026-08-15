#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/SetParticipantHardMuteOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__SetParticipantHardMuteOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__SetParticipantHardMuteOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>)>(&::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805028b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::*)()>(&::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>"
constexpr  Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>* Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAdmin__SetParticipantHardMuteOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Mute", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::SetParticipantHardMuteOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_TargetUserId, int32_t  m_Mute) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_RoomName = m_RoomName;
this->m_TargetUserId = m_TargetUserId;
this->m_Mute = m_Mute;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptionsInternal::SetParticipantHardMuteOptionsInternal()   {
}
