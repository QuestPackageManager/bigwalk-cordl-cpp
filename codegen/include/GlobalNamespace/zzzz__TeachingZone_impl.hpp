#pragma once
// IWYU pragma private; include "GlobalNamespace/TeachingZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TeachingZone_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerZone_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TeachingZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeachingZone::*)()>(&::GlobalNamespace::TeachingZone::Awake)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18039f230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingZone*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeachingZone.OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeachingZone::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::TeachingZone::OnEnter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18039f3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingZone*>(),
                        {"OnEnter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeachingZone.OnExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeachingZone::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::TeachingZone::OnExit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18039f400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingZone*>(),
                        {"OnExit", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeachingZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeachingZone::*)()>(&::GlobalNamespace::TeachingZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerZone>& GlobalNamespace::TeachingZone::__cordl_internal_get_playerZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& GlobalNamespace::TeachingZone::__cordl_internal_get_playerZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr void GlobalNamespace::TeachingZone::__cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerZone = value;
}
inline void GlobalNamespace::TeachingZone::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingZone*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeachingZone::OnEnter(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingZone*>(),
                        {"OnEnter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::TeachingZone::OnExit(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingZone*>(),
                        {"OnExit", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::TeachingZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TeachingZone* GlobalNamespace::TeachingZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeachingZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeachingZone::TeachingZone()   {
}
