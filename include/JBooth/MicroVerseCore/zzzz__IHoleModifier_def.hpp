#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/IHoleModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHoleModifier)
namespace JBooth::MicroVerseCore {
class HoleData;
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
class IHoleModifier;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::IHoleModifier*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::IHoleModifier*, "JBooth.MicroVerseCore", "IHoleModifier");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.IHoleModifier
class CORDL_TYPE IHoleModifier {
public:
// Declarations
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method ApplyHoleStamp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyHoleStamp(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HoleData*  holeData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method IsValidHoleStamp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsValidHoleStamp() ;

/// @brief Method NeedCurvatureMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedCurvatureMap() ;

/// @brief Method NeedFlowMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedFlowMap() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IHoleModifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHoleModifier(IHoleModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18043};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JBooth::MicroVerseCore
