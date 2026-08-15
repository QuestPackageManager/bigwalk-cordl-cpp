#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IGlyphProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IGlyphProvider)
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IGlyphProvider;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IGlyphProvider*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IGlyphProvider*, "Rewired.Interfaces", "IGlyphProvider");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IGlyphProvider
class CORDL_TYPE IGlyphProvider {
public:
// Declarations
/// @brief Method TryGetGlyph, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetGlyph(::StringW  key, ::by_ref<::System::Object*>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "IGlyphProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGlyphProvider(IGlyphProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
