#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationKickConfirmMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModerationKickConfirmMenu_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModerationKickConfirmMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationKickConfirmMenu::*)()>(&::GlobalNamespace::ModerationKickConfirmMenu::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180437310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationKickConfirmMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationKickConfirmMenu::*)()>(&::GlobalNamespace::ModerationKickConfirmMenu::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180437370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationKickConfirmMenu.GoBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationKickConfirmMenu::*)()>(&::GlobalNamespace::ModerationKickConfirmMenu::GoBack)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180437000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {"GoBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationKickConfirmMenu.ActionKick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationKickConfirmMenu::*)()>(&::GlobalNamespace::ModerationKickConfirmMenu::ActionKick)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180437120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {"ActionKick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationKickConfirmMenu.ActionBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationKickConfirmMenu::*)()>(&::GlobalNamespace::ModerationKickConfirmMenu::ActionBack)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180437000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationKickConfirmMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationKickConfirmMenu::*)()>(&::GlobalNamespace::ModerationKickConfirmMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_get_candidatePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidatePlayer;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_get_candidatePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidatePlayer;
}
constexpr void GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_set_candidatePlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___candidatePlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_get_playerNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_get_playerNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr void GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_set_playerNameText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameText = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_get_encounteredGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredGroup;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_get_encounteredGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredGroup;
}
constexpr void GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_set_encounteredGroup(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encounteredGroup = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_get_unencounteredGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unencounteredGroup;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_get_unencounteredGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unencounteredGroup;
}
constexpr void GlobalNamespace::ModerationKickConfirmMenu::__cordl_internal_set_unencounteredGroup(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unencounteredGroup = value;
}
inline void GlobalNamespace::ModerationKickConfirmMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationKickConfirmMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationKickConfirmMenu::GoBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {"GoBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationKickConfirmMenu::ActionKick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {"ActionKick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationKickConfirmMenu::ActionBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationKickConfirmMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationKickConfirmMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModerationKickConfirmMenu* GlobalNamespace::ModerationKickConfirmMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModerationKickConfirmMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModerationKickConfirmMenu::ModerationKickConfirmMenu()   {
}
