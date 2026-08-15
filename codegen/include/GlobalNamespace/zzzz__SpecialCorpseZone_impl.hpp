#pragma once
// IWYU pragma private; include "GlobalNamespace/SpecialCorpseZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpecialCorpseZone_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerZone_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpecialCorpseZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpecialCorpseZone::*)()>(&::GlobalNamespace::SpecialCorpseZone::OnEnable)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18039d580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpecialCorpseZone*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpecialCorpseZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpecialCorpseZone::*)()>(&::GlobalNamespace::SpecialCorpseZone::OnDisable)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18039d310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpecialCorpseZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpecialCorpseZone.OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpecialCorpseZone::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::SpecialCorpseZone::OnEnter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18039d7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpecialCorpseZone*>(),
                        {"OnEnter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpecialCorpseZone.OnExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpecialCorpseZone::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::SpecialCorpseZone::OnExit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18039d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpecialCorpseZone*>(),
                        {"OnExit", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpecialCorpseZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpecialCorpseZone::*)()>(&::GlobalNamespace::SpecialCorpseZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpecialCorpseZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerZone>& GlobalNamespace::SpecialCorpseZone::__cordl_internal_get_playerZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& GlobalNamespace::SpecialCorpseZone::__cordl_internal_get_playerZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr void GlobalNamespace::SpecialCorpseZone::__cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerZone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SpecialCorpseZone::__cordl_internal_get_spawnTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SpecialCorpseZone::__cordl_internal_get_spawnTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTransform;
}
constexpr void GlobalNamespace::SpecialCorpseZone::__cordl_internal_set_spawnTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnTransform = value;
}
inline void GlobalNamespace::SpecialCorpseZone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpecialCorpseZone*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpecialCorpseZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpecialCorpseZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpecialCorpseZone::OnEnter(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpecialCorpseZone*>(),
                        {"OnEnter", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::SpecialCorpseZone::OnExit(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpecialCorpseZone*>(),
                        {"OnExit", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::SpecialCorpseZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpecialCorpseZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpecialCorpseZone* GlobalNamespace::SpecialCorpseZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpecialCorpseZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpecialCorpseZone::SpecialCorpseZone()   {
}
