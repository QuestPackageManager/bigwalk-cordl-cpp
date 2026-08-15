#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationSilenceConfirmMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModerationSilenceConfirmMenu_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModerationSilenceConfirmMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationSilenceConfirmMenu::*)()>(&::GlobalNamespace::ModerationSilenceConfirmMenu::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180437310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationSilenceConfirmMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationSilenceConfirmMenu::*)()>(&::GlobalNamespace::ModerationSilenceConfirmMenu::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180437370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationSilenceConfirmMenu.GoBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationSilenceConfirmMenu::*)()>(&::GlobalNamespace::ModerationSilenceConfirmMenu::GoBack)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180437000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {"GoBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationSilenceConfirmMenu.ActionSilence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationSilenceConfirmMenu::*)()>(&::GlobalNamespace::ModerationSilenceConfirmMenu::ActionSilence)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180438b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {"ActionSilence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationSilenceConfirmMenu.ActionBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationSilenceConfirmMenu::*)()>(&::GlobalNamespace::ModerationSilenceConfirmMenu::ActionBack)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180437000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationSilenceConfirmMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationSilenceConfirmMenu::*)()>(&::GlobalNamespace::ModerationSilenceConfirmMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_get_candidatePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidatePlayer;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_get_candidatePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidatePlayer;
}
constexpr void GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_set_candidatePlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___candidatePlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_get_playerNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_get_playerNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr void GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_set_playerNameText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameText = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_get_encounteredGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredGroup;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_get_encounteredGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredGroup;
}
constexpr void GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_set_encounteredGroup(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encounteredGroup = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_get_unencounteredGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unencounteredGroup;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_get_unencounteredGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unencounteredGroup;
}
constexpr void GlobalNamespace::ModerationSilenceConfirmMenu::__cordl_internal_set_unencounteredGroup(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unencounteredGroup = value;
}
inline void GlobalNamespace::ModerationSilenceConfirmMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationSilenceConfirmMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationSilenceConfirmMenu::GoBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {"GoBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationSilenceConfirmMenu::ActionSilence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {"ActionSilence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationSilenceConfirmMenu::ActionBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationSilenceConfirmMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationSilenceConfirmMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModerationSilenceConfirmMenu* GlobalNamespace::ModerationSilenceConfirmMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModerationSilenceConfirmMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModerationSilenceConfirmMenu::ModerationSilenceConfirmMenu()   {
}
