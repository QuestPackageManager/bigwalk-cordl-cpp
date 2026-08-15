#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ISpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISpawner)
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class ISpawner;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::ISpawner*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ISpawner*, "JBooth.MicroVerseCore", "ISpawner");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ISpawner
class CORDL_TYPE ISpawner {
public:
// Declarations
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method GetSDF, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> GetSDF(::UnityEngine::Terrain*  t) ;

/// @brief Method NeedParentSDF, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedParentSDF() ;

/// @brief Method NeedToGenerateSDFForChilden, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedToGenerateSDFForChilden() ;

/// @brief Method SetSDF, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt) ;

/// @brief Method UsesOtherObjectSDF, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool UsesOtherObjectSDF() ;

/// @brief Method UsesOtherTreeSDF, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool UsesOtherTreeSDF() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ISpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISpawner(ISpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18040};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JBooth::MicroVerseCore
