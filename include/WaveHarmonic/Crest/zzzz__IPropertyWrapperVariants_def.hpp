#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IPropertyWrapperVariants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPropertyWrapperVariants)
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace WaveHarmonic::Crest {
class IPropertyWrapper;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class IPropertyWrapperVariants;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::IPropertyWrapperVariants*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::IPropertyWrapperVariants*, "WaveHarmonic.Crest", "IPropertyWrapperVariants");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.IPropertyWrapperVariants
class CORDL_TYPE IPropertyWrapperVariants {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapper*() noexcept;

/// @brief Method SetKeyword, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* i___WaveHarmonic__Crest__IPropertyWrapper() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPropertyWrapperVariants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPropertyWrapperVariants(IPropertyWrapperVariants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
