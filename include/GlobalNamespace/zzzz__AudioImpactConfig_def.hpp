#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioImpactConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioImpact_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(AudioImpactConfig)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
struct AudioImpactType;
}
namespace GlobalNamespace {
class AudioImpact;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace GlobalNamespace {
class WaterDepthSampleData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class PhysicsMaterial;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioImpactConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioImpactConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioImpactConfig*, "", "AudioImpactConfig");
// Dependencies AudioImpact, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioImpactConfig
class CORDL_TYPE AudioImpactConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_ImpactTypeLookup, put=set_ImpactTypeLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioImpactType>*  ImpactTypeLookup;

 __declspec(property(get=get_Impacts)) ::ArrayW<::GlobalNamespace::AudioImpact*>  Impacts;

 __declspec(property(get=get_SurfaceSoundSize1Lookup, put=set_SurfaceSoundSize1Lookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*  SurfaceSoundSize1Lookup;

 __declspec(property(get=get_SurfaceSoundSize2Lookup, put=set_SurfaceSoundSize2Lookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*  SurfaceSoundSize2Lookup;

/// @brief Field WaterDepthData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterDepthData, put=__cordl_internal_set_WaterDepthData)) ::UnityW<::GlobalNamespace::WaterDepthSampleData>  WaterDepthData;

/// @brief Field WaterSoundDeepSize1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterSoundDeepSize1, put=__cordl_internal_set_WaterSoundDeepSize1)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  WaterSoundDeepSize1;

/// @brief Field WaterSoundDeepSize2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterSoundDeepSize2, put=__cordl_internal_set_WaterSoundDeepSize2)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  WaterSoundDeepSize2;

/// @brief Field WaterSoundSize1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterSoundSize1, put=__cordl_internal_set_WaterSoundSize1)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  WaterSoundSize1;

/// @brief Field WaterSoundSize2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterSoundSize2, put=__cordl_internal_set_WaterSoundSize2)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  WaterSoundSize2;

/// @brief Field <ImpactTypeLookup>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ImpactTypeLookup_k__BackingField, put=__cordl_internal_set__ImpactTypeLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioImpactType>*  _ImpactTypeLookup_k__BackingField;

/// @brief Field <SurfaceSoundSize1Lookup>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__SurfaceSoundSize1Lookup_k__BackingField, put=__cordl_internal_set__SurfaceSoundSize1Lookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*  _SurfaceSoundSize1Lookup_k__BackingField;

/// @brief Field <SurfaceSoundSize2Lookup>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__SurfaceSoundSize2Lookup_k__BackingField, put=__cordl_internal_set__SurfaceSoundSize2Lookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*  _SurfaceSoundSize2Lookup_k__BackingField;

/// @brief Field _impacts, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__impacts, put=__cordl_internal_set__impacts)) ::ArrayW<::GlobalNamespace::AudioImpact*>  _impacts;

static inline ::GlobalNamespace::AudioImpactConfig* New_ctor() ;

/// @brief Method OnEnable, addr 0x18032a1a0, size 0x260, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData> const& __cordl_internal_get_WaterDepthData() const;

constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData>& __cordl_internal_get_WaterDepthData() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_WaterSoundDeepSize1() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_WaterSoundDeepSize1() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_WaterSoundDeepSize2() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_WaterSoundDeepSize2() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_WaterSoundSize1() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_WaterSoundSize1() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_WaterSoundSize2() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_WaterSoundSize2() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioImpactType>* const& __cordl_internal_get__ImpactTypeLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioImpactType>*& __cordl_internal_get__ImpactTypeLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>* const& __cordl_internal_get__SurfaceSoundSize1Lookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*& __cordl_internal_get__SurfaceSoundSize1Lookup_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>* const& __cordl_internal_get__SurfaceSoundSize2Lookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*& __cordl_internal_get__SurfaceSoundSize2Lookup_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::AudioImpact*> const& __cordl_internal_get__impacts() const;

constexpr ::ArrayW<::GlobalNamespace::AudioImpact*>& __cordl_internal_get__impacts() ;

constexpr void __cordl_internal_set_WaterDepthData(::UnityW<::GlobalNamespace::WaterDepthSampleData>  value) ;

constexpr void __cordl_internal_set_WaterSoundDeepSize1(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set_WaterSoundDeepSize2(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set_WaterSoundSize1(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set_WaterSoundSize2(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set__ImpactTypeLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioImpactType>*  value) ;

constexpr void __cordl_internal_set__SurfaceSoundSize1Lookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*  value) ;

constexpr void __cordl_internal_set__SurfaceSoundSize2Lookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*  value) ;

constexpr void __cordl_internal_set__impacts(::ArrayW<::GlobalNamespace::AudioImpact*>  value) ;

/// @brief Method .ctor, addr 0x18032a400, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ImpactTypeLookup, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioImpactType>* get_ImpactTypeLookup() ;

/// @brief Method get_Impacts, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::AudioImpact*> get_Impacts() ;

/// @brief Method get_SurfaceSoundSize1Lookup, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>* get_SurfaceSoundSize1Lookup() ;

/// @brief Method get_SurfaceSoundSize2Lookup, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>* get_SurfaceSoundSize2Lookup() ;

/// @brief Method set_ImpactTypeLookup, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_ImpactTypeLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioImpactType>*  value) ;

/// @brief Method set_SurfaceSoundSize1Lookup, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_SurfaceSoundSize1Lookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*  value) ;

/// @brief Method set_SurfaceSoundSize2Lookup, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_SurfaceSoundSize2Lookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioImpactConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioImpactConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioImpactConfig(AudioImpactConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioImpactConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioImpactConfig(AudioImpactConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4807};

/// @brief Field _impacts, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioImpact*>  ____impacts;

/// @brief Field WaterSoundSize1, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___WaterSoundSize1;

/// @brief Field WaterSoundSize2, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___WaterSoundSize2;

/// @brief Field WaterSoundDeepSize1, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___WaterSoundDeepSize1;

/// @brief Field WaterSoundDeepSize2, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___WaterSoundDeepSize2;

/// @brief Field WaterDepthData, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WaterDepthSampleData>  ___WaterDepthData;

/// @brief Field <ImpactTypeLookup>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioImpactType>*  ____ImpactTypeLookup_k__BackingField;

/// @brief Field <SurfaceSoundSize1Lookup>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*  ____SurfaceSoundSize1Lookup_k__BackingField;

/// @brief Field <SurfaceSoundSize2Lookup>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::AudioEvent*>*  ____SurfaceSoundSize2Lookup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioImpactConfig, ____impacts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpactConfig, ___WaterSoundSize1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpactConfig, ___WaterSoundSize2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpactConfig, ___WaterSoundDeepSize1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpactConfig, ___WaterSoundDeepSize2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpactConfig, ___WaterDepthData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpactConfig, ____ImpactTypeLookup_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpactConfig, ____SurfaceSoundSize1Lookup_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpactConfig, ____SurfaceSoundSize2Lookup_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioImpactConfig) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
