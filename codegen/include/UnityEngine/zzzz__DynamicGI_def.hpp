#pragma once
// IWYU pragma private; include "UnityEngine/DynamicGI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DynamicGI)
// Forward declare root types
namespace UnityEngine {
class DynamicGI;
}
// Write type traits
MARK_REF_T(::UnityEngine::DynamicGI*);
DEFINE_IL2CPP_CLASS(::UnityEngine::DynamicGI*, "UnityEngine", "DynamicGI");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.DynamicGI
class CORDL_TYPE DynamicGI : public ::System::Object {
public:
// Declarations
/// @brief Method UpdateEnvironment, addr 0x182245300, size 0x10, virtual false, abstract: false, final false
static inline void UpdateEnvironment() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicGI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicGI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicGI(DynamicGI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicGI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicGI(DynamicGI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10474};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::DynamicGI) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
