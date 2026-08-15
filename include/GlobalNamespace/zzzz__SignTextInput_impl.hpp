#pragma once
// IWYU pragma private; include "GlobalNamespace/SignTextInput.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SignTextInput_def.hpp"
#include "GlobalNamespace/zzzz__MultiPlatformInputField_def.hpp"
#include "TMPro/zzzz__TMP_SelectionCaret_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SignTextInput.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SignTextInput> (*)()>(&::GlobalNamespace::SignTextInput::get_instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804400d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignTextInput.ClearPageUpPageDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SignTextInput::*)()>(&::GlobalNamespace::SignTextInput::ClearPageUpPageDown)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18043fa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"ClearPageUpPageDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignTextInput.OnChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SignTextInput::*)(::StringW)>(&::GlobalNamespace::SignTextInput::OnChange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18043fd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"OnChange", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignTextInput.IsSignInputActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SignTextInput::IsSignInputActive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18043fd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"IsSignInputActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignTextInput.GetSignInputAndSetInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::SignTextInput::GetSignInputAndSetInactive)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18043fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"GetSignInputAndSetInactive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignTextInput.SetSignInputActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::SignTextInput::SetSignInputActive)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18043fe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"SetSignInputActive", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignTextInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SignTextInput::*)()>(&::GlobalNamespace::SignTextInput::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiPlatformInputField>& GlobalNamespace::SignTextInput::__cordl_internal_get_inputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputField;
}
constexpr ::UnityW<::GlobalNamespace::MultiPlatformInputField> const& GlobalNamespace::SignTextInput::__cordl_internal_get_inputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputField;
}
constexpr void GlobalNamespace::SignTextInput::__cordl_internal_set_inputField(::UnityW<::GlobalNamespace::MultiPlatformInputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputField = value;
}
constexpr bool& GlobalNamespace::SignTextInput::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::SignTextInput::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::SignTextInput::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::TMPro::TMP_SelectionCaret>& GlobalNamespace::SignTextInput::__cordl_internal_get_caretComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caretComponent;
}
constexpr ::UnityW<::TMPro::TMP_SelectionCaret> const& GlobalNamespace::SignTextInput::__cordl_internal_get_caretComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caretComponent;
}
constexpr void GlobalNamespace::SignTextInput::__cordl_internal_set_caretComponent(::UnityW<::TMPro::TMP_SelectionCaret>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___caretComponent = value;
}
constexpr ::StringW& GlobalNamespace::SignTextInput::__cordl_internal_get__stringAtLastChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringAtLastChange;
}
constexpr ::StringW const& GlobalNamespace::SignTextInput::__cordl_internal_get__stringAtLastChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringAtLastChange;
}
constexpr void GlobalNamespace::SignTextInput::__cordl_internal_set__stringAtLastChange(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stringAtLastChange = value;
}
inline ::UnityW<::GlobalNamespace::SignTextInput> GlobalNamespace::SignTextInput::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SignTextInput>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SignTextInput::ClearPageUpPageDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"ClearPageUpPageDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SignTextInput::OnChange(::StringW  newString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"OnChange", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newString);
}
inline bool GlobalNamespace::SignTextInput::IsSignInputActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"IsSignInputActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::SignTextInput::GetSignInputAndSetInactive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"GetSignInputAndSetInactive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SignTextInput::SetSignInputActive(::StringW  existingText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {"SetSignInputActive", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, existingText);
}
inline void GlobalNamespace::SignTextInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SignTextInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SignTextInput* GlobalNamespace::SignTextInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SignTextInput*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SignTextInput::SignTextInput()   {
}
