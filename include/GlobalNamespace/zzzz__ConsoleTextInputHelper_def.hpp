#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsoleTextInputHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConsoleTextInputHelper)
// Forward declare root types
namespace GlobalNamespace {
class ConsoleTextInputHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConsoleTextInputHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsoleTextInputHelper*, "", "ConsoleTextInputHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsoleTextInputHelper
class CORDL_TYPE ConsoleTextInputHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::ConsoleTextInputHelper* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsoleTextInputHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsoleTextInputHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsoleTextInputHelper(ConsoleTextInputHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleTextInputHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsoleTextInputHelper(ConsoleTextInputHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5522};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ConsoleTextInputHelper) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
