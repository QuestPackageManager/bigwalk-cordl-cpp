#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkMinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkMinder)
namespace GlobalNamespace {
struct NetworkMinder_HostTransportType;
}
namespace Mirror {
class NetworkManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkMinder_HostTransportType;
}
namespace GlobalNamespace {
class NetworkMinder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkMinder_HostTransportType);
MARK_REF_T(::GlobalNamespace::NetworkMinder*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkMinder_HostTransportType, "", "NetworkMinder/HostTransportType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkMinder*, "", "NetworkMinder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkMinder/HostTransportType
struct CORDL_TYPE NetworkMinder_HostTransportType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkMinder_HostTransportType_Unwrapped
enum struct __NetworkMinder_HostTransportType_Unwrapped : int32_t {
__E_Both = static_cast<int32_t>(0x0),
__E_Ip = static_cast<int32_t>(0x1),
__E_Steam = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkMinder_HostTransportType_Unwrapped () const noexcept {
return static_cast<__NetworkMinder_HostTransportType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkMinder_HostTransportType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkMinder_HostTransportType(int32_t  value__) noexcept;

/// @brief Field Both value: I32(0)
static ::GlobalNamespace::NetworkMinder_HostTransportType const Both;

/// @brief Field Ip value: I32(1)
static ::GlobalNamespace::NetworkMinder_HostTransportType const Ip;

/// @brief Field Steam value: I32(2)
static ::GlobalNamespace::NetworkMinder_HostTransportType const Steam;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5172};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkMinder_HostTransportType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkMinder_HostTransportType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies NetworkMinder::HostTransportType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkMinder
class CORDL_TYPE NetworkMinder : public ::System::Object {
public:
// Declarations
using HostTransportType = ::GlobalNamespace::NetworkMinder_HostTransportType;

/// @brief Field hasProcessedCommandLine, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasProcessedCommandLine, put=__cordl_internal_set_hasProcessedCommandLine)) bool  hasProcessedCommandLine;

/// @brief Field hostTransportType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_hostTransportType, put=__cordl_internal_set_hostTransportType)) ::GlobalNamespace::NetworkMinder_HostTransportType  hostTransportType;

 __declspec(property(get=get_networkManager)) ::UnityW<::Mirror::NetworkManager>  networkManager;

/// @brief Method CleanupTransport, addr 0x180425df0, size 0x2b0, virtual false, abstract: false, final false
static inline void CleanupTransport() ;

/// @brief Method ForceResetP2PInterface, addr 0x1804260a0, size 0x1a0, virtual false, abstract: false, final false
static inline void ForceResetP2PInterface() ;

/// @brief Method Initialize, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method JoinGame, addr 0x180426240, size 0xb0, virtual false, abstract: false, final false
static inline void JoinGame(::StringW  address) ;

static inline ::GlobalNamespace::NetworkMinder* New_ctor() ;

/// @brief Method ProcessSteamCommandLine, addr 0x1804262f0, size 0x90, virtual false, abstract: false, final false
inline void ProcessSteamCommandLine() ;

/// @brief Method SetHostTransport, addr 0x180426380, size 0x1a0, virtual false, abstract: false, final false
inline void SetHostTransport() ;

/// @brief Method SetLoadingMode, addr 0x180426520, size 0x10, virtual false, abstract: false, final false
static inline void SetLoadingMode() ;

/// @brief Method SetPlatformTransport, addr 0x180426380, size 0x1a0, virtual false, abstract: false, final false
static inline void SetPlatformTransport() ;

/// @brief Method SetServerPassword, addr 0x180426530, size 0x70, virtual false, abstract: false, final false
static inline void SetServerPassword(::StringW  password) ;

/// @brief Method SetStandalonePlatformTransport, addr 0x1804265a0, size 0x150, virtual false, abstract: false, final false
static inline void SetStandalonePlatformTransport(::StringW  address) ;

/// @brief Method SetToBothTransports, addr 0x1804266f0, size 0x190, virtual false, abstract: false, final false
static inline void SetToBothTransports() ;

/// @brief Method SetToEOSTransport, addr 0x180426880, size 0x130, virtual false, abstract: false, final false
static inline void SetToEOSTransport() ;

/// @brief Method SetToIpTransport, addr 0x1804269b0, size 0x130, virtual false, abstract: false, final false
static inline void SetToIpTransport() ;

/// @brief Method SetTransportAndConnect, addr 0x180426ae0, size 0x40, virtual false, abstract: false, final false
static inline void SetTransportAndConnect(::StringW  address) ;

/// @brief Method StartHost, addr 0x180426b20, size 0x340, virtual false, abstract: false, final false
static inline void StartHost() ;

constexpr bool const& __cordl_internal_get_hasProcessedCommandLine() const;

constexpr bool& __cordl_internal_get_hasProcessedCommandLine() ;

constexpr ::GlobalNamespace::NetworkMinder_HostTransportType const& __cordl_internal_get_hostTransportType() const;

constexpr ::GlobalNamespace::NetworkMinder_HostTransportType& __cordl_internal_get_hostTransportType() ;

constexpr void __cordl_internal_set_hasProcessedCommandLine(bool  value) ;

constexpr void __cordl_internal_set_hostTransportType(::GlobalNamespace::NetworkMinder_HostTransportType  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_networkManager, addr 0x180426e60, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::Mirror::NetworkManager> get_networkManager() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkMinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkMinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkMinder(NetworkMinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkMinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkMinder(NetworkMinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5173};

/// @brief Field hostTransportType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::NetworkMinder_HostTransportType  ___hostTransportType;

/// @brief Field hasProcessedCommandLine, offset: 0x14, size: 0x1, def value: None
 bool  ___hasProcessedCommandLine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkMinder, ___hostTransportType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMinder, ___hasProcessedCommandLine) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkMinder) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
