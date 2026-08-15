#pragma once
// IWYU pragma private; include "GlobalNamespace/ErrorMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ErrorMenu_def.hpp"
#include "GlobalNamespace/zzzz__ErrorUtils_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ErrorMenu.Continue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorMenu::*)()>(&::GlobalNamespace::ErrorMenu::Continue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180432240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenu*>(),
                        {"Continue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ErrorMenu.SetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorMenu::*)(::GlobalNamespace::ErrorUtils_ErrorType)>(&::GlobalNamespace::ErrorMenu::SetError)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180432360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenu*>(),
                        {"SetError", {}, {::i2c::type_of<::GlobalNamespace::ErrorUtils_ErrorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ErrorMenu.SetErrorFromLocalizationKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorMenu::*)(::StringW, ::StringW)>(&::GlobalNamespace::ErrorMenu::SetErrorFromLocalizationKeys)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180432310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenu*>(),
                        {"SetErrorFromLocalizationKeys", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ErrorMenu.SetReturnToMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorMenu::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ErrorMenu::SetReturnToMenu)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenu*>(),
                        {"SetReturnToMenu", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ErrorMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorMenu::*)()>(&::GlobalNamespace::ErrorMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::ErrorMenu::__cordl_internal_get_errorTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorTitle;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::ErrorMenu::__cordl_internal_get_errorTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorTitle;
}
constexpr void GlobalNamespace::ErrorMenu::__cordl_internal_set_errorTitle(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorTitle = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::ErrorMenu::__cordl_internal_get_errorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::ErrorMenu::__cordl_internal_get_errorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorText;
}
constexpr void GlobalNamespace::ErrorMenu::__cordl_internal_set_errorText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ErrorMenu::__cordl_internal_get_continueMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueMenu;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ErrorMenu::__cordl_internal_get_continueMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueMenu;
}
constexpr void GlobalNamespace::ErrorMenu::__cordl_internal_set_continueMenu(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continueMenu = value;
}
inline void GlobalNamespace::ErrorMenu::Continue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenu*>(),
                        {"Continue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ErrorMenu::SetError(::GlobalNamespace::ErrorUtils_ErrorType  errorType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenu*>(),
                        {"SetError", {}, {::i2c::type_of<::GlobalNamespace::ErrorUtils_ErrorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorType);
}
inline void GlobalNamespace::ErrorMenu::SetErrorFromLocalizationKeys(::StringW  errorTitleKey, ::StringW  errorMessageKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenu*>(),
                        {"SetErrorFromLocalizationKeys", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorTitleKey, errorMessageKey);
}
inline void GlobalNamespace::ErrorMenu::SetReturnToMenu(::UnityEngine::GameObject*  menu)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenu*>(),
                        {"SetReturnToMenu", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menu);
}
inline void GlobalNamespace::ErrorMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ErrorMenu* GlobalNamespace::ErrorMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ErrorMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ErrorMenu::ErrorMenu()   {
}
