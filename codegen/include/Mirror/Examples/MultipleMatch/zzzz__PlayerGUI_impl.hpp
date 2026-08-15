#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/PlayerGUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__PlayerGUI_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__PlayerInfo_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::PlayerGUI.SetPlayerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::PlayerGUI::*)(::Mirror::Examples::MultipleMatch::PlayerInfo)>(&::Mirror::Examples::MultipleMatch::PlayerGUI::SetPlayerInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18155f760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::PlayerGUI*>(),
                        {"SetPlayerInfo", {}, {::i2c::type_of<::Mirror::Examples::MultipleMatch::PlayerInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleMatch::PlayerGUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleMatch::PlayerGUI::*)()>(&::Mirror::Examples::MultipleMatch::PlayerGUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::PlayerGUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Mirror::Examples::MultipleMatch::PlayerGUI::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Mirror::Examples::MultipleMatch::PlayerGUI::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void Mirror::Examples::MultipleMatch::PlayerGUI::__cordl_internal_set_playerName(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
inline void Mirror::Examples::MultipleMatch::PlayerGUI::SetPlayerInfo(::Mirror::Examples::MultipleMatch::PlayerInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::PlayerGUI*>(),
                        {"SetPlayerInfo", {}, {::i2c::type_of<::Mirror::Examples::MultipleMatch::PlayerInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Mirror::Examples::MultipleMatch::PlayerGUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleMatch::PlayerGUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::MultipleMatch::PlayerGUI* Mirror::Examples::MultipleMatch::PlayerGUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleMatch::PlayerGUI*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::PlayerGUI::PlayerGUI()   {
}
