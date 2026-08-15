#pragma once
// IWYU pragma private; include "GlobalNamespace/PolyLineFollower.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__PolyLineFollower_def.hpp"
#include "GlobalNamespace/zzzz__PolyLineFollower_def.hpp"
#include "GlobalNamespace/zzzz__PolyLine_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PolyLineFollower_TestPositionType::PolyLineFollower_TestPositionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PolyLineFollower_TestPositionType::PolyLineFollower_TestPositionType()   {
}
constexpr ::GlobalNamespace::PolyLineFollower_TestPositionType  GlobalNamespace::PolyLineFollower_TestPositionType::Listener{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PolyLineFollower_TestPositionType  GlobalNamespace::PolyLineFollower_TestPositionType::Player{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::PolyLineFollower.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLineFollower::*)()>(&::GlobalNamespace::PolyLineFollower::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a0a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLineFollower.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLineFollower::*)()>(&::GlobalNamespace::PolyLineFollower::Start)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804a16d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLineFollower.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLineFollower::*)()>(&::GlobalNamespace::PolyLineFollower::Update)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1804a1900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLineFollower.MoveFollowers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLineFollower::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PolyLineFollower::MoveFollowers)> {
  constexpr static std::size_t size = 0xb10;
  constexpr static std::size_t addrs = 0x1804a0a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"MoveFollowers", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLineFollower.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLineFollower::*)()>(&::GlobalNamespace::PolyLineFollower::OnValidate)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804a1560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLineFollower.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLineFollower::*)()>(&::GlobalNamespace::PolyLineFollower::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLineFollower._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLineFollower::*)()>(&::GlobalNamespace::PolyLineFollower::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804a1b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLineFollower._OnValidate_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PolyLineFollower::*)(::UnityEngine::Transform*, int32_t)>(&::GlobalNamespace::PolyLineFollower::_OnValidate_b__20_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a18d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"<OnValidate>b__20_0", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PolyLine>& GlobalNamespace::PolyLineFollower::__cordl_internal_get__polyline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polyline;
}
constexpr ::UnityW<::GlobalNamespace::PolyLine> const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__polyline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polyline;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__polyline(::UnityW<::GlobalNamespace::PolyLine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____polyline = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::PolyLineFollower::__cordl_internal_get__followers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__followers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followers;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__followers(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followers = value;
}
constexpr float_t& GlobalNamespace::PolyLineFollower::__cordl_internal_get__minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr float_t const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDistance = value;
}
constexpr float_t& GlobalNamespace::PolyLineFollower::__cordl_internal_get__maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr float_t const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistance = value;
}
constexpr float_t& GlobalNamespace::PolyLineFollower::__cordl_internal_get__minDistanceSquared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistanceSquared;
}
constexpr float_t const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__minDistanceSquared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistanceSquared;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__minDistanceSquared(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDistanceSquared = value;
}
constexpr float_t& GlobalNamespace::PolyLineFollower::__cordl_internal_get__maxDistanceSquared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceSquared;
}
constexpr float_t const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__maxDistanceSquared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceSquared;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__maxDistanceSquared(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistanceSquared = value;
}
constexpr float_t& GlobalNamespace::PolyLineFollower::__cordl_internal_get__lerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpSpeed;
}
constexpr float_t const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__lerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpSpeed;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__lerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lerpSpeed = value;
}
constexpr bool& GlobalNamespace::PolyLineFollower::__cordl_internal_get__fewestJumps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fewestJumps;
}
constexpr bool const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__fewestJumps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fewestJumps;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__fewestJumps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fewestJumps = value;
}
constexpr bool& GlobalNamespace::PolyLineFollower::__cordl_internal_get__slerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slerp;
}
constexpr bool const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__slerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slerp;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__slerp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slerp = value;
}
constexpr ::GlobalNamespace::PolyLineFollower_TestPositionType& GlobalNamespace::PolyLineFollower::__cordl_internal_get__testPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____testPosition;
}
constexpr ::GlobalNamespace::PolyLineFollower_TestPositionType const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__testPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____testPosition;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__testPosition(::GlobalNamespace::PolyLineFollower_TestPositionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____testPosition = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*& GlobalNamespace::PolyLineFollower::__cordl_internal_get__closests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__closests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closests;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__closests(::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closests = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PolyLine_ClosestPoint*,::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::PolyLineFollower::__cordl_internal_get__followLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PolyLine_ClosestPoint*,::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__followLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followLookup;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__followLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PolyLine_ClosestPoint*,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followLookup = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::PolyLineFollower::__cordl_internal_get__unassigned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unassigned;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__unassigned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unassigned;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__unassigned(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unassigned = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::PolyLineFollower::__cordl_internal_get__used()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____used;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__used() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____used;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__used(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____used = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*& GlobalNamespace::PolyLineFollower::__cordl_internal_get__targetPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPoints;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* const& GlobalNamespace::PolyLineFollower::__cordl_internal_get__targetPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPoints;
}
constexpr void GlobalNamespace::PolyLineFollower::__cordl_internal_set__targetPoints(::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPoints = value;
}
inline void GlobalNamespace::PolyLineFollower::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PolyLineFollower::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PolyLineFollower::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PolyLineFollower::MoveFollowers(::UnityEngine::Vector3  testPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"MoveFollowers", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, testPos);
}
inline void GlobalNamespace::PolyLineFollower::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PolyLineFollower::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PolyLineFollower::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PolyLineFollower::_OnValidate_b__20_0(::UnityEngine::Transform*  source, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLineFollower*>(),
                        {"<OnValidate>b__20_0", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, index);
}
inline ::GlobalNamespace::PolyLineFollower* GlobalNamespace::PolyLineFollower::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PolyLineFollower*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PolyLineFollower::PolyLineFollower()   {
}
