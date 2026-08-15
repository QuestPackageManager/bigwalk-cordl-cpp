#pragma once
// IWYU pragma private; include "Mirror/Examples/Basic/PlayerUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/Basic/zzzz__PlayerUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Basic::PlayerUI.SetLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::PlayerUI::*)()>(&::Mirror::Examples::Basic::PlayerUI::SetLocalPlayer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815602f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::PlayerUI*>(),
                        {"SetLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::PlayerUI.OnPlayerNumberChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::PlayerUI::*)(uint8_t)>(&::Mirror::Examples::Basic::PlayerUI::OnPlayerNumberChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181560290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::PlayerUI*>(),
                        {"OnPlayerNumberChanged", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::PlayerUI.OnPlayerColorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::PlayerUI::*)(::UnityEngine::Color32)>(&::Mirror::Examples::Basic::PlayerUI::OnPlayerColorChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181560180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::PlayerUI*>(),
                        {"OnPlayerColorChanged", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::PlayerUI.OnPlayerDataChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::PlayerUI::*)(uint16_t)>(&::Mirror::Examples::Basic::PlayerUI::OnPlayerDataChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181560230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::PlayerUI*>(),
                        {"OnPlayerDataChanged", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::PlayerUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::PlayerUI::*)()>(&::Mirror::Examples::Basic::PlayerUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::PlayerUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& Mirror::Examples::Basic::PlayerUI::__cordl_internal_get_image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Mirror::Examples::Basic::PlayerUI::__cordl_internal_get_image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr void Mirror::Examples::Basic::PlayerUI::__cordl_internal_set_image(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___image = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Mirror::Examples::Basic::PlayerUI::__cordl_internal_get_playerNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Mirror::Examples::Basic::PlayerUI::__cordl_internal_get_playerNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr void Mirror::Examples::Basic::PlayerUI::__cordl_internal_set_playerNameText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Mirror::Examples::Basic::PlayerUI::__cordl_internal_get_playerDataText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDataText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Mirror::Examples::Basic::PlayerUI::__cordl_internal_get_playerDataText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDataText;
}
constexpr void Mirror::Examples::Basic::PlayerUI::__cordl_internal_set_playerDataText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerDataText = value;
}
inline void Mirror::Examples::Basic::PlayerUI::SetLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::PlayerUI*>(),
                        {"SetLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::PlayerUI::OnPlayerNumberChanged(uint8_t  newPlayerNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::PlayerUI*>(),
                        {"OnPlayerNumberChanged", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayerNumber);
}
inline void Mirror::Examples::Basic::PlayerUI::OnPlayerColorChanged(::UnityEngine::Color32  newPlayerColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::PlayerUI*>(),
                        {"OnPlayerColorChanged", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayerColor);
}
inline void Mirror::Examples::Basic::PlayerUI::OnPlayerDataChanged(uint16_t  newPlayerData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::PlayerUI*>(),
                        {"OnPlayerDataChanged", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayerData);
}
inline void Mirror::Examples::Basic::PlayerUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::PlayerUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Basic::PlayerUI* Mirror::Examples::Basic::PlayerUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Basic::PlayerUI*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Basic::PlayerUI::PlayerUI()   {
}
