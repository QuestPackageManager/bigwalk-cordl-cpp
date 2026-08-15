#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/UpdateSendingOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__UpdateSendingOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__UpdateSendingOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingOptions>)>(&::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e6850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::*)()>(&::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCData::UpdateSendingOptions>"
constexpr  Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCData::UpdateSendingOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCData::UpdateSendingOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCData::UpdateSendingOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCData::UpdateSendingOptions>* Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTCData__UpdateSendingOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTCData::UpdateSendingOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DataEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::UpdateSendingOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, int32_t  m_DataEnabled) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_RoomName = m_RoomName;
this->m_DataEnabled = m_DataEnabled;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCData::UpdateSendingOptionsInternal::UpdateSendingOptionsInternal()   {
}
