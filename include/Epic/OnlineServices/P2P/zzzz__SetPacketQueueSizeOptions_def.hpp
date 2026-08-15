#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SetPacketQueueSizeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetPacketQueueSizeOptions)
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct SetPacketQueueSizeOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions, "Epic.OnlineServices.P2P", "SetPacketQueueSizeOptions");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.SetPacketQueueSizeOptions
struct CORDL_TYPE SetPacketQueueSizeOptions {
public:
// Declarations
 __declspec(property(get=get_IncomingPacketQueueMaxSizeBytes, put=set_IncomingPacketQueueMaxSizeBytes)) uint64_t  IncomingPacketQueueMaxSizeBytes;

 __declspec(property(get=get_OutgoingPacketQueueMaxSizeBytes, put=set_OutgoingPacketQueueMaxSizeBytes)) uint64_t  OutgoingPacketQueueMaxSizeBytes;

/// @brief Method get_IncomingPacketQueueMaxSizeBytes, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_IncomingPacketQueueMaxSizeBytes() ;

/// @brief Method get_OutgoingPacketQueueMaxSizeBytes, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_OutgoingPacketQueueMaxSizeBytes() ;

/// @brief Method set_IncomingPacketQueueMaxSizeBytes, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_IncomingPacketQueueMaxSizeBytes(uint64_t  value) ;

/// @brief Method set_OutgoingPacketQueueMaxSizeBytes, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_OutgoingPacketQueueMaxSizeBytes(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetPacketQueueSizeOptions() ;

// Ctor Parameters [CppParam { name: "_IncomingPacketQueueMaxSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_OutgoingPacketQueueMaxSizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr SetPacketQueueSizeOptions(uint64_t  _IncomingPacketQueueMaxSizeBytes_k__BackingField, uint64_t  _OutgoingPacketQueueMaxSizeBytes_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9596};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <IncomingPacketQueueMaxSizeBytes>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _IncomingPacketQueueMaxSizeBytes_k__BackingField;

/// @brief Field <OutgoingPacketQueueMaxSizeBytes>k__BackingField, offset: 0x8, size: 0x8, def value: None
 uint64_t  _OutgoingPacketQueueMaxSizeBytes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions, _IncomingPacketQueueMaxSizeBytes_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions, _OutgoingPacketQueueMaxSizeBytes_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
