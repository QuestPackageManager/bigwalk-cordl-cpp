#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/CreatePlayerSanctionAppealOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sanctions/zzzz__SanctionAppealReason_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CreatePlayerSanctionAppealOptions)
namespace Epic::OnlineServices::Sanctions {
struct SanctionAppealReason;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sanctions {
struct CreatePlayerSanctionAppealOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions, "Epic.OnlineServices.Sanctions", "CreatePlayerSanctionAppealOptions");
// Dependencies Epic.OnlineServices.Sanctions.SanctionAppealReason
namespace Epic::OnlineServices::Sanctions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sanctions.CreatePlayerSanctionAppealOptions
struct CORDL_TYPE CreatePlayerSanctionAppealOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_Reason, put=set_Reason)) ::Epic::OnlineServices::Sanctions::SanctionAppealReason  Reason;

 __declspec(property(get=get_ReferenceId, put=set_ReferenceId)) ::Epic::OnlineServices::Utf8String*  ReferenceId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_Reason, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sanctions::SanctionAppealReason get_Reason() ;

/// @brief Method get_ReferenceId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ReferenceId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_Reason, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Reason(::Epic::OnlineServices::Sanctions::SanctionAppealReason  value) ;

/// @brief Method set_ReferenceId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ReferenceId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreatePlayerSanctionAppealOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Reason_k__BackingField", ty: "::Epic::OnlineServices::Sanctions::SanctionAppealReason", modifiers: "", def_value: None }, CppParam { name: "_ReferenceId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CreatePlayerSanctionAppealOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Sanctions::SanctionAppealReason  _Reason_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ReferenceId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7879};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <Reason>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::Sanctions::SanctionAppealReason  _Reason_k__BackingField;

/// @brief Field <ReferenceId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ReferenceId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions, _Reason_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions, _ReferenceId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sanctions
