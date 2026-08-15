#pragma once
// IWYU pragma private; include "Rewired/Internal/Glyphs/ITryGetGlyph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITryGetGlyph)
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Internal::Glyphs {
class ITryGetGlyph;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::Glyphs::ITryGetGlyph*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::Glyphs::ITryGetGlyph*, "Rewired.Internal.Glyphs", "ITryGetGlyph");
// Dependencies 
namespace Rewired::Internal::Glyphs {
// Is value type: false
// CS Name: Rewired.Internal.Glyphs.ITryGetGlyph
class CORDL_TYPE ITryGetGlyph {
public:
// Declarations
/// @brief Method TryGetGlyph, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetGlyph(::by_ref<::System::Object*>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ITryGetGlyph", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITryGetGlyph(ITryGetGlyph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2862};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Internal::Glyphs
