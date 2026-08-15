#pragma once
// IWYU pragma private; include "GlobalNamespace/NmouseHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NmouseHandler)
// Forward declare root types
namespace GlobalNamespace {
class NmouseHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NmouseHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NmouseHandler*, "", "NmouseHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NmouseHandler
class CORDL_TYPE NmouseHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::NmouseHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NmouseHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NmouseHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NmouseHandler(NmouseHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NmouseHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NmouseHandler(NmouseHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5547};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NmouseHandler) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
