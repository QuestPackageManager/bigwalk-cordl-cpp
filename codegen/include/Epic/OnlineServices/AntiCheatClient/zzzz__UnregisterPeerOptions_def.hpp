#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/UnregisterPeerOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnregisterPeerOptions)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct UnregisterPeerOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions, "Epic.OnlineServices.AntiCheatClient", "UnregisterPeerOptions");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.UnregisterPeerOptions
struct CORDL_TYPE UnregisterPeerOptions {
public:
// Declarations
 __declspec(property(get=get_PeerHandle, put=set_PeerHandle)) ::System::IntPtr  PeerHandle;

/// @brief Method get_PeerHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_PeerHandle() ;

/// @brief Method set_PeerHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_PeerHandle(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnregisterPeerOptions() ;

// Ctor Parameters [CppParam { name: "_PeerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr UnregisterPeerOptions(::System::IntPtr  _PeerHandle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9450};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <PeerHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _PeerHandle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions, _PeerHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
