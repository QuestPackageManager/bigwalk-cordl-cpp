#pragma once
// IWYU pragma private; include "GlobalNamespace/GourdPositionData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaveablePropName_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GourdPositionData)
namespace GlobalNamespace {
struct GourdPositionData_GourdListing;
}
namespace GlobalNamespace {
struct SaveablePropName;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GourdPositionData;
}
namespace GlobalNamespace {
struct GourdPositionData_GourdListing;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GourdPositionData*);
MARK_VAL_T(::GlobalNamespace::GourdPositionData_GourdListing);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GourdPositionData*, "", "GourdPositionData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GourdPositionData_GourdListing, "", "GourdPositionData/GourdListing");
// Dependencies SaveablePropName, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GourdPositionData/GourdListing
struct CORDL_TYPE GourdPositionData_GourdListing {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GourdPositionData_GourdListing() ;

// Ctor Parameters [CppParam { name: "saveablePropName", ty: "::GlobalNamespace::SaveablePropName", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "isVariantChallenge", ty: "bool", modifiers: "", def_value: None }]
constexpr GourdPositionData_GourdListing(::GlobalNamespace::SaveablePropName  saveablePropName, ::UnityEngine::Vector3  position, bool  isVariantChallenge) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5065};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field saveablePropName, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::SaveablePropName  saveablePropName;

/// @brief Field position, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field isVariantChallenge, offset: 0x10, size: 0x1, def value: None
 bool  isVariantChallenge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GourdPositionData_GourdListing, saveablePropName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdPositionData_GourdListing, position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdPositionData_GourdListing, isVariantChallenge) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GourdPositionData_GourdListing) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GourdPositionData
class CORDL_TYPE GourdPositionData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using GourdListing = ::GlobalNamespace::GourdPositionData_GourdListing;

/// @brief Field gourdListings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gourdListings, put=__cordl_internal_set_gourdListings)) ::System::Collections::Generic::List_1<::GlobalNamespace::GourdPositionData_GourdListing>*  gourdListings;

/// @brief Method GetPosition, addr 0x1803ff2b0, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition(::GlobalNamespace::SaveablePropName  saveablePropName) ;

static inline ::GlobalNamespace::GourdPositionData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GourdPositionData_GourdListing>* const& __cordl_internal_get_gourdListings() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GourdPositionData_GourdListing>*& __cordl_internal_get_gourdListings() ;

constexpr void __cordl_internal_set_gourdListings(::System::Collections::Generic::List_1<::GlobalNamespace::GourdPositionData_GourdListing>*  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GourdPositionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GourdPositionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GourdPositionData(GourdPositionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GourdPositionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GourdPositionData(GourdPositionData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5066};

/// @brief Field gourdListings, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GourdPositionData_GourdListing>*  ___gourdListings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GourdPositionData, ___gourdListings) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GourdPositionData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
