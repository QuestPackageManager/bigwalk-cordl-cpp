#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/BestDisplayName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BestDisplayName)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
struct BestDisplayName;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UserInfo::BestDisplayName);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::BestDisplayName, "Epic.OnlineServices.UserInfo", "BestDisplayName");
// Dependencies 
namespace Epic::OnlineServices::UserInfo {
// Is value type: true
// CS Name: Epic.OnlineServices.UserInfo.BestDisplayName
struct CORDL_TYPE BestDisplayName {
public:
// Declarations
 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::Epic::OnlineServices::Utf8String*  DisplayName;

 __declspec(property(get=get_DisplayNameSanitized, put=set_DisplayNameSanitized)) ::Epic::OnlineServices::Utf8String*  DisplayNameSanitized;

 __declspec(property(get=get_Nickname, put=set_Nickname)) ::Epic::OnlineServices::Utf8String*  Nickname;

 __declspec(property(get=get_PlatformType, put=set_PlatformType)) uint32_t  PlatformType;

 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::EpicAccountId*  UserId;

/// @brief Method get_DisplayName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DisplayName() ;

/// @brief Method get_DisplayNameSanitized, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DisplayNameSanitized() ;

/// @brief Method get_Nickname, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Nickname() ;

/// @brief Method get_PlatformType, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_PlatformType() ;

/// @brief Method get_UserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_UserId() ;

/// @brief Method set_DisplayName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_DisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DisplayNameSanitized, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_DisplayNameSanitized(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Nickname, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_Nickname(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_PlatformType, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_PlatformType(uint32_t  value) ;

/// @brief Method set_UserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BestDisplayName() ;

// Ctor Parameters [CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_DisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DisplayNameSanitized_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Nickname_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_PlatformType_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BestDisplayName(::Epic::OnlineServices::EpicAccountId*  _UserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayNameSanitized_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Nickname_k__BackingField, uint32_t  _PlatformType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7457};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <UserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _UserId_k__BackingField;

/// @brief Field <DisplayName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField;

/// @brief Field <DisplayNameSanitized>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DisplayNameSanitized_k__BackingField;

/// @brief Field <Nickname>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Nickname_k__BackingField;

/// @brief Field <PlatformType>k__BackingField, offset: 0x20, size: 0x4, def value: None
 uint32_t  _PlatformType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayName, _UserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayName, _DisplayName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayName, _DisplayNameSanitized_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayName, _Nickname_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::BestDisplayName, _PlatformType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UserInfo::BestDisplayName) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
