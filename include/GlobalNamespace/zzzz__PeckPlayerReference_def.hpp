#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckPlayerReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckPlayerReference)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckPlayerReference_ReferenceType;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerPose;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckPlayerReference_ReferenceType;
}
namespace GlobalNamespace {
struct PeckPlayerReference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckPlayerReference_ReferenceType);
MARK_VAL_T(::GlobalNamespace::PeckPlayerReference);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckPlayerReference_ReferenceType, "", "PeckPlayerReference/ReferenceType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckPlayerReference, "", "PeckPlayerReference");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckPlayerReference/ReferenceType
struct CORDL_TYPE PeckPlayerReference_ReferenceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckPlayerReference_ReferenceType_Unwrapped
enum struct __PeckPlayerReference_ReferenceType_Unwrapped : int32_t {
__E_ContextPlayer = static_cast<int32_t>(0x0),
__E_SpecificPlayer = static_cast<int32_t>(0x1),
__E_Pose = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckPlayerReference_ReferenceType_Unwrapped () const noexcept {
return static_cast<__PeckPlayerReference_ReferenceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckPlayerReference_ReferenceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckPlayerReference_ReferenceType(int32_t  value__) noexcept;

/// @brief Field ContextPlayer value: I32(0)
static ::GlobalNamespace::PeckPlayerReference_ReferenceType const ContextPlayer;

/// @brief Field Pose value: I32(2)
static ::GlobalNamespace::PeckPlayerReference_ReferenceType const Pose;

/// @brief Field SpecificPlayer value: I32(1)
static ::GlobalNamespace::PeckPlayerReference_ReferenceType const SpecificPlayer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5341};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckPlayerReference_ReferenceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckPlayerReference_ReferenceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckPlayerReference::ReferenceType
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckPlayerReference
struct CORDL_TYPE PeckPlayerReference {
public:
// Declarations
using ReferenceType = ::GlobalNamespace::PeckPlayerReference_ReferenceType;

/// @brief Method GetPlayerCharacter, addr 0x180452ca0, size 0xd0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GetPlayerCharacter(::GlobalNamespace::PeckContext  peckContext) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckPlayerReference() ;

// Ctor Parameters [CppParam { name: "referenceType", ty: "::GlobalNamespace::PeckPlayerReference_ReferenceType", modifiers: "", def_value: None }, CppParam { name: "specificPlayer", ty: "::UnityW<::GlobalNamespace::PlayerCharacter>", modifiers: "", def_value: None }, CppParam { name: "pose", ty: "::UnityW<::GlobalNamespace::PlayerPose>", modifiers: "", def_value: None }]
constexpr PeckPlayerReference(::GlobalNamespace::PeckPlayerReference_ReferenceType  referenceType, ::UnityW<::GlobalNamespace::PlayerCharacter>  specificPlayer, ::UnityW<::GlobalNamespace::PlayerPose>  pose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5342};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field referenceType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PeckPlayerReference_ReferenceType  referenceType;

/// @brief Field specificPlayer, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  specificPlayer;

/// @brief Field pose, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  pose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckPlayerReference, referenceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckPlayerReference, specificPlayer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckPlayerReference, pose) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckPlayerReference) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
