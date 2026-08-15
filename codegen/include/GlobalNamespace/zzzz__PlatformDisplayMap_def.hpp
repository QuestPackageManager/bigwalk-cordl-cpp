#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformDisplayMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlatformDisplayMap)
namespace GlobalNamespace {
class NetworkedTrain;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformDisplayMap;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlatformDisplayMap*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformDisplayMap*, "", "PlatformDisplayMap");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformDisplayMap
class CORDL_TYPE PlatformDisplayMap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _activePlatformDisplays, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activePlatformDisplays, put=setStaticF__activePlatformDisplays)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformDisplayMap>>*  _activePlatformDisplays;

/// @brief Field _onAddPlatformDisplayMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onAddPlatformDisplayMap, put=setStaticF__onAddPlatformDisplayMap)) ::System::Action*  _onAddPlatformDisplayMap;

/// @brief Field _otherPlatformMarkers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__otherPlatformMarkers, put=__cordl_internal_set__otherPlatformMarkers)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlatformDisplayMap>,::UnityW<::UnityEngine::Transform>>*  _otherPlatformMarkers;

/// @brief Field customMeasurementPoint, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMeasurementPoint, put=__cordl_internal_set_customMeasurementPoint)) ::UnityW<::UnityEngine::Transform>  customMeasurementPoint;

/// @brief Field isOnTrain, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOnTrain, put=__cordl_internal_set_isOnTrain)) bool  isOnTrain;

/// @brief Field logVerbose, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field networkedTrain, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkedTrain, put=__cordl_internal_set_networkedTrain)) ::UnityW<::GlobalNamespace::NetworkedTrain>  networkedTrain;

/// @brief Field otherPlatformMarkerPrefab, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherPlatformMarkerPrefab, put=__cordl_internal_set_otherPlatformMarkerPrefab)) ::UnityW<::UnityEngine::GameObject>  otherPlatformMarkerPrefab;

/// @brief Field platformRotator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformRotator, put=__cordl_internal_set_platformRotator)) ::UnityW<::UnityEngine::Transform>  platformRotator;

/// @brief Field totalLength, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalLength, put=__cordl_internal_set_totalLength)) double_t  totalLength;

/// @brief Field trainRotators, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_trainRotators, put=__cordl_internal_set_trainRotators)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  trainRotators;

/// @brief Method CreateAdditionalStationMarkers, addr 0x18040da20, size 0x270, virtual false, abstract: false, final false
inline void CreateAdditionalStationMarkers() ;

static inline ::GlobalNamespace::PlatformDisplayMap* New_ctor() ;

/// @brief Method OnDisable, addr 0x18040dc90, size 0x130, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18040ddc0, size 0x360, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PositionPlatformMarker, addr 0x18040e120, size 0x180, virtual false, abstract: false, final false
inline void PositionPlatformMarker() ;

/// @brief Method SetDisplay, addr 0x18040e2a0, size 0x160, virtual false, abstract: false, final false
inline void SetDisplay(float_t  fraction, ::UnityEngine::Transform*  displayTransform) ;

/// @brief Method Update, addr 0x18040e400, size 0x140, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlatformDisplayMap>,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__otherPlatformMarkers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlatformDisplayMap>,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__otherPlatformMarkers() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_customMeasurementPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_customMeasurementPoint() ;

constexpr bool const& __cordl_internal_get_isOnTrain() const;

constexpr bool& __cordl_internal_get_isOnTrain() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::NetworkedTrain> const& __cordl_internal_get_networkedTrain() const;

constexpr ::UnityW<::GlobalNamespace::NetworkedTrain>& __cordl_internal_get_networkedTrain() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_otherPlatformMarkerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_otherPlatformMarkerPrefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_platformRotator() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_platformRotator() ;

constexpr double_t const& __cordl_internal_get_totalLength() const;

constexpr double_t& __cordl_internal_get_totalLength() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_trainRotators() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_trainRotators() ;

constexpr void __cordl_internal_set__otherPlatformMarkers(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlatformDisplayMap>,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_customMeasurementPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_isOnTrain(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_networkedTrain(::UnityW<::GlobalNamespace::NetworkedTrain>  value) ;

constexpr void __cordl_internal_set_otherPlatformMarkerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_platformRotator(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_totalLength(double_t  value) ;

constexpr void __cordl_internal_set_trainRotators(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformDisplayMap>>* getStaticF__activePlatformDisplays() ;

static inline ::System::Action* getStaticF__onAddPlatformDisplayMap() ;

static inline void setStaticF__activePlatformDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformDisplayMap>>*  value) ;

static inline void setStaticF__onAddPlatformDisplayMap(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformDisplayMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformDisplayMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformDisplayMap(PlatformDisplayMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformDisplayMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformDisplayMap(PlatformDisplayMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5140};

/// @brief Field networkedTrain, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkedTrain>  ___networkedTrain;

/// @brief Field trainRotators, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___trainRotators;

/// @brief Field platformRotator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___platformRotator;

/// @brief Field isOnTrain, offset: 0x38, size: 0x1, def value: None
 bool  ___isOnTrain;

/// @brief Field otherPlatformMarkerPrefab, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___otherPlatformMarkerPrefab;

/// @brief Field _otherPlatformMarkers, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlatformDisplayMap>,::UnityW<::UnityEngine::Transform>>*  ____otherPlatformMarkers;

/// @brief Field logVerbose, offset: 0x50, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field customMeasurementPoint, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___customMeasurementPoint;

/// @brief Field totalLength, offset: 0x60, size: 0x8, def value: None
 double_t  ___totalLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformDisplayMap, ___networkedTrain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplayMap, ___trainRotators) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplayMap, ___platformRotator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplayMap, ___isOnTrain) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplayMap, ___otherPlatformMarkerPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplayMap, ____otherPlatformMarkers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplayMap, ___logVerbose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplayMap, ___customMeasurementPoint) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplayMap, ___totalLength) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformDisplayMap) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
