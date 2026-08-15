#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/UserLoginInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UserLoginInfo)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct UserLoginInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::UserLoginInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::UserLoginInfo, "Epic.OnlineServices.Connect", "UserLoginInfo");
// Dependencies 
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.UserLoginInfo
struct CORDL_TYPE UserLoginInfo {
public:
// Declarations
 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::Epic::OnlineServices::Utf8String*  DisplayName;

 __declspec(property(get=get_NsaIdToken, put=set_NsaIdToken)) ::Epic::OnlineServices::Utf8String*  NsaIdToken;

/// @brief Method get_DisplayName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DisplayName() ;

/// @brief Method get_NsaIdToken, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_NsaIdToken() ;

/// @brief Method set_DisplayName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_DisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_NsaIdToken, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_NsaIdToken(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UserLoginInfo() ;

// Ctor Parameters [CppParam { name: "_DisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_NsaIdToken_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr UserLoginInfo(::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _NsaIdToken_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9217};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <DisplayName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField;

/// @brief Field <NsaIdToken>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _NsaIdToken_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::UserLoginInfo, _DisplayName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::UserLoginInfo, _NsaIdToken_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::UserLoginInfo) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
