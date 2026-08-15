#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/ActiveSessionGetRegisteredPlayerByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveSessionGetRegisteredPlayerByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionGetRegisteredPlayerByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions, "Epic.OnlineServices.Sessions", "ActiveSessionGetRegisteredPlayerByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.ActiveSessionGetRegisteredPlayerByIndexOptions
struct CORDL_TYPE ActiveSessionGetRegisteredPlayerByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_PlayerIndex, put=set_PlayerIndex)) uint32_t  PlayerIndex;

/// @brief Method get_PlayerIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_PlayerIndex() ;

/// @brief Method set_PlayerIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ActiveSessionGetRegisteredPlayerByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_PlayerIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ActiveSessionGetRegisteredPlayerByIndexOptions(uint32_t  _PlayerIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7668};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <PlayerIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _PlayerIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions, _PlayerIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
