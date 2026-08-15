#pragma once
// IWYU pragma private; include "GlobalNamespace/CastableTarget.hpp"
#include "GlobalNamespace/zzzz__CastableOutcome_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CastableTarget_def.hpp"
#include "GlobalNamespace/zzzz__CastableOutcome_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CastableTarget.GetCrosshairTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::CastableTarget::*)()>(&::GlobalNamespace::CastableTarget::GetCrosshairTransform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18045a9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CastableTarget*>(),
                        {"GetCrosshairTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CastableTarget.GetCastableOutcome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CastableTarget::*)(::GlobalNamespace::PlayerCharacter*, ::by_ref<::GlobalNamespace::CastableOutcome>)>(&::GlobalNamespace::CastableTarget::GetCastableOutcome)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18045a8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CastableTarget*>(),
                        {"GetCastableOutcome", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CastableOutcome>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CastableTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CastableTarget::*)()>(&::GlobalNamespace::CastableTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CastableTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CastableTarget::__cordl_internal_get_customCrosshairPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customCrosshairPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CastableTarget::__cordl_internal_get_customCrosshairPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customCrosshairPoint;
}
constexpr void GlobalNamespace::CastableTarget::__cordl_internal_set_customCrosshairPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customCrosshairPoint = value;
}
constexpr ::ArrayW<::GlobalNamespace::CastableOutcome>& GlobalNamespace::CastableTarget::__cordl_internal_get_outcomes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomes;
}
constexpr ::ArrayW<::GlobalNamespace::CastableOutcome> const& GlobalNamespace::CastableTarget::__cordl_internal_get_outcomes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomes;
}
constexpr void GlobalNamespace::CastableTarget::__cordl_internal_set_outcomes(::ArrayW<::GlobalNamespace::CastableOutcome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outcomes = value;
}
constexpr bool& GlobalNamespace::CastableTarget::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::CastableTarget::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::CastableTarget::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::CastableTarget::GetCrosshairTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CastableTarget*>(),
                        {"GetCrosshairTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool GlobalNamespace::CastableTarget::GetCastableOutcome(::GlobalNamespace::PlayerCharacter*  playerCharacter, ::by_ref<::GlobalNamespace::CastableOutcome>  outcome)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CastableTarget*>(),
                        {"GetCastableOutcome", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CastableOutcome>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerCharacter, outcome);
}
inline void GlobalNamespace::CastableTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CastableTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CastableTarget* GlobalNamespace::CastableTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CastableTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CastableTarget::CastableTarget()   {
}
