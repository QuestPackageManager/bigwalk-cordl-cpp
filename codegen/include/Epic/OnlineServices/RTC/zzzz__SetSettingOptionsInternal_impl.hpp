#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/SetSettingOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__SetSettingOptionsInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__SetSettingOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::SetSettingOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::SetSettingOptionsInternal::*)(::by_ref<::Epic::OnlineServices::RTC::SetSettingOptions>)>(&::Epic::OnlineServices::RTC::SetSettingOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1804f7020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::SetSettingOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::SetSettingOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::SetSettingOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::SetSettingOptionsInternal::*)()>(&::Epic::OnlineServices::RTC::SetSettingOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::SetSettingOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::SetSettingOptionsInternal::Set(::by_ref<::Epic::OnlineServices::RTC::SetSettingOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::SetSettingOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::SetSettingOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::RTC::SetSettingOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::SetSettingOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::SetSettingOptions>"
constexpr  Epic::OnlineServices::RTC::SetSettingOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::SetSettingOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::SetSettingOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::SetSettingOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::SetSettingOptions>* Epic::OnlineServices::RTC::SetSettingOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__RTC__SetSettingOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::RTC::SetSettingOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::RTC::SetSettingOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::RTC::SetSettingOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SettingName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SettingValue", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTC::SetSettingOptionsInternal::SetSettingOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SettingName, ::System::IntPtr  m_SettingValue) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SettingName = m_SettingName;
this->m_SettingValue = m_SettingValue;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::SetSettingOptionsInternal::SetSettingOptionsInternal()   {
}
