#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IEOSOnConnectLogin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEOSOnConnectLogin)
namespace Epic::OnlineServices::Connect {
struct LoginCallbackInfo;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class IEOSOnConnectLogin;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*, "PlayEveryWare.EpicOnlineServices", "IEOSOnConnectLogin");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.IEOSOnConnectLogin
class CORDL_TYPE IEOSOnConnectLogin {
public:
// Declarations
/// @brief Method OnConnectLogin, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnConnectLogin(::Epic::OnlineServices::Connect::LoginCallbackInfo  loginCallbackInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "IEOSOnConnectLogin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEOSOnConnectLogin(IEOSOnConnectLogin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18900};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
