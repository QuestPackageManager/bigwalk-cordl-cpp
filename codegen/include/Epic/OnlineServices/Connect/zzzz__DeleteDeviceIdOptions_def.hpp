#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/DeleteDeviceIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DeleteDeviceIdOptions)
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct DeleteDeviceIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::DeleteDeviceIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::DeleteDeviceIdOptions, "Epic.OnlineServices.Connect", "DeleteDeviceIdOptions");
// Dependencies 
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.DeleteDeviceIdOptions
#pragma pack(push, 0)
struct CORDL_TYPE DeleteDeviceIdOptions {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DeleteDeviceIdOptions() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9136};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Connect::DeleteDeviceIdOptions) == 0x1, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
