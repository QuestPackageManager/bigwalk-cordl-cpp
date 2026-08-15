#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCollision.hpp"
#include "GlobalNamespace/zzzz__PlayerColliderState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerCollision_def.hpp"
#include "GlobalNamespace/zzzz__ContactModificationHandler_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerColliderState_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.get_bodyCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CapsuleCollider> (::GlobalNamespace::PlayerCollision::*)()>(&::GlobalNamespace::PlayerCollision::get_bodyCollider)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180463630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"get_bodyCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerCollision::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180462730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)()>(&::GlobalNamespace::PlayerCollision::Update)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x1804631a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)()>(&::GlobalNamespace::PlayerCollision::FixedUpdate)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1804625b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.SetCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)(::GlobalNamespace::PlayerColliderState)>(&::GlobalNamespace::PlayerCollision::SetCollider)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180462fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"SetCollider", {}, {::i2c::type_of<::GlobalNamespace::PlayerColliderState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.AddProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerCollision::AddProp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180462450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"AddProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.RemoveProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerCollision::RemoveProp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180462ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"RemoveProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.ModificationEventForPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)(::UnityEngine::ModifiableContactPair, bool)>(&::GlobalNamespace::PlayerCollision::ModificationEventForPair)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x180462850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"ModificationEventForPair", {}, {::i2c::type_of<::UnityEngine::ModifiableContactPair>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.ModificationEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)(::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>)>(&::GlobalNamespace::PlayerCollision::ModificationEvent)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x180462b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"ModificationEvent", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)()>(&::GlobalNamespace::PlayerCollision::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)()>(&::GlobalNamespace::PlayerCollision::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)()>(&::GlobalNamespace::PlayerCollision::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180462ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCollision._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCollision::*)()>(&::GlobalNamespace::PlayerCollision::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180463620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SphereCollider>& GlobalNamespace::PlayerCollision::__cordl_internal_get_footCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footCollider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GlobalNamespace::PlayerCollision::__cordl_internal_get_footCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footCollider;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_footCollider(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___footCollider = value;
}
constexpr bool& GlobalNamespace::PlayerCollision::__cordl_internal_get_moveFootCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveFootCollider;
}
constexpr bool const& GlobalNamespace::PlayerCollision::__cordl_internal_get_moveFootCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveFootCollider;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_moveFootCollider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveFootCollider = value;
}
constexpr float_t& GlobalNamespace::PlayerCollision::__cordl_internal_get_sitFriction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sitFriction;
}
constexpr float_t const& GlobalNamespace::PlayerCollision::__cordl_internal_get_sitFriction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sitFriction;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_sitFriction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sitFriction = value;
}
constexpr ::GlobalNamespace::PlayerColliderState& GlobalNamespace::PlayerCollision::__cordl_internal_get_standingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standingState;
}
constexpr ::GlobalNamespace::PlayerColliderState const& GlobalNamespace::PlayerCollision::__cordl_internal_get_standingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standingState;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_standingState(::GlobalNamespace::PlayerColliderState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standingState = value;
}
constexpr ::GlobalNamespace::PlayerColliderState& GlobalNamespace::PlayerCollision::__cordl_internal_get_crouchingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchingState;
}
constexpr ::GlobalNamespace::PlayerColliderState const& GlobalNamespace::PlayerCollision::__cordl_internal_get_crouchingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchingState;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_crouchingState(::GlobalNamespace::PlayerColliderState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchingState = value;
}
constexpr ::GlobalNamespace::PlayerColliderState& GlobalNamespace::PlayerCollision::__cordl_internal_get_sittingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingState;
}
constexpr ::GlobalNamespace::PlayerColliderState const& GlobalNamespace::PlayerCollision::__cordl_internal_get_sittingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingState;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_sittingState(::GlobalNamespace::PlayerColliderState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sittingState = value;
}
constexpr bool& GlobalNamespace::PlayerCollision::__cordl_internal_get_contactModificationActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactModificationActive;
}
constexpr bool const& GlobalNamespace::PlayerCollision::__cordl_internal_get_contactModificationActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactModificationActive;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_contactModificationActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contactModificationActive = value;
}
constexpr float_t& GlobalNamespace::PlayerCollision::__cordl_internal_get_fullFrictionThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullFrictionThreshold;
}
constexpr float_t const& GlobalNamespace::PlayerCollision::__cordl_internal_get_fullFrictionThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullFrictionThreshold;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_fullFrictionThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullFrictionThreshold = value;
}
constexpr float_t& GlobalNamespace::PlayerCollision::__cordl_internal_get_zeroFrictionThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeroFrictionThreshold;
}
constexpr float_t const& GlobalNamespace::PlayerCollision::__cordl_internal_get_zeroFrictionThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeroFrictionThreshold;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_zeroFrictionThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zeroFrictionThreshold = value;
}
constexpr bool& GlobalNamespace::PlayerCollision::__cordl_internal_get_disableColliderUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableColliderUpdate;
}
constexpr bool const& GlobalNamespace::PlayerCollision::__cordl_internal_get_disableColliderUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableColliderUpdate;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_disableColliderUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableColliderUpdate = value;
}
constexpr bool& GlobalNamespace::PlayerCollision::__cordl_internal_get_disableFootMaterialChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableFootMaterialChange;
}
constexpr bool const& GlobalNamespace::PlayerCollision::__cordl_internal_get_disableFootMaterialChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableFootMaterialChange;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_disableFootMaterialChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableFootMaterialChange = value;
}
constexpr bool& GlobalNamespace::PlayerCollision::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerCollision::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerCollision::__cordl_internal_get_logContactModification()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logContactModification;
}
constexpr bool const& GlobalNamespace::PlayerCollision::__cordl_internal_get_logContactModification() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logContactModification;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_logContactModification(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logContactModification = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerCollision::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerCollision::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::GlobalNamespace::PlayerColliderState& GlobalNamespace::PlayerCollision::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::PlayerColliderState const& GlobalNamespace::PlayerCollision::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_currentState(::GlobalNamespace::PlayerColliderState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr bool& GlobalNamespace::PlayerCollision::__cordl_internal_get_footColliderIsZeroFriction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footColliderIsZeroFriction;
}
constexpr bool const& GlobalNamespace::PlayerCollision::__cordl_internal_get_footColliderIsZeroFriction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footColliderIsZeroFriction;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_footColliderIsZeroFriction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___footColliderIsZeroFriction = value;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::PlayerCollision::__cordl_internal_get__zeroFrictionMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zeroFrictionMaterial;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::PlayerCollision::__cordl_internal_get__zeroFrictionMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zeroFrictionMaterial;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set__zeroFrictionMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zeroFrictionMaterial = value;
}
constexpr int32_t& GlobalNamespace::PlayerCollision::__cordl_internal_get_bodyColliderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyColliderId;
}
constexpr int32_t const& GlobalNamespace::PlayerCollision::__cordl_internal_get_bodyColliderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyColliderId;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_bodyColliderId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyColliderId = value;
}
constexpr ::GlobalNamespace::ContactModificationHandler*& GlobalNamespace::PlayerCollision::__cordl_internal_get_contactModificationHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactModificationHandler;
}
constexpr ::GlobalNamespace::ContactModificationHandler* const& GlobalNamespace::PlayerCollision::__cordl_internal_get_contactModificationHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactModificationHandler;
}
constexpr void GlobalNamespace::PlayerCollision::__cordl_internal_set_contactModificationHandler(::GlobalNamespace::ContactModificationHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contactModificationHandler = value;
}
inline ::UnityW<::UnityEngine::CapsuleCollider> GlobalNamespace::PlayerCollision::get_bodyCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"get_bodyCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CapsuleCollider>>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCollision::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerCollision::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCollision::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCollision::SetCollider(::GlobalNamespace::PlayerColliderState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"SetCollider", {}, {::i2c::type_of<::GlobalNamespace::PlayerColliderState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::PlayerCollision::AddProp(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"AddProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PlayerCollision::RemoveProp(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"RemoveProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PlayerCollision::ModificationEventForPair(::UnityEngine::ModifiableContactPair  pair, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"ModificationEventForPair", {}, {::i2c::type_of<::UnityEngine::ModifiableContactPair>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pair, flipped);
}
inline void GlobalNamespace::PlayerCollision::ModificationEvent(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  pairs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"ModificationEvent", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, pairs);
}
inline void GlobalNamespace::PlayerCollision::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCollision::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCollision::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCollision::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCollision*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCollision* GlobalNamespace::PlayerCollision::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCollision*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCollision::PlayerCollision()   {
}
