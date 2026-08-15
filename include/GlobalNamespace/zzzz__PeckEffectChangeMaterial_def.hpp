#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectChangeMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectChangeMaterial)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectChangeMaterial_MeshChangeSettings;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectChangeMaterial;
}
namespace GlobalNamespace {
struct PeckEffectChangeMaterial_MeshChangeSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectChangeMaterial*);
MARK_VAL_T(::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectChangeMaterial*, "", "PeckEffectChangeMaterial");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings, "", "PeckEffectChangeMaterial/MeshChangeSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectChangeMaterial/MeshChangeSettings
struct CORDL_TYPE PeckEffectChangeMaterial_MeshChangeSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectChangeMaterial_MeshChangeSettings() ;

// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }]
constexpr PeckEffectChangeMaterial_MeshChangeSettings(::UnityW<::UnityEngine::Material>  material) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5377};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field material, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings, material) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectChangeMaterial::MeshChangeSettings, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectChangeMaterial
class CORDL_TYPE PeckEffectChangeMaterial : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MeshChangeSettings = ::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings;

/// @brief Field logVerbose, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onlyChangeSomeSubmeshes, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyChangeSomeSubmeshes, put=__cordl_internal_set_onlyChangeSomeSubmeshes)) bool  onlyChangeSomeSubmeshes;

/// @brief Field settingsPerState, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsPerState, put=__cordl_internal_set_settingsPerState)) ::ArrayW<::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings>  settingsPerState;

/// @brief Field subMeshes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_subMeshes, put=__cordl_internal_set_subMeshes)) ::ArrayW<int32_t>  subMeshes;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field targetRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::Renderer>  targetRenderer;

/// @brief Method Awake, addr 0x180449170, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectChangeMaterial* New_ctor() ;

/// @brief Method Peck, addr 0x180449210, size 0x100, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr bool const& __cordl_internal_get_onlyChangeSomeSubmeshes() const;

constexpr bool& __cordl_internal_get_onlyChangeSomeSubmeshes() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings> const& __cordl_internal_get_settingsPerState() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings>& __cordl_internal_get_settingsPerState() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_subMeshes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_subMeshes() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_targetRenderer() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onlyChangeSomeSubmeshes(bool  value) ;

constexpr void __cordl_internal_set_settingsPerState(::ArrayW<::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings>  value) ;

constexpr void __cordl_internal_set_subMeshes(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectChangeMaterial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectChangeMaterial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectChangeMaterial(PeckEffectChangeMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectChangeMaterial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectChangeMaterial(PeckEffectChangeMaterial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5378};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field targetRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___targetRenderer;

/// @brief Field onlyChangeSomeSubmeshes, offset: 0x50, size: 0x1, def value: None
 bool  ___onlyChangeSomeSubmeshes;

/// @brief Field subMeshes, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___subMeshes;

/// @brief Field settingsPerState, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectChangeMaterial_MeshChangeSettings>  ___settingsPerState;

/// @brief Field logVerbose, offset: 0x68, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectChangeMaterial, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeMaterial, ___targetRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeMaterial, ___onlyChangeSomeSubmeshes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeMaterial, ___subMeshes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeMaterial, ___settingsPerState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeMaterial, ___logVerbose) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectChangeMaterial) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
