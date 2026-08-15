#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckContext.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckContext.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PeckContext::*)()>(&::GlobalNamespace::PeckContext::get_state)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180329dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckContext.set_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckContext::*)(int32_t)>(&::GlobalNamespace::PeckContext::set_state)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {"set_state", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckContext::*)(::GlobalNamespace::PlayerCharacter*, ::GlobalNamespace::Prop*)>(&::GlobalNamespace::PeckContext::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180447130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckContext::*)(int32_t)>(&::GlobalNamespace::PeckContext::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804471e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckContext.GetPlayerCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::PeckContext::*)()>(&::GlobalNamespace::PeckContext::GetPlayerCharacter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180447090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {"GetPlayerCharacter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckContext.GetProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Prop> (::GlobalNamespace::PeckContext::*)()>(&::GlobalNamespace::PeckContext::GetProp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804470e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {"GetProp", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::PeckContext::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::PeckContext::set_state(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {"set_state", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PeckContext::_ctor(::GlobalNamespace::PlayerCharacter*  playerCharacter, ::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playerCharacter, prop);
}
inline void GlobalNamespace::PeckContext::_ctor(int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::PeckContext::GetPlayerCharacter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {"GetPlayerCharacter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(*this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::Prop> GlobalNamespace::PeckContext::GetProp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckContext>(),
                        {"GetProp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Prop>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "playerIdentity", ty: "::UnityW<::Mirror::NetworkIdentity>", modifiers: "", def_value: Some("{}") }, CppParam { name: "propIdentity", ty: "::UnityW<::Mirror::NetworkIdentity>", modifiers: "", def_value: Some("{}") }, CppParam { name: "compressedState", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckContext::PeckContext(::UnityW<::Mirror::NetworkIdentity>  playerIdentity, ::UnityW<::Mirror::NetworkIdentity>  propIdentity, int8_t  compressedState, int32_t  actionNumber) noexcept  {
this->playerIdentity = playerIdentity;
this->propIdentity = propIdentity;
this->compressedState = compressedState;
this->actionNumber = actionNumber;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckContext::PeckContext()   {
}
