#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckPropHomeReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPlayerReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckPropHomeReference)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckPropHomeReference_ReferenceType;
}
namespace GlobalNamespace {
class PropHome;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckPropHomeReference_ReferenceType;
}
namespace GlobalNamespace {
struct PeckPropHomeReference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckPropHomeReference_ReferenceType);
MARK_VAL_T(::GlobalNamespace::PeckPropHomeReference);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckPropHomeReference_ReferenceType, "", "PeckPropHomeReference/ReferenceType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckPropHomeReference, "", "PeckPropHomeReference");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckPropHomeReference/ReferenceType
struct CORDL_TYPE PeckPropHomeReference_ReferenceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckPropHomeReference_ReferenceType_Unwrapped
enum struct __PeckPropHomeReference_ReferenceType_Unwrapped : int32_t {
__E_SpecificPropHome = static_cast<int32_t>(0x0),
__E_Pocket = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckPropHomeReference_ReferenceType_Unwrapped () const noexcept {
return static_cast<__PeckPropHomeReference_ReferenceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckPropHomeReference_ReferenceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckPropHomeReference_ReferenceType(int32_t  value__) noexcept;

/// @brief Field Pocket value: I32(1)
static ::GlobalNamespace::PeckPropHomeReference_ReferenceType const Pocket;

/// @brief Field SpecificPropHome value: I32(0)
static ::GlobalNamespace::PeckPropHomeReference_ReferenceType const SpecificPropHome;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckPropHomeReference_ReferenceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckPropHomeReference_ReferenceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckPlayerReference, PeckPropHomeReference::ReferenceType, PeckPropReference::PocketType
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckPropHomeReference
struct CORDL_TYPE PeckPropHomeReference {
public:
// Declarations
using ReferenceType = ::GlobalNamespace::PeckPropHomeReference_ReferenceType;

/// @brief Method GetPropHome, addr 0x180452d70, size 0x220, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PropHome> GetPropHome(::GlobalNamespace::PeckContext  peckContext) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckPropHomeReference() ;

// Ctor Parameters [CppParam { name: "referenceType", ty: "::GlobalNamespace::PeckPropHomeReference_ReferenceType", modifiers: "", def_value: None }, CppParam { name: "specificHome", ty: "::UnityW<::GlobalNamespace::PropHome>", modifiers: "", def_value: None }, CppParam { name: "pocketType", ty: "::GlobalNamespace::PeckPropReference_PocketType", modifiers: "", def_value: None }, CppParam { name: "pocketPlayer", ty: "::GlobalNamespace::PeckPlayerReference", modifiers: "", def_value: None }]
constexpr PeckPropHomeReference(::GlobalNamespace::PeckPropHomeReference_ReferenceType  referenceType, ::UnityW<::GlobalNamespace::PropHome>  specificHome, ::GlobalNamespace::PeckPropReference_PocketType  pocketType, ::GlobalNamespace::PeckPlayerReference  pocketPlayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5344};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field referenceType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PeckPropHomeReference_ReferenceType  referenceType;

/// @brief Field specificHome, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  specificHome;

/// @brief Field pocketType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::PeckPropReference_PocketType  pocketType;

/// @brief Field pocketPlayer, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::PeckPlayerReference  pocketPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckPropHomeReference, referenceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckPropHomeReference, specificHome) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckPropHomeReference, pocketType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckPropHomeReference, pocketPlayer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckPropHomeReference) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
