#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMaterial)
namespace UnityEngine {
class PhysicsMaterial;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioMaterial;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioMaterial*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioMaterial*, "", "AudioMaterial");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioMaterial
class CORDL_TYPE AudioMaterial : public ::System::Object {
public:
// Declarations
/// @brief Field Material, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Material, put=__cordl_internal_set_Material)) ::UnityW<::UnityEngine::PhysicsMaterial>  Material;

/// @brief Field OcclusionMultiplier, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_OcclusionMultiplier, put=__cordl_internal_set_OcclusionMultiplier)) float_t  OcclusionMultiplier;

/// @brief Field ReverbAbsorption, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReverbAbsorption, put=__cordl_internal_set_ReverbAbsorption)) float_t  ReverbAbsorption;

static inline ::GlobalNamespace::AudioMaterial* New_ctor() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_Material() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_Material() ;

constexpr float_t const& __cordl_internal_get_OcclusionMultiplier() const;

constexpr float_t& __cordl_internal_get_OcclusionMultiplier() ;

constexpr float_t const& __cordl_internal_get_ReverbAbsorption() const;

constexpr float_t& __cordl_internal_get_ReverbAbsorption() ;

constexpr void __cordl_internal_set_Material(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_OcclusionMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_ReverbAbsorption(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMaterial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMaterial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMaterial(AudioMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMaterial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMaterial(AudioMaterial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17528};

/// @brief Field Material, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___Material;

/// @brief Field OcclusionMultiplier, offset: 0x18, size: 0x4, def value: None
 float_t  ___OcclusionMultiplier;

/// @brief Field ReverbAbsorption, offset: 0x1c, size: 0x4, def value: None
 float_t  ___ReverbAbsorption;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioMaterial, ___Material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterial, ___OcclusionMultiplier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMaterial, ___ReverbAbsorption) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioMaterial) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
