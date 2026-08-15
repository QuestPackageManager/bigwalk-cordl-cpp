#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/ReportInputStateOptionsInternal.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__ReportInputStateOptionsInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__ReportInputStateOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::ReportInputStateOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::ReportInputStateOptionsInternal::*)(::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptions>)>(&::Epic::OnlineServices::UI::ReportInputStateOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ReportInputStateOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::ReportInputStateOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::ReportInputStateOptionsInternal::*)()>(&::Epic::OnlineServices::UI::ReportInputStateOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ReportInputStateOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::ReportInputStateOptionsInternal::Set(::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ReportInputStateOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::UI::ReportInputStateOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ReportInputStateOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ReportInputStateOptions>"
constexpr  Epic::OnlineServices::UI::ReportInputStateOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ReportInputStateOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ReportInputStateOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ReportInputStateOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ReportInputStateOptions>* Epic::OnlineServices::UI::ReportInputStateOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__ReportInputStateOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ReportInputStateOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::UI::ReportInputStateOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::UI::ReportInputStateOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ButtonDownFlags", ty: "::Epic::OnlineServices::UI::InputStateButtonFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AcceptIsFaceButtonRight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MouseButtonDown", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MousePosX", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MousePosY", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GamepadIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LeftStickX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LeftStickY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RightStickX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RightStickY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LeftTrigger", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RightTrigger", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::ReportInputStateOptionsInternal::ReportInputStateOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::UI::InputStateButtonFlags  m_ButtonDownFlags, int32_t  m_AcceptIsFaceButtonRight, int32_t  m_MouseButtonDown, uint32_t  m_MousePosX, uint32_t  m_MousePosY, uint32_t  m_GamepadIndex, float_t  m_LeftStickX, float_t  m_LeftStickY, float_t  m_RightStickX, float_t  m_RightStickY, float_t  m_LeftTrigger, float_t  m_RightTrigger) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ButtonDownFlags = m_ButtonDownFlags;
this->m_AcceptIsFaceButtonRight = m_AcceptIsFaceButtonRight;
this->m_MouseButtonDown = m_MouseButtonDown;
this->m_MousePosX = m_MousePosX;
this->m_MousePosY = m_MousePosY;
this->m_GamepadIndex = m_GamepadIndex;
this->m_LeftStickX = m_LeftStickX;
this->m_LeftStickY = m_LeftStickY;
this->m_RightStickX = m_RightStickX;
this->m_RightStickY = m_RightStickY;
this->m_LeftTrigger = m_LeftTrigger;
this->m_RightTrigger = m_RightTrigger;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::ReportInputStateOptionsInternal::ReportInputStateOptionsInternal()   {
}
