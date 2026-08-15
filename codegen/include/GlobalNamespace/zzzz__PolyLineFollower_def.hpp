#pragma once
// IWYU pragma private; include "GlobalNamespace/PolyLineFollower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PolyLineFollower)
namespace GlobalNamespace {
struct PolyLineFollower_TestPositionType;
}
namespace GlobalNamespace {
class PolyLine_ClosestPoint;
}
namespace GlobalNamespace {
class PolyLine;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct PolyLineFollower_TestPositionType;
}
namespace GlobalNamespace {
class PolyLineFollower;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PolyLineFollower_TestPositionType);
MARK_REF_T(::GlobalNamespace::PolyLineFollower*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PolyLineFollower_TestPositionType, "", "PolyLineFollower/TestPositionType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PolyLineFollower*, "", "PolyLineFollower");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PolyLineFollower/TestPositionType
struct CORDL_TYPE PolyLineFollower_TestPositionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PolyLineFollower_TestPositionType_Unwrapped
enum struct __PolyLineFollower_TestPositionType_Unwrapped : int32_t {
__E_Listener = static_cast<int32_t>(0x0),
__E_Player = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PolyLineFollower_TestPositionType_Unwrapped () const noexcept {
return static_cast<__PolyLineFollower_TestPositionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PolyLineFollower_TestPositionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PolyLineFollower_TestPositionType(int32_t  value__) noexcept;

/// @brief Field Listener value: I32(0)
static ::GlobalNamespace::PolyLineFollower_TestPositionType const Listener;

/// @brief Field Player value: I32(1)
static ::GlobalNamespace::PolyLineFollower_TestPositionType const Player;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17635};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PolyLineFollower_TestPositionType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PolyLineFollower_TestPositionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PolyLineFollower::TestPositionType, UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: PolyLineFollower
class CORDL_TYPE PolyLineFollower : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TestPositionType = ::GlobalNamespace::PolyLineFollower_TestPositionType;

/// @brief Field _closests, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__closests, put=__cordl_internal_set__closests)) ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  _closests;

/// @brief Field _fewestJumps, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__fewestJumps, put=__cordl_internal_set__fewestJumps)) bool  _fewestJumps;

/// @brief Field _followLookup, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__followLookup, put=__cordl_internal_set__followLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PolyLine_ClosestPoint*,::UnityW<::UnityEngine::Transform>>*  _followLookup;

/// @brief Field _followers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__followers, put=__cordl_internal_set__followers)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _followers;

/// @brief Field _lerpSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerpSpeed, put=__cordl_internal_set__lerpSpeed)) float_t  _lerpSpeed;

/// @brief Field _maxDistance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistance, put=__cordl_internal_set__maxDistance)) float_t  _maxDistance;

/// @brief Field _maxDistanceSquared, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistanceSquared, put=__cordl_internal_set__maxDistanceSquared)) float_t  _maxDistanceSquared;

/// @brief Field _minDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistance, put=__cordl_internal_set__minDistance)) float_t  _minDistance;

/// @brief Field _minDistanceSquared, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistanceSquared, put=__cordl_internal_set__minDistanceSquared)) float_t  _minDistanceSquared;

/// @brief Field _polyline, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__polyline, put=__cordl_internal_set__polyline)) ::UnityW<::GlobalNamespace::PolyLine>  _polyline;

/// @brief Field _slerp, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__slerp, put=__cordl_internal_set__slerp)) bool  _slerp;

/// @brief Field _targetPoints, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetPoints, put=__cordl_internal_set__targetPoints)) ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  _targetPoints;

/// @brief Field _testPosition, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__testPosition, put=__cordl_internal_set__testPosition)) ::GlobalNamespace::PolyLineFollower_TestPositionType  _testPosition;

/// @brief Field _unassigned, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__unassigned, put=__cordl_internal_set__unassigned)) ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  _unassigned;

/// @brief Field _used, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__used, put=__cordl_internal_set__used)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*  _used;

/// @brief Method Awake, addr 0x1804a0a30, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MoveFollowers, addr 0x1804a0a50, size 0xb10, virtual false, abstract: false, final false
inline void MoveFollowers(::UnityEngine::Vector3  testPos) ;

static inline ::GlobalNamespace::PolyLineFollower* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnValidate, addr 0x1804a1560, size 0x170, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0x1804a16d0, size 0x200, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1804a1900, size 0x220, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <OnValidate>b__20_0, addr 0x1804a18d0, size 0x30, virtual false, abstract: false, final false
inline bool _OnValidate_b__20_0(::UnityEngine::Transform*  source, int32_t  index) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* const& __cordl_internal_get__closests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*& __cordl_internal_get__closests() ;

constexpr bool const& __cordl_internal_get__fewestJumps() const;

constexpr bool& __cordl_internal_get__fewestJumps() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PolyLine_ClosestPoint*,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__followLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PolyLine_ClosestPoint*,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__followLookup() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__followers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__followers() ;

constexpr float_t const& __cordl_internal_get__lerpSpeed() const;

constexpr float_t& __cordl_internal_get__lerpSpeed() ;

constexpr float_t const& __cordl_internal_get__maxDistance() const;

constexpr float_t& __cordl_internal_get__maxDistance() ;

constexpr float_t const& __cordl_internal_get__maxDistanceSquared() const;

constexpr float_t& __cordl_internal_get__maxDistanceSquared() ;

constexpr float_t const& __cordl_internal_get__minDistance() const;

constexpr float_t& __cordl_internal_get__minDistance() ;

constexpr float_t const& __cordl_internal_get__minDistanceSquared() const;

constexpr float_t& __cordl_internal_get__minDistanceSquared() ;

constexpr ::UnityW<::GlobalNamespace::PolyLine> const& __cordl_internal_get__polyline() const;

constexpr ::UnityW<::GlobalNamespace::PolyLine>& __cordl_internal_get__polyline() ;

constexpr bool const& __cordl_internal_get__slerp() const;

constexpr bool& __cordl_internal_get__slerp() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* const& __cordl_internal_get__targetPoints() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*& __cordl_internal_get__targetPoints() ;

constexpr ::GlobalNamespace::PolyLineFollower_TestPositionType const& __cordl_internal_get__testPosition() const;

constexpr ::GlobalNamespace::PolyLineFollower_TestPositionType& __cordl_internal_get__testPosition() ;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__unassigned() const;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__unassigned() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__used() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__used() ;

constexpr void __cordl_internal_set__closests(::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  value) ;

constexpr void __cordl_internal_set__fewestJumps(bool  value) ;

constexpr void __cordl_internal_set__followLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PolyLine_ClosestPoint*,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__followers(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__lerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set__maxDistance(float_t  value) ;

constexpr void __cordl_internal_set__maxDistanceSquared(float_t  value) ;

constexpr void __cordl_internal_set__minDistance(float_t  value) ;

constexpr void __cordl_internal_set__minDistanceSquared(float_t  value) ;

constexpr void __cordl_internal_set__polyline(::UnityW<::GlobalNamespace::PolyLine>  value) ;

constexpr void __cordl_internal_set__slerp(bool  value) ;

constexpr void __cordl_internal_set__targetPoints(::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  value) ;

constexpr void __cordl_internal_set__testPosition(::GlobalNamespace::PolyLineFollower_TestPositionType  value) ;

constexpr void __cordl_internal_set__unassigned(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__used(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// @brief Method .ctor, addr 0x1804a1b20, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyLineFollower() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyLineFollower", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyLineFollower(PolyLineFollower && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyLineFollower", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyLineFollower(PolyLineFollower const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17636};

/// @brief Field _polyline, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PolyLine>  ____polyline;

/// @brief Field _followers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____followers;

/// @brief Field _minDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ____minDistance;

/// @brief Field _maxDistance, offset: 0x34, size: 0x4, def value: None
 float_t  ____maxDistance;

/// @brief Field _minDistanceSquared, offset: 0x38, size: 0x4, def value: None
 float_t  ____minDistanceSquared;

/// @brief Field _maxDistanceSquared, offset: 0x3c, size: 0x4, def value: None
 float_t  ____maxDistanceSquared;

/// @brief Field _lerpSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ____lerpSpeed;

/// @brief Field _fewestJumps, offset: 0x44, size: 0x1, def value: None
 bool  ____fewestJumps;

/// @brief Field _slerp, offset: 0x45, size: 0x1, def value: None
 bool  ____slerp;

/// @brief Field _testPosition, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::PolyLineFollower_TestPositionType  ____testPosition;

/// @brief Field _closests, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  ____closests;

/// @brief Field _followLookup, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PolyLine_ClosestPoint*,::UnityW<::UnityEngine::Transform>>*  ____followLookup;

/// @brief Field _unassigned, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  ____unassigned;

/// @brief Field _used, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*  ____used;

/// @brief Field _targetPoints, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  ____targetPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____polyline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____followers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____minDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____maxDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____minDistanceSquared) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____maxDistanceSquared) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____lerpSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____fewestJumps) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____slerp) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____testPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____closests) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____followLookup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____unassigned) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____used) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PolyLineFollower, ____targetPoints) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PolyLineFollower) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
