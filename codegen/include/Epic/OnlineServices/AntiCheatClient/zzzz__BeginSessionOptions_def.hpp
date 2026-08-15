#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/BeginSessionOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientMode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BeginSessionOptions)
namespace Epic::OnlineServices::AntiCheatClient {
struct AntiCheatClientMode;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct BeginSessionOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions, "Epic.OnlineServices.AntiCheatClient", "BeginSessionOptions");
// Dependencies Epic.OnlineServices.AntiCheatClient.AntiCheatClientMode
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.BeginSessionOptions
struct CORDL_TYPE BeginSessionOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_Mode, put=set_Mode)) ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode  Mode;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_Mode, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode get_Mode() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_Mode, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Mode(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BeginSessionOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Mode_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode", modifiers: "", def_value: None }]
constexpr BeginSessionOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode  _Mode_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9407};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <Mode>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode  _Mode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions, _Mode_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
