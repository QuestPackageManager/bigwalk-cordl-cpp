#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsCopySessionAttributeByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionDetailsCopySessionAttributeByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsCopySessionAttributeByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions, "Epic.OnlineServices.Sessions", "SessionDetailsCopySessionAttributeByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionDetailsCopySessionAttributeByIndexOptions
struct CORDL_TYPE SessionDetailsCopySessionAttributeByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_AttrIndex, put=set_AttrIndex)) uint32_t  AttrIndex;

/// @brief Method get_AttrIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_AttrIndex() ;

/// @brief Method set_AttrIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_AttrIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionDetailsCopySessionAttributeByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_AttrIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SessionDetailsCopySessionAttributeByIndexOptions(uint32_t  _AttrIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <AttrIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _AttrIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions, _AttrIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
