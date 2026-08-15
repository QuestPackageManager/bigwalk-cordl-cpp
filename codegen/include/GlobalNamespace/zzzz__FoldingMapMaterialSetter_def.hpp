#pragma once
// IWYU pragma private; include "GlobalNamespace/FoldingMapMaterialSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FoldingMapMaterialSetter)
// Forward declare root types
namespace GlobalNamespace {
class FoldingMapMaterialSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FoldingMapMaterialSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FoldingMapMaterialSetter*, "", "FoldingMapMaterialSetter");
// Dependencies PeckSystemReference, UnityEngine.Material, UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: FoldingMapMaterialSetter
class CORDL_TYPE FoldingMapMaterialSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field materials, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_materials, put=__cordl_internal_set_materials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  materials;

/// @brief Field peckSystemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field renderers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

static inline ::GlobalNamespace::FoldingMapMaterialSetter* New_ctor() ;

/// @brief Method SetMapState, addr 0x1803fdb80, size 0x80, virtual false, abstract: false, final false
inline void SetMapState(int32_t  state) ;

/// @brief Method UpdateToMatchState, addr 0x1803fdc00, size 0xc0, virtual false, abstract: false, final false
inline void UpdateToMatchState() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_materials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_materials() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_materials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoldingMapMaterialSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoldingMapMaterialSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FoldingMapMaterialSetter(FoldingMapMaterialSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoldingMapMaterialSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoldingMapMaterialSetter(FoldingMapMaterialSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5054};

/// @brief Field peckSystemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field renderers, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

/// @brief Field materials, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___materials;

/// @brief Field logVerbose, offset: 0x58, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FoldingMapMaterialSetter, ___peckSystemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FoldingMapMaterialSetter, ___renderers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FoldingMapMaterialSetter, ___materials) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FoldingMapMaterialSetter, ___logVerbose) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FoldingMapMaterialSetter) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
