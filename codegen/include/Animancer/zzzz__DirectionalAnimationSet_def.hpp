#pragma once
// IWYU pragma private; include "Animancer/DirectionalAnimationSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectionalAnimationSet)
namespace Animancer {
struct DirectionalAnimationSet_Direction;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class IAnimationClipSource;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Animancer {
struct DirectionalAnimationSet_Direction;
}
namespace Animancer {
class DirectionalAnimationSet;
}
// Write type traits
MARK_VAL_T(::Animancer::DirectionalAnimationSet_Direction);
MARK_REF_T(::Animancer::DirectionalAnimationSet*);
DEFINE_IL2CPP_CLASS(::Animancer::DirectionalAnimationSet_Direction, "Animancer", "DirectionalAnimationSet/Direction");
DEFINE_IL2CPP_CLASS(::Animancer::DirectionalAnimationSet*, "Animancer", "DirectionalAnimationSet");
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.DirectionalAnimationSet/Direction
struct CORDL_TYPE DirectionalAnimationSet_Direction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DirectionalAnimationSet_Direction_Unwrapped
enum struct __DirectionalAnimationSet_Direction_Unwrapped : int32_t {
__E_Up = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
__E_Down = static_cast<int32_t>(0x2),
__E_Left = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DirectionalAnimationSet_Direction_Unwrapped () const noexcept {
return static_cast<__DirectionalAnimationSet_Direction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DirectionalAnimationSet_Direction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DirectionalAnimationSet_Direction(int32_t  value__) noexcept;

/// @brief Field Down value: I32(2)
static ::Animancer::DirectionalAnimationSet_Direction const Down;

/// @brief Field Left value: I32(3)
static ::Animancer::DirectionalAnimationSet_Direction const Left;

/// @brief Field Right value: I32(1)
static ::Animancer::DirectionalAnimationSet_Direction const Right;

/// @brief Field Up value: I32(0)
static ::Animancer::DirectionalAnimationSet_Direction const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::DirectionalAnimationSet_Direction, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::DirectionalAnimationSet_Direction) == 0x4, "Size mismatch!");

} // namespace end def Animancer
// Dependencies UnityEngine.ScriptableObject
namespace Animancer {
// Is value type: false
// CS Name: Animancer.DirectionalAnimationSet
class CORDL_TYPE DirectionalAnimationSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Direction = ::Animancer::DirectionalAnimationSet_Direction;

 __declspec(property(get=get_ClipCount)) int32_t  ClipCount;

 __declspec(property(get=get_Down, put=set_Down)) ::UnityW<::UnityEngine::AnimationClip>  Down;

 __declspec(property(get=get_Left, put=set_Left)) ::UnityW<::UnityEngine::AnimationClip>  Left;

 __declspec(property(get=get_Right, put=set_Right)) ::UnityW<::UnityEngine::AnimationClip>  Right;

 __declspec(property(get=get_Up, put=set_Up)) ::UnityW<::UnityEngine::AnimationClip>  Up;

/// @brief Field _Down, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Down, put=__cordl_internal_set__Down)) ::UnityW<::UnityEngine::AnimationClip>  _Down;

/// @brief Field _Left, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Left, put=__cordl_internal_set__Left)) ::UnityW<::UnityEngine::AnimationClip>  _Left;

/// @brief Field _Right, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Right, put=__cordl_internal_set__Right)) ::UnityW<::UnityEngine::AnimationClip>  _Right;

/// @brief Field _Up, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Up, put=__cordl_internal_set__Up)) ::UnityW<::UnityEngine::AnimationClip>  _Up;

/// @brief Convert operator to "::UnityEngine::IAnimationClipSource"
constexpr operator  ::UnityEngine::IAnimationClipSource*() noexcept;

/// @brief Method AddClips, addr 0x180308f10, size 0xb0, virtual false, abstract: false, final false
inline void AddClips(::ArrayW<::UnityEngine::AnimationClip*>  clips, int32_t  index) ;

/// @brief Method AddClipsAndDirections, addr 0x180308df0, size 0x120, virtual false, abstract: false, final false
inline void AddClipsAndDirections(::ArrayW<::UnityEngine::AnimationClip*>  clips, ::ArrayW<::UnityEngine::Vector2>  directions, int32_t  index) ;

/// @brief Method AddDirections, addr 0x180308fc0, size 0xc0, virtual false, abstract: false, final false
inline void AddDirections(::ArrayW<::UnityEngine::Vector2>  directions, int32_t  index) ;

/// @brief Method AllowSetClips, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void AllowSetClips(bool  allow) ;

/// @brief Method AssertCanSetClips, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void AssertCanSetClips() ;

/// @brief Method DirectionToVector, addr 0x180309080, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 DirectionToVector(::Animancer::DirectionalAnimationSet_Direction  direction) ;

/// @brief Method GetAnimationClips, addr 0x180309130, size 0xe0, virtual true, abstract: false, final true
inline void GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetClip, addr 0x180309210, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> GetClip(::Animancer::DirectionalAnimationSet_Direction  direction) ;

/// @brief Method GetClip, addr 0x180309280, size 0x60, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> GetClip(::UnityEngine::Vector2  direction) ;

/// @brief Method GetClip, addr 0x180309210, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> GetClip(int32_t  direction) ;

/// @brief Method GetDirection, addr 0x180309310, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 GetDirection(int32_t  direction) ;

/// @brief Method GetDirectionName, addr 0x1803092e0, size 0x30, virtual true, abstract: false, final false
inline ::StringW GetDirectionName(int32_t  direction) ;

static inline ::Animancer::DirectionalAnimationSet* New_ctor() ;

/// @brief Method SetClip, addr 0x180309320, size 0xa0, virtual false, abstract: false, final false
inline void SetClip(::Animancer::DirectionalAnimationSet_Direction  direction, ::UnityEngine::AnimationClip*  clip) ;

/// @brief Method SetClip, addr 0x180309320, size 0xa0, virtual true, abstract: false, final false
inline void SetClip(int32_t  direction, ::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Snap, addr 0x180309470, size 0xb0, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 Snap(::UnityEngine::Vector2  vector) ;

/// @brief Method SnapVectorToDirection, addr 0x1803093c0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 SnapVectorToDirection(::UnityEngine::Vector2  vector) ;

/// @brief Method VectorToDirection, addr 0x180309520, size 0x60, virtual false, abstract: false, final false
static inline ::Animancer::DirectionalAnimationSet_Direction VectorToDirection(::UnityEngine::Vector2  vector) ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Down() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Down() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Left() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Left() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Right() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Right() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Up() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Up() ;

constexpr void __cordl_internal_set__Down(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__Left(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__Right(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__Up(::UnityW<::UnityEngine::AnimationClip>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClipCount, addr 0x180309580, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ClipCount() ;

/// @brief Method get_Down, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_Down() ;

/// @brief Method get_Left, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_Left() ;

/// @brief Method get_Right, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_Right() ;

/// @brief Method get_Up, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_Up() ;

/// @brief Convert to "::UnityEngine::IAnimationClipSource"
constexpr ::UnityEngine::IAnimationClipSource* i___UnityEngine__IAnimationClipSource() noexcept;

/// @brief Method set_Down, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_Down(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_Left, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_Left(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_Right, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Right(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_Up, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_Up(::UnityEngine::AnimationClip*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectionalAnimationSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectionalAnimationSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalAnimationSet(DirectionalAnimationSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalAnimationSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalAnimationSet(DirectionalAnimationSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18187};

/// @brief Field _Up, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Up;

/// @brief Field _Right, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Right;

/// @brief Field _Down, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Down;

/// @brief Field _Left, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Left;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::DirectionalAnimationSet, ____Up) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::DirectionalAnimationSet, ____Right) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::DirectionalAnimationSet, ____Down) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::DirectionalAnimationSet, ____Left) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::DirectionalAnimationSet) == 0x38, "Size mismatch!");

} // namespace end def Animancer
