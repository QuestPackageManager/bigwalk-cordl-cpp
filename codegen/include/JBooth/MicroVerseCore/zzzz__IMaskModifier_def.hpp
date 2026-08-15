#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/IMaskModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMaskModifier)
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class MaskData;
}
namespace JBooth::MicroVerseCore {
class MaskTarget;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class IMaskModifier;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::IMaskModifier*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::IMaskModifier*, "JBooth.MicroVerseCore", "IMaskModifier");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.IMaskModifier
class CORDL_TYPE IMaskModifier {
public:
// Declarations
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method ApplyMaskStamp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyMaskStamp(::JBooth::MicroVerseCore::MaskData*  maskData) ;

/// @brief Method GetTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::JBooth::MicroVerseCore::MaskTarget> GetTarget() ;

/// @brief Method NeedCurvatureMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedCurvatureMap() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IMaskModifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMaskModifier(IMaskModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17914};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JBooth::MicroVerseCore
