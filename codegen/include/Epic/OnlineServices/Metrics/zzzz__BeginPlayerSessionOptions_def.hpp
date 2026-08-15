#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/BeginPlayerSessionOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptionsAccountId_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__UserControllerType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BeginPlayerSessionOptions)
namespace Epic::OnlineServices::Metrics {
struct BeginPlayerSessionOptionsAccountId;
}
namespace Epic::OnlineServices::Metrics {
struct UserControllerType;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Metrics {
struct BeginPlayerSessionOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions, "Epic.OnlineServices.Metrics", "BeginPlayerSessionOptions");
// Dependencies Epic.OnlineServices.Metrics.BeginPlayerSessionOptionsAccountId, Epic.OnlineServices.Metrics.UserControllerType
namespace Epic::OnlineServices::Metrics {
// Is value type: true
// CS Name: Epic.OnlineServices.Metrics.BeginPlayerSessionOptions
struct CORDL_TYPE BeginPlayerSessionOptions {
public:
// Declarations
 __declspec(property(get=get_AccountId, put=set_AccountId)) ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId  AccountId;

 __declspec(property(get=get_ControllerType, put=set_ControllerType)) ::Epic::OnlineServices::Metrics::UserControllerType  ControllerType;

 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::Epic::OnlineServices::Utf8String*  DisplayName;

 __declspec(property(get=get_GameSessionId, put=set_GameSessionId)) ::Epic::OnlineServices::Utf8String*  GameSessionId;

 __declspec(property(get=get_ServerIp, put=set_ServerIp)) ::Epic::OnlineServices::Utf8String*  ServerIp;

/// @brief Method get_AccountId, addr 0x180503ad0, size 0x20, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId get_AccountId() ;

/// @brief Method get_ControllerType, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Metrics::UserControllerType get_ControllerType() ;

/// @brief Method get_DisplayName, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DisplayName() ;

/// @brief Method get_GameSessionId, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_GameSessionId() ;

/// @brief Method get_ServerIp, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ServerIp() ;

/// @brief Method set_AccountId, addr 0x180503af0, size 0x20, virtual false, abstract: false, final false
inline void set_AccountId(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId  value) ;

/// @brief Method set_ControllerType, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_ControllerType(::Epic::OnlineServices::Metrics::UserControllerType  value) ;

/// @brief Method set_DisplayName, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_DisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_GameSessionId, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_GameSessionId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ServerIp, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_ServerIp(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BeginPlayerSessionOptions() ;

// Ctor Parameters [CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId", modifiers: "", def_value: None }, CppParam { name: "_DisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ControllerType_k__BackingField", ty: "::Epic::OnlineServices::Metrics::UserControllerType", modifiers: "", def_value: None }, CppParam { name: "_ServerIp_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_GameSessionId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr BeginPlayerSessionOptions(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId  _AccountId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField, ::Epic::OnlineServices::Metrics::UserControllerType  _ControllerType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ServerIp_k__BackingField, ::Epic::OnlineServices::Utf8String*  _GameSessionId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8406};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <AccountId>k__BackingField, offset: 0x0, size: 0x18, def value: None
 ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId  _AccountId_k__BackingField;

/// @brief Field <DisplayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField;

/// @brief Field <ControllerType>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::Epic::OnlineServices::Metrics::UserControllerType  _ControllerType_k__BackingField;

/// @brief Field <ServerIp>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ServerIp_k__BackingField;

/// @brief Field <GameSessionId>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _GameSessionId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions, _AccountId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions, _DisplayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions, _ControllerType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions, _ServerIp_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions, _GameSessionId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Metrics
