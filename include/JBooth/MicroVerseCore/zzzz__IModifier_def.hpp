#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/IModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IModifier)
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class IModifier;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::IModifier*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::IModifier*, "JBooth.MicroVerseCore", "IModifier");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.IModifier
class CORDL_TYPE IModifier {
public:
// Declarations
/// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetBounds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsEnabled() ;

/// @brief Method StripInBuild, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StripInBuild() ;

// Ctor Parameters [CppParam { name: "", ty: "IModifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModifier(IModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18039};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JBooth::MicroVerseCore
