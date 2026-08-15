#pragma once
// IWYU pragma private; include "GlobalNamespace/ArmHud.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ArmHud_def.hpp"
#include "GlobalNamespace/zzzz__ArmHud_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ArmHud_ArmHudState::ArmHud_ArmHudState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArmHud_ArmHudState::ArmHud_ArmHudState()   {
}
constexpr ::GlobalNamespace::ArmHud_ArmHudState  GlobalNamespace::ArmHud_ArmHudState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ArmHud_ArmHudState  GlobalNamespace::ArmHud_ArmHudState::Waving{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ArmHud_ArmHudState  GlobalNamespace::ArmHud_ArmHudState::WavingLocked{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ArmHud_ArmHudState  GlobalNamespace::ArmHud_ArmHudState::Pointing{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ArmHud_ArmHudState  GlobalNamespace::ArmHud_ArmHudState::PointingLocked{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ArmHud_ArmHudState  GlobalNamespace::ArmHud_ArmHudState::Airplane{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::ArmHud_ArmHudState  GlobalNamespace::ArmHud_ArmHudState::AirplaneLocked{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::GlobalNamespace::ArmHud_SingleArmHud.SetArmState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArmHud_SingleArmHud::*)(::GlobalNamespace::ArmHud_ArmHudState, float_t)>(&::GlobalNamespace::ArmHud_SingleArmHud::SetArmState)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180428860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud_SingleArmHud>(),
                        {"SetArmState", {}, {::i2c::type_of<::GlobalNamespace::ArmHud_ArmHudState>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ArmHud_SingleArmHud::SetArmState(::GlobalNamespace::ArmHud_ArmHudState  newArmHudState, float_t  newLockness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud_SingleArmHud>(),
                        {"SetArmState", {}, {::i2c::type_of<::GlobalNamespace::ArmHud_ArmHudState>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newArmHudState, newLockness);
}
// Ctor Parameters [CppParam { name: "waving", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: Some("{}") }, CppParam { name: "wavingLocked", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: Some("{}") }, CppParam { name: "wavingLockRing", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: Some("{}") }, CppParam { name: "airplane", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: Some("{}") }, CppParam { name: "airplaneLocked", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: Some("{}") }, CppParam { name: "airplaneLockRing", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: Some("{}") }, CppParam { name: "armHudState", ty: "::GlobalNamespace::ArmHud_ArmHudState", modifiers: "", def_value: Some("{}") }, CppParam { name: "lockness", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "logVerbose", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ArmHud_SingleArmHud::ArmHud_SingleArmHud(::UnityW<::UnityEngine::UI::Image>  waving, ::UnityW<::UnityEngine::UI::Image>  wavingLocked, ::UnityW<::UnityEngine::UI::Image>  wavingLockRing, ::UnityW<::UnityEngine::UI::Image>  airplane, ::UnityW<::UnityEngine::UI::Image>  airplaneLocked, ::UnityW<::UnityEngine::UI::Image>  airplaneLockRing, ::GlobalNamespace::ArmHud_ArmHudState  armHudState, float_t  lockness, bool  logVerbose) noexcept  {
this->waving = waving;
this->wavingLocked = wavingLocked;
this->wavingLockRing = wavingLockRing;
this->airplane = airplane;
this->airplaneLocked = airplaneLocked;
this->airplaneLockRing = airplaneLockRing;
this->armHudState = armHudState;
this->lockness = lockness;
this->logVerbose = logVerbose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArmHud_SingleArmHud::ArmHud_SingleArmHud()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ArmHud_PocketHudState::ArmHud_PocketHudState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArmHud_PocketHudState::ArmHud_PocketHudState()   {
}
constexpr ::GlobalNamespace::ArmHud_PocketHudState  GlobalNamespace::ArmHud_PocketHudState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ArmHud_PocketHudState  GlobalNamespace::ArmHud_PocketHudState::Empty{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ArmHud_PocketHudState  GlobalNamespace::ArmHud_PocketHudState::Full{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::ArmHud.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ArmHud* (*)()>(&::GlobalNamespace::ArmHud::get_instance)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x18041c1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArmHud.SetLeftArmState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ArmHud_ArmHudState, float_t)>(&::GlobalNamespace::ArmHud::SetLeftArmState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041c110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"SetLeftArmState", {}, {::i2c::type_of<::GlobalNamespace::ArmHud_ArmHudState>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArmHud.SetRightArmState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ArmHud_ArmHudState, float_t)>(&::GlobalNamespace::ArmHud::SetRightArmState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041c160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"SetRightArmState", {}, {::i2c::type_of<::GlobalNamespace::ArmHud_ArmHudState>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArmHud.GetBackpackHudState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ArmHud_PocketHudState (*)()>(&::GlobalNamespace::ArmHud::GetBackpackHudState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18041bbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"GetBackpackHudState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArmHud.GetHolsterHudState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ArmHud_PocketHudState (*)()>(&::GlobalNamespace::ArmHud::GetHolsterHudState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041bc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"GetHolsterHudState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArmHud.GetPocketHudState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ArmHud_PocketHudState (*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::ArmHud::GetPocketHudState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18041bcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"GetPocketHudState", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArmHud.SetBackpackHud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ArmHud_PocketHudState)>(&::GlobalNamespace::ArmHud::SetBackpackHud)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18041bd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"SetBackpackHud", {}, {::i2c::type_of<::GlobalNamespace::ArmHud_PocketHudState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArmHud.SetHolsterHud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ArmHud_PocketHudState)>(&::GlobalNamespace::ArmHud::SetHolsterHud)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18041bf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"SetHolsterHud", {}, {::i2c::type_of<::GlobalNamespace::ArmHud_PocketHudState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArmHud._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArmHud::*)()>(&::GlobalNamespace::ArmHud::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ArmHud_SingleArmHud& GlobalNamespace::ArmHud::__cordl_internal_get_armHudLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armHudLeft;
}
constexpr ::GlobalNamespace::ArmHud_SingleArmHud const& GlobalNamespace::ArmHud::__cordl_internal_get_armHudLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armHudLeft;
}
constexpr void GlobalNamespace::ArmHud::__cordl_internal_set_armHudLeft(::GlobalNamespace::ArmHud_SingleArmHud  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armHudLeft = value;
}
constexpr ::GlobalNamespace::ArmHud_SingleArmHud& GlobalNamespace::ArmHud::__cordl_internal_get_armHudRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armHudRight;
}
constexpr ::GlobalNamespace::ArmHud_SingleArmHud const& GlobalNamespace::ArmHud::__cordl_internal_get_armHudRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armHudRight;
}
constexpr void GlobalNamespace::ArmHud::__cordl_internal_set_armHudRight(::GlobalNamespace::ArmHud_SingleArmHud  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armHudRight = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ArmHud::__cordl_internal_get_backpackEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backpackEmpty;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ArmHud::__cordl_internal_get_backpackEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backpackEmpty;
}
constexpr void GlobalNamespace::ArmHud::__cordl_internal_set_backpackEmpty(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backpackEmpty = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ArmHud::__cordl_internal_get_backpackFull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backpackFull;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ArmHud::__cordl_internal_get_backpackFull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backpackFull;
}
constexpr void GlobalNamespace::ArmHud::__cordl_internal_set_backpackFull(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backpackFull = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ArmHud::__cordl_internal_get_holsterEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holsterEmpty;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ArmHud::__cordl_internal_get_holsterEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holsterEmpty;
}
constexpr void GlobalNamespace::ArmHud::__cordl_internal_set_holsterEmpty(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holsterEmpty = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ArmHud::__cordl_internal_get_holsterFull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holsterFull;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ArmHud::__cordl_internal_get_holsterFull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holsterFull;
}
constexpr void GlobalNamespace::ArmHud::__cordl_internal_set_holsterFull(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holsterFull = value;
}
constexpr ::GlobalNamespace::ArmHud_PocketHudState& GlobalNamespace::ArmHud::__cordl_internal_get_currentBackpackState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBackpackState;
}
constexpr ::GlobalNamespace::ArmHud_PocketHudState const& GlobalNamespace::ArmHud::__cordl_internal_get_currentBackpackState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBackpackState;
}
constexpr void GlobalNamespace::ArmHud::__cordl_internal_set_currentBackpackState(::GlobalNamespace::ArmHud_PocketHudState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentBackpackState = value;
}
constexpr ::GlobalNamespace::ArmHud_PocketHudState& GlobalNamespace::ArmHud::__cordl_internal_get_currentHolsterState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHolsterState;
}
constexpr ::GlobalNamespace::ArmHud_PocketHudState const& GlobalNamespace::ArmHud::__cordl_internal_get_currentHolsterState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHolsterState;
}
constexpr void GlobalNamespace::ArmHud::__cordl_internal_set_currentHolsterState(::GlobalNamespace::ArmHud_PocketHudState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentHolsterState = value;
}
constexpr bool& GlobalNamespace::ArmHud::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::ArmHud::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::ArmHud::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline ::GlobalNamespace::ArmHud* GlobalNamespace::ArmHud::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ArmHud*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ArmHud::SetLeftArmState(::GlobalNamespace::ArmHud_ArmHudState  hudState, float_t  lockness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"SetLeftArmState", {}, {::i2c::type_of<::GlobalNamespace::ArmHud_ArmHudState>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hudState, lockness);
}
inline void GlobalNamespace::ArmHud::SetRightArmState(::GlobalNamespace::ArmHud_ArmHudState  hudState, float_t  lockness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"SetRightArmState", {}, {::i2c::type_of<::GlobalNamespace::ArmHud_ArmHudState>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hudState, lockness);
}
inline ::GlobalNamespace::ArmHud_PocketHudState GlobalNamespace::ArmHud::GetBackpackHudState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"GetBackpackHudState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ArmHud_PocketHudState>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ArmHud_PocketHudState GlobalNamespace::ArmHud::GetHolsterHudState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"GetHolsterHudState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ArmHud_PocketHudState>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ArmHud_PocketHudState GlobalNamespace::ArmHud::GetPocketHudState(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"GetPocketHudState", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ArmHud_PocketHudState>(nullptr, ___internal_method, prop);
}
inline void GlobalNamespace::ArmHud::SetBackpackHud(::GlobalNamespace::ArmHud_PocketHudState  hudState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"SetBackpackHud", {}, {::i2c::type_of<::GlobalNamespace::ArmHud_PocketHudState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hudState);
}
inline void GlobalNamespace::ArmHud::SetHolsterHud(::GlobalNamespace::ArmHud_PocketHudState  hudState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {"SetHolsterHud", {}, {::i2c::type_of<::GlobalNamespace::ArmHud_PocketHudState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hudState);
}
inline void GlobalNamespace::ArmHud::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArmHud*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArmHud* GlobalNamespace::ArmHud::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArmHud*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArmHud::ArmHud()   {
}
