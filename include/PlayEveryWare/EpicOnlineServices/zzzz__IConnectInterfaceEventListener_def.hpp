#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IConnectInterfaceEventListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConnectInterfaceEventListener)
namespace PlayEveryWare::EpicOnlineServices {
class IEOSOnConnectLogin;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class IConnectInterfaceEventListener;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener*, "PlayEveryWare.EpicOnlineServices", "IConnectInterfaceEventListener");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.IConnectInterfaceEventListener
class CORDL_TYPE IConnectInterfaceEventListener {
public:
// Declarations
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*() noexcept;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin* i___PlayEveryWare__EpicOnlineServices__IEOSOnConnectLogin() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IConnectInterfaceEventListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConnectInterfaceEventListener(IConnectInterfaceEventListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18896};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
