#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioMaterialConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioMaterial_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMaterialConfig)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class PhysicsMaterial;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioMaterialConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioMaterialConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioMaterialConfig*, "", "AudioMaterialConfig");
// Dependencies AudioAsset, AudioMaterial, UnityEngine.PhysicsMaterial
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioMaterialConfig
class CORDL_TYPE AudioMaterialConfig : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
/// @brief Field Materials, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Materials, put=__cordl_internal_set_Materials)) ::ArrayW<::GlobalNamespace::AudioMaterial*>  Materials;

/// @brief Field MoreAmbOcclusionMaterials, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MoreAmbOcclusionMaterials, put=__cordl_internal_set_MoreAmbOcclusionMaterials)) ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  MoreAmbOcclusionMaterials;

 __declspec(property(get=get_OcclusionLookup, put=set_OcclusionLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  OcclusionLookup;

 __declspec(property(get=get_OcclusionLookupForReverb, put=set_OcclusionLookupForReverb)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  OcclusionLookupForReverb;

/// @brief Field OceanMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OceanMaterial, put=__cordl_internal_set_OceanMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  OceanMaterial;

 __declspec(property(get=get_PassThroughMaterials, put=set_PassThroughMaterials)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  PassThroughMaterials;

 __declspec(property(get=get_ReverbLookup, put=set_ReverbLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  ReverbLookup;

/// @brief Field TerrainMaterials, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TerrainMaterials, put=__cordl_internal_set_TerrainMaterials)) ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  TerrainMaterials;

 __declspec(property(get=get_TerrainMaterialsHashset, put=set_TerrainMaterialsHashset)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  TerrainMaterialsHashset;

/// @brief Field VoiceBlockingMaterials, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoiceBlockingMaterials, put=__cordl_internal_set_VoiceBlockingMaterials)) ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  VoiceBlockingMaterials;

 __declspec(property(get=get_VoiceBlockingMaterialsHashset, put=set_VoiceBlockingMaterialsHashset)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  VoiceBlockingMaterialsHashset;

/// @brief Field <OcclusionLookupForReverb>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__OcclusionLookupForReverb_k__BackingField, put=__cordl_internal_set__OcclusionLookupForReverb_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  _OcclusionLookupForReverb_k__BackingField;

/// @brief Field <OcclusionLookup>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__OcclusionLookup_k__BackingField, put=__cordl_internal_set__OcclusionLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  _OcclusionLookup_k__BackingField;

/// @brief Field <PassThroughMaterials>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__PassThroughMaterials_k__BackingField, put=__cordl_internal_set__PassThroughMaterials_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  _PassThroughMaterials_k__BackingField;

/// @brief Field <ReverbLookup>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReverbLookup_k__BackingField, put=__cordl_internal_set__ReverbLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  _ReverbLookup_k__BackingField;

/// @brief Field <TerrainMaterialsHashset>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__TerrainMaterialsHashset_k__BackingField, put=__cordl_internal_set__TerrainMaterialsHashset_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  _TerrainMaterialsHashset_k__BackingField;

/// @brief Field <VoiceBlockingMaterialsHashset>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__VoiceBlockingMaterialsHashset_k__BackingField, put=__cordl_internal_set__VoiceBlockingMaterialsHashset_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  _VoiceBlockingMaterialsHashset_k__BackingField;

static inline ::GlobalNamespace::AudioMaterialConfig* New_ctor() ;

/// @brief Method OnEnable, addr 0x180482e30, size 0x2c0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::ArrayW<::GlobalNamespace::AudioMaterial*> const& __cordl_internal_get_Materials() const;

constexpr ::ArrayW<::GlobalNamespace::AudioMaterial*>& __cordl_internal_get_Materials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>> const& __cordl_internal_get_MoreAmbOcclusionMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>& __cordl_internal_get_MoreAmbOcclusionMaterials() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_OceanMaterial() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_OceanMaterial() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>> const& __cordl_internal_get_TerrainMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>& __cordl_internal_get_TerrainMaterials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>> const& __cordl_internal_get_VoiceBlockingMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>& __cordl_internal_get_VoiceBlockingMaterials() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>* const& __cordl_internal_get__OcclusionLookupForReverb_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*& __cordl_internal_get__OcclusionLookupForReverb_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>* const& __cordl_internal_get__OcclusionLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*& __cordl_internal_get__OcclusionLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>* const& __cordl_internal_get__PassThroughMaterials_k__BackingField() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*& __cordl_internal_get__PassThroughMaterials_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>* const& __cordl_internal_get__ReverbLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*& __cordl_internal_get__ReverbLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>* const& __cordl_internal_get__TerrainMaterialsHashset_k__BackingField() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*& __cordl_internal_get__TerrainMaterialsHashset_k__BackingField() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>* const& __cordl_internal_get__VoiceBlockingMaterialsHashset_k__BackingField() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*& __cordl_internal_get__VoiceBlockingMaterialsHashset_k__BackingField() ;

constexpr void __cordl_internal_set_Materials(::ArrayW<::GlobalNamespace::AudioMaterial*>  value) ;

constexpr void __cordl_internal_set_MoreAmbOcclusionMaterials(::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  value) ;

constexpr void __cordl_internal_set_OceanMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_TerrainMaterials(::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  value) ;

constexpr void __cordl_internal_set_VoiceBlockingMaterials(::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  value) ;

constexpr void __cordl_internal_set__OcclusionLookupForReverb_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  value) ;

constexpr void __cordl_internal_set__OcclusionLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  value) ;

constexpr void __cordl_internal_set__PassThroughMaterials_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value) ;

constexpr void __cordl_internal_set__ReverbLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  value) ;

constexpr void __cordl_internal_set__TerrainMaterialsHashset_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value) ;

constexpr void __cordl_internal_set__VoiceBlockingMaterialsHashset_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value) ;

/// @brief Method .ctor, addr 0x1804830f0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OcclusionLookup, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>* get_OcclusionLookup() ;

/// @brief Method get_OcclusionLookupForReverb, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>* get_OcclusionLookupForReverb() ;

/// @brief Method get_PassThroughMaterials, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>* get_PassThroughMaterials() ;

/// @brief Method get_ReverbLookup, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>* get_ReverbLookup() ;

/// @brief Method get_TerrainMaterialsHashset, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>* get_TerrainMaterialsHashset() ;

/// @brief Method get_VoiceBlockingMaterialsHashset, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>* get_VoiceBlockingMaterialsHashset() ;

/// @brief Method set_OcclusionLookup, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_OcclusionLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  value) ;

/// @brief Method set_OcclusionLookupForReverb, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_OcclusionLookupForReverb(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  value) ;

/// @brief Method set_PassThroughMaterials, addr 0x1803d49a0, size 0x10, virtual false, abstract: false, final false
inline void set_PassThroughMaterials(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value) ;

/// @brief Method set_ReverbLookup, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_ReverbLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  value) ;

/// @brief Method set_TerrainMaterialsHashset, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void set_TerrainMaterialsHashset(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value) ;

/// @brief Method set_VoiceBlockingMaterialsHashset, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_VoiceBlockingMaterialsHashset(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMaterialConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMaterialConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMaterialConfig(AudioMaterialConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMaterialConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMaterialConfig(AudioMaterialConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17527};

/// @brief Field Materials, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioMaterial*>  ___Materials;

/// @brief Field VoiceBlockingMaterials, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  ___VoiceBlockingMaterials;

/// @brief Field OceanMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___OceanMaterial;

/// @brief Field TerrainMaterials, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  ___TerrainMaterials;

/// @brief Field MoreAmbOcclusionMaterials, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  ___MoreAmbOcclusionMaterials;

/// @brief Field <VoiceBlockingMaterialsHashset>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  ____VoiceBlockingMaterialsHashset_k__BackingField;

/// @brief Field <OcclusionLookup>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  ____OcclusionLookup_k__BackingField;

/// @brief Field <OcclusionLookupForReverb>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  ____OcclusionLookupForReverb_k__BackingField;

/// @brief Field <ReverbLookup>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,float_t>*  ____ReverbLookup_k__BackingField;

/// @brief Field <PassThroughMaterials>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  ____PassThroughMaterials_k__BackingField;

/// @brief Field <TerrainMaterialsHashset>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  ____TerrainMaterialsHashset_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ___Materials) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ___VoiceBlockingMaterials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ___OceanMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ___TerrainMaterials) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ___MoreAmbOcclusionMaterials) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ____VoiceBlockingMaterialsHashset_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ____OcclusionLookup_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ____OcclusionLookupForReverb_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ____ReverbLookup_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ____PassThroughMaterials_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterialConfig, ____TerrainMaterialsHashset_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioMaterialConfig) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
