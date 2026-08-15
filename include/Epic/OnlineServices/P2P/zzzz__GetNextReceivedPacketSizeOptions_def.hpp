#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/GetNextReceivedPacketSizeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetNextReceivedPacketSizeOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct GetNextReceivedPacketSizeOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions, "Epic.OnlineServices.P2P", "GetNextReceivedPacketSizeOptions");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.GetNextReceivedPacketSizeOptions
struct CORDL_TYPE GetNextReceivedPacketSizeOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_RequestedChannel, put=set_RequestedChannel)) ::System::Nullable_1<uint8_t>  RequestedChannel;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_RequestedChannel, addr 0x18052e970, size 0x50, virtual false, abstract: false, final false
inline ::System::Nullable_1<uint8_t> get_RequestedChannel() ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_RequestedChannel, addr 0x18052e9c0, size 0x150, virtual false, abstract: false, final false
inline void set_RequestedChannel(::System::Nullable_1<uint8_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GetNextReceivedPacketSizeOptions() ;

// Ctor Parameters [CppParam { name: "m_RequestedChannel", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr GetNextReceivedPacketSizeOptions(::ArrayW<uint8_t>  m_RequestedChannel, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_RequestedChannel, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_RequestedChannel;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions, m_RequestedChannel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
