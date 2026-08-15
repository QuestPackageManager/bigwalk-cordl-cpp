#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuScreenBack.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuScreenBack_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuScreenBack.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuScreenBack::*)()>(&::GlobalNamespace::MenuScreenBack::Update)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x180425030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuScreenBack*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuScreenBack._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuScreenBack::*)()>(&::GlobalNamespace::MenuScreenBack::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuScreenBack*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::MenuScreenBack::__cordl_internal_get_backAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backAction;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::MenuScreenBack::__cordl_internal_get_backAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backAction;
}
constexpr void GlobalNamespace::MenuScreenBack::__cordl_internal_set_backAction(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backAction = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::MenuScreenBack::__cordl_internal_get_unselectedSubmitAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unselectedSubmitAction;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::MenuScreenBack::__cordl_internal_get_unselectedSubmitAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unselectedSubmitAction;
}
constexpr void GlobalNamespace::MenuScreenBack::__cordl_internal_set_unselectedSubmitAction(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unselectedSubmitAction = value;
}
constexpr bool& GlobalNamespace::MenuScreenBack::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::MenuScreenBack::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::MenuScreenBack::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MenuScreenBack::__cordl_internal_get__currentSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSelected;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MenuScreenBack::__cordl_internal_get__currentSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSelected;
}
constexpr void GlobalNamespace::MenuScreenBack::__cordl_internal_set__currentSelected(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSelected = value;
}
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::MenuScreenBack::__cordl_internal_get__currentInputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentInputField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::MenuScreenBack::__cordl_internal_get__currentInputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentInputField;
}
constexpr void GlobalNamespace::MenuScreenBack::__cordl_internal_set__currentInputField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentInputField = value;
}
constexpr bool& GlobalNamespace::MenuScreenBack::__cordl_internal_get__inputFieldWasFocused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputFieldWasFocused;
}
constexpr bool const& GlobalNamespace::MenuScreenBack::__cordl_internal_get__inputFieldWasFocused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputFieldWasFocused;
}
constexpr void GlobalNamespace::MenuScreenBack::__cordl_internal_set__inputFieldWasFocused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputFieldWasFocused = value;
}
inline void GlobalNamespace::MenuScreenBack::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuScreenBack*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuScreenBack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuScreenBack*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuScreenBack* GlobalNamespace::MenuScreenBack::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuScreenBack*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuScreenBack::MenuScreenBack()   {
}
