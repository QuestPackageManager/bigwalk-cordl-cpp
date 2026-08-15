#pragma once
// IWYU pragma private; include "TMPro/TMP_SelectionCaret.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
CORDL_MODULE_EXPORT(TMP_SelectionCaret)
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace TMPro {
class TMP_SelectionCaret;
}
// Write type traits
MARK_REF_T(::TMPro::TMP_SelectionCaret*);
DEFINE_IL2CPP_CLASS(::TMPro::TMP_SelectionCaret*, "TMPro", "TMP_SelectionCaret");
// Dependencies UnityEngine.UI.MaskableGraphic
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_SelectionCaret
class CORDL_TYPE TMP_SelectionCaret : public ::UnityEngine::UI::MaskableGraphic {
public:
// Declarations
/// @brief Method Cull, addr 0x1821ce930, size 0x50, virtual true, abstract: false, final false
inline void Cull(::UnityEngine::Rect  clipRect, bool  validRect) ;

static inline ::TMPro::TMP_SelectionCaret* New_ctor() ;

/// @brief Method UpdateGeometry, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateGeometry() ;

/// @brief Method .ctor, addr 0x1821ce980, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMP_SelectionCaret() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMP_SelectionCaret", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_SelectionCaret(TMP_SelectionCaret && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SelectionCaret", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_SelectionCaret(TMP_SelectionCaret const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15228};

/// @brief Size padding 0xe0 - 0xd8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TMPro::TMP_SelectionCaret) == 0xe0, "Size mismatch!");

} // namespace end def TMPro
