#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/Win32_FIXED_INFO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__NetBiosNodeType_def.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32_IP_ADDR_STRING_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Win32_FIXED_INFO)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct Win32_FIXED_INFO;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::Win32_FIXED_INFO);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::Win32_FIXED_INFO, "System.Net.NetworkInformation", "Win32_FIXED_INFO");
// Dependencies System.IntPtr, System.Net.NetworkInformation.NetBiosNodeType, System.Net.NetworkInformation.Win32_IP_ADDR_STRING
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.Win32_FIXED_INFO
struct CORDL_TYPE Win32_FIXED_INFO {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Win32_FIXED_INFO() ;

// Ctor Parameters [CppParam { name: "HostName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "DomainName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "CurrentDnsServer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "DnsServerList", ty: "::System::Net::NetworkInformation::Win32_IP_ADDR_STRING", modifiers: "", def_value: None }, CppParam { name: "NodeType", ty: "::System::Net::NetworkInformation::NetBiosNodeType", modifiers: "", def_value: None }, CppParam { name: "ScopeId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "EnableRouting", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "EnableProxy", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "EnableDns", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Win32_FIXED_INFO(::StringW  HostName, ::StringW  DomainName, ::System::IntPtr  CurrentDnsServer, ::System::Net::NetworkInformation::Win32_IP_ADDR_STRING  DnsServerList, ::System::Net::NetworkInformation::NetBiosNodeType  NodeType, ::StringW  ScopeId, uint32_t  EnableRouting, uint32_t  EnableProxy, uint32_t  EnableDns) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12064};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field HostName, offset: 0x0, size: 0x8, def value: None
 ::StringW  HostName;

/// @brief Field DomainName, offset: 0x8, size: 0x8, def value: None
 ::StringW  DomainName;

/// @brief Field CurrentDnsServer, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  CurrentDnsServer;

/// @brief Field DnsServerList, offset: 0x18, size: 0x20, def value: None
 ::System::Net::NetworkInformation::Win32_IP_ADDR_STRING  DnsServerList;

/// @brief Field NodeType, offset: 0x38, size: 0x4, def value: None
 ::System::Net::NetworkInformation::NetBiosNodeType  NodeType;

/// @brief Field ScopeId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ScopeId;

/// @brief Field EnableRouting, offset: 0x48, size: 0x4, def value: None
 uint32_t  EnableRouting;

/// @brief Field EnableProxy, offset: 0x4c, size: 0x4, def value: None
 uint32_t  EnableProxy;

/// @brief Field EnableDns, offset: 0x50, size: 0x4, def value: None
 uint32_t  EnableDns;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO, HostName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO, DomainName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO, CurrentDnsServer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO, DnsServerList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO, NodeType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO, ScopeId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO, EnableRouting) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO, EnableProxy) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO, EnableDns) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Net::NetworkInformation::Win32_FIXED_INFO) == 0x58, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
