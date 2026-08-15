#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/QueryJoinRoomTokenOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__QueryJoinRoomTokenOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__QueryJoinRoomTokenOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>)>(&::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180500140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::*)()>(&::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805000f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>"
constexpr  Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>* Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCAdmin__QueryJoinRoomTokenOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserIpAddresses", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::QueryJoinRoomTokenOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_TargetUserIds, uint32_t  m_TargetUserIdsCount, ::System::IntPtr  m_TargetUserIpAddresses) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_RoomName = m_RoomName;
this->m_TargetUserIds = m_TargetUserIds;
this->m_TargetUserIdsCount = m_TargetUserIdsCount;
this->m_TargetUserIpAddresses = m_TargetUserIpAddresses;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptionsInternal::QueryJoinRoomTokenOptionsInternal()   {
}
