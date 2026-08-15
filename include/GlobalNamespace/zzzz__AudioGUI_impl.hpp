#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioGUI.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioGUI_def.hpp"
#include "GlobalNamespace/zzzz__IAudioGUI_def.hpp"
#include "GlobalNamespace/zzzz__ReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioGUI.get_GUICallers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>* (::GlobalNamespace::AudioGUI::*)()>(&::GlobalNamespace::AudioGUI::get_GUICallers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18047b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"get_GUICallers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioGUI.get_HelpBoxStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (*)()>(&::GlobalNamespace::AudioGUI::get_HelpBoxStyle)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18047b2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"get_HelpBoxStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioGUI.ColoredBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (*)(::UnityEngine::Color)>(&::GlobalNamespace::AudioGUI::ColoredBackground)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x18047abc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"ColoredBackground", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioGUI.RegisterGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioGUI::*)(::GlobalNamespace::IAudioGUI*, int32_t)>(&::GlobalNamespace::AudioGUI::RegisterGUI)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18047b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"RegisterGUI", {}, {::i2c::type_of<::GlobalNamespace::IAudioGUI*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioGUI.DeregisterGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioGUI::*)(::GlobalNamespace::IAudioGUI*)>(&::GlobalNamespace::AudioGUI::DeregisterGUI)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18047af20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"DeregisterGUI", {}, {::i2c::type_of<::GlobalNamespace::IAudioGUI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioGUI.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioGUI::*)()>(&::GlobalNamespace::AudioGUI::OnGUI)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18047af80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioGUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioGUI::*)()>(&::GlobalNamespace::AudioGUI::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18047b230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioGUI*>*& GlobalNamespace::AudioGUI::__cordl_internal_get__guiCallers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiCallers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioGUI*>* const& GlobalNamespace::AudioGUI::__cordl_internal_get__guiCallers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiCallers;
}
constexpr void GlobalNamespace::AudioGUI::__cordl_internal_set__guiCallers(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioGUI*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiCallers = value;
}
constexpr ::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>*& GlobalNamespace::AudioGUI::__cordl_internal_get__readonlyGUICaller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyGUICaller;
}
constexpr ::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>* const& GlobalNamespace::AudioGUI::__cordl_internal_get__readonlyGUICaller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyGUICaller;
}
constexpr void GlobalNamespace::AudioGUI::__cordl_internal_set__readonlyGUICaller(::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyGUICaller = value;
}
inline void GlobalNamespace::AudioGUI::setStaticF__style(::UnityEngine::GUIStyle*  value)  {
::cordl_internals::setStaticField<::UnityEngine::GUIStyle*, "_style", ::GlobalNamespace::AudioGUI*>(std::forward<::UnityEngine::GUIStyle*>(value));
}
inline ::UnityEngine::GUIStyle* GlobalNamespace::AudioGUI::getStaticF__style()  {
return ::cordl_internals::getStaticField<::UnityEngine::GUIStyle*, "_style", ::GlobalNamespace::AudioGUI*>();
}
inline void GlobalNamespace::AudioGUI::setStaticF__texture(::UnityW<::UnityEngine::Texture2D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "_texture", ::GlobalNamespace::AudioGUI*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::AudioGUI::getStaticF__texture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "_texture", ::GlobalNamespace::AudioGUI*>();
}
inline void GlobalNamespace::AudioGUI::setStaticF__styleColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "_styleColor", ::GlobalNamespace::AudioGUI*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color GlobalNamespace::AudioGUI::getStaticF__styleColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "_styleColor", ::GlobalNamespace::AudioGUI*>();
}
inline void GlobalNamespace::AudioGUI::setStaticF__helpBox(::UnityEngine::GUIStyle*  value)  {
::cordl_internals::setStaticField<::UnityEngine::GUIStyle*, "_helpBox", ::GlobalNamespace::AudioGUI*>(std::forward<::UnityEngine::GUIStyle*>(value));
}
inline ::UnityEngine::GUIStyle* GlobalNamespace::AudioGUI::getStaticF__helpBox()  {
return ::cordl_internals::getStaticField<::UnityEngine::GUIStyle*, "_helpBox", ::GlobalNamespace::AudioGUI*>();
}
inline ::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>* GlobalNamespace::AudioGUI::get_GUICallers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"get_GUICallers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>*>(this, ___internal_method);
}
inline ::UnityEngine::GUIStyle* GlobalNamespace::AudioGUI::get_HelpBoxStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"get_HelpBoxStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(nullptr, ___internal_method);
}
inline ::UnityEngine::GUIStyle* GlobalNamespace::AudioGUI::ColoredBackground(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"ColoredBackground", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(nullptr, ___internal_method, color);
}
inline void GlobalNamespace::AudioGUI::RegisterGUI(::GlobalNamespace::IAudioGUI*  obj, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"RegisterGUI", {}, {::i2c::type_of<::GlobalNamespace::IAudioGUI*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, index);
}
inline void GlobalNamespace::AudioGUI::DeregisterGUI(::GlobalNamespace::IAudioGUI*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"DeregisterGUI", {}, {::i2c::type_of<::GlobalNamespace::IAudioGUI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::AudioGUI::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioGUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioGUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioGUI* GlobalNamespace::AudioGUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioGUI*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioGUI::AudioGUI()   {
}
