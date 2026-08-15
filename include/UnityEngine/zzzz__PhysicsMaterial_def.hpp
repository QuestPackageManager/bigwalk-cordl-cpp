#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PhysicsMaterial)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
class PhysicsMaterial;
}
// Write type traits
MARK_REF_T(::UnityEngine::PhysicsMaterial*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PhysicsMaterial*, "UnityEngine", "PhysicsMaterial");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PhysicsMaterial
class CORDL_TYPE PhysicsMaterial : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method Internal_CreateDynamicsMaterial, addr 0x1822fd0e0, size 0x100, virtual false, abstract: false, final false
static inline void Internal_CreateDynamicsMaterial(::UnityEngine::PhysicsMaterial*  mat, ::StringW  name) ;

/// @brief Method Internal_CreateDynamicsMaterial_Injected, addr 0x1822fd0d0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_CreateDynamicsMaterial_Injected(::UnityEngine::PhysicsMaterial*  mat, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

static inline ::UnityEngine::PhysicsMaterial* New_ctor() ;

/// @brief Method .ctor, addr 0x1822fd1e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsMaterial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsMaterial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsMaterial(PhysicsMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsMaterial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsMaterial(PhysicsMaterial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20206};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PhysicsMaterial) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
