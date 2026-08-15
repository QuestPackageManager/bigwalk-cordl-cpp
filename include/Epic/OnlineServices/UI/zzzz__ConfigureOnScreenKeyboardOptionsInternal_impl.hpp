#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/ConfigureOnScreenKeyboardOptionsInternal.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardBehavior_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__ConfigureOnScreenKeyboardOptionsInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__ConfigureOnScreenKeyboardOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::*)(::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>)>(&::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804d70f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::*)()>(&::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::Set(::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>"
constexpr  Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>* Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__ConfigureOnScreenKeyboardOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Behavior", ty: "::Epic::OnlineServices::UI::OnScreenKeyboardBehavior", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsDeviceChecksEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::ConfigureOnScreenKeyboardOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  m_Behavior, int32_t  m_IsDeviceChecksEnabled) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Behavior = m_Behavior;
this->m_IsDeviceChecksEnabled = m_IsDeviceChecksEnabled;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptionsInternal::ConfigureOnScreenKeyboardOptionsInternal()   {
}
