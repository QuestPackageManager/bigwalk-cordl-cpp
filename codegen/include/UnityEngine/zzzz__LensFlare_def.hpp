#pragma once
// IWYU pragma private; include "UnityEngine/LensFlare.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(LensFlare)
// Forward declare root types
namespace UnityEngine {
class LensFlare;
}
// Write type traits
MARK_REF_T(::UnityEngine::LensFlare*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LensFlare*, "UnityEngine", "LensFlare");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LensFlare
class CORDL_TYPE LensFlare : public ::UnityEngine::Behaviour {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr LensFlare() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LensFlare", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LensFlare(LensFlare && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LensFlare", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LensFlare(LensFlare const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10525};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LensFlare) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
