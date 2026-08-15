#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchSetMaxResultsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionSearchSetMaxResultsOptions)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionSearchSetMaxResultsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions, "Epic.OnlineServices.Sessions", "SessionSearchSetMaxResultsOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionSearchSetMaxResultsOptions
struct CORDL_TYPE SessionSearchSetMaxResultsOptions {
public:
// Declarations
 __declspec(property(get=get_MaxSearchResults, put=set_MaxSearchResults)) uint32_t  MaxSearchResults;

/// @brief Method get_MaxSearchResults, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_MaxSearchResults() ;

/// @brief Method set_MaxSearchResults, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_MaxSearchResults(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionSearchSetMaxResultsOptions() ;

// Ctor Parameters [CppParam { name: "_MaxSearchResults_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SessionSearchSetMaxResultsOptions(uint32_t  _MaxSearchResults_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7849};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <MaxSearchResults>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _MaxSearchResults_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions, _MaxSearchResults_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
