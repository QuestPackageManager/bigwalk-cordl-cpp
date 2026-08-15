#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/MatchGUI.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__MatchGUI_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__CanvasController_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__MatchInfo_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::MatchGUI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::MatchGUI::*)()>(&::Mirror::Examples::MultipleMatch::MatchGUI::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18155c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::MatchGUI.OnToggleClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::MatchGUI::*)()>(&::Mirror::Examples::MultipleMatch::MatchGUI::OnToggleClicked)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18155ca60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {"OnToggleClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::MatchGUI.GetMatchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Mirror::Examples::MultipleMatch::MatchGUI::*)()>(&::Mirror::Examples::MultipleMatch::MatchGUI::GetMatchId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18155ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {"GetMatchId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::MatchGUI.SetMatchInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::MatchGUI::*)(::Mirror::Examples::MultipleMatch::MatchInfo)>(&::Mirror::Examples::MultipleMatch::MatchGUI::SetMatchInfo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18155cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {"SetMatchInfo", {}, {::i2c::type_of<::Mirror::Examples::MultipleMatch::MatchInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::MatchGUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::MatchGUI::*)()>(&::Mirror::Examples::MultipleMatch::MatchGUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::MatchGUI._Awake_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::MatchGUI::*)(bool)>(&::Mirror::Examples::MultipleMatch::MatchGUI::_Awake_b__6_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18155cda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {"<Awake>b__6_0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Guid& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_matchId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchId;
}
constexpr ::System::Guid const& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_matchId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchId;
}
constexpr void Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_set_matchId(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchId = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr void Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_set_image(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___image = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_toggleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleButton;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_toggleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleButton;
}
constexpr void Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_set_toggleButton(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_matchName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchName;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_matchName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchName;
}
constexpr void Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_set_matchName(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchName = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_playerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCount;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_playerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCount;
}
constexpr void Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_set_playerCount(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCount = value;
}
constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_canvasController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canvasController;
}
constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController> const& Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_get_canvasController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canvasController;
}
constexpr void Mirror::Examples::MultipleMatch::MatchGUI::__cordl_internal_set_canvasController(::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canvasController = value;
}
inline void Mirror::Examples::MultipleMatch::MatchGUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::MatchGUI::OnToggleClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {"OnToggleClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Guid Mirror::Examples::MultipleMatch::MatchGUI::GetMatchId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {"GetMatchId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::MatchGUI::SetMatchInfo(::Mirror::Examples::MultipleMatch::MatchInfo  infos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {"SetMatchInfo", {}, {::i2c::type_of<::Mirror::Examples::MultipleMatch::MatchInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, infos);
}
inline void Mirror::Examples::MultipleMatch::MatchGUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleMatch::MatchGUI::_Awake_b__6_0(bool  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::MatchGUI*>(),
                        {"<Awake>b__6_0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Mirror::Examples::MultipleMatch::MatchGUI* Mirror::Examples::MultipleMatch::MatchGUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleMatch::MatchGUI*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::MatchGUI::MatchGUI()   {
}
