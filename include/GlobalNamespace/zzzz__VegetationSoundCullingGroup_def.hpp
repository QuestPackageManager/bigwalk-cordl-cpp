#pragma once
// IWYU pragma private; include "GlobalNamespace/VegetationSoundCullingGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VegetationSoundCullingGroup)
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
struct RustleOperation;
}
namespace GlobalNamespace {
class VegetationAudioCullingContainer;
}
namespace GlobalNamespace {
struct VegetationSoundElement;
}
namespace GlobalNamespace {
struct WindyOperation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class VegetationSoundCullingGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VegetationSoundCullingGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VegetationSoundCullingGroup*, "", "VegetationSoundCullingGroup");
// Dependencies System.Object, Unity.Mathematics.float3, UnityEngine.BoundingSphere
namespace GlobalNamespace {
// Is value type: false
// CS Name: VegetationSoundCullingGroup
class CORDL_TYPE VegetationSoundCullingGroup : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Distances, put=set_Distances)) ::Unity::Mathematics::float3  Distances;

 __declspec(property(get=get_ElementStartIndex, put=set_ElementStartIndex)) int32_t  ElementStartIndex;

 __declspec(property(get=get_GO, put=set_GO)) ::UnityW<::UnityEngine::GameObject>  GO;

 __declspec(property(get=get_GroupIndex, put=set_GroupIndex)) int32_t  GroupIndex;

 __declspec(property(get=get_IsDetail, put=set_IsDetail)) bool  IsDetail;

 __declspec(property(get=get_LastWindyCount, put=set_LastWindyCount)) int32_t  LastWindyCount;

 __declspec(property(get=get_ParentContainer, put=set_ParentContainer)) ::GlobalNamespace::VegetationAudioCullingContainer*  ParentContainer;

 __declspec(property(get=get_RustleSound, put=set_RustleSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  RustleSound;

 __declspec(property(get=get_TempSpheres, put=set_TempSpheres)) ::ArrayW<::UnityEngine::BoundingSphere>  TempSpheres;

 __declspec(property(get=get_Treeness, put=set_Treeness)) float_t  Treeness;

 __declspec(property(get=get_WindySound, put=set_WindySound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  WindySound;

/// @brief Field <Count>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field <Distances>k__BackingField, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__Distances_k__BackingField, put=__cordl_internal_set__Distances_k__BackingField)) ::Unity::Mathematics::float3  _Distances_k__BackingField;

/// @brief Field <ElementStartIndex>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ElementStartIndex_k__BackingField, put=__cordl_internal_set__ElementStartIndex_k__BackingField)) int32_t  _ElementStartIndex_k__BackingField;

/// @brief Field <GO>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__GO_k__BackingField, put=__cordl_internal_set__GO_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _GO_k__BackingField;

/// @brief Field <GroupIndex>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__GroupIndex_k__BackingField, put=__cordl_internal_set__GroupIndex_k__BackingField)) int32_t  _GroupIndex_k__BackingField;

/// @brief Field <IsDetail>k__BackingField, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDetail_k__BackingField, put=__cordl_internal_set__IsDetail_k__BackingField)) bool  _IsDetail_k__BackingField;

/// @brief Field <LastWindyCount>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastWindyCount_k__BackingField, put=__cordl_internal_set__LastWindyCount_k__BackingField)) int32_t  _LastWindyCount_k__BackingField;

/// @brief Field <ParentContainer>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParentContainer_k__BackingField, put=__cordl_internal_set__ParentContainer_k__BackingField)) ::GlobalNamespace::VegetationAudioCullingContainer*  _ParentContainer_k__BackingField;

/// @brief Field <RustleSound>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__RustleSound_k__BackingField, put=__cordl_internal_set__RustleSound_k__BackingField)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  _RustleSound_k__BackingField;

/// @brief Field <TempSpheres>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__TempSpheres_k__BackingField, put=__cordl_internal_set__TempSpheres_k__BackingField)) ::ArrayW<::UnityEngine::BoundingSphere>  _TempSpheres_k__BackingField;

/// @brief Field <Treeness>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Treeness_k__BackingField, put=__cordl_internal_set__Treeness_k__BackingField)) float_t  _Treeness_k__BackingField;

/// @brief Field <WindySound>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__WindySound_k__BackingField, put=__cordl_internal_set__WindySound_k__BackingField)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  _WindySound_k__BackingField;

/// @brief Field playerRustleCounts, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerRustleCounts, put=__cordl_internal_set_playerRustleCounts)) ::ArrayW<int32_t>  playerRustleCounts;

/// @brief Field windyCount1, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_windyCount1, put=__cordl_internal_set_windyCount1)) int32_t  windyCount1;

/// @brief Field windyCount2, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_windyCount2, put=__cordl_internal_set_windyCount2)) int32_t  windyCount2;

/// @brief Field windyResults1, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_windyResults1, put=__cordl_internal_set_windyResults1)) ::System::Collections::Generic::List_1<int32_t>*  windyResults1;

/// @brief Field windyResults2, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_windyResults2, put=__cordl_internal_set_windyResults2)) ::System::Collections::Generic::List_1<int32_t>*  windyResults2;

/// @brief Method GetResultSphere, addr 0x1803f28e0, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::VegetationSoundElement GetResultSphere(int32_t  index) ;

/// @brief Method GetSphereAt, addr 0x1803f2910, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::VegetationSoundElement GetSphereAt(int32_t  localIndex) ;

/// @brief Method GetWindyResultsList, addr 0x1803f2950, size 0x40, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* GetWindyResultsList(int32_t  distanceIndex) ;

static inline ::GlobalNamespace::VegetationSoundCullingGroup* New_ctor() ;

/// @brief Method ProcessRustleResult, addr 0x1803f2990, size 0x20, virtual false, abstract: false, final false
inline void ProcessRustleResult(::GlobalNamespace::RustleOperation  operation) ;

/// @brief Method ProcessWindyResult, addr 0x1803f29b0, size 0xa0, virtual false, abstract: false, final false
inline void ProcessWindyResult(::GlobalNamespace::WindyOperation  operation) ;

/// @brief Method QueryRustleIndices, addr 0x1803f2a50, size 0x20, virtual false, abstract: false, final false
inline int32_t QueryRustleIndices(int32_t  playerIndex) ;

/// @brief Method QueryWindyIndices, addr 0x1803f2a70, size 0x40, virtual false, abstract: false, final false
inline int32_t QueryWindyIndices(int32_t  i) ;

/// @brief Method ResetIndices, addr 0x1803f2ab0, size 0x80, virtual false, abstract: false, final false
inline void ResetIndices() ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get__Distances_k__BackingField() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get__Distances_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ElementStartIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ElementStartIndex_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__GO_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__GO_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__GroupIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__GroupIndex_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDetail_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDetail_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LastWindyCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LastWindyCount_k__BackingField() ;

constexpr ::GlobalNamespace::VegetationAudioCullingContainer* const& __cordl_internal_get__ParentContainer_k__BackingField() const;

constexpr ::GlobalNamespace::VegetationAudioCullingContainer*& __cordl_internal_get__ParentContainer_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get__RustleSound_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get__RustleSound_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& __cordl_internal_get__TempSpheres_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::BoundingSphere>& __cordl_internal_get__TempSpheres_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Treeness_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Treeness_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get__WindySound_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get__WindySound_k__BackingField() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_playerRustleCounts() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_playerRustleCounts() ;

constexpr int32_t const& __cordl_internal_get_windyCount1() const;

constexpr int32_t& __cordl_internal_get_windyCount1() ;

constexpr int32_t const& __cordl_internal_get_windyCount2() const;

constexpr int32_t& __cordl_internal_get_windyCount2() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_windyResults1() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_windyResults1() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_windyResults2() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_windyResults2() ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Distances_k__BackingField(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set__ElementStartIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__GO_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__GroupIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IsDetail_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LastWindyCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ParentContainer_k__BackingField(::GlobalNamespace::VegetationAudioCullingContainer*  value) ;

constexpr void __cordl_internal_set__RustleSound_k__BackingField(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set__TempSpheres_k__BackingField(::ArrayW<::UnityEngine::BoundingSphere>  value) ;

constexpr void __cordl_internal_set__Treeness_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__WindySound_k__BackingField(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_playerRustleCounts(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_windyCount1(int32_t  value) ;

constexpr void __cordl_internal_set_windyCount2(int32_t  value) ;

constexpr void __cordl_internal_set_windyResults1(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_windyResults2(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x1803f2b30, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Distances, addr 0x1803f2bc0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Distances() ;

/// @brief Method get_ElementStartIndex, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ElementStartIndex() ;

/// @brief Method get_GO, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_GO() ;

/// @brief Method get_GroupIndex, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_GroupIndex() ;

/// @brief Method get_IsDetail, addr 0x1803a7470, size 0x10, virtual false, abstract: false, final false
inline bool get_IsDetail() ;

/// @brief Method get_LastWindyCount, addr 0x1802e0b20, size 0x10, virtual false, abstract: false, final false
inline int32_t get_LastWindyCount() ;

/// @brief Method get_ParentContainer, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::VegetationAudioCullingContainer* get_ParentContainer() ;

/// @brief Method get_RustleSound, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> get_RustleSound() ;

/// @brief Method get_TempSpheres, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::BoundingSphere> get_TempSpheres() ;

/// @brief Method get_Treeness, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Treeness() ;

/// @brief Method get_WindySound, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> get_WindySound() ;

/// @brief Method set_Count, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// @brief Method set_Distances, addr 0x1803f2bf0, size 0x10, virtual false, abstract: false, final false
inline void set_Distances(::Unity::Mathematics::float3  value) ;

/// @brief Method set_ElementStartIndex, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_ElementStartIndex(int32_t  value) ;

/// @brief Method set_GO, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_GO(::UnityEngine::GameObject*  value) ;

/// @brief Method set_GroupIndex, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_GroupIndex(int32_t  value) ;

/// @brief Method set_IsDetail, addr 0x1803a74c0, size 0x10, virtual false, abstract: false, final false
inline void set_IsDetail(bool  value) ;

/// @brief Method set_LastWindyCount, addr 0x1802e0d10, size 0x10, virtual false, abstract: false, final false
inline void set_LastWindyCount(int32_t  value) ;

/// @brief Method set_ParentContainer, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ParentContainer(::GlobalNamespace::VegetationAudioCullingContainer*  value) ;

/// @brief Method set_RustleSound, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_RustleSound(::GlobalNamespace::AudioRandomContainer*  value) ;

/// @brief Method set_TempSpheres, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_TempSpheres(::ArrayW<::UnityEngine::BoundingSphere>  value) ;

/// @brief Method set_Treeness, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_Treeness(float_t  value) ;

/// @brief Method set_WindySound, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_WindySound(::GlobalNamespace::AudioRandomContainer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VegetationSoundCullingGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VegetationSoundCullingGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VegetationSoundCullingGroup(VegetationSoundCullingGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VegetationSoundCullingGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VegetationSoundCullingGroup(VegetationSoundCullingGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4881};

/// @brief Field <ParentContainer>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::VegetationAudioCullingContainer*  ____ParentContainer_k__BackingField;

/// @brief Field <GroupIndex>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____GroupIndex_k__BackingField;

/// @brief Field <ElementStartIndex>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____ElementStartIndex_k__BackingField;

/// @brief Field <Count>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

/// @brief Field <IsDetail>k__BackingField, offset: 0x24, size: 0x1, def value: None
 bool  ____IsDetail_k__BackingField;

/// @brief Field <Treeness>k__BackingField, offset: 0x28, size: 0x4, def value: None
 float_t  ____Treeness_k__BackingField;

/// @brief Field <Distances>k__BackingField, offset: 0x2c, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ____Distances_k__BackingField;

/// @brief Field <TempSpheres>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoundingSphere>  ____TempSpheres_k__BackingField;

/// @brief Field <GO>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____GO_k__BackingField;

/// @brief Field <RustleSound>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ____RustleSound_k__BackingField;

/// @brief Field <WindySound>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ____WindySound_k__BackingField;

/// @brief Field <LastWindyCount>k__BackingField, offset: 0x58, size: 0x4, def value: None
 int32_t  ____LastWindyCount_k__BackingField;

/// @brief Field windyCount1, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___windyCount1;

/// @brief Field windyCount2, offset: 0x60, size: 0x4, def value: None
 int32_t  ___windyCount2;

/// @brief Field windyResults1, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___windyResults1;

/// @brief Field windyResults2, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___windyResults2;

/// @brief Field playerRustleCounts, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___playerRustleCounts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____ParentContainer_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____GroupIndex_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____ElementStartIndex_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____Count_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____IsDetail_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____Treeness_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____Distances_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____TempSpheres_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____GO_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____RustleSound_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____WindySound_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ____LastWindyCount_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ___windyCount1) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ___windyCount2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ___windyResults1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ___windyResults2) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationSoundCullingGroup, ___playerRustleCounts) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VegetationSoundCullingGroup) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
