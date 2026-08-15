#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/PollStatusOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PollStatusOptions)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct PollStatusOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::PollStatusOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::PollStatusOptions, "Epic.OnlineServices.AntiCheatClient", "PollStatusOptions");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.PollStatusOptions
struct CORDL_TYPE PollStatusOptions {
public:
// Declarations
 __declspec(property(get=get_OutMessageLength, put=set_OutMessageLength)) uint32_t  OutMessageLength;

/// @brief Method get_OutMessageLength, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_OutMessageLength() ;

/// @brief Method set_OutMessageLength, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_OutMessageLength(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PollStatusOptions() ;

// Ctor Parameters [CppParam { name: "_OutMessageLength_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PollStatusOptions(uint32_t  _OutMessageLength_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <OutMessageLength>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _OutMessageLength_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::PollStatusOptions, _OutMessageLength_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::PollStatusOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
