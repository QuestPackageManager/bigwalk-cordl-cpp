#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationConfirmedMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModerationConfirmedMenu_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModerationConfirmedMenu.set_playerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationConfirmedMenu::*)(::StringW)>(&::GlobalNamespace::ModerationConfirmedMenu::set_playerName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180437100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationConfirmedMenu*>(),
                        {"set_playerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationConfirmedMenu.set_isEncountered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationConfirmedMenu::*)(bool)>(&::GlobalNamespace::ModerationConfirmedMenu::set_isEncountered)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180437070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationConfirmedMenu*>(),
                        {"set_isEncountered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationConfirmedMenu.ActionContinue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationConfirmedMenu::*)()>(&::GlobalNamespace::ModerationConfirmedMenu::ActionContinue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180437000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationConfirmedMenu*>(),
                        {"ActionContinue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationConfirmedMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationConfirmedMenu::*)()>(&::GlobalNamespace::ModerationConfirmedMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationConfirmedMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::ModerationConfirmedMenu::__cordl_internal_get_playerNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::ModerationConfirmedMenu::__cordl_internal_get_playerNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr void GlobalNamespace::ModerationConfirmedMenu::__cordl_internal_set_playerNameText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameText = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationConfirmedMenu::__cordl_internal_get_encounteredGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredGroup;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationConfirmedMenu::__cordl_internal_get_encounteredGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredGroup;
}
constexpr void GlobalNamespace::ModerationConfirmedMenu::__cordl_internal_set_encounteredGroup(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encounteredGroup = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationConfirmedMenu::__cordl_internal_get_unencounteredGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unencounteredGroup;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationConfirmedMenu::__cordl_internal_get_unencounteredGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unencounteredGroup;
}
constexpr void GlobalNamespace::ModerationConfirmedMenu::__cordl_internal_set_unencounteredGroup(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unencounteredGroup = value;
}
inline void GlobalNamespace::ModerationConfirmedMenu::set_playerName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationConfirmedMenu*>(),
                        {"set_playerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ModerationConfirmedMenu::set_isEncountered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationConfirmedMenu*>(),
                        {"set_isEncountered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ModerationConfirmedMenu::ActionContinue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationConfirmedMenu*>(),
                        {"ActionContinue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationConfirmedMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationConfirmedMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModerationConfirmedMenu* GlobalNamespace::ModerationConfirmedMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModerationConfirmedMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModerationConfirmedMenu::ModerationConfirmedMenu()   {
}
