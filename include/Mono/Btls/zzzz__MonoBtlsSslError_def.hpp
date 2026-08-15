#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsSslError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsSslError)
// Forward declare root types
namespace Mono::Btls {
struct MonoBtlsSslError;
}
// Write type traits
MARK_VAL_T(::Mono::Btls::MonoBtlsSslError);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSslError, "Mono.Btls", "MonoBtlsSslError");
// Dependencies 
namespace Mono::Btls {
// Is value type: true
// CS Name: Mono.Btls.MonoBtlsSslError
struct CORDL_TYPE MonoBtlsSslError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonoBtlsSslError_Unwrapped
enum struct __MonoBtlsSslError_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Ssl = static_cast<int32_t>(0x1),
__E_WantRead = static_cast<int32_t>(0x2),
__E_WantWrite = static_cast<int32_t>(0x3),
__E_WantX509Lookup = static_cast<int32_t>(0x4),
__E_Syscall = static_cast<int32_t>(0x5),
__E_ZeroReturn = static_cast<int32_t>(0x6),
__E_WantConnect = static_cast<int32_t>(0x7),
__E_WantAccept = static_cast<int32_t>(0x8),
__E_WantChannelIdLookup = static_cast<int32_t>(0x9),
__E_PendingSession = static_cast<int32_t>(0xb),
__E_PendingCertificate = static_cast<int32_t>(0xc),
__E_WantPrivateKeyOperation = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoBtlsSslError_Unwrapped () const noexcept {
return static_cast<__MonoBtlsSslError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSslError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoBtlsSslError(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Mono::Btls::MonoBtlsSslError const None;

/// @brief Field PendingCertificate value: I32(12)
static ::Mono::Btls::MonoBtlsSslError const PendingCertificate;

/// @brief Field PendingSession value: I32(11)
static ::Mono::Btls::MonoBtlsSslError const PendingSession;

/// @brief Field Ssl value: I32(1)
static ::Mono::Btls::MonoBtlsSslError const Ssl;

/// @brief Field Syscall value: I32(5)
static ::Mono::Btls::MonoBtlsSslError const Syscall;

/// @brief Field WantAccept value: I32(8)
static ::Mono::Btls::MonoBtlsSslError const WantAccept;

/// @brief Field WantChannelIdLookup value: I32(9)
static ::Mono::Btls::MonoBtlsSslError const WantChannelIdLookup;

/// @brief Field WantConnect value: I32(7)
static ::Mono::Btls::MonoBtlsSslError const WantConnect;

/// @brief Field WantPrivateKeyOperation value: I32(13)
static ::Mono::Btls::MonoBtlsSslError const WantPrivateKeyOperation;

/// @brief Field WantRead value: I32(2)
static ::Mono::Btls::MonoBtlsSslError const WantRead;

/// @brief Field WantWrite value: I32(3)
static ::Mono::Btls::MonoBtlsSslError const WantWrite;

/// @brief Field WantX509Lookup value: I32(4)
static ::Mono::Btls::MonoBtlsSslError const WantX509Lookup;

/// @brief Field ZeroReturn value: I32(6)
static ::Mono::Btls::MonoBtlsSslError const ZeroReturn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsSslError, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsSslError) == 0x4, "Size mismatch!");

} // namespace end def Mono::Btls
