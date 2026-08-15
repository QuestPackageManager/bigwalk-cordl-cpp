#pragma once
// IWYU pragma private; include "UnityEngine/Tree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(Tree)
// Forward declare root types
namespace UnityEngine {
class Tree;
}
// Write type traits
MARK_REF_T(::UnityEngine::Tree*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Tree*, "UnityEngine", "Tree");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Tree
class CORDL_TYPE Tree : public ::UnityEngine::Component {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tree", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tree(Tree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tree", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tree(Tree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20316};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Tree) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
