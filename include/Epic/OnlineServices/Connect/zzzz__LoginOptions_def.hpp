#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/LoginOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Connect/zzzz__Credentials_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__UserLoginInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoginOptions)
namespace Epic::OnlineServices::Connect {
struct Credentials;
}
namespace Epic::OnlineServices::Connect {
struct UserLoginInfo;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct LoginOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::LoginOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::LoginOptions, "Epic.OnlineServices.Connect", "LoginOptions");
// Dependencies Epic.OnlineServices.Connect.Credentials, Epic.OnlineServices.Connect.UserLoginInfo, System.Nullable`1<T>
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.LoginOptions
struct CORDL_TYPE LoginOptions {
public:
// Declarations
 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>  Credentials;

 __declspec(property(get=get_UserLoginInfo, put=set_UserLoginInfo)) ::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>  UserLoginInfo;

/// @brief Method get_Credentials, addr 0x180503ad0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials> get_Credentials() ;

/// @brief Method get_UserLoginInfo, addr 0x1804e66a0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo> get_UserLoginInfo() ;

/// @brief Method set_Credentials, addr 0x18051ea80, size 0x20, virtual false, abstract: false, final false
inline void set_Credentials(::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>  value) ;

/// @brief Method set_UserLoginInfo, addr 0x1804e66c0, size 0x20, virtual false, abstract: false, final false
inline void set_UserLoginInfo(::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LoginOptions() ;

// Ctor Parameters [CppParam { name: "_Credentials_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>", modifiers: "", def_value: None }, CppParam { name: "_UserLoginInfo_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>", modifiers: "", def_value: None }]
constexpr LoginOptions(::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>  _Credentials_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>  _UserLoginInfo_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9154};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <Credentials>k__BackingField, offset: 0x0, size: 0x18, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>  _Credentials_k__BackingField;

/// @brief Field <UserLoginInfo>k__BackingField, offset: 0x18, size: 0x18, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>  _UserLoginInfo_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::LoginOptions, _Credentials_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::LoginOptions, _UserLoginInfo_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::LoginOptions) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
