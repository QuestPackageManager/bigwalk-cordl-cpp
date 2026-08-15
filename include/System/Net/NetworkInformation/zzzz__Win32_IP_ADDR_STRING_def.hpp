#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/Win32_IP_ADDR_STRING.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Win32_IP_ADDR_STRING)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct Win32_IP_ADDR_STRING;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::Win32_IP_ADDR_STRING);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::Win32_IP_ADDR_STRING, "System.Net.NetworkInformation", "Win32_IP_ADDR_STRING");
// Dependencies System.IntPtr
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct CORDL_TYPE Win32_IP_ADDR_STRING {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Win32_IP_ADDR_STRING() ;

// Ctor Parameters [CppParam { name: "Next", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "IpAddress", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "IpMask", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Context", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Win32_IP_ADDR_STRING(::System::IntPtr  Next, ::StringW  IpAddress, ::StringW  IpMask, uint32_t  Context) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12069};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Next, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  Next;

/// @brief Field IpAddress, offset: 0x8, size: 0x8, def value: None
 ::StringW  IpAddress;

/// @brief Field IpMask, offset: 0x10, size: 0x8, def value: None
 ::StringW  IpMask;

/// @brief Field Context, offset: 0x18, size: 0x4, def value: None
 uint32_t  Context;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::Win32_IP_ADDR_STRING, Next) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_IP_ADDR_STRING, IpAddress) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_IP_ADDR_STRING, IpMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_IP_ADDR_STRING, Context) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::NetworkInformation::Win32_IP_ADDR_STRING) == 0x20, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
