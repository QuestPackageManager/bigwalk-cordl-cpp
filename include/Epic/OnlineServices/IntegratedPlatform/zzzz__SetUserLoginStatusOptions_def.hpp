#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/SetUserLoginStatusOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SetUserLoginStatusOptions)
namespace Epic::OnlineServices {
struct LoginStatus;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct SetUserLoginStatusOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions, "Epic.OnlineServices.IntegratedPlatform", "SetUserLoginStatusOptions");
// Dependencies Epic.OnlineServices.LoginStatus
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.SetUserLoginStatusOptions
struct CORDL_TYPE SetUserLoginStatusOptions {
public:
// Declarations
 __declspec(property(get=get_CurrentLoginStatus, put=set_CurrentLoginStatus)) ::Epic::OnlineServices::LoginStatus  CurrentLoginStatus;

 __declspec(property(get=get_LocalPlatformUserId, put=set_LocalPlatformUserId)) ::Epic::OnlineServices::Utf8String*  LocalPlatformUserId;

 __declspec(property(get=get_PlatformType, put=set_PlatformType)) ::Epic::OnlineServices::Utf8String*  PlatformType;

/// @brief Method get_CurrentLoginStatus, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::LoginStatus get_CurrentLoginStatus() ;

/// @brief Method get_LocalPlatformUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LocalPlatformUserId() ;

/// @brief Method get_PlatformType, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_PlatformType() ;

/// @brief Method set_CurrentLoginStatus, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentLoginStatus(::Epic::OnlineServices::LoginStatus  value) ;

/// @brief Method set_LocalPlatformUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalPlatformUserId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_PlatformType, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_PlatformType(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetUserLoginStatusOptions() ;

// Ctor Parameters [CppParam { name: "_PlatformType_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LocalPlatformUserId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_CurrentLoginStatus_k__BackingField", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: None }]
constexpr SetUserLoginStatusOptions(::Epic::OnlineServices::Utf8String*  _PlatformType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LocalPlatformUserId_k__BackingField, ::Epic::OnlineServices::LoginStatus  _CurrentLoginStatus_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8819};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <PlatformType>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _PlatformType_k__BackingField;

/// @brief Field <LocalPlatformUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LocalPlatformUserId_k__BackingField;

/// @brief Field <CurrentLoginStatus>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::LoginStatus  _CurrentLoginStatus_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions, _PlatformType_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions, _LocalPlatformUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions, _CurrentLoginStatus_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
