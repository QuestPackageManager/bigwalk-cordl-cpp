#pragma once
// IWYU pragma private; include "Mirror/Authenticators/DeviceAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkAuthenticator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DeviceAuthenticator)
namespace Mirror::Authenticators {
struct DeviceAuthenticator_AuthRequestMessage;
}
namespace Mirror::Authenticators {
struct DeviceAuthenticator_AuthResponseMessage;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror::Authenticators {
class DeviceAuthenticator;
}
namespace Mirror::Authenticators {
struct DeviceAuthenticator_AuthRequestMessage;
}
namespace Mirror::Authenticators {
struct DeviceAuthenticator_AuthResponseMessage;
}
// Write type traits
MARK_REF_T(::Mirror::Authenticators::DeviceAuthenticator*);
MARK_VAL_T(::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage);
MARK_VAL_T(::Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage);
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::DeviceAuthenticator*, "Mirror.Authenticators", "DeviceAuthenticator");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage, "Mirror.Authenticators", "DeviceAuthenticator/AuthRequestMessage");
DEFINE_IL2CPP_CLASS(::Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage, "Mirror.Authenticators", "DeviceAuthenticator/AuthResponseMessage");
// Dependencies 
namespace Mirror::Authenticators {
// Is value type: true
// CS Name: Mirror.Authenticators.DeviceAuthenticator/AuthRequestMessage
struct CORDL_TYPE DeviceAuthenticator_AuthRequestMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr DeviceAuthenticator_AuthRequestMessage() ;

// Ctor Parameters [CppParam { name: "clientDeviceID", ty: "::StringW", modifiers: "", def_value: None }]
constexpr DeviceAuthenticator_AuthRequestMessage(::StringW  clientDeviceID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21014};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field clientDeviceID, offset: 0x0, size: 0x8, def value: None
 ::StringW  clientDeviceID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage, clientDeviceID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage) == 0x8, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies 
namespace Mirror::Authenticators {
// Is value type: true
// CS Name: Mirror.Authenticators.DeviceAuthenticator/AuthResponseMessage
#pragma pack(push, 0)
struct CORDL_TYPE DeviceAuthenticator_AuthResponseMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr DeviceAuthenticator_AuthResponseMessage() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21015};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage) == 0x1, "Size mismatch!");

} // namespace end def Mirror::Authenticators
// Dependencies Mirror.NetworkAuthenticator
namespace Mirror::Authenticators {
// Is value type: false
// CS Name: Mirror.Authenticators.DeviceAuthenticator
class CORDL_TYPE DeviceAuthenticator : public ::Mirror::NetworkAuthenticator {
public:
// Declarations
using AuthRequestMessage = ::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage;

using AuthResponseMessage = ::Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage;

static inline ::Mirror::Authenticators::DeviceAuthenticator* New_ctor() ;

/// @brief Method OnAuthRequestMessage, addr 0x1815140d0, size 0xa0, virtual false, abstract: false, final false
inline void OnAuthRequestMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Authenticators::DeviceAuthenticator_AuthRequestMessage  msg) ;

/// @brief Method OnAuthResponseMessage, addr 0x181514170, size 0x30, virtual false, abstract: false, final false
inline void OnAuthResponseMessage(::Mirror::Authenticators::DeviceAuthenticator_AuthResponseMessage  msg) ;

/// @brief Method OnClientAuthenticate, addr 0x1815141a0, size 0xb0, virtual true, abstract: false, final false
inline void OnClientAuthenticate() ;

/// @brief Method OnServerAuthenticate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartClient, addr 0x181514250, size 0x50, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x1815142a0, size 0x50, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x1815142f0, size 0x10, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopServer, addr 0x181514300, size 0x10, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method .ctor, addr 0x1803c7e30, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeviceAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeviceAuthenticator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeviceAuthenticator(DeviceAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeviceAuthenticator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeviceAuthenticator(DeviceAuthenticator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21016};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Authenticators::DeviceAuthenticator) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Authenticators
