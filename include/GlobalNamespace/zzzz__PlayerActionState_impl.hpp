#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerActionState.hpp"
#include "GlobalNamespace/zzzz__PlayerActionState_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerActionState.get_normalizedStickyTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerActionState::*)()>(&::GlobalNamespace::PlayerActionState::get_normalizedStickyTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18035d9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"get_normalizedStickyTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActionState.get_hudStickyTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerActionState::*)()>(&::GlobalNamespace::PlayerActionState::get_hudStickyTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18035d9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"get_hudStickyTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActionState.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActionState::*)()>(&::GlobalNamespace::PlayerActionState::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18035d7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActionState.UpdateFromInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActionState::*)(::Rewired::Player*, int32_t, bool, ::System::Nullable_1<int32_t>)>(&::GlobalNamespace::PlayerActionState::UpdateFromInput)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18035d840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"UpdateFromInput", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActionState.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActionState::*)(::GlobalNamespace::PlayerActionState)>(&::GlobalNamespace::PlayerActionState::Copy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18035d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"Copy", {}, {::i2c::type_of<::GlobalNamespace::PlayerActionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerActionState.UpdateSnapShot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerActionState::*)()>(&::GlobalNamespace::PlayerActionState::UpdateSnapShot)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18035d980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"UpdateSnapShot", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::PlayerActionState::get_normalizedStickyTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"get_normalizedStickyTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerActionState::get_hudStickyTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"get_hudStickyTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerActionState::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerActionState::UpdateFromInput(::Rewired::Player*  inputPlayer, int32_t  action, bool  toggleIsOn, ::System::Nullable_1<int32_t>  actionB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"UpdateFromInput", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, inputPlayer, action, toggleIsOn, actionB);
}
inline void GlobalNamespace::PlayerActionState::Copy(::GlobalNamespace::PlayerActionState  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"Copy", {}, {::i2c::type_of<::GlobalNamespace::PlayerActionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void GlobalNamespace::PlayerActionState::UpdateSnapShot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerActionState>(),
                        {"UpdateSnapShot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "isToggledOn", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isStickiedOn", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isHeld", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeHeld", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isActiveOld", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerActionState::PlayerActionState(bool  isToggledOn, bool  isStickiedOn, bool  isHeld, bool  isActive, float_t  timeHeld, bool  isActiveOld) noexcept  {
this->isToggledOn = isToggledOn;
this->isStickiedOn = isStickiedOn;
this->isHeld = isHeld;
this->isActive = isActive;
this->timeHeld = timeHeld;
this->isActiveOld = isActiveOld;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerActionState::PlayerActionState()   {
}
