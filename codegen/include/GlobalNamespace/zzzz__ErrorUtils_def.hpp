#pragma once
// IWYU pragma private; include "GlobalNamespace/ErrorUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorUtils)
namespace GlobalNamespace {
struct ErrorUtils_ErrorType;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct ErrorUtils_ErrorType;
}
namespace GlobalNamespace {
class ErrorUtils;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ErrorUtils_ErrorType);
MARK_REF_T(::GlobalNamespace::ErrorUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ErrorUtils_ErrorType, "", "ErrorUtils/ErrorType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ErrorUtils*, "", "ErrorUtils");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ErrorUtils/ErrorType
struct CORDL_TYPE ErrorUtils_ErrorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ErrorUtils_ErrorType_Unwrapped
enum struct __ErrorUtils_ErrorType_Unwrapped : int32_t {
__E_NotSet = static_cast<int32_t>(0x0),
__E_NoConnectWrongPassword = static_cast<int32_t>(0x1),
__E_NoConnectVersionMismatch = static_cast<int32_t>(0x2),
__E_NoConnectTimeout = static_cast<int32_t>(0x3),
__E_NoConnectSessionClosedDueToGameplay = static_cast<int32_t>(0x4),
__E_NoConnectCrossPlay = static_cast<int32_t>(0x5),
__E_Authenticate = static_cast<int32_t>(0x6),
__E_NoConnectServerFull = static_cast<int32_t>(0x7),
__E_NoConnectSessionNotFound = static_cast<int32_t>(0x8),
__E_Hosting = static_cast<int32_t>(0x9),
__E_Offline = static_cast<int32_t>(0xa),
__E_DisconnectedPlayerKickedByHost = static_cast<int32_t>(0xb),
__E_LobbyJoinFailed = static_cast<int32_t>(0xc),
__E_DisconnectedHostEndedSession = static_cast<int32_t>(0xd),
__E_DisconnectedLostConnectionToHost = static_cast<int32_t>(0xe),
__E_StoppedHostSessionExpired = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ErrorUtils_ErrorType_Unwrapped () const noexcept {
return static_cast<__ErrorUtils_ErrorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ErrorUtils_ErrorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ErrorUtils_ErrorType(int32_t  value__) noexcept;

/// @brief Field Authenticate value: I32(6)
static ::GlobalNamespace::ErrorUtils_ErrorType const Authenticate;

/// @brief Field DisconnectedHostEndedSession value: I32(13)
static ::GlobalNamespace::ErrorUtils_ErrorType const DisconnectedHostEndedSession;

/// @brief Field DisconnectedLostConnectionToHost value: I32(14)
static ::GlobalNamespace::ErrorUtils_ErrorType const DisconnectedLostConnectionToHost;

/// @brief Field DisconnectedPlayerKickedByHost value: I32(11)
static ::GlobalNamespace::ErrorUtils_ErrorType const DisconnectedPlayerKickedByHost;

/// @brief Field Hosting value: I32(9)
static ::GlobalNamespace::ErrorUtils_ErrorType const Hosting;

/// @brief Field LobbyJoinFailed value: I32(12)
static ::GlobalNamespace::ErrorUtils_ErrorType const LobbyJoinFailed;

/// @brief Field NoConnectCrossPlay value: I32(5)
static ::GlobalNamespace::ErrorUtils_ErrorType const NoConnectCrossPlay;

/// @brief Field NoConnectServerFull value: I32(7)
static ::GlobalNamespace::ErrorUtils_ErrorType const NoConnectServerFull;

/// @brief Field NoConnectSessionClosedDueToGameplay value: I32(4)
static ::GlobalNamespace::ErrorUtils_ErrorType const NoConnectSessionClosedDueToGameplay;

/// @brief Field NoConnectSessionNotFound value: I32(8)
static ::GlobalNamespace::ErrorUtils_ErrorType const NoConnectSessionNotFound;

/// @brief Field NoConnectTimeout value: I32(3)
static ::GlobalNamespace::ErrorUtils_ErrorType const NoConnectTimeout;

/// @brief Field NoConnectVersionMismatch value: I32(2)
static ::GlobalNamespace::ErrorUtils_ErrorType const NoConnectVersionMismatch;

/// @brief Field NoConnectWrongPassword value: I32(1)
static ::GlobalNamespace::ErrorUtils_ErrorType const NoConnectWrongPassword;

/// @brief Field NotSet value: I32(0)
static ::GlobalNamespace::ErrorUtils_ErrorType const NotSet;

/// @brief Field Offline value: I32(10)
static ::GlobalNamespace::ErrorUtils_ErrorType const Offline;

/// @brief Field StoppedHostSessionExpired value: I32(15)
static ::GlobalNamespace::ErrorUtils_ErrorType const StoppedHostSessionExpired;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21037};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ErrorUtils_ErrorType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ErrorUtils_ErrorType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ErrorUtils
class CORDL_TYPE ErrorUtils : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ErrorType = ::GlobalNamespace::ErrorUtils_ErrorType;

/// @brief Method GetErrorKeys, addr 0x181acb5d0, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::StringW,::StringW> GetErrorKeys(::GlobalNamespace::ErrorUtils_ErrorType  error) ;

static inline ::GlobalNamespace::ErrorUtils* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorUtils(ErrorUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorUtils(ErrorUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21038};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ErrorUtils) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
