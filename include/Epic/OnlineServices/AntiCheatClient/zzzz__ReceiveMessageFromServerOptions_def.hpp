#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/ReceiveMessageFromServerOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReceiveMessageFromServerOptions)
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct ReceiveMessageFromServerOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions, "Epic.OnlineServices.AntiCheatClient", "ReceiveMessageFromServerOptions");
// Dependencies System.ArraySegment`1<T>
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.ReceiveMessageFromServerOptions
struct CORDL_TYPE ReceiveMessageFromServerOptions {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::System::ArraySegment_1<uint8_t>  Data;

/// @brief Method get_Data, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_Data() ;

/// @brief Method set_Data, addr 0x180347400, size 0xc0, virtual false, abstract: false, final false
inline void set_Data(::System::ArraySegment_1<uint8_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReceiveMessageFromServerOptions() ;

// Ctor Parameters [CppParam { name: "_Data_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }]
constexpr ReceiveMessageFromServerOptions(::System::ArraySegment_1<uint8_t>  _Data_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Data>k__BackingField, offset: 0x0, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  _Data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions, _Data_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
