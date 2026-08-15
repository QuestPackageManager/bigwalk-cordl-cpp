#pragma once
// IWYU pragma private; include "GlobalNamespace/GourdMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GourdMapReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GourdMap)
namespace GlobalNamespace {
struct GourdFlag_GourdState;
}
namespace GlobalNamespace {
class GourdFlag;
}
namespace GlobalNamespace {
class GourdPositionData;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct SaveablePropName;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GourdMap;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GourdMap*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GourdMap*, "", "GourdMap");
// Dependencies GourdMapReference, PeckSystemReference, SaveablePropName, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GourdMap
class CORDL_TYPE GourdMap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field blacklist, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_blacklist, put=__cordl_internal_set_blacklist)) ::ArrayW<::GlobalNamespace::SaveablePropName>  blacklist;

/// @brief Field flagPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_flagPrefab, put=__cordl_internal_set_flagPrefab)) ::UnityW<::UnityEngine::GameObject>  flagPrefab;

/// @brief Field flagPrefabVariantChallenge, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_flagPrefabVariantChallenge, put=__cordl_internal_set_flagPrefabVariantChallenge)) ::UnityW<::UnityEngine::GameObject>  flagPrefabVariantChallenge;

/// @brief Field flags, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GourdFlag>>*  flags;

/// @brief Field gourdMapReferences, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gourdMapReferences, put=__cordl_internal_set_gourdMapReferences)) ::ArrayW<::GlobalNamespace::GourdMapReference>  gourdMapReferences;

/// @brief Field initialized, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field logVerbose, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field positionData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionData, put=__cordl_internal_set_positionData)) ::UnityW<::GlobalNamespace::GourdPositionData>  positionData;

/// @brief Field refreshFlag, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_refreshFlag, put=setStaticF_refreshFlag)) ::System::Action_2<::GlobalNamespace::SaveablePropName,::GlobalNamespace::GourdFlag_GourdState>*  refreshFlag;

/// @brief Field revealSystem, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get_revealSystem, put=__cordl_internal_set_revealSystem)) ::GlobalNamespace::PeckSystemReference  revealSystem;

/// @brief Field scale, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::UnityEngine::Vector3  scale;

/// @brief Field worldScaleOffset, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_worldScaleOffset, put=__cordl_internal_set_worldScaleOffset)) ::UnityEngine::Vector3  worldScaleOffset;

/// @brief Method Awake, addr 0x1803fe4d0, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetFlag, addr 0x1803fe520, size 0xd0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GourdFlag> GetFlag(::GlobalNamespace::SaveablePropName  saveablePropName) ;

/// @brief Method Initialize, addr 0x1803fe5f0, size 0x5e0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::GourdMap* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803febd0, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803fecc0, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshFlag, addr 0x1803fedb0, size 0x180, virtual false, abstract: false, final false
inline void RefreshFlag(::GlobalNamespace::SaveablePropName  saveablePropName, ::GlobalNamespace::GourdFlag_GourdState  state) ;

/// @brief Method RepositionAll, addr 0x1803fef30, size 0x210, virtual false, abstract: false, final false
inline void RepositionAll() ;

/// @brief Method RevealHiddenGourds, addr 0x1803ff140, size 0x160, virtual false, abstract: false, final false
inline void RevealHiddenGourds(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method Start, addr 0x1803ff2a0, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::GlobalNamespace::SaveablePropName> const& __cordl_internal_get_blacklist() const;

constexpr ::ArrayW<::GlobalNamespace::SaveablePropName>& __cordl_internal_get_blacklist() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_flagPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_flagPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_flagPrefabVariantChallenge() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_flagPrefabVariantChallenge() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GourdFlag>>* const& __cordl_internal_get_flags() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GourdFlag>>*& __cordl_internal_get_flags() ;

constexpr ::ArrayW<::GlobalNamespace::GourdMapReference> const& __cordl_internal_get_gourdMapReferences() const;

constexpr ::ArrayW<::GlobalNamespace::GourdMapReference>& __cordl_internal_get_gourdMapReferences() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::GourdPositionData> const& __cordl_internal_get_positionData() const;

constexpr ::UnityW<::GlobalNamespace::GourdPositionData>& __cordl_internal_get_positionData() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_revealSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_revealSystem() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_scale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_scale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldScaleOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldScaleOffset() ;

constexpr void __cordl_internal_set_blacklist(::ArrayW<::GlobalNamespace::SaveablePropName>  value) ;

constexpr void __cordl_internal_set_flagPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_flagPrefabVariantChallenge(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_flags(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GourdFlag>>*  value) ;

constexpr void __cordl_internal_set_gourdMapReferences(::ArrayW<::GlobalNamespace::GourdMapReference>  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_positionData(::UnityW<::GlobalNamespace::GourdPositionData>  value) ;

constexpr void __cordl_internal_set_revealSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_scale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_worldScaleOffset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::GlobalNamespace::SaveablePropName,::GlobalNamespace::GourdFlag_GourdState>* getStaticF_refreshFlag() ;

static inline void setStaticF_refreshFlag(::System::Action_2<::GlobalNamespace::SaveablePropName,::GlobalNamespace::GourdFlag_GourdState>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GourdMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GourdMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GourdMap(GourdMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GourdMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GourdMap(GourdMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5063};

/// @brief Field positionData, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GourdPositionData>  ___positionData;

/// @brief Field flagPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___flagPrefab;

/// @brief Field flagPrefabVariantChallenge, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___flagPrefabVariantChallenge;

/// @brief Field gourdMapReferences, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GourdMapReference>  ___gourdMapReferences;

/// @brief Field revealSystem, offset: 0x40, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___revealSystem;

/// @brief Field worldScaleOffset, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___worldScaleOffset;

/// @brief Field scale, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___scale;

/// @brief Field blacklist, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SaveablePropName>  ___blacklist;

/// @brief Field logVerbose, offset: 0x88, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field initialized, offset: 0x89, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field flags, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GourdFlag>>*  ___flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GourdMap, ___positionData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMap, ___flagPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMap, ___flagPrefabVariantChallenge) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMap, ___gourdMapReferences) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMap, ___revealSystem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMap, ___worldScaleOffset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMap, ___scale) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMap, ___blacklist) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMap, ___logVerbose) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMap, ___initialized) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMap, ___flags) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GourdMap) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
