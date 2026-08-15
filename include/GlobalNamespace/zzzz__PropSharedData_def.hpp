#pragma once
// IWYU pragma private; include "GlobalNamespace/PropSharedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PropSharedData)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class PhysicsMaterial;
}
// Forward declare root types
namespace GlobalNamespace {
class PropSharedData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropSharedData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropSharedData*, "", "PropSharedData");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropSharedData
class CORDL_TYPE PropSharedData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field propXRayPrefab, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_propXRayPrefab, put=__cordl_internal_set_propXRayPrefab)) ::UnityW<::UnityEngine::GameObject>  propXRayPrefab;

/// @brief Field propZonerPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propZonerPrefab, put=__cordl_internal_set_propZonerPrefab)) ::UnityW<::UnityEngine::GameObject>  propZonerPrefab;

/// @brief Field sittingPocketFrictionMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sittingPocketFrictionMaterial, put=__cordl_internal_set_sittingPocketFrictionMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  sittingPocketFrictionMaterial;

/// @brief Field zeroFrictionMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_zeroFrictionMaterial, put=__cordl_internal_set_zeroFrictionMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  zeroFrictionMaterial;

static inline ::GlobalNamespace::PropSharedData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_propXRayPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_propXRayPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_propZonerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_propZonerPrefab() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_sittingPocketFrictionMaterial() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_sittingPocketFrictionMaterial() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_zeroFrictionMaterial() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_zeroFrictionMaterial() ;

constexpr void __cordl_internal_set_propXRayPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_propZonerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sittingPocketFrictionMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_zeroFrictionMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x180384ba0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::PropSharedData> get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropSharedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropSharedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropSharedData(PropSharedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropSharedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropSharedData(PropSharedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5586};

/// @brief Field propXRayPrefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___propXRayPrefab;

/// @brief Field propZonerPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___propZonerPrefab;

/// @brief Field zeroFrictionMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___zeroFrictionMaterial;

/// @brief Field sittingPocketFrictionMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___sittingPocketFrictionMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropSharedData, ___propXRayPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropSharedData, ___propZonerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropSharedData, ___zeroFrictionMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropSharedData, ___sittingPocketFrictionMaterial) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropSharedData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
