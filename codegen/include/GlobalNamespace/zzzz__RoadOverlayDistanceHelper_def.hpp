#pragma once
// IWYU pragma private; include "GlobalNamespace/RoadOverlayDistanceHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RoadOverlayDistanceHelper)
namespace JBooth::MicroVerseCore {
class Road_SplineChoiceData;
}
namespace JBooth::MicroVerseCore {
class Road;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace GlobalNamespace {
class RoadOverlayDistanceHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoadOverlayDistanceHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoadOverlayDistanceHelper*, "", "RoadOverlayDistanceHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoadOverlayDistanceHelper
class CORDL_TYPE RoadOverlayDistanceHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field editingPosition, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_editingPosition, put=__cordl_internal_set_editingPosition)) float_t  editingPosition;

/// @brief Field savedPositions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_savedPositions, put=__cordl_internal_set_savedPositions)) ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  savedPositions;

/// @brief Field savedSplineChoices, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_savedSplineChoices, put=__cordl_internal_set_savedSplineChoices)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*  savedSplineChoices;

/// @brief Field targetRoad, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRoad, put=__cordl_internal_set_targetRoad)) ::UnityW<::JBooth::MicroVerseCore::Road>  targetRoad;

static inline ::GlobalNamespace::RoadOverlayDistanceHelper* New_ctor() ;

constexpr float_t const& __cordl_internal_get_editingPosition() const;

constexpr float_t& __cordl_internal_get_editingPosition() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* const& __cordl_internal_get_savedPositions() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*& __cordl_internal_get_savedPositions() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>* const& __cordl_internal_get_savedSplineChoices() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*& __cordl_internal_get_savedSplineChoices() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::Road> const& __cordl_internal_get_targetRoad() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::Road>& __cordl_internal_get_targetRoad() ;

constexpr void __cordl_internal_set_editingPosition(float_t  value) ;

constexpr void __cordl_internal_set_savedPositions(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  value) ;

constexpr void __cordl_internal_set_savedSplineChoices(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*  value) ;

constexpr void __cordl_internal_set_targetRoad(::UnityW<::JBooth::MicroVerseCore::Road>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadOverlayDistanceHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadOverlayDistanceHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadOverlayDistanceHelper(RoadOverlayDistanceHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadOverlayDistanceHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadOverlayDistanceHelper(RoadOverlayDistanceHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5136};

/// @brief Field targetRoad, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::Road>  ___targetRoad;

/// @brief Field editingPosition, offset: 0x28, size: 0x4, def value: None
 float_t  ___editingPosition;

/// @brief Field savedPositions, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  ___savedPositions;

/// @brief Field savedSplineChoices, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::Road_SplineChoiceData*>*  ___savedSplineChoices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoadOverlayDistanceHelper, ___targetRoad) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoadOverlayDistanceHelper, ___editingPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoadOverlayDistanceHelper, ___savedPositions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoadOverlayDistanceHelper, ___savedSplineChoices) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoadOverlayDistanceHelper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
