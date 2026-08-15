#pragma once
// IWYU pragma private; include "UnityEngine/BillboardAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BillboardAsset)
// Forward declare root types
namespace UnityEngine {
class BillboardAsset;
}
// Write type traits
MARK_REF_T(::UnityEngine::BillboardAsset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::BillboardAsset*, "UnityEngine", "BillboardAsset");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.BillboardAsset
class CORDL_TYPE BillboardAsset : public ::UnityEngine::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr BillboardAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BillboardAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BillboardAsset(BillboardAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BillboardAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BillboardAsset(BillboardAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::BillboardAsset) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
