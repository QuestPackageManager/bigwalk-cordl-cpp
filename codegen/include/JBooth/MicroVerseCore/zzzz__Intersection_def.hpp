#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Intersection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(Intersection)
namespace JBooth::MicroVerseCore {
class Connector;
}
namespace JBooth::MicroVerseCore {
class Intersection_ConnectionPoint;
}
namespace JBooth::MicroVerseCore {
class RoadConfig;
}
namespace JBooth::MicroVerseCore {
class RoadSystem;
}
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
namespace UnityEngine::Splines {
struct BezierKnot;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class Intersection;
}
namespace JBooth::MicroVerseCore {
class Intersection_ConnectionPoint;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::Intersection*);
MARK_REF_T(::JBooth::MicroVerseCore::Intersection_ConnectionPoint*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Intersection*, "JBooth.MicroVerseCore", "Intersection");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Intersection_ConnectionPoint*, "JBooth.MicroVerseCore", "Intersection/ConnectionPoint");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Intersection/ConnectionPoint
class CORDL_TYPE Intersection_ConnectionPoint : public ::System::Object {
public:
// Declarations
/// @brief Field connector, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_connector, put=__cordl_internal_set_connector)) ::UnityW<::JBooth::MicroVerseCore::Connector>  connector;

/// @brief Field container, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_container, put=__cordl_internal_set_container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  container;

/// @brief Field front, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_front, put=__cordl_internal_set_front)) bool  front;

/// @brief Field owner, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::UnityW<::JBooth::MicroVerseCore::Intersection>  owner;

/// @brief Field road, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_road, put=__cordl_internal_set_road)) ::UnityW<::JBooth::MicroVerseCore::Road>  road;

static inline ::JBooth::MicroVerseCore::Intersection_ConnectionPoint* New_ctor() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::Connector> const& __cordl_internal_get_connector() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::Connector>& __cordl_internal_get_connector() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_container() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_container() ;

constexpr bool const& __cordl_internal_get_front() const;

constexpr bool& __cordl_internal_get_front() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::Intersection> const& __cordl_internal_get_owner() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::Intersection>& __cordl_internal_get_owner() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::Road> const& __cordl_internal_get_road() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::Road>& __cordl_internal_get_road() ;

constexpr void __cordl_internal_set_connector(::UnityW<::JBooth::MicroVerseCore::Connector>  value) ;

constexpr void __cordl_internal_set_container(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_front(bool  value) ;

constexpr void __cordl_internal_set_owner(::UnityW<::JBooth::MicroVerseCore::Intersection>  value) ;

constexpr void __cordl_internal_set_road(::UnityW<::JBooth::MicroVerseCore::Road>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Intersection_ConnectionPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Intersection_ConnectionPoint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Intersection_ConnectionPoint(Intersection_ConnectionPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Intersection_ConnectionPoint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Intersection_ConnectionPoint(Intersection_ConnectionPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17935};

/// @brief Field connector, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::Connector>  ___connector;

/// @brief Field owner, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::Intersection>  ___owner;

/// @brief Field container, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___container;

/// @brief Field road, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::Road>  ___road;

/// @brief Field front, offset: 0x30, size: 0x1, def value: None
 bool  ___front;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Intersection_ConnectionPoint, ___connector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Intersection_ConnectionPoint, ___owner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Intersection_ConnectionPoint, ___container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Intersection_ConnectionPoint, ___road) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Intersection_ConnectionPoint, ___front) == 0x30, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Intersection_ConnectionPoint) == 0x38, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.Intersection::ConnectionPoint, UnityEngine.MonoBehaviour
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Intersection
class CORDL_TYPE Intersection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ConnectionPoint = ::JBooth::MicroVerseCore::Intersection_ConnectionPoint;

/// @brief Field config, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::UnityW<::JBooth::MicroVerseCore::RoadConfig>  config;

/// @brief Field connectionPoints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionPoints, put=__cordl_internal_set_connectionPoints)) ::ArrayW<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>  connectionPoints;

/// @brief Field defaultChoiceData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultChoiceData, put=__cordl_internal_set_defaultChoiceData)) ::JBooth::MicroVerseCore::Road_SplineChoiceData*  defaultChoiceData;

/// @brief Field modifiesTerrain, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifiesTerrain, put=__cordl_internal_set_modifiesTerrain)) bool  modifiesTerrain;

/// @brief Field spawns, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawns, put=__cordl_internal_set_spawns)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  spawns;

/// @brief Field splineForAreaEffects, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineForAreaEffects, put=__cordl_internal_set_splineForAreaEffects)) ::UnityW<::UnityEngine::Splines::SplineContainer>  splineForAreaEffects;

/// @brief Method ClearSpawns, addr 0x181406540, size 0xd0, virtual false, abstract: false, final false
inline void ClearSpawns() ;

/// @brief Method Generate, addr 0x181406610, size 0x280, virtual false, abstract: false, final false
inline void Generate(::JBooth::MicroVerseCore::RoadSystem*  rs) ;

/// @brief Method MatchConnection, addr 0x181406890, size 0x460, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::BezierKnot MatchConnection(::JBooth::MicroVerseCore::Intersection_ConnectionPoint*  pnt, ::UnityEngine::Splines::BezierKnot  knot) ;

static inline ::JBooth::MicroVerseCore::Intersection* New_ctor() ;

/// @brief Method OnDisable, addr 0x181406cf0, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x181406d40, size 0x220, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method UpdateConnections, addr 0x181406f60, size 0x670, virtual false, abstract: false, final false
inline void UpdateConnections(::JBooth::MicroVerseCore::RoadSystem*  rs) ;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig> const& __cordl_internal_get_config() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig>& __cordl_internal_get_config() ;

constexpr ::ArrayW<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*> const& __cordl_internal_get_connectionPoints() const;

constexpr ::ArrayW<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>& __cordl_internal_get_connectionPoints() ;

constexpr ::JBooth::MicroVerseCore::Road_SplineChoiceData* const& __cordl_internal_get_defaultChoiceData() const;

constexpr ::JBooth::MicroVerseCore::Road_SplineChoiceData*& __cordl_internal_get_defaultChoiceData() ;

constexpr bool const& __cordl_internal_get_modifiesTerrain() const;

constexpr bool& __cordl_internal_get_modifiesTerrain() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_spawns() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_spawns() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_splineForAreaEffects() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_splineForAreaEffects() ;

constexpr void __cordl_internal_set_config(::UnityW<::JBooth::MicroVerseCore::RoadConfig>  value) ;

constexpr void __cordl_internal_set_connectionPoints(::ArrayW<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>  value) ;

constexpr void __cordl_internal_set_defaultChoiceData(::JBooth::MicroVerseCore::Road_SplineChoiceData*  value) ;

constexpr void __cordl_internal_set_modifiesTerrain(bool  value) ;

constexpr void __cordl_internal_set_spawns(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_splineForAreaEffects(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

/// @brief Method .ctor, addr 0x1814075d0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Intersection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Intersection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Intersection(Intersection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Intersection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Intersection(Intersection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17936};

/// @brief Field modifiesTerrain, offset: 0x20, size: 0x1, def value: None
 bool  ___modifiesTerrain;

/// @brief Field connectionPoints, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>  ___connectionPoints;

/// @brief Field defaultChoiceData, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Road_SplineChoiceData*  ___defaultChoiceData;

/// @brief Field config, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::RoadConfig>  ___config;

/// @brief Field splineForAreaEffects, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___splineForAreaEffects;

/// @brief Field spawns, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___spawns;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Intersection, ___modifiesTerrain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Intersection, ___connectionPoints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Intersection, ___defaultChoiceData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Intersection, ___config) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Intersection, ___splineForAreaEffects) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Intersection, ___spawns) == 0x48, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Intersection) == 0x50, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
