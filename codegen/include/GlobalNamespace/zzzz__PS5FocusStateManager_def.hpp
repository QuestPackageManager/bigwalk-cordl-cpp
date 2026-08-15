#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5FocusStateManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PS5FocusStateManager)
// Forward declare root types
namespace GlobalNamespace {
class PS5FocusStateManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PS5FocusStateManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PS5FocusStateManager*, "", "PS5FocusStateManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS5FocusStateManager
class CORDL_TYPE PS5FocusStateManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::PS5FocusStateManager* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PS5FocusStateManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PS5FocusStateManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5FocusStateManager(PS5FocusStateManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5FocusStateManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5FocusStateManager(PS5FocusStateManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5638};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PS5FocusStateManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
