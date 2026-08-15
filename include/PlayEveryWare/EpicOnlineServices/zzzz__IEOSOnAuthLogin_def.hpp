#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IEOSOnAuthLogin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEOSOnAuthLogin)
namespace Epic::OnlineServices::Auth {
struct LoginCallbackInfo;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class IEOSOnAuthLogin;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*, "PlayEveryWare.EpicOnlineServices", "IEOSOnAuthLogin");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.IEOSOnAuthLogin
class CORDL_TYPE IEOSOnAuthLogin {
public:
// Declarations
/// @brief Method OnAuthLogin, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAuthLogin(::Epic::OnlineServices::Auth::LoginCallbackInfo  loginCallbackInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "IEOSOnAuthLogin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEOSOnAuthLogin(IEOSOnAuthLogin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18898};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
