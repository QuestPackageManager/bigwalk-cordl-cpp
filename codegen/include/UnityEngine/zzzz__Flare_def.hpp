#pragma once
// IWYU pragma private; include "UnityEngine/Flare.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Flare)
// Forward declare root types
namespace UnityEngine {
class Flare;
}
// Write type traits
MARK_REF_T(::UnityEngine::Flare*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Flare*, "UnityEngine", "Flare");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Flare
class CORDL_TYPE Flare : public ::UnityEngine::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Flare() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Flare", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Flare(Flare && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Flare", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Flare(Flare const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10524};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Flare) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
