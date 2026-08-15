#pragma once
// IWYU pragma private; include "GlobalNamespace/SessionCloseZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SessionCloseZone_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerZone_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SessionCloseZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionCloseZone::*)()>(&::GlobalNamespace::SessionCloseZone::OnEnable)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x180398d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionCloseZone*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionCloseZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionCloseZone::*)()>(&::GlobalNamespace::SessionCloseZone::OnDisable)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180398ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionCloseZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionCloseZone.OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionCloseZone::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::SessionCloseZone::OnEnter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180398f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionCloseZone*>(),
                        {"OnEnter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionCloseZone.OnExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionCloseZone::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::SessionCloseZone::OnExit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180398fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionCloseZone*>(),
                        {"OnExit", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SessionCloseZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SessionCloseZone::*)()>(&::GlobalNamespace::SessionCloseZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionCloseZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerZone>& GlobalNamespace::SessionCloseZone::__cordl_internal_get_playerZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& GlobalNamespace::SessionCloseZone::__cordl_internal_get_playerZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr void GlobalNamespace::SessionCloseZone::__cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerZone = value;
}
inline void GlobalNamespace::SessionCloseZone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionCloseZone*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionCloseZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionCloseZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SessionCloseZone::OnEnter(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionCloseZone*>(),
                        {"OnEnter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::SessionCloseZone::OnExit(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionCloseZone*>(),
                        {"OnExit", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::SessionCloseZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SessionCloseZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SessionCloseZone* GlobalNamespace::SessionCloseZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SessionCloseZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SessionCloseZone::SessionCloseZone()   {
}
