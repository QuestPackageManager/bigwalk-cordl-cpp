#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/BeginSessionOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeginSessionOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatServer {
struct BeginSessionOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions, "Epic.OnlineServices.AntiCheatServer", "BeginSessionOptions");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatServer {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatServer.BeginSessionOptions
struct CORDL_TYPE BeginSessionOptions {
public:
// Declarations
 __declspec(property(get=get_EnableGameplayData, put=set_EnableGameplayData)) bool  EnableGameplayData;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_RegisterTimeoutSeconds, put=set_RegisterTimeoutSeconds)) uint32_t  RegisterTimeoutSeconds;

 __declspec(property(get=get_ServerName, put=set_ServerName)) ::Epic::OnlineServices::Utf8String*  ServerName;

/// @brief Method get_EnableGameplayData, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_EnableGameplayData() ;

/// @brief Method get_LocalUserId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_RegisterTimeoutSeconds, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_RegisterTimeoutSeconds() ;

/// @brief Method get_ServerName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ServerName() ;

/// @brief Method set_EnableGameplayData, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_EnableGameplayData(bool  value) ;

/// @brief Method set_LocalUserId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_RegisterTimeoutSeconds, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_RegisterTimeoutSeconds(uint32_t  value) ;

/// @brief Method set_ServerName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ServerName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BeginSessionOptions() ;

// Ctor Parameters [CppParam { name: "_RegisterTimeoutSeconds_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_ServerName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_EnableGameplayData_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr BeginSessionOptions(uint32_t  _RegisterTimeoutSeconds_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ServerName_k__BackingField, bool  _EnableGameplayData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9306};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <RegisterTimeoutSeconds>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _RegisterTimeoutSeconds_k__BackingField;

/// @brief Field <ServerName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ServerName_k__BackingField;

/// @brief Field <EnableGameplayData>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  _EnableGameplayData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions, _RegisterTimeoutSeconds_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions, _ServerName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions, _EnableGameplayData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions, _LocalUserId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatServer
