#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHeldInformation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerHeldInformation)
namespace GlobalNamespace {
struct PlayerHeldInformation_HeldType;
}
namespace GlobalNamespace {
class Prop;
}
namespace Mirror {
class NetworkIdentity;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerHeldInformation_HeldType;
}
namespace GlobalNamespace {
struct PlayerHeldInformation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerHeldInformation_HeldType);
MARK_VAL_T(::GlobalNamespace::PlayerHeldInformation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerHeldInformation_HeldType, "", "PlayerHeldInformation/HeldType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerHeldInformation, "", "PlayerHeldInformation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerHeldInformation/HeldType
struct CORDL_TYPE PlayerHeldInformation_HeldType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerHeldInformation_HeldType_Unwrapped
enum struct __PlayerHeldInformation_HeldType_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_Prop = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerHeldInformation_HeldType_Unwrapped () const noexcept {
return static_cast<__PlayerHeldInformation_HeldType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerHeldInformation_HeldType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerHeldInformation_HeldType(int32_t  value__) noexcept;

/// @brief Field Nothing value: I32(0)
static ::GlobalNamespace::PlayerHeldInformation_HeldType const Nothing;

/// @brief Field Prop value: I32(1)
static ::GlobalNamespace::PlayerHeldInformation_HeldType const Prop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5500};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerHeldInformation_HeldType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerHeldInformation_HeldType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerHeldInformation::HeldType, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerHeldInformation
struct CORDL_TYPE PlayerHeldInformation {
public:
// Declarations
using HeldType = ::GlobalNamespace::PlayerHeldInformation_HeldType;

 __declspec(property(get=get_hasProp)) bool  hasProp;

/// @brief Method DropFromSnatch, addr 0x1803607c0, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayerHeldInformation DropFromSnatch() ;

/// @brief Method GetProp, addr 0x1803607e0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::Prop> GetProp() ;

/// @brief Method ThrowInfo, addr 0x180360820, size 0x90, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayerHeldInformation ThrowInfo(float_t  windUp, ::UnityEngine::Vector3  dropPosition, ::UnityEngine::Quaternion  launchRotation) ;

/// @brief Method .ctor, addr 0x1803608b0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Prop*  prop) ;

/// @brief Method get_hasProp, addr 0x180360920, size 0x50, virtual false, abstract: false, final false
inline bool get_hasProp() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerHeldInformation() ;

// Ctor Parameters [CppParam { name: "identity", ty: "::UnityW<::Mirror::NetworkIdentity>", modifiers: "", def_value: None }, CppParam { name: "heldType", ty: "::GlobalNamespace::PlayerHeldInformation_HeldType", modifiers: "", def_value: None }, CppParam { name: "hasDropData", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "windUp", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "dropPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "launchRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "actionNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isResultOfSnatch", ty: "bool", modifiers: "", def_value: None }]
constexpr PlayerHeldInformation(::UnityW<::Mirror::NetworkIdentity>  identity, ::GlobalNamespace::PlayerHeldInformation_HeldType  heldType, bool  hasDropData, float_t  windUp, ::UnityEngine::Vector3  dropPosition, ::UnityEngine::Quaternion  launchRotation, int32_t  actionNumber, bool  isResultOfSnatch) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5501};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field identity, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  identity;

/// @brief Field heldType, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::PlayerHeldInformation_HeldType  heldType;

/// @brief Field hasDropData, offset: 0xc, size: 0x1, def value: None
 bool  hasDropData;

/// @brief Field windUp, offset: 0x10, size: 0x4, def value: None
 float_t  windUp;

/// @brief Field dropPosition, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  dropPosition;

/// @brief Field launchRotation, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Quaternion  launchRotation;

/// @brief Field actionNumber, offset: 0x30, size: 0x4, def value: None
 int32_t  actionNumber;

/// @brief Field isResultOfSnatch, offset: 0x34, size: 0x1, def value: None
 bool  isResultOfSnatch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerHeldInformation, identity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeldInformation, heldType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeldInformation, hasDropData) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeldInformation, windUp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeldInformation, dropPosition) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeldInformation, launchRotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeldInformation, actionNumber) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeldInformation, isResultOfSnatch) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerHeldInformation) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
