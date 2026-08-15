#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/CopyBestDisplayNameWithPlatformOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyBestDisplayNameWithPlatformOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
struct CopyBestDisplayNameWithPlatformOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions, "Epic.OnlineServices.UserInfo", "CopyBestDisplayNameWithPlatformOptions");
// Dependencies 
namespace Epic::OnlineServices::UserInfo {
// Is value type: true
// CS Name: Epic.OnlineServices.UserInfo.CopyBestDisplayNameWithPlatformOptions
struct CORDL_TYPE CopyBestDisplayNameWithPlatformOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_TargetPlatformType, put=set_TargetPlatformType)) uint32_t  TargetPlatformType;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::EpicAccountId*  TargetUserId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_TargetPlatformType, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_TargetPlatformType() ;

/// @brief Method get_TargetUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_TargetUserId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_TargetPlatformType, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetPlatformType(uint32_t  value) ;

/// @brief Method set_TargetUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyBestDisplayNameWithPlatformOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_TargetPlatformType_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyBestDisplayNameWithPlatformOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _TargetUserId_k__BackingField, uint32_t  _TargetPlatformType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7461};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <TargetUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _TargetUserId_k__BackingField;

/// @brief Field <TargetPlatformType>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _TargetPlatformType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions, _TargetUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions, _TargetPlatformType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
