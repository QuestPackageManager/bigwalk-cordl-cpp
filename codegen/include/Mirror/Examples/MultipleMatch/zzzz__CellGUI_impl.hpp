#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/CellGUI.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__CellValue_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__CellGUI_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__MatchController_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CellGUI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CellGUI::*)()>(&::Mirror::Examples::MultipleMatch::CellGUI::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181557a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CellGUI*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CellGUI.MakePlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CellGUI::*)()>(&::Mirror::Examples::MultipleMatch::CellGUI::MakePlay)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181557a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CellGUI*>(),
                        {"MakePlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CellGUI.SetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CellGUI::*)(::Mirror::NetworkIdentity*)>(&::Mirror::Examples::MultipleMatch::CellGUI::SetPlayer)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181557b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CellGUI*>(),
                        {"SetPlayer", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::CellGUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::CellGUI::*)()>(&::Mirror::Examples::MultipleMatch::CellGUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CellGUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::Examples::MultipleMatch::MatchController>& Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_get_matchController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchController;
}
constexpr ::UnityW<::Mirror::Examples::MultipleMatch::MatchController> const& Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_get_matchController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchController;
}
constexpr void Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_set_matchController(::UnityW<::Mirror::Examples::MultipleMatch::MatchController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchController = value;
}
constexpr ::Mirror::Examples::MultipleMatch::CellValue& Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_get_cellValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellValue;
}
constexpr ::Mirror::Examples::MultipleMatch::CellValue const& Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_get_cellValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellValue;
}
constexpr void Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_set_cellValue(::Mirror::Examples::MultipleMatch::CellValue  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cellValue = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_get_image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_get_image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr void Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_set_image(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___image = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_set_button(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr ::UnityW<::Mirror::NetworkIdentity>& Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_get_playerIdentity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIdentity;
}
constexpr ::UnityW<::Mirror::NetworkIdentity> const& Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_get_playerIdentity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIdentity;
}
constexpr void Mirror::Examples::MultipleMatch::CellGUI::__cordl_internal_set_playerIdentity(::UnityW<::Mirror::NetworkIdentity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerIdentity = value;
}
inline void Mirror::Examples::MultipleMatch::CellGUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CellGUI*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CellGUI::MakePlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CellGUI*>(),
                        {"MakePlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::CellGUI::SetPlayer(::Mirror::NetworkIdentity*  playerIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CellGUI*>(),
                        {"SetPlayer", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerIdentity);
}
inline void Mirror::Examples::MultipleMatch::CellGUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::CellGUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::MultipleMatch::CellGUI* Mirror::Examples::MultipleMatch::CellGUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleMatch::CellGUI*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::CellGUI::CellGUI()   {
}
