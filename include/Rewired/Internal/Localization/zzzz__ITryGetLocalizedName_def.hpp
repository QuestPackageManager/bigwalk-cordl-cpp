#pragma once
// IWYU pragma private; include "Rewired/Internal/Localization/ITryGetLocalizedName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITryGetLocalizedName)
// Forward declare root types
namespace Rewired::Internal::Localization {
class ITryGetLocalizedName;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::Localization::ITryGetLocalizedName*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::Localization::ITryGetLocalizedName*, "Rewired.Internal.Localization", "ITryGetLocalizedName");
// Dependencies 
namespace Rewired::Internal::Localization {
// Is value type: false
// CS Name: Rewired.Internal.Localization.ITryGetLocalizedName
class CORDL_TYPE ITryGetLocalizedName {
public:
// Declarations
/// @brief Method TryGetLocalizedName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetLocalizedName(::by_ref<::StringW>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ITryGetLocalizedName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITryGetLocalizedName(ITryGetLocalizedName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2826};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Internal::Localization
