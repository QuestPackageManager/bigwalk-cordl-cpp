#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerShepherd.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerShepherd_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerShepherd_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot.SetFromCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot::SetFromCollider)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180378c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>(),
                        {"SetFromCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot::SetFromCollider(::UnityEngine::Collider*  newCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>(),
                        {"SetFromCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newCollider);
}
// Ctor Parameters [CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot::PlayerShepherd_ShepherdColliderSnapshot(::UnityW<::UnityEngine::Collider>  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept  {
this->collider = collider;
this->position = position;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot::PlayerShepherd_ShepherdColliderSnapshot()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerShepherd::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerShepherd::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180373f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerShepherd::*)()>(&::GlobalNamespace::PlayerShepherd::Clear)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180372580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.RecordColliderPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerShepherd::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerShepherd::RecordColliderPositions)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180373fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"RecordColliderPositions", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.RefreshHeldColliderArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerShepherd::*)(::by_ref<bool>)>(&::GlobalNamespace::PlayerShepherd::RefreshHeldColliderArray)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x180374170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"RefreshHeldColliderArray", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.AddPropHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerShepherd::*)(::GlobalNamespace::PropHome*, ::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerShepherd::AddPropHome)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180372420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"AddPropHome", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.AddCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerShepherd::*)(::UnityEngine::Collider*, ::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerShepherd::AddCollider)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x180372200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"AddCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.ColliderOverlapCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::ArrayW<::UnityEngine::Collider*>, ::by_ref<int32_t>)>(&::GlobalNamespace::PlayerShepherd::ColliderOverlapCheck)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x1803725c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"ColliderOverlapCheck", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.DoShepherdCasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerShepherd::*)(int32_t, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::PlayerShepherd::DoShepherdCasts)> {
  constexpr static std::size_t size = 0xa90;
  constexpr static std::size_t addrs = 0x180372d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"DoShepherdCasts", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.GetMaxMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*)>(&::GlobalNamespace::PlayerShepherd::GetMaxMovement)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180373d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"GetMaxMovement", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.GetStepsFromMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::GlobalNamespace::PlayerShepherd::GetStepsFromMovement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180373e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"GetStepsFromMovement", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerShepherd::*)()>(&::GlobalNamespace::PlayerShepherd::FixedUpdate)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x1803737f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerShepherd._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerShepherd::*)()>(&::GlobalNamespace::PlayerShepherd::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlayerShepherd::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlayerShepherd::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::PlayerShepherd::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr bool& GlobalNamespace::PlayerShepherd::__cordl_internal_get_runForRemotePlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runForRemotePlayers;
}
constexpr bool const& GlobalNamespace::PlayerShepherd::__cordl_internal_get_runForRemotePlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runForRemotePlayers;
}
constexpr void GlobalNamespace::PlayerShepherd::__cordl_internal_set_runForRemotePlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runForRemotePlayers = value;
}
constexpr bool& GlobalNamespace::PlayerShepherd::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerShepherd::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerShepherd::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerShepherd::__cordl_internal_get_bypassFixedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassFixedUpdate;
}
constexpr bool const& GlobalNamespace::PlayerShepherd::__cordl_internal_get_bypassFixedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassFixedUpdate;
}
constexpr void GlobalNamespace::PlayerShepherd::__cordl_internal_set_bypassFixedUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassFixedUpdate = value;
}
constexpr bool& GlobalNamespace::PlayerShepherd::__cordl_internal_get_showDebugLines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showDebugLines;
}
constexpr bool const& GlobalNamespace::PlayerShepherd::__cordl_internal_get_showDebugLines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showDebugLines;
}
constexpr void GlobalNamespace::PlayerShepherd::__cordl_internal_set_showDebugLines(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showDebugLines = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerShepherd::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerShepherd::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerShepherd::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*& GlobalNamespace::PlayerShepherd::__cordl_internal_get_colliderSnapshots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderSnapshots;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>* const& GlobalNamespace::PlayerShepherd::__cordl_internal_get_colliderSnapshots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderSnapshots;
}
constexpr void GlobalNamespace::PlayerShepherd::__cordl_internal_set_colliderSnapshots(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderSnapshots = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::PlayerShepherd::__cordl_internal_get_overLapColliderCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overLapColliderCache;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::PlayerShepherd::__cordl_internal_get_overLapColliderCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overLapColliderCache;
}
constexpr void GlobalNamespace::PlayerShepherd::__cordl_internal_set_overLapColliderCache(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overLapColliderCache = value;
}
inline void GlobalNamespace::PlayerShepherd::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerShepherd::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerShepherd::RecordColliderPositions(::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"RecordColliderPositions", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void GlobalNamespace::PlayerShepherd::RefreshHeldColliderArray(::by_ref<bool>  hasNewColliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"RefreshHeldColliderArray", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasNewColliders);
}
inline void GlobalNamespace::PlayerShepherd::AddPropHome(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::PlayerCharacter*  startInsidePlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"AddPropHome", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome, startInsidePlayer);
}
inline void GlobalNamespace::PlayerShepherd::AddCollider(::UnityEngine::Collider*  newCollider, ::GlobalNamespace::PlayerCharacter*  startInsidePlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"AddCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCollider, startInsidePlayer);
}
inline void GlobalNamespace::PlayerShepherd::ColliderOverlapCheck(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  layerMask, ::ArrayW<::UnityEngine::Collider*>  overlapColliders, ::by_ref<int32_t>  hits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"ColliderOverlapCheck", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collider, position, rotation, layerMask, overlapColliders, hits);
}
inline void GlobalNamespace::PlayerShepherd::DoShepherdCasts(int32_t  stepCount, ::by_ref<::UnityEngine::Vector3>  movement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"DoShepherdCasts", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stepCount, movement);
}
inline float_t GlobalNamespace::PlayerShepherd::GetMaxMovement(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*  colliderSnapshots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"GetMaxMovement", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerShepherd_ShepherdColliderSnapshot>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, colliderSnapshots);
}
inline int32_t GlobalNamespace::PlayerShepherd::GetStepsFromMovement(float_t  movement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"GetStepsFromMovement", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, movement);
}
inline void GlobalNamespace::PlayerShepherd::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerShepherd::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerShepherd*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerShepherd* GlobalNamespace::PlayerShepherd::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerShepherd*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerShepherd::PlayerShepherd()   {
}
