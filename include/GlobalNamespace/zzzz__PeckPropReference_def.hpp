#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckPropReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPlayerReference_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckPropReference)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckPropReference_PocketType;
}
namespace GlobalNamespace {
struct PeckPropReference_ReferenceType;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckPropReference_PocketType;
}
namespace GlobalNamespace {
struct PeckPropReference_ReferenceType;
}
namespace GlobalNamespace {
struct PeckPropReference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckPropReference_PocketType);
MARK_VAL_T(::GlobalNamespace::PeckPropReference_ReferenceType);
MARK_VAL_T(::GlobalNamespace::PeckPropReference);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckPropReference_PocketType, "", "PeckPropReference/PocketType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckPropReference_ReferenceType, "", "PeckPropReference/ReferenceType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckPropReference, "", "PeckPropReference");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckPropReference/ReferenceType
struct CORDL_TYPE PeckPropReference_ReferenceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckPropReference_ReferenceType_Unwrapped
enum struct __PeckPropReference_ReferenceType_Unwrapped : int32_t {
__E_ContextProp = static_cast<int32_t>(0x0),
__E_SpecificProp = static_cast<int32_t>(0x1),
__E_PropHome = static_cast<int32_t>(0x2),
__E_Pocket = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckPropReference_ReferenceType_Unwrapped () const noexcept {
return static_cast<__PeckPropReference_ReferenceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckPropReference_ReferenceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckPropReference_ReferenceType(int32_t  value__) noexcept;

/// @brief Field ContextProp value: I32(0)
static ::GlobalNamespace::PeckPropReference_ReferenceType const ContextProp;

/// @brief Field Pocket value: I32(3)
static ::GlobalNamespace::PeckPropReference_ReferenceType const Pocket;

/// @brief Field PropHome value: I32(2)
static ::GlobalNamespace::PeckPropReference_ReferenceType const PropHome;

/// @brief Field SpecificProp value: I32(1)
static ::GlobalNamespace::PeckPropReference_ReferenceType const SpecificProp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckPropReference_ReferenceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckPropReference_ReferenceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckPropReference/PocketType
struct CORDL_TYPE PeckPropReference_PocketType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckPropReference_PocketType_Unwrapped
enum struct __PeckPropReference_PocketType_Unwrapped : int32_t {
__E_NotSet = static_cast<int32_t>(0x0),
__E_BlindfoldPocket = static_cast<int32_t>(0x1),
__E_BackpackPocket = static_cast<int32_t>(0x2),
__E_InBackpack = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckPropReference_PocketType_Unwrapped () const noexcept {
return static_cast<__PeckPropReference_PocketType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckPropReference_PocketType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckPropReference_PocketType(int32_t  value__) noexcept;

/// @brief Field BackpackPocket value: I32(2)
static ::GlobalNamespace::PeckPropReference_PocketType const BackpackPocket;

/// @brief Field BlindfoldPocket value: I32(1)
static ::GlobalNamespace::PeckPropReference_PocketType const BlindfoldPocket;

/// @brief Field InBackpack value: I32(3)
static ::GlobalNamespace::PeckPropReference_PocketType const InBackpack;

/// @brief Field NotSet value: I32(0)
static ::GlobalNamespace::PeckPropReference_PocketType const NotSet;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5346};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckPropReference_PocketType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckPropReference_PocketType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckPlayerReference, PeckPropReference::PocketType, PeckPropReference::ReferenceType
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckPropReference
struct CORDL_TYPE PeckPropReference {
public:
// Declarations
using PocketType = ::GlobalNamespace::PeckPropReference_PocketType;

using ReferenceType = ::GlobalNamespace::PeckPropReference_ReferenceType;

/// @brief Method GetProp, addr 0x180452f90, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::Prop> GetProp(::GlobalNamespace::PeckContext  peckContext) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckPropReference() ;

// Ctor Parameters [CppParam { name: "referenceType", ty: "::GlobalNamespace::PeckPropReference_ReferenceType", modifiers: "", def_value: None }, CppParam { name: "specificProp", ty: "::UnityW<::GlobalNamespace::Prop>", modifiers: "", def_value: None }, CppParam { name: "propHome", ty: "::UnityW<::GlobalNamespace::PropHome>", modifiers: "", def_value: None }, CppParam { name: "pocketPlayer", ty: "::GlobalNamespace::PeckPlayerReference", modifiers: "", def_value: None }, CppParam { name: "pocketType", ty: "::GlobalNamespace::PeckPropReference_PocketType", modifiers: "", def_value: None }]
constexpr PeckPropReference(::GlobalNamespace::PeckPropReference_ReferenceType  referenceType, ::UnityW<::GlobalNamespace::Prop>  specificProp, ::UnityW<::GlobalNamespace::PropHome>  propHome, ::GlobalNamespace::PeckPlayerReference  pocketPlayer, ::GlobalNamespace::PeckPropReference_PocketType  pocketType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field referenceType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PeckPropReference_ReferenceType  referenceType;

/// @brief Field specificProp, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  specificProp;

/// @brief Field propHome, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  propHome;

/// @brief Field pocketPlayer, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::PeckPlayerReference  pocketPlayer;

/// @brief Field pocketType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::PeckPropReference_PocketType  pocketType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckPropReference, referenceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckPropReference, specificProp) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckPropReference, propHome) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckPropReference, pocketPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckPropReference, pocketType) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckPropReference) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
