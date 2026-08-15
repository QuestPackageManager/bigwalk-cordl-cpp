#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPlatformer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerPlatformer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__StickyPlatform_def.hpp"
#include "GlobalNamespace/zzzz__StickyPlatformer_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerPlatformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPlatformer::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerPlatformer::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803598f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPlatformer.CheckColliderForPlatforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::StickyPlatform> (*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerPlatformer::CheckColliderForPlatforms)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180359800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {"CheckColliderForPlatforms", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPlatformer.SetGroundCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPlatformer::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerPlatformer::SetGroundCollider)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180359950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {"SetGroundCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPlatformer.SetPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPlatformer::*)(::GlobalNamespace::StickyPlatform*)>(&::GlobalNamespace::PlayerPlatformer::SetPlatform)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180359a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {"SetPlatform", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPlatformer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPlatformer::*)()>(&::GlobalNamespace::PlayerPlatformer::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180359c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPlatformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPlatformer::*)()>(&::GlobalNamespace::PlayerPlatformer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StickyPlatformer*& GlobalNamespace::PlayerPlatformer::__cordl_internal_get_stickyPlatformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPlatformer;
}
constexpr ::GlobalNamespace::StickyPlatformer* const& GlobalNamespace::PlayerPlatformer::__cordl_internal_get_stickyPlatformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPlatformer;
}
constexpr void GlobalNamespace::PlayerPlatformer::__cordl_internal_set_stickyPlatformer(::GlobalNamespace::StickyPlatformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickyPlatformer = value;
}
constexpr bool& GlobalNamespace::PlayerPlatformer::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerPlatformer::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerPlatformer::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerPlatformer::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerPlatformer::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerPlatformer::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& GlobalNamespace::PlayerPlatformer::__cordl_internal_get_stickyPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPlatform;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& GlobalNamespace::PlayerPlatformer::__cordl_internal_get_stickyPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPlatform;
}
constexpr void GlobalNamespace::PlayerPlatformer::__cordl_internal_set_stickyPlatform(::UnityW<::GlobalNamespace::StickyPlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickyPlatform = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::PlayerPlatformer::__cordl_internal_get__groundCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::PlayerPlatformer::__cordl_internal_get__groundCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundCollider;
}
constexpr void GlobalNamespace::PlayerPlatformer::__cordl_internal_set__groundCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groundCollider = value;
}
inline void GlobalNamespace::PlayerPlatformer::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline ::UnityW<::GlobalNamespace::StickyPlatform> GlobalNamespace::PlayerPlatformer::CheckColliderForPlatforms(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {"CheckColliderForPlatforms", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::StickyPlatform>>(nullptr, ___internal_method, collider);
}
inline void GlobalNamespace::PlayerPlatformer::SetGroundCollider(::UnityEngine::Collider*  newGroundCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {"SetGroundCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGroundCollider);
}
inline void GlobalNamespace::PlayerPlatformer::SetPlatform(::GlobalNamespace::StickyPlatform*  newPlatform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {"SetPlatform", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlatform);
}
inline void GlobalNamespace::PlayerPlatformer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerPlatformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPlatformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerPlatformer* GlobalNamespace::PlayerPlatformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerPlatformer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerPlatformer::PlayerPlatformer()   {
}
