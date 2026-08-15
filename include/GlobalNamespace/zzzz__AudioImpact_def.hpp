#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioImpact.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioImpactType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioImpact)
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace UnityEngine {
class PhysicsMaterial;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioImpact;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioImpact*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioImpact*, "", "AudioImpact");
// Dependencies AudioImpactType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioImpact
class CORDL_TYPE AudioImpact : public ::System::Object {
public:
// Declarations
/// @brief Field ImpactType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_ImpactType, put=__cordl_internal_set_ImpactType)) ::GlobalNamespace::AudioImpactType  ImpactType;

/// @brief Field Material, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Material, put=__cordl_internal_set_Material)) ::UnityW<::UnityEngine::PhysicsMaterial>  Material;

/// @brief Field SurfaceSoundSize1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SurfaceSoundSize1, put=__cordl_internal_set_SurfaceSoundSize1)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  SurfaceSoundSize1;

/// @brief Field SurfaceSoundSize2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SurfaceSoundSize2, put=__cordl_internal_set_SurfaceSoundSize2)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  SurfaceSoundSize2;

static inline ::GlobalNamespace::AudioImpact* New_ctor() ;

constexpr ::GlobalNamespace::AudioImpactType const& __cordl_internal_get_ImpactType() const;

constexpr ::GlobalNamespace::AudioImpactType& __cordl_internal_get_ImpactType() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_Material() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_Material() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_SurfaceSoundSize1() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_SurfaceSoundSize1() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_SurfaceSoundSize2() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_SurfaceSoundSize2() ;

constexpr void __cordl_internal_set_ImpactType(::GlobalNamespace::AudioImpactType  value) ;

constexpr void __cordl_internal_set_Material(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_SurfaceSoundSize1(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set_SurfaceSoundSize2(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioImpact() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioImpact", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioImpact(AudioImpact && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioImpact", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioImpact(AudioImpact const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4808};

/// @brief Field Material, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___Material;

/// @brief Field ImpactType, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::AudioImpactType  ___ImpactType;

/// @brief Field SurfaceSoundSize1, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___SurfaceSoundSize1;

/// @brief Field SurfaceSoundSize2, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___SurfaceSoundSize2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioImpact, ___Material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpact, ___ImpactType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpact, ___SurfaceSoundSize1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioImpact, ___SurfaceSoundSize2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioImpact) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
