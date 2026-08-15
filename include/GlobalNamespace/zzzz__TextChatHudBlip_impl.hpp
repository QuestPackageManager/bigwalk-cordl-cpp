#pragma once
// IWYU pragma private; include "GlobalNamespace/TextChatHudBlip.hpp"
#include "GlobalNamespace/zzzz__TextChatHud_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextChatHudBlip_def.hpp"
#include "GlobalNamespace/zzzz__TextChatHud_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextChatHudBlip.set_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHudBlip::*)(::UnityEngine::Color)>(&::GlobalNamespace::TextChatHudBlip::set_color)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180456380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHudBlip*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatHudBlip.set_blipIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHudBlip::*)(::GlobalNamespace::TextChatHud_BlipIcon)>(&::GlobalNamespace::TextChatHudBlip::set_blipIcon)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1804561a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHudBlip*>(),
                        {"set_blipIcon", {}, {::i2c::type_of<::GlobalNamespace::TextChatHud_BlipIcon>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatHudBlip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHudBlip::*)()>(&::GlobalNamespace::TextChatHudBlip::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHudBlip*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::TextChatHudBlip::__cordl_internal_get_playerImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::TextChatHudBlip::__cordl_internal_get_playerImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerImage;
}
constexpr void GlobalNamespace::TextChatHudBlip::__cordl_internal_set_playerImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::TextChatHudBlip::__cordl_internal_get_radioImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radioImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::TextChatHudBlip::__cordl_internal_get_radioImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radioImage;
}
constexpr void GlobalNamespace::TextChatHudBlip::__cordl_internal_set_radioImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radioImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::TextChatHudBlip::__cordl_internal_get_typingImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typingImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::TextChatHudBlip::__cordl_internal_get_typingImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typingImage;
}
constexpr void GlobalNamespace::TextChatHudBlip::__cordl_internal_set_typingImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typingImage = value;
}
constexpr bool& GlobalNamespace::TextChatHudBlip::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::TextChatHudBlip::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::TextChatHudBlip::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TextChatHudBlip::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TextChatHudBlip::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void GlobalNamespace::TextChatHudBlip::__cordl_internal_set__color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____color = value;
}
constexpr ::GlobalNamespace::TextChatHud_BlipIcon& GlobalNamespace::TextChatHudBlip::__cordl_internal_get__blipIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blipIcon;
}
constexpr ::GlobalNamespace::TextChatHud_BlipIcon const& GlobalNamespace::TextChatHudBlip::__cordl_internal_get__blipIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blipIcon;
}
constexpr void GlobalNamespace::TextChatHudBlip::__cordl_internal_set__blipIcon(::GlobalNamespace::TextChatHud_BlipIcon  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blipIcon = value;
}
inline void GlobalNamespace::TextChatHudBlip::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHudBlip*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TextChatHudBlip::set_blipIcon(::GlobalNamespace::TextChatHud_BlipIcon  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHudBlip*>(),
                        {"set_blipIcon", {}, {::i2c::type_of<::GlobalNamespace::TextChatHud_BlipIcon>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TextChatHudBlip::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHudBlip*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextChatHudBlip* GlobalNamespace::TextChatHudBlip::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextChatHudBlip*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextChatHudBlip::TextChatHudBlip()   {
}
