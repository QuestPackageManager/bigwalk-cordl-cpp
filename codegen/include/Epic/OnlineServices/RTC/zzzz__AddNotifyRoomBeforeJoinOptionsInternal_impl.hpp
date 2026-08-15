#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/AddNotifyRoomBeforeJoinOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__AddNotifyRoomBeforeJoinOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__AddNotifyRoomBeforeJoinOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>)>(&::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::*)()>(&::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>"
constexpr  Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>* Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTC__AddNotifyRoomBeforeJoinOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::AddNotifyRoomBeforeJoinOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptionsInternal::AddNotifyRoomBeforeJoinOptionsInternal()   {
}
