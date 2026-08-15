#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchCopySearchResultByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionSearchCopySearchResultByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionSearchCopySearchResultByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions, "Epic.OnlineServices.Sessions", "SessionSearchCopySearchResultByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionSearchCopySearchResultByIndexOptions
struct CORDL_TYPE SessionSearchCopySearchResultByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_SessionIndex, put=set_SessionIndex)) uint32_t  SessionIndex;

/// @brief Method get_SessionIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_SessionIndex() ;

/// @brief Method set_SessionIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_SessionIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionSearchCopySearchResultByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_SessionIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SessionSearchCopySearchResultByIndexOptions(uint32_t  _SessionIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7836};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <SessionIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _SessionIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions, _SessionIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
