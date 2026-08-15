#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/SetClientNetworkStateOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SetClientNetworkStateOptions)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatServer {
struct SetClientNetworkStateOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions, "Epic.OnlineServices.AntiCheatServer", "SetClientNetworkStateOptions");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatServer {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatServer.SetClientNetworkStateOptions
struct CORDL_TYPE SetClientNetworkStateOptions {
public:
// Declarations
 __declspec(property(get=get_ClientHandle, put=set_ClientHandle)) ::System::IntPtr  ClientHandle;

 __declspec(property(get=get_IsNetworkActive, put=set_IsNetworkActive)) bool  IsNetworkActive;

/// @brief Method get_ClientHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ClientHandle() ;

/// @brief Method get_IsNetworkActive, addr 0x1803bd9e0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNetworkActive() ;

/// @brief Method set_ClientHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_ClientHandle(::System::IntPtr  value) ;

/// @brief Method set_IsNetworkActive, addr 0x1803bda20, size 0x10, virtual false, abstract: false, final false
inline void set_IsNetworkActive(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetClientNetworkStateOptions() ;

// Ctor Parameters [CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_IsNetworkActive_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr SetClientNetworkStateOptions(::System::IntPtr  _ClientHandle_k__BackingField, bool  _IsNetworkActive_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <ClientHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _ClientHandle_k__BackingField;

/// @brief Field <IsNetworkActive>k__BackingField, offset: 0x8, size: 0x1, def value: None
 bool  _IsNetworkActive_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions, _ClientHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions, _IsNetworkActive_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatServer
