#pragma once
// IWYU pragma private; include "Boxophobic/Utility/Notebox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Notebox)
// Forward declare root types
namespace Boxophobic::Utility {
class Notebox;
}
// Write type traits
MARK_REF_T(::Boxophobic::Utility::Notebox*);
DEFINE_IL2CPP_CLASS(::Boxophobic::Utility::Notebox*, "Boxophobic.Utility", "Notebox");
// Dependencies UnityEngine.MonoBehaviour
namespace Boxophobic::Utility {
// Is value type: false
// CS Name: Boxophobic.Utility.Notebox
class CORDL_TYPE Notebox : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Boxophobic::Utility::Notebox* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Notebox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Notebox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Notebox(Notebox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Notebox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Notebox(Notebox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21189};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Boxophobic::Utility::Notebox) == 0x20, "Size mismatch!");

} // namespace end def Boxophobic::Utility
