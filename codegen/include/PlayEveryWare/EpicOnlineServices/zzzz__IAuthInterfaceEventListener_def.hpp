#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IAuthInterfaceEventListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAuthInterfaceEventListener)
namespace PlayEveryWare::EpicOnlineServices {
class IEOSOnAuthLogin;
}
namespace PlayEveryWare::EpicOnlineServices {
class IEOSOnAuthLogout;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class IAuthInterfaceEventListener;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener*, "PlayEveryWare.EpicOnlineServices", "IAuthInterfaceEventListener");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.IAuthInterfaceEventListener
class CORDL_TYPE IAuthInterfaceEventListener {
public:
// Declarations
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*() noexcept;

/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*() noexcept;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin* i___PlayEveryWare__EpicOnlineServices__IEOSOnAuthLogin() noexcept;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout* i___PlayEveryWare__EpicOnlineServices__IEOSOnAuthLogout() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAuthInterfaceEventListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAuthInterfaceEventListener(IAuthInterfaceEventListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18895};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
