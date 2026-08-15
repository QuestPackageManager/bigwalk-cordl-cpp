#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGround.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerGround_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__CollisionTracker_def.hpp"
#include "GlobalNamespace/zzzz__FootstepAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerGround_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerGround_DownhillBlockState::PlayerGround_DownhillBlockState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerGround_DownhillBlockState::PlayerGround_DownhillBlockState()   {
}
constexpr ::GlobalNamespace::PlayerGround_DownhillBlockState  GlobalNamespace::PlayerGround_DownhillBlockState::Clear{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayerGround_DownhillBlockState  GlobalNamespace::PlayerGround_DownhillBlockState::Partial{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PlayerGround_DownhillBlockState  GlobalNamespace::PlayerGround_DownhillBlockState::Blocked{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.get_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PlayerGround::*)()>(&::GlobalNamespace::PlayerGround::get_normal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18034ccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"get_normal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.set_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerGround::set_normal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18034ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"set_normal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerGround::Initialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18034b460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)()>(&::GlobalNamespace::PlayerGround::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18034b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.RecordContact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)(::UnityEngine::ModifiableContactPair, bool)>(&::GlobalNamespace::PlayerGround::RecordContact)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18034c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"RecordContact", {}, {::i2c::type_of<::UnityEngine::ModifiableContactPair>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.GetNonHandHitCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerGround::*)(::ArrayW<::UnityEngine::RaycastHit>, int32_t)>(&::GlobalNamespace::PlayerGround::GetNonHandHitCount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18034a880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetNonHandHitCount", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.CanMoveDownSlopeTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerGround_DownhillBlockState (::GlobalNamespace::PlayerGround::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerGround::CanMoveDownSlopeTest)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x180348830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"CanMoveDownSlopeTest", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.ColliderCastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, ::UnityEngine::LayerMask, ::UnityEngine::QueryTriggerInteraction)>(&::GlobalNamespace::PlayerGround::ColliderCastNonAlloc)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x180348fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"ColliderCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.GetCastsFromContacts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)(::by_ref<::UnityEngine::Collider*>, ::by_ref<::UnityEngine::Collider*>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<bool>, bool)>(&::GlobalNamespace::PlayerGround::GetCastsFromContacts)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x18034a070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetCastsFromContacts", {}, {::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.PropCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::GlobalNamespace::PlayerGround::*)(::by_ref<::UnityEngine::RaycastHit>, ::by_ref<::UnityEngine::Collider*>)>(&::GlobalNamespace::PlayerGround::PropCast)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x18034bf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"PropCast", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.ProcessCasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)(::by_ref<::UnityEngine::Collider*>, ::by_ref<::UnityEngine::Collider*>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<bool>, bool)>(&::GlobalNamespace::PlayerGround::ProcessCasts)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x18034baf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"ProcessCasts", {}, {::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)()>(&::GlobalNamespace::PlayerGround::FixedUpdate)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x180349670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.SetGroundCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerGround::SetGroundCollider)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18034c5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"SetGroundCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.IsSteepMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerGround::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerGround::IsSteepMaterial)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18034b500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"IsSteepMaterial", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.GetSteepness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerGround::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerGround::GetSteepness)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18034b3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetSteepness", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.GetSteepness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerGround::*)()>(&::GlobalNamespace::PlayerGround::GetSteepness)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18034b370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetSteepness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.GetGroundGrip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerGround::*)()>(&::GlobalNamespace::PlayerGround::GetGroundGrip)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18034a770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetGroundGrip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.GetSlopedMoveForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PlayerGround::*)(::UnityEngine::Vector3, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerGround::GetSlopedMoveForce)> {
  constexpr static std::size_t size = 0xa10;
  constexpr static std::size_t addrs = 0x18034a960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetSlopedMoveForce", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)()>(&::GlobalNamespace::PlayerGround::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x18034b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.StopPropSlidingSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)()>(&::GlobalNamespace::PlayerGround::StopPropSlidingSound)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18034c730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"StopPropSlidingSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround.UpdatePropSlidingSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)(::UnityEngine::Collider*, ::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerGround::UpdatePropSlidingSound)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x18034c860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"UpdatePropSlidingSound", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGround::*)()>(&::GlobalNamespace::PlayerGround::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034ccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGround._UpdatePropSlidingSound_b__80_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerGround::*)()>(&::GlobalNamespace::PlayerGround::_UpdatePropSlidingSound_b__80_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"<UpdatePropSlidingSound>b__80_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CollisionTracker*& GlobalNamespace::PlayerGround::__cordl_internal_get_collisionTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionTracker;
}
constexpr ::GlobalNamespace::CollisionTracker* const& GlobalNamespace::PlayerGround::__cordl_internal_get_collisionTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionTracker;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_collisionTracker(::GlobalNamespace::CollisionTracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionTracker = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_useRaycasts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRaycasts;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_useRaycasts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRaycasts;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_useRaycasts(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRaycasts = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_useNormalAveraging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNormalAveraging;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_useNormalAveraging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNormalAveraging;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_useNormalAveraging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useNormalAveraging = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_usePropCast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePropCast;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_usePropCast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usePropCast;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_usePropCast(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usePropCast = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerGround::__cordl_internal_get_castFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castFrom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerGround::__cordl_internal_get_castFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castFrom;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_castFrom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___castFrom = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerGround::__cordl_internal_get_footCastOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footCastOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerGround::__cordl_internal_get_footCastOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footCastOrigin;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_footCastOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___footCastOrigin = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_castLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castLength;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_castLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castLength;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_castLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___castLength = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_useSecondCast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSecondCast;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_useSecondCast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSecondCast;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_useSecondCast(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSecondCast = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_radius2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius2;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_radius2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius2;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_radius2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius2 = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_castLength2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castLength2;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_castLength2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castLength2;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_castLength2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___castLength2 = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlayerGround::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlayerGround::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_limitWaterMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitWaterMovement;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_limitWaterMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitWaterMovement;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_limitWaterMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitWaterMovement = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_depthNormalSwim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthNormalSwim;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_depthNormalSwim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthNormalSwim;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_depthNormalSwim(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthNormalSwim = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_depthNoSwim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthNoSwim;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_depthNoSwim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthNoSwim;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_depthNoSwim(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthNoSwim = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_angleSwimDownHill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleSwimDownHill;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_angleSwimDownHill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleSwimDownHill;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_angleSwimDownHill(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleSwimDownHill = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_angleSwimUpHill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleSwimUpHill;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_angleSwimUpHill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleSwimUpHill;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_angleSwimUpHill(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleSwimUpHill = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_limitSlopeMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitSlopeMovement;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_limitSlopeMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitSlopeMovement;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_limitSlopeMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitSlopeMovement = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_angleFullFlat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFullFlat;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_angleFullFlat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFullFlat;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_angleFullFlat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleFullFlat = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_angleFullSteep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFullSteep;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_angleFullSteep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFullSteep;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_angleFullSteep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleFullSteep = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_angleJumpLimitSteep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleJumpLimitSteep;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_angleJumpLimitSteep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleJumpLimitSteep;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_angleJumpLimitSteep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleJumpLimitSteep = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_angleFullUphill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFullUphill;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_angleFullUphill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFullUphill;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_angleFullUphill(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleFullUphill = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_angleFullDownhill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFullDownhill;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_angleFullDownhill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFullDownhill;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_angleFullDownhill(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleFullDownhill = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_angleFullGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFullGrip;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_angleFullGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFullGrip;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_angleFullGrip(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleFullGrip = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_angleNoGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleNoGrip;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_angleNoGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleNoGrip;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_angleNoGrip(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleNoGrip = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_steepMaterialMaxGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steepMaterialMaxGrip;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_steepMaterialMaxGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steepMaterialMaxGrip;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_steepMaterialMaxGrip(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steepMaterialMaxGrip = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_steepMaterialLimitsGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steepMaterialLimitsGrip;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_steepMaterialLimitsGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steepMaterialLimitsGrip;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_steepMaterialLimitsGrip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steepMaterialLimitsGrip = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>& GlobalNamespace::PlayerGround::__cordl_internal_get_steepMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steepMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>> const& GlobalNamespace::PlayerGround::__cordl_internal_get_steepMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steepMaterials;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_steepMaterials(::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steepMaterials = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_drawDebug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawDebug;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_drawDebug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawDebug;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_drawDebug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawDebug = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_drawSwimDebug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawSwimDebug;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_drawSwimDebug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawSwimDebug;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_drawSwimDebug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawSwimDebug = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_drawSteepnessDebug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawSteepnessDebug;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_drawSteepnessDebug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawSteepnessDebug;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_drawSteepnessDebug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawSteepnessDebug = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_steepnessGizmoGridSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steepnessGizmoGridSize;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_steepnessGizmoGridSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steepnessGizmoGridSize;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_steepnessGizmoGridSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steepnessGizmoGridSize = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_logSteepness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logSteepness;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_logSteepness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logSteepness;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_logSteepness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logSteepness = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_logIsGrounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logIsGrounded;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_logIsGrounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logIsGrounded;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_logIsGrounded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logIsGrounded = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_logPropCasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPropCasting;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_logPropCasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPropCasting;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_logPropCasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logPropCasting = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_logDownhillBlocking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logDownhillBlocking;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_logDownhillBlocking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logDownhillBlocking;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_logDownhillBlocking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logDownhillBlocking = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_logGroundCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logGroundCollider;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_logGroundCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logGroundCollider;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_logGroundCollider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logGroundCollider = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_logContactTracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logContactTracking;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_logContactTracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logContactTracking;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_logContactTracking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logContactTracking = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::PlayerGround::__cordl_internal_get_singleHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleHit;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::PlayerGround::__cordl_internal_get_singleHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleHit;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_singleHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleHit = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::PlayerGround::__cordl_internal_get_hits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::PlayerGround::__cordl_internal_get_hits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hits = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerGround::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerGround::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_isGrounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGrounded;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_isGrounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGrounded;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_isGrounded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGrounded = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_isOnJumpableGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOnJumpableGround;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_isOnJumpableGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOnJumpableGround;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_isOnJumpableGround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOnJumpableGround = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerGround::__cordl_internal_get_lastSafePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSafePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerGround::__cordl_internal_get_lastSafePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSafePosition;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_lastSafePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSafePosition = value;
}
constexpr ::GlobalNamespace::PlayerGround_DownhillBlockState& GlobalNamespace::PlayerGround::__cordl_internal_get_downhillBlockState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downhillBlockState;
}
constexpr ::GlobalNamespace::PlayerGround_DownhillBlockState const& GlobalNamespace::PlayerGround::__cordl_internal_get_downhillBlockState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downhillBlockState;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_downhillBlockState(::GlobalNamespace::PlayerGround_DownhillBlockState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downhillBlockState = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerGround::__cordl_internal_get__normal_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normal_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerGround::__cordl_internal_get__normal_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normal_k__BackingField;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set__normal_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normal_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_isSwimming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSwimming;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_isSwimming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSwimming;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_isSwimming(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSwimming = value;
}
constexpr bool& GlobalNamespace::PlayerGround::__cordl_internal_get_lastGroundWasSwimming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGroundWasSwimming;
}
constexpr bool const& GlobalNamespace::PlayerGround::__cordl_internal_get_lastGroundWasSwimming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGroundWasSwimming;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_lastGroundWasSwimming(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastGroundWasSwimming = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get_distanceToTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceToTerrain;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_distanceToTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceToTerrain;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_distanceToTerrain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceToTerrain = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::PlayerGround::__cordl_internal_get_groundCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::PlayerGround::__cordl_internal_get_groundCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundCollider;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_groundCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences>& GlobalNamespace::PlayerGround::__cordl_internal_get__footstepSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____footstepSounds;
}
constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences> const& GlobalNamespace::PlayerGround::__cordl_internal_get__footstepSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____footstepSounds;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set__footstepSounds(::UnityW<::GlobalNamespace::FootstepAudioReferences>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____footstepSounds = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::PlayerGround::__cordl_internal_get__currentPropSlideSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPropSlideSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::PlayerGround::__cordl_internal_get__currentPropSlideSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPropSlideSound;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set__currentPropSlideSound(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPropSlideSound = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerGround::__cordl_internal_get__propSlideEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propSlideEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerGround::__cordl_internal_get__propSlideEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propSlideEvent;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set__propSlideEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propSlideEvent = value;
}
constexpr float_t& GlobalNamespace::PlayerGround::__cordl_internal_get__propMovingVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propMovingVelocity;
}
constexpr float_t const& GlobalNamespace::PlayerGround::__cordl_internal_get__propMovingVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propMovingVelocity;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set__propMovingVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propMovingVelocity = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::PlayerGround::__cordl_internal_get__lastPropPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPropPos;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::PlayerGround::__cordl_internal_get__lastPropPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPropPos;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set__lastPropPos(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPropPos = value;
}
constexpr int32_t& GlobalNamespace::PlayerGround::__cordl_internal_get_lastRecordedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRecordedFrame;
}
constexpr int32_t const& GlobalNamespace::PlayerGround::__cordl_internal_get_lastRecordedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRecordedFrame;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_lastRecordedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRecordedFrame = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ModifiableContactPair,bool>>*& GlobalNamespace::PlayerGround::__cordl_internal_get_recordedPairs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordedPairs;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ModifiableContactPair,bool>>* const& GlobalNamespace::PlayerGround::__cordl_internal_get_recordedPairs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordedPairs;
}
constexpr void GlobalNamespace::PlayerGround::__cordl_internal_set_recordedPairs(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ModifiableContactPair,bool>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recordedPairs = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayerGround::get_normal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"get_normal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGround::set_normal(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"set_normal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerGround::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerGround::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGround::RecordContact(::UnityEngine::ModifiableContactPair  pair, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"RecordContact", {}, {::i2c::type_of<::UnityEngine::ModifiableContactPair>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pair, flipped);
}
inline int32_t GlobalNamespace::PlayerGround::GetNonHandHitCount(::ArrayW<::UnityEngine::RaycastHit>  hits, int32_t  hitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetNonHandHitCount", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hits, hitCount);
}
inline ::GlobalNamespace::PlayerGround_DownhillBlockState GlobalNamespace::PlayerGround::CanMoveDownSlopeTest(::UnityEngine::Vector3  slopeNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"CanMoveDownSlopeTest", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerGround_DownhillBlockState>(this, ___internal_method, slopeNormal);
}
inline int32_t GlobalNamespace::PlayerGround::ColliderCastNonAlloc(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  originOffset, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  hits, float_t  maxDistance, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"ColliderCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, collider, originOffset, direction, hits, maxDistance, layerMask, queryTriggerInteraction);
}
inline void GlobalNamespace::PlayerGround::GetCastsFromContacts(::by_ref<::UnityEngine::Collider*>  foundCollider, ::by_ref<::UnityEngine::Collider*>  propCollider, ::by_ref<::UnityEngine::Vector3>  contactPoint, ::by_ref<::UnityEngine::Vector3>  contactNormal, ::by_ref<bool>  groundComesFromProp, bool  propsOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetCastsFromContacts", {}, {::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, foundCollider, propCollider, contactPoint, contactNormal, groundComesFromProp, propsOnly);
}
inline ::UnityW<::UnityEngine::Collider> GlobalNamespace::PlayerGround::PropCast(::by_ref<::UnityEngine::RaycastHit>  closestHit, ::by_ref<::UnityEngine::Collider*>  propCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"PropCast", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method, closestHit, propCollider);
}
inline void GlobalNamespace::PlayerGround::ProcessCasts(::by_ref<::UnityEngine::Collider*>  foundCollider, ::by_ref<::UnityEngine::Collider*>  propCollider, ::by_ref<::UnityEngine::Vector3>  contactPoint, ::by_ref<::UnityEngine::Vector3>  contactNormal, ::by_ref<bool>  groundIsFromProp, bool  checkProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"ProcessCasts", {}, {::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, foundCollider, propCollider, contactPoint, contactNormal, groundIsFromProp, checkProps);
}
inline void GlobalNamespace::PlayerGround::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGround::SetGroundCollider(::UnityEngine::Collider*  newGroundCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"SetGroundCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGroundCollider);
}
inline bool GlobalNamespace::PlayerGround::IsSteepMaterial(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"IsSteepMaterial", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collider);
}
inline float_t GlobalNamespace::PlayerGround::GetSteepness(::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetSteepness", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, normal);
}
inline float_t GlobalNamespace::PlayerGround::GetSteepness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetSteepness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerGround::GetGroundGrip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetGroundGrip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayerGround::GetSlopedMoveForce(::UnityEngine::Vector3  input, ::by_ref<float_t>  steepScalar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"GetSlopedMoveForce", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, input, steepScalar);
}
inline void GlobalNamespace::PlayerGround::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGround::StopPropSlidingSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"StopPropSlidingSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGround::UpdatePropSlidingSound(::UnityEngine::Collider*  propCastResult, ::UnityEngine::Collider*  propCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"UpdatePropSlidingSound", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propCastResult, propCollider);
}
inline void GlobalNamespace::PlayerGround::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerGround::_UpdatePropSlidingSound_b__80_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGround*>(),
                        {"<UpdatePropSlidingSound>b__80_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerGround* GlobalNamespace::PlayerGround::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerGround*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerGround::PlayerGround()   {
}
