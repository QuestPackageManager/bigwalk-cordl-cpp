#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerEyes.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeMood_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerEyes_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeMood_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeSet_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerEyes.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerEyes::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerEyes::Initialize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804673f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerEyes.SetEyeMood
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerEyes::*)(::GlobalNamespace::PlayerEyeMood)>(&::GlobalNamespace::PlayerEyes::SetEyeMood)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180467510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {"SetEyeMood", {}, {::i2c::type_of<::GlobalNamespace::PlayerEyeMood>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerEyes.SetEyeMood
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerEyes::*)(::GlobalNamespace::PlayerEyeMood, ::GlobalNamespace::PlayerEyeMood)>(&::GlobalNamespace::PlayerEyes::SetEyeMood)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x180467520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {"SetEyeMood", {}, {::i2c::type_of<::GlobalNamespace::PlayerEyeMood>(), ::i2c::type_of<::GlobalNamespace::PlayerEyeMood>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerEyes.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerEyes::*)()>(&::GlobalNamespace::PlayerEyes::Update)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x180467840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerEyes.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerEyes::*)()>(&::GlobalNamespace::PlayerEyes::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804674c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerEyes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerEyes::*)()>(&::GlobalNamespace::PlayerEyes::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet>& GlobalNamespace::PlayerEyes::__cordl_internal_get_eyeSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeSet;
}
constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet> const& GlobalNamespace::PlayerEyes::__cordl_internal_get_eyeSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeSet;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set_eyeSet(::UnityW<::GlobalNamespace::PlayerEyeSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeSet = value;
}
constexpr ::GlobalNamespace::PlayerEyeMood& GlobalNamespace::PlayerEyes::__cordl_internal_get_moodLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moodLeft;
}
constexpr ::GlobalNamespace::PlayerEyeMood const& GlobalNamespace::PlayerEyes::__cordl_internal_get_moodLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moodLeft;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set_moodLeft(::GlobalNamespace::PlayerEyeMood  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moodLeft = value;
}
constexpr ::GlobalNamespace::PlayerEyeMood& GlobalNamespace::PlayerEyes::__cordl_internal_get_moodRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moodRight;
}
constexpr ::GlobalNamespace::PlayerEyeMood const& GlobalNamespace::PlayerEyes::__cordl_internal_get_moodRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moodRight;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set_moodRight(::GlobalNamespace::PlayerEyeMood  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moodRight = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::PlayerEyes::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::PlayerEyes::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr int32_t& GlobalNamespace::PlayerEyes::__cordl_internal_get_submeshIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshIndex;
}
constexpr int32_t const& GlobalNamespace::PlayerEyes::__cordl_internal_get_submeshIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshIndex;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set_submeshIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submeshIndex = value;
}
constexpr bool& GlobalNamespace::PlayerEyes::__cordl_internal_get_binocularsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binocularsActive;
}
constexpr bool const& GlobalNamespace::PlayerEyes::__cordl_internal_get_binocularsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binocularsActive;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set_binocularsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___binocularsActive = value;
}
constexpr bool& GlobalNamespace::PlayerEyes::__cordl_internal_get_xrayActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrayActive;
}
constexpr bool const& GlobalNamespace::PlayerEyes::__cordl_internal_get_xrayActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrayActive;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set_xrayActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrayActive = value;
}
constexpr bool& GlobalNamespace::PlayerEyes::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerEyes::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::PlayerEyes::__cordl_internal_get_materialInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialInstances;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::PlayerEyes::__cordl_internal_get_materialInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialInstances;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set_materialInstances(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialInstances = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerEyes::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerEyes::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::PlayerEyes::__cordl_internal_get__animatableLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatableLeft;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::PlayerEyes::__cordl_internal_get__animatableLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatableLeft;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set__animatableLeft(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animatableLeft = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::PlayerEyes::__cordl_internal_get__animatableRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatableRight;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::PlayerEyes::__cordl_internal_get__animatableRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatableRight;
}
constexpr void GlobalNamespace::PlayerEyes::__cordl_internal_set__animatableRight(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animatableRight = value;
}
inline void GlobalNamespace::PlayerEyes::setStaticF_propertyEyeMoodLeft(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "propertyEyeMoodLeft", ::GlobalNamespace::PlayerEyes*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayerEyes::getStaticF_propertyEyeMoodLeft()  {
return ::cordl_internals::getStaticField<::StringW, "propertyEyeMoodLeft", ::GlobalNamespace::PlayerEyes*>();
}
inline void GlobalNamespace::PlayerEyes::setStaticF_propertyEyeMoodRight(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "propertyEyeMoodRight", ::GlobalNamespace::PlayerEyes*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayerEyes::getStaticF_propertyEyeMoodRight()  {
return ::cordl_internals::getStaticField<::StringW, "propertyEyeMoodRight", ::GlobalNamespace::PlayerEyes*>();
}
inline void GlobalNamespace::PlayerEyes::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerEyes::SetEyeMood(::GlobalNamespace::PlayerEyeMood  bothEyesMood)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {"SetEyeMood", {}, {::i2c::type_of<::GlobalNamespace::PlayerEyeMood>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bothEyesMood);
}
inline void GlobalNamespace::PlayerEyes::SetEyeMood(::GlobalNamespace::PlayerEyeMood  moodLeft, ::GlobalNamespace::PlayerEyeMood  moodRight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {"SetEyeMood", {}, {::i2c::type_of<::GlobalNamespace::PlayerEyeMood>(), ::i2c::type_of<::GlobalNamespace::PlayerEyeMood>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, moodLeft, moodRight);
}
inline void GlobalNamespace::PlayerEyes::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerEyes::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerEyes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerEyes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerEyes* GlobalNamespace::PlayerEyes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerEyes*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerEyes::PlayerEyes()   {
}
