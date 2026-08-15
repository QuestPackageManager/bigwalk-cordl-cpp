#pragma once
// IWYU pragma private; include "Animancer/DirectionalAnimationSet8.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__DirectionalAnimationSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectionalAnimationSet8)
namespace Animancer {
class DirectionalAnimationSet8_Diagonals;
}
namespace Animancer {
struct DirectionalAnimationSet8_Direction;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Animancer {
struct DirectionalAnimationSet8_Direction;
}
namespace Animancer {
class DirectionalAnimationSet8;
}
namespace Animancer {
class DirectionalAnimationSet8_Diagonals;
}
// Write type traits
MARK_VAL_T(::Animancer::DirectionalAnimationSet8_Direction);
MARK_REF_T(::Animancer::DirectionalAnimationSet8*);
MARK_REF_T(::Animancer::DirectionalAnimationSet8_Diagonals*);
DEFINE_IL2CPP_CLASS(::Animancer::DirectionalAnimationSet8_Direction, "Animancer", "DirectionalAnimationSet8/Direction");
DEFINE_IL2CPP_CLASS(::Animancer::DirectionalAnimationSet8*, "Animancer", "DirectionalAnimationSet8");
DEFINE_IL2CPP_CLASS(::Animancer::DirectionalAnimationSet8_Diagonals*, "Animancer", "DirectionalAnimationSet8/Diagonals");
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.DirectionalAnimationSet8/Diagonals
class CORDL_TYPE DirectionalAnimationSet8_Diagonals : public ::System::Object {
public:
// Declarations
/// @brief Method get_DownLeft, addr 0x180308610, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_DownLeft() ;

/// @brief Method get_DownRight, addr 0x180308630, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_DownRight() ;

/// @brief Method get_UpLeft, addr 0x180308650, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_UpLeft() ;

/// @brief Method get_UpRight, addr 0x180308670, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_UpRight() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectionalAnimationSet8_Diagonals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectionalAnimationSet8_Diagonals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalAnimationSet8_Diagonals(DirectionalAnimationSet8_Diagonals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalAnimationSet8_Diagonals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalAnimationSet8_Diagonals(DirectionalAnimationSet8_Diagonals const& ) = delete;

/// @brief Field OneOverSqrt2 offset 0xffffffff size 0x4
static constexpr float_t  OneOverSqrt2{static_cast<float_t>(0.70710677f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::DirectionalAnimationSet8_Diagonals) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.DirectionalAnimationSet8/Direction
struct CORDL_TYPE DirectionalAnimationSet8_Direction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DirectionalAnimationSet8_Direction_Unwrapped
enum struct __DirectionalAnimationSet8_Direction_Unwrapped : int32_t {
__E_Up = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
__E_Down = static_cast<int32_t>(0x2),
__E_Left = static_cast<int32_t>(0x3),
__E_UpRight = static_cast<int32_t>(0x4),
__E_DownRight = static_cast<int32_t>(0x5),
__E_DownLeft = static_cast<int32_t>(0x6),
__E_UpLeft = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DirectionalAnimationSet8_Direction_Unwrapped () const noexcept {
return static_cast<__DirectionalAnimationSet8_Direction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DirectionalAnimationSet8_Direction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DirectionalAnimationSet8_Direction(int32_t  value__) noexcept;

/// @brief Field Down value: I32(2)
static ::Animancer::DirectionalAnimationSet8_Direction const Down;

/// @brief Field DownLeft value: I32(6)
static ::Animancer::DirectionalAnimationSet8_Direction const DownLeft;

/// @brief Field DownRight value: I32(5)
static ::Animancer::DirectionalAnimationSet8_Direction const DownRight;

/// @brief Field Left value: I32(3)
static ::Animancer::DirectionalAnimationSet8_Direction const Left;

/// @brief Field Right value: I32(1)
static ::Animancer::DirectionalAnimationSet8_Direction const Right;

/// @brief Field Up value: I32(0)
static ::Animancer::DirectionalAnimationSet8_Direction const Up;

/// @brief Field UpLeft value: I32(7)
static ::Animancer::DirectionalAnimationSet8_Direction const UpLeft;

/// @brief Field UpRight value: I32(4)
static ::Animancer::DirectionalAnimationSet8_Direction const UpRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18189};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::DirectionalAnimationSet8_Direction, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::DirectionalAnimationSet8_Direction) == 0x4, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.DirectionalAnimationSet
namespace Animancer {
// Is value type: false
// CS Name: Animancer.DirectionalAnimationSet8
class CORDL_TYPE DirectionalAnimationSet8 : public ::Animancer::DirectionalAnimationSet {
public:
// Declarations
using Diagonals = ::Animancer::DirectionalAnimationSet8_Diagonals;

using Direction = ::Animancer::DirectionalAnimationSet8_Direction;

 __declspec(property(get=get_ClipCount)) int32_t  ClipCount;

 __declspec(property(get=get_DownLeft, put=set_DownLeft)) ::UnityW<::UnityEngine::AnimationClip>  DownLeft;

 __declspec(property(get=get_DownRight, put=set_DownRight)) ::UnityW<::UnityEngine::AnimationClip>  DownRight;

 __declspec(property(get=get_UpLeft, put=set_UpLeft)) ::UnityW<::UnityEngine::AnimationClip>  UpLeft;

 __declspec(property(get=get_UpRight, put=set_UpRight)) ::UnityW<::UnityEngine::AnimationClip>  UpRight;

/// @brief Field _DownLeft, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__DownLeft, put=__cordl_internal_set__DownLeft)) ::UnityW<::UnityEngine::AnimationClip>  _DownLeft;

/// @brief Field _DownRight, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__DownRight, put=__cordl_internal_set__DownRight)) ::UnityW<::UnityEngine::AnimationClip>  _DownRight;

/// @brief Field _UpLeft, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpLeft, put=__cordl_internal_set__UpLeft)) ::UnityW<::UnityEngine::AnimationClip>  _UpLeft;

/// @brief Field _UpRight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpRight, put=__cordl_internal_set__UpRight)) ::UnityW<::UnityEngine::AnimationClip>  _UpRight;

/// @brief Method DirectionToVector, addr 0x180308690, size 0x140, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 DirectionToVector(::Animancer::DirectionalAnimationSet8_Direction  direction) ;

/// @brief Method GetClip, addr 0x1803088c0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> GetClip(::Animancer::DirectionalAnimationSet8_Direction  direction) ;

/// @brief Method GetClip, addr 0x1803087d0, size 0xf0, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> GetClip(::UnityEngine::Vector2  direction) ;

/// @brief Method GetClip, addr 0x1803088c0, size 0xc0, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> GetClip(int32_t  direction) ;

/// @brief Method GetDirection, addr 0x1803089b0, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 GetDirection(int32_t  direction) ;

/// @brief Method GetDirectionName, addr 0x180308980, size 0x30, virtual true, abstract: false, final false
inline ::StringW GetDirectionName(int32_t  direction) ;

static inline ::Animancer::DirectionalAnimationSet8* New_ctor() ;

/// @brief Method SetClip, addr 0x1803089c0, size 0x110, virtual false, abstract: false, final false
inline void SetClip(::Animancer::DirectionalAnimationSet8_Direction  direction, ::UnityEngine::AnimationClip*  clip) ;

/// @brief Method SetClip, addr 0x1803089c0, size 0x110, virtual true, abstract: false, final false
inline void SetClip(int32_t  direction, ::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Snap, addr 0x180308be0, size 0x110, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 Snap(::UnityEngine::Vector2  vector) ;

/// @brief Method SnapVectorToDirection, addr 0x180308ad0, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 SnapVectorToDirection(::UnityEngine::Vector2  vector) ;

/// @brief Method VectorToDirection, addr 0x180308cf0, size 0xe0, virtual false, abstract: false, final false
static inline ::Animancer::DirectionalAnimationSet8_Direction VectorToDirection(::UnityEngine::Vector2  vector) ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__DownLeft() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__DownLeft() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__DownRight() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__DownRight() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__UpLeft() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__UpLeft() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__UpRight() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__UpRight() ;

constexpr void __cordl_internal_set__DownLeft(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__DownRight(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__UpLeft(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__UpRight(::UnityW<::UnityEngine::AnimationClip>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClipCount, addr 0x180308dd0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ClipCount() ;

/// @brief Method get_DownLeft, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_DownLeft() ;

/// @brief Method get_DownRight, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_DownRight() ;

/// @brief Method get_UpLeft, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_UpLeft() ;

/// @brief Method get_UpRight, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_UpRight() ;

/// @brief Method set_DownLeft, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_DownLeft(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_DownRight, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_DownRight(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_UpLeft, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_UpLeft(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_UpRight, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_UpRight(::UnityEngine::AnimationClip*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectionalAnimationSet8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectionalAnimationSet8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalAnimationSet8(DirectionalAnimationSet8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalAnimationSet8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalAnimationSet8(DirectionalAnimationSet8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18190};

/// @brief Field _UpRight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____UpRight;

/// @brief Field _DownRight, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____DownRight;

/// @brief Field _DownLeft, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____DownLeft;

/// @brief Field _UpLeft, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____UpLeft;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::DirectionalAnimationSet8, ____UpRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::DirectionalAnimationSet8, ____DownRight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::DirectionalAnimationSet8, ____DownLeft) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::DirectionalAnimationSet8, ____UpLeft) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Animancer::DirectionalAnimationSet8) == 0x58, "Size mismatch!");

} // namespace end def Animancer
