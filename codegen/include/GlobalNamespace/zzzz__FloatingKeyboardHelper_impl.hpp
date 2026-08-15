#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatingKeyboardHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FloatingKeyboardHelper_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatingKeyboardHelper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatingKeyboardHelper::*)()>(&::GlobalNamespace::FloatingKeyboardHelper::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180421000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingKeyboardHelper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatingKeyboardHelper::*)()>(&::GlobalNamespace::FloatingKeyboardHelper::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804212e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingKeyboardHelper.SetFocused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatingKeyboardHelper::*)(bool)>(&::GlobalNamespace::FloatingKeyboardHelper::SetFocused)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804211b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {"SetFocused", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingKeyboardHelper.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatingKeyboardHelper::*)()>(&::GlobalNamespace::FloatingKeyboardHelper::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180421030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingKeyboardHelper.SetFloatingKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::FloatingKeyboardHelper::SetFloatingKeyboard)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180421050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {"SetFloatingKeyboard", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingKeyboardHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatingKeyboardHelper::*)()>(&::GlobalNamespace::FloatingKeyboardHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::FloatingKeyboardHelper::__cordl_internal_get__inputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::FloatingKeyboardHelper::__cordl_internal_get__inputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputField;
}
constexpr void GlobalNamespace::FloatingKeyboardHelper::__cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputField = value;
}
constexpr bool& GlobalNamespace::FloatingKeyboardHelper::__cordl_internal_get__isFocused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFocused;
}
constexpr bool const& GlobalNamespace::FloatingKeyboardHelper::__cordl_internal_get__isFocused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFocused;
}
constexpr void GlobalNamespace::FloatingKeyboardHelper::__cordl_internal_set__isFocused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFocused = value;
}
inline void GlobalNamespace::FloatingKeyboardHelper::setStaticF_floatingKeyboardHelpers(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::FloatingKeyboardHelper>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::FloatingKeyboardHelper>>*, "floatingKeyboardHelpers", ::GlobalNamespace::FloatingKeyboardHelper*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::FloatingKeyboardHelper>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::FloatingKeyboardHelper>>* GlobalNamespace::FloatingKeyboardHelper::getStaticF_floatingKeyboardHelpers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::FloatingKeyboardHelper>>*, "floatingKeyboardHelpers", ::GlobalNamespace::FloatingKeyboardHelper*>();
}
inline void GlobalNamespace::FloatingKeyboardHelper::setStaticF_OnChange(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "OnChange", ::GlobalNamespace::FloatingKeyboardHelper*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* GlobalNamespace::FloatingKeyboardHelper::getStaticF_OnChange()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "OnChange", ::GlobalNamespace::FloatingKeyboardHelper*>();
}
inline void GlobalNamespace::FloatingKeyboardHelper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloatingKeyboardHelper::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloatingKeyboardHelper::SetFocused(bool  newIsFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {"SetFocused", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIsFocused);
}
inline void GlobalNamespace::FloatingKeyboardHelper::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloatingKeyboardHelper::SetFloatingKeyboard(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {"SetFloatingKeyboard", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::FloatingKeyboardHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FloatingKeyboardHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatingKeyboardHelper* GlobalNamespace::FloatingKeyboardHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatingKeyboardHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatingKeyboardHelper::FloatingKeyboardHelper()   {
}
