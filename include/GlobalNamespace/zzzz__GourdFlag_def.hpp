#pragma once
// IWYU pragma private; include "GlobalNamespace/GourdFlag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GourdMapReference_def.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GourdFlag)
namespace GlobalNamespace {
struct GourdFlag_GourdState;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GourdFlag_GourdState;
}
namespace GlobalNamespace {
class GourdFlag;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GourdFlag_GourdState);
MARK_REF_T(::GlobalNamespace::GourdFlag*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GourdFlag_GourdState, "", "GourdFlag/GourdState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GourdFlag*, "", "GourdFlag");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GourdFlag/GourdState
struct CORDL_TYPE GourdFlag_GourdState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GourdFlag_GourdState_Unwrapped
enum struct __GourdFlag_GourdState_Unwrapped : int32_t {
__E_Locked = static_cast<int32_t>(0x0),
__E_Loose = static_cast<int32_t>(0x1),
__E_Stashed = static_cast<int32_t>(0x2),
__E_Hidden = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GourdFlag_GourdState_Unwrapped () const noexcept {
return static_cast<__GourdFlag_GourdState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GourdFlag_GourdState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GourdFlag_GourdState(int32_t  value__) noexcept;

/// @brief Field Hidden value: I32(4)
static ::GlobalNamespace::GourdFlag_GourdState const Hidden;

/// @brief Field Locked value: I32(0)
static ::GlobalNamespace::GourdFlag_GourdState const Locked;

/// @brief Field Loose value: I32(1)
static ::GlobalNamespace::GourdFlag_GourdState const Loose;

/// @brief Field Stashed value: I32(2)
static ::GlobalNamespace::GourdFlag_GourdState const Stashed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5061};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GourdFlag_GourdState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GourdFlag_GourdState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GourdFlag::GourdState, GourdMapReference, SaveablePropName, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GourdFlag
class CORDL_TYPE GourdFlag : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GourdState = ::GlobalNamespace::GourdFlag_GourdState;

/// @brief Field gourdMapReference, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get_gourdMapReference, put=__cordl_internal_set_gourdMapReference)) ::GlobalNamespace::GourdMapReference  gourdMapReference;

/// @brief Field gourdState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_gourdState, put=__cordl_internal_set_gourdState)) ::GlobalNamespace::GourdFlag_GourdState  gourdState;

/// @brief Field lockedMarker, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lockedMarker, put=__cordl_internal_set_lockedMarker)) ::UnityW<::UnityEngine::Transform>  lockedMarker;

/// @brief Field looseMarker, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_looseMarker, put=__cordl_internal_set_looseMarker)) ::UnityW<::UnityEngine::Transform>  looseMarker;

/// @brief Field saveablePropName, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_saveablePropName, put=__cordl_internal_set_saveablePropName)) ::GlobalNamespace::SaveablePropName  saveablePropName;

/// @brief Field stashedMarker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stashedMarker, put=__cordl_internal_set_stashedMarker)) ::UnityW<::UnityEngine::Transform>  stashedMarker;

static inline ::GlobalNamespace::GourdFlag* New_ctor() ;

/// @brief Method SetState, addr 0x1803fe360, size 0x170, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GourdFlag_GourdState  gourdState) ;

constexpr ::GlobalNamespace::GourdMapReference const& __cordl_internal_get_gourdMapReference() const;

constexpr ::GlobalNamespace::GourdMapReference& __cordl_internal_get_gourdMapReference() ;

constexpr ::GlobalNamespace::GourdFlag_GourdState const& __cordl_internal_get_gourdState() const;

constexpr ::GlobalNamespace::GourdFlag_GourdState& __cordl_internal_get_gourdState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lockedMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lockedMarker() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_looseMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_looseMarker() ;

constexpr ::GlobalNamespace::SaveablePropName const& __cordl_internal_get_saveablePropName() const;

constexpr ::GlobalNamespace::SaveablePropName& __cordl_internal_get_saveablePropName() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stashedMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stashedMarker() ;

constexpr void __cordl_internal_set_gourdMapReference(::GlobalNamespace::GourdMapReference  value) ;

constexpr void __cordl_internal_set_gourdState(::GlobalNamespace::GourdFlag_GourdState  value) ;

constexpr void __cordl_internal_set_lockedMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_looseMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_saveablePropName(::GlobalNamespace::SaveablePropName  value) ;

constexpr void __cordl_internal_set_stashedMarker(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GourdFlag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GourdFlag", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GourdFlag(GourdFlag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GourdFlag", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GourdFlag(GourdFlag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5062};

/// @brief Field gourdState, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GourdFlag_GourdState  ___gourdState;

/// @brief Field saveablePropName, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::SaveablePropName  ___saveablePropName;

/// @brief Field lockedMarker, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lockedMarker;

/// @brief Field stashedMarker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___stashedMarker;

/// @brief Field looseMarker, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___looseMarker;

/// @brief Field gourdMapReference, offset: 0x40, size: 0x18, def value: None
 ::GlobalNamespace::GourdMapReference  ___gourdMapReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GourdFlag, ___gourdState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdFlag, ___saveablePropName) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdFlag, ___lockedMarker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdFlag, ___stashedMarker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdFlag, ___looseMarker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdFlag, ___gourdMapReference) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GourdFlag) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
