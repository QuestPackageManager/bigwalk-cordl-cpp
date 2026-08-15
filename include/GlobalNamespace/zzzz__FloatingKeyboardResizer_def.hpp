#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatingKeyboardResizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FloatingKeyboardResizer)
// Forward declare root types
namespace GlobalNamespace {
class FloatingKeyboardResizer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FloatingKeyboardResizer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloatingKeyboardResizer*, "", "FloatingKeyboardResizer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatingKeyboardResizer
class CORDL_TYPE FloatingKeyboardResizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::FloatingKeyboardResizer* New_ctor() ;

/// @brief Method OnDisable, addr 0x180421370, size 0x110, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180421480, size 0x110, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFloatingKeyboardChange, addr 0x180421590, size 0x50, virtual false, abstract: false, final false
inline void OnFloatingKeyboardChange(bool  active) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatingKeyboardResizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatingKeyboardResizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatingKeyboardResizer(FloatingKeyboardResizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatingKeyboardResizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatingKeyboardResizer(FloatingKeyboardResizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5225};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FloatingKeyboardResizer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
