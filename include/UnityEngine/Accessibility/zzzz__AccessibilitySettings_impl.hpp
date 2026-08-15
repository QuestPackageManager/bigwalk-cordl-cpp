#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilitySettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilitySettings_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilitySettings.Internal_OnFontScaleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Accessibility::AccessibilitySettings::Internal_OnFontScaleChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822157d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"Internal_OnFontScaleChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilitySettings.Internal_OnBoldTextStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Accessibility::AccessibilitySettings::Internal_OnBoldTextStatusChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182215710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"Internal_OnBoldTextStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilitySettings.Internal_OnClosedCaptioningStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Accessibility::AccessibilitySettings::Internal_OnClosedCaptioningStatusChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182215770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"Internal_OnClosedCaptioningStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilitySettings.InvokeFontScaleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Accessibility::AccessibilitySettings::InvokeFontScaleChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182215890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"InvokeFontScaleChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilitySettings.InvokeBoldTextStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Accessibility::AccessibilitySettings::InvokeBoldTextStatusChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182215830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"InvokeBoldTextStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilitySettings.InvokeClosedCaptionStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Accessibility::AccessibilitySettings::InvokeClosedCaptionStatusChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182215860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"InvokeClosedCaptionStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::AccessibilitySettings::setStaticF_fontScaleChanged(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "fontScaleChanged", ::UnityEngine::Accessibility::AccessibilitySettings*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* UnityEngine::Accessibility::AccessibilitySettings::getStaticF_fontScaleChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "fontScaleChanged", ::UnityEngine::Accessibility::AccessibilitySettings*>();
}
inline void UnityEngine::Accessibility::AccessibilitySettings::setStaticF_boldTextStatusChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "boldTextStatusChanged", ::UnityEngine::Accessibility::AccessibilitySettings*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Accessibility::AccessibilitySettings::getStaticF_boldTextStatusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "boldTextStatusChanged", ::UnityEngine::Accessibility::AccessibilitySettings*>();
}
inline void UnityEngine::Accessibility::AccessibilitySettings::setStaticF_closedCaptioningStatusChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "closedCaptioningStatusChanged", ::UnityEngine::Accessibility::AccessibilitySettings*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Accessibility::AccessibilitySettings::getStaticF_closedCaptioningStatusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "closedCaptioningStatusChanged", ::UnityEngine::Accessibility::AccessibilitySettings*>();
}
inline void UnityEngine::Accessibility::AccessibilitySettings::Internal_OnFontScaleChanged(float_t  newFontScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"Internal_OnFontScaleChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newFontScale);
}
inline void UnityEngine::Accessibility::AccessibilitySettings::Internal_OnBoldTextStatusChanged(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"Internal_OnBoldTextStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::Accessibility::AccessibilitySettings::Internal_OnClosedCaptioningStatusChanged(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"Internal_OnClosedCaptioningStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::Accessibility::AccessibilitySettings::InvokeFontScaleChanged(float_t  newFontScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"InvokeFontScaleChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newFontScale);
}
inline void UnityEngine::Accessibility::AccessibilitySettings::InvokeBoldTextStatusChanged(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"InvokeBoldTextStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::Accessibility::AccessibilitySettings::InvokeClosedCaptionStatusChanged(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilitySettings*>(),
                        {"InvokeClosedCaptionStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilitySettings::AccessibilitySettings()   {
}
