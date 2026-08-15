#pragma once
// IWYU pragma private; include "GlobalNamespace/CorpseLooks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LimbSpline_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CorpseLooks)
namespace GlobalNamespace {
class LimbSpline;
}
namespace GlobalNamespace {
struct PlayerEyeMood;
}
namespace GlobalNamespace {
class PlayerEyeSet;
}
namespace GlobalNamespace {
class PlayerLookSet;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class CorpseLooks;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CorpseLooks*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CorpseLooks*, "", "CorpseLooks");
// Dependencies LimbSpline, UnityEngine.MeshRenderer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CorpseLooks
class CORDL_TYPE CorpseLooks : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _eyeMaterialInstance, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__eyeMaterialInstance, put=__cordl_internal_set__eyeMaterialInstance)) ::UnityW<::UnityEngine::Material>  _eyeMaterialInstance;

/// @brief Field _headColorIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__headColorIndex, put=__cordl_internal_set__headColorIndex)) int32_t  _headColorIndex;

/// @brief Field _headMaterialInstance, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__headMaterialInstance, put=__cordl_internal_set__headMaterialInstance)) ::UnityW<::UnityEngine::Material>  _headMaterialInstance;

/// @brief Field _legsColorIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__legsColorIndex, put=__cordl_internal_set__legsColorIndex)) int32_t  _legsColorIndex;

/// @brief Field _legsMaterialInstance, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__legsMaterialInstance, put=__cordl_internal_set__legsMaterialInstance)) ::UnityW<::UnityEngine::Material>  _legsMaterialInstance;

/// @brief Field _torsoColorIndex, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__torsoColorIndex, put=__cordl_internal_set__torsoColorIndex)) int32_t  _torsoColorIndex;

/// @brief Field _torsoMaterialInstance, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__torsoMaterialInstance, put=__cordl_internal_set__torsoMaterialInstance)) ::UnityW<::UnityEngine::Material>  _torsoMaterialInstance;

/// @brief Field baseMaterial, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseMaterial, put=__cordl_internal_set_baseMaterial)) ::UnityW<::UnityEngine::Material>  baseMaterial;

/// @brief Field eyeSet, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeSet, put=__cordl_internal_set_eyeSet)) ::UnityW<::GlobalNamespace::PlayerEyeSet>  eyeSet;

/// @brief Field eyeSubmeshIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeSubmeshIndex, put=__cordl_internal_set_eyeSubmeshIndex)) int32_t  eyeSubmeshIndex;

/// @brief Field headItself, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_headItself, put=__cordl_internal_set_headItself)) ::UnityW<::UnityEngine::MeshRenderer>  headItself;

/// @brief Field headParts, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_headParts, put=__cordl_internal_set_headParts)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  headParts;

/// @brief Field legsParts, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_legsParts, put=__cordl_internal_set_legsParts)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  legsParts;

/// @brief Field lookSet, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookSet, put=__cordl_internal_set_lookSet)) ::UnityW<::GlobalNamespace::PlayerLookSet>  lookSet;

/// @brief Field torsoLimbs, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_torsoLimbs, put=__cordl_internal_set_torsoLimbs)) ::ArrayW<::UnityW<::GlobalNamespace::LimbSpline>>  torsoLimbs;

/// @brief Field torsoParts, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_torsoParts, put=__cordl_internal_set_torsoParts)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  torsoParts;

/// @brief Method Awake, addr 0x1803f8ad0, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Initialize, addr 0x1803f8ae0, size 0x2d0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::CorpseLooks* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803f8db0, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetAllParts, addr 0x1803f8e40, size 0xb0, virtual false, abstract: false, final false
inline void SetAllParts(int32_t  head, int32_t  torso, int32_t  legs) ;

/// @brief Method SetEyes, addr 0x1803f8ef0, size 0x120, virtual false, abstract: false, final false
inline void SetEyes(::GlobalNamespace::PlayerEyeMood  eyeMood) ;

/// @brief Method SetHead, addr 0x1803f9010, size 0x40, virtual false, abstract: false, final false
inline void SetHead(int32_t  newValue) ;

/// @brief Method SetLegs, addr 0x1803f9050, size 0x40, virtual false, abstract: false, final false
inline void SetLegs(int32_t  newValue) ;

/// @brief Method SetLook, addr 0x1803f9090, size 0x1b0, virtual false, abstract: false, final false
inline void SetLook(int32_t  colorIndex, ::UnityEngine::Material*  materialInstance, ::ArrayW<::GlobalNamespace::LimbSpline*>  limbSplines) ;

/// @brief Method SetMaterialInRenderers, addr 0x1803f9240, size 0x60, virtual false, abstract: false, final false
inline void SetMaterialInRenderers(::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::MeshRenderer*>  renderers) ;

/// @brief Method SetTorso, addr 0x1803f92a0, size 0x40, virtual false, abstract: false, final false
inline void SetTorso(int32_t  newValue) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__eyeMaterialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__eyeMaterialInstance() ;

constexpr int32_t const& __cordl_internal_get__headColorIndex() const;

constexpr int32_t& __cordl_internal_get__headColorIndex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__headMaterialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__headMaterialInstance() ;

constexpr int32_t const& __cordl_internal_get__legsColorIndex() const;

constexpr int32_t& __cordl_internal_get__legsColorIndex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__legsMaterialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__legsMaterialInstance() ;

constexpr int32_t const& __cordl_internal_get__torsoColorIndex() const;

constexpr int32_t& __cordl_internal_get__torsoColorIndex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__torsoMaterialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__torsoMaterialInstance() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_baseMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_baseMaterial() ;

constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet> const& __cordl_internal_get_eyeSet() const;

constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet>& __cordl_internal_get_eyeSet() ;

constexpr int32_t const& __cordl_internal_get_eyeSubmeshIndex() const;

constexpr int32_t& __cordl_internal_get_eyeSubmeshIndex() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_headItself() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_headItself() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_headParts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_headParts() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_legsParts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_legsParts() ;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& __cordl_internal_get_lookSet() const;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& __cordl_internal_get_lookSet() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LimbSpline>> const& __cordl_internal_get_torsoLimbs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LimbSpline>>& __cordl_internal_get_torsoLimbs() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_torsoParts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_torsoParts() ;

constexpr void __cordl_internal_set__eyeMaterialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__headColorIndex(int32_t  value) ;

constexpr void __cordl_internal_set__headMaterialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__legsColorIndex(int32_t  value) ;

constexpr void __cordl_internal_set__legsMaterialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__torsoColorIndex(int32_t  value) ;

constexpr void __cordl_internal_set__torsoMaterialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_baseMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_eyeSet(::UnityW<::GlobalNamespace::PlayerEyeSet>  value) ;

constexpr void __cordl_internal_set_eyeSubmeshIndex(int32_t  value) ;

constexpr void __cordl_internal_set_headItself(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_headParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_legsParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_lookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value) ;

constexpr void __cordl_internal_set_torsoLimbs(::ArrayW<::UnityW<::GlobalNamespace::LimbSpline>>  value) ;

constexpr void __cordl_internal_set_torsoParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CorpseLooks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CorpseLooks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CorpseLooks(CorpseLooks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CorpseLooks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CorpseLooks(CorpseLooks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5035};

/// @brief Field _headColorIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ____headColorIndex;

/// @brief Field _torsoColorIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  ____torsoColorIndex;

/// @brief Field _legsColorIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ____legsColorIndex;

/// @brief Field headParts, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___headParts;

/// @brief Field headItself, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___headItself;

/// @brief Field eyeSubmeshIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ___eyeSubmeshIndex;

/// @brief Field torsoParts, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___torsoParts;

/// @brief Field legsParts, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___legsParts;

/// @brief Field torsoLimbs, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::LimbSpline>>  ___torsoLimbs;

/// @brief Field lookSet, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerLookSet>  ___lookSet;

/// @brief Field eyeSet, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerEyeSet>  ___eyeSet;

/// @brief Field baseMaterial, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___baseMaterial;

/// @brief Field _eyeMaterialInstance, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____eyeMaterialInstance;

/// @brief Field _headMaterialInstance, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____headMaterialInstance;

/// @brief Field _torsoMaterialInstance, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____torsoMaterialInstance;

/// @brief Field _legsMaterialInstance, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____legsMaterialInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CorpseLooks, ____headColorIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ____torsoColorIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ____legsColorIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ___headParts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ___headItself) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ___eyeSubmeshIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ___torsoParts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ___legsParts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ___torsoLimbs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ___lookSet) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ___eyeSet) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ___baseMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ____eyeMaterialInstance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ____headMaterialInstance) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ____torsoMaterialInstance) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CorpseLooks, ____legsMaterialInstance) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CorpseLooks) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
