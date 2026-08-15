#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/IHeightModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHeightModifier)
namespace JBooth::MicroVerseCore {
class HeightmapData;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class IHeightModifier;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::IHeightModifier*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::IHeightModifier*, "JBooth.MicroVerseCore", "IHeightModifier");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.IHeightModifier
class CORDL_TYPE IHeightModifier {
public:
// Declarations
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method ApplyHeightStamp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IHeightModifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHeightModifier(IHeightModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18041};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JBooth::MicroVerseCore
