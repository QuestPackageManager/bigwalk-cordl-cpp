#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IEOSOnAuthLogout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEOSOnAuthLogout)
namespace Epic::OnlineServices::Auth {
struct LogoutCallbackInfo;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class IEOSOnAuthLogout;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*, "PlayEveryWare.EpicOnlineServices", "IEOSOnAuthLogout");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.IEOSOnAuthLogout
class CORDL_TYPE IEOSOnAuthLogout {
public:
// Declarations
/// @brief Method OnAuthLogout, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAuthLogout(::Epic::OnlineServices::Auth::LogoutCallbackInfo  logoutCallbackInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "IEOSOnAuthLogout", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEOSOnAuthLogout(IEOSOnAuthLogout const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18899};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
