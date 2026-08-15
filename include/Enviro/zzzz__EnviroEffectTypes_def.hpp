#pragma once
// IWYU pragma private; include "Enviro/EnviroEffectTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroEffectTypes)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace Enviro {
class EnviroEffectTypes;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroEffectTypes*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEffectTypes*, "Enviro", "EnviroEffectTypes");
// Dependencies System.Object, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroEffectTypes
class CORDL_TYPE EnviroEffectTypes : public ::System::Object {
public:
// Declarations
/// @brief Field emissionRate, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_emissionRate, put=__cordl_internal_set_emissionRate)) float_t  emissionRate;

/// @brief Field localPositionOffset, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_localPositionOffset, put=__cordl_internal_set_localPositionOffset)) ::UnityEngine::Vector3  localPositionOffset;

/// @brief Field localPositionOffsetVFXGraph, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_localPositionOffsetVFXGraph, put=__cordl_internal_set_localPositionOffsetVFXGraph)) ::UnityEngine::Vector3  localPositionOffsetVFXGraph;

/// @brief Field localRotationOffset, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_localRotationOffset, put=__cordl_internal_set_localRotationOffset)) ::UnityEngine::Vector3  localRotationOffset;

/// @brief Field localRotationOffsetVFXGraph, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_localRotationOffsetVFXGraph, put=__cordl_internal_set_localRotationOffsetVFXGraph)) ::UnityEngine::Vector3  localRotationOffsetVFXGraph;

/// @brief Field maxEmission, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxEmission, put=__cordl_internal_set_maxEmission)) float_t  maxEmission;

/// @brief Field maxEmissionVFXGraph, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxEmissionVFXGraph, put=__cordl_internal_set_maxEmissionVFXGraph)) float_t  maxEmissionVFXGraph;

/// @brief Field mySystem, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mySystem, put=__cordl_internal_set_mySystem)) ::UnityW<::UnityEngine::ParticleSystem>  mySystem;

/// @brief Field name, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field prefab, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field prefabVFXGraph, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabVFXGraph, put=__cordl_internal_set_prefabVFXGraph)) ::UnityW<::UnityEngine::GameObject>  prefabVFXGraph;

static inline ::Enviro::EnviroEffectTypes* New_ctor() ;

constexpr float_t const& __cordl_internal_get_emissionRate() const;

constexpr float_t& __cordl_internal_get_emissionRate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localPositionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localPositionOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localPositionOffsetVFXGraph() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localPositionOffsetVFXGraph() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localRotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localRotationOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localRotationOffsetVFXGraph() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localRotationOffsetVFXGraph() ;

constexpr float_t const& __cordl_internal_get_maxEmission() const;

constexpr float_t& __cordl_internal_get_maxEmission() ;

constexpr float_t const& __cordl_internal_get_maxEmissionVFXGraph() const;

constexpr float_t& __cordl_internal_get_maxEmissionVFXGraph() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_mySystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_mySystem() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefabVFXGraph() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefabVFXGraph() ;

constexpr void __cordl_internal_set_emissionRate(float_t  value) ;

constexpr void __cordl_internal_set_localPositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localPositionOffsetVFXGraph(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localRotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localRotationOffsetVFXGraph(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxEmission(float_t  value) ;

constexpr void __cordl_internal_set_maxEmissionVFXGraph(float_t  value) ;

constexpr void __cordl_internal_set_mySystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_prefabVFXGraph(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroEffectTypes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffectTypes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroEffectTypes(EnviroEffectTypes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffectTypes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroEffectTypes(EnviroEffectTypes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18442};

/// @brief Field prefabVFXGraph, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefabVFXGraph;

/// @brief Field localPositionOffsetVFXGraph, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localPositionOffsetVFXGraph;

/// @brief Field localRotationOffsetVFXGraph, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localRotationOffsetVFXGraph;

/// @brief Field maxEmissionVFXGraph, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxEmissionVFXGraph;

/// @brief Field mySystem, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___mySystem;

/// @brief Field name, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field prefab, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

/// @brief Field localPositionOffset, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localPositionOffset;

/// @brief Field localRotationOffset, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localRotationOffset;

/// @brief Field emissionRate, offset: 0x68, size: 0x4, def value: None
 float_t  ___emissionRate;

/// @brief Field maxEmission, offset: 0x6c, size: 0x4, def value: None
 float_t  ___maxEmission;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEffectTypes, ___prefabVFXGraph) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectTypes, ___localPositionOffsetVFXGraph) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectTypes, ___localRotationOffsetVFXGraph) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectTypes, ___maxEmissionVFXGraph) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectTypes, ___mySystem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectTypes, ___name) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectTypes, ___prefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectTypes, ___localPositionOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectTypes, ___localRotationOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectTypes, ___emissionRate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectTypes, ___maxEmission) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEffectTypes) == 0x70, "Size mismatch!");

} // namespace end def Enviro
