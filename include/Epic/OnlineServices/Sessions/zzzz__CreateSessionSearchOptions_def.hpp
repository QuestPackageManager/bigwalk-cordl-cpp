#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CreateSessionSearchOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateSessionSearchOptions)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct CreateSessionSearchOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::CreateSessionSearchOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::CreateSessionSearchOptions, "Epic.OnlineServices.Sessions", "CreateSessionSearchOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.CreateSessionSearchOptions
struct CORDL_TYPE CreateSessionSearchOptions {
public:
// Declarations
 __declspec(property(get=get_MaxSearchResults, put=set_MaxSearchResults)) uint32_t  MaxSearchResults;

/// @brief Method get_MaxSearchResults, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_MaxSearchResults() ;

/// @brief Method set_MaxSearchResults, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_MaxSearchResults(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateSessionSearchOptions() ;

// Ctor Parameters [CppParam { name: "_MaxSearchResults_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CreateSessionSearchOptions(uint32_t  _MaxSearchResults_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7700};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <MaxSearchResults>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _MaxSearchResults_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionSearchOptions, _MaxSearchResults_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::CreateSessionSearchOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
