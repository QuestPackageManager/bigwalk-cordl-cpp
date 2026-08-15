#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionMaterials.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OcclusionMaterials)
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace MA::Flora {
class OcclusionMaterials;
}
// Write type traits
MARK_REF_T(::MA::Flora::OcclusionMaterials*);
DEFINE_IL2CPP_CLASS(::MA::Flora::OcclusionMaterials*, "MA.Flora", "OcclusionMaterials");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.OcclusionMaterials
class CORDL_TYPE OcclusionMaterials : public ::System::Object {
public:
// Declarations
/// @brief Field DebugTestMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DebugTestMaterial, put=setStaticF_DebugTestMaterial)) ::UnityW<::UnityEngine::Material>  DebugTestMaterial;

/// @brief Field DebugViewMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DebugViewMaterial, put=setStaticF_DebugViewMaterial)) ::UnityW<::UnityEngine::Material>  DebugViewMaterial;

/// @brief Method Initialize, addr 0x1814d3800, size 0x90, virtual false, abstract: false, final false
static inline void Initialize(::MA::Flora::FloraRuntimeResources*  runtimeResources) ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_DebugTestMaterial() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_DebugViewMaterial() ;

static inline void setStaticF_DebugTestMaterial(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_DebugViewMaterial(::UnityW<::UnityEngine::Material>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionMaterials() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcclusionMaterials", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcclusionMaterials(OcclusionMaterials && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcclusionMaterials", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcclusionMaterials(OcclusionMaterials const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13233};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::OcclusionMaterials) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
