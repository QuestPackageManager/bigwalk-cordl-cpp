#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/Win32_FIXED_INFO_Marshal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__NetBiosNodeType_def.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32_IP_ADDR_STRING_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Win32_FIXED_INFO_Marshal)
namespace System::Net::NetworkInformation {
struct Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer;
}
namespace System::Net::NetworkInformation {
struct Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer;
}
namespace System::Net::NetworkInformation {
struct Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
struct Win32_FIXED_INFO_Marshal;
}
namespace System::Net::NetworkInformation {
struct Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer;
}
namespace System::Net::NetworkInformation {
struct Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer;
}
namespace System::Net::NetworkInformation {
struct Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal);
MARK_VAL_T(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer);
MARK_VAL_T(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer);
MARK_VAL_T(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal, "System.Net.NetworkInformation", "Win32_FIXED_INFO_Marshal");
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer, "System.Net.NetworkInformation", "Win32_FIXED_INFO_Marshal/<DomainName>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer, "System.Net.NetworkInformation", "Win32_FIXED_INFO_Marshal/<HostName>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer, "System.Net.NetworkInformation", "Win32_FIXED_INFO_Marshal/<ScopeId>e__FixedBuffer");
// Dependencies 
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.Win32_FIXED_INFO_Marshal/<HostName>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12065};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x84};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x84 - 0x1 = 0x83, packed as 0x83
 uint8_t  _cordl_size_padding[0x83];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer) == 0x84, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
// Dependencies 
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.Win32_FIXED_INFO_Marshal/<DomainName>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12066};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x84};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x84 - 0x1 = 0x83, packed as 0x83
 uint8_t  _cordl_size_padding[0x83];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer) == 0x84, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
// Dependencies 
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.Win32_FIXED_INFO_Marshal/<ScopeId>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x104};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x104 - 0x1 = 0x103, packed as 0x103
 uint8_t  _cordl_size_padding[0x103];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer) == 0x104, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
// Dependencies System.IntPtr, System.Net.NetworkInformation.NetBiosNodeType, System.Net.NetworkInformation.Win32_FIXED_INFO_Marshal::<DomainName>e__FixedBuffer, System.Net.NetworkInformation.Win32_FIXED_INFO_Marshal::<HostName>e__FixedBuffer, System.Net.NetworkInformation.Win32_FIXED_INFO_Marshal::<ScopeId>e__FixedBuffer, System.Net.NetworkInformation.Win32_IP_ADDR_STRING
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.Win32_FIXED_INFO_Marshal
struct CORDL_TYPE Win32_FIXED_INFO_Marshal {
public:
// Declarations
using _DomainName_e__FixedBuffer = ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer;

using _HostName_e__FixedBuffer = ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer;

using _ScopeId_e__FixedBuffer = ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr Win32_FIXED_INFO_Marshal() ;

// Ctor Parameters [CppParam { name: "HostName", ty: "::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "DomainName", ty: "::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "CurrentDnsServer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "DnsServerList", ty: "::System::Net::NetworkInformation::Win32_IP_ADDR_STRING", modifiers: "", def_value: None }, CppParam { name: "NodeType", ty: "::System::Net::NetworkInformation::NetBiosNodeType", modifiers: "", def_value: None }, CppParam { name: "ScopeId", ty: "::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "EnableRouting", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "EnableProxy", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "EnableDns", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Win32_FIXED_INFO_Marshal(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer  HostName, ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer  DomainName, ::System::IntPtr  CurrentDnsServer, ::System::Net::NetworkInformation::Win32_IP_ADDR_STRING  DnsServerList, ::System::Net::NetworkInformation::NetBiosNodeType  NodeType, ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer  ScopeId, uint32_t  EnableRouting, uint32_t  EnableProxy, uint32_t  EnableDns) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12068};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x248};

/// @brief Field HostName, offset: 0x0, size: 0x84, def value: None
 ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer  HostName;

/// @brief Field DomainName, offset: 0x84, size: 0x84, def value: None
 ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer  DomainName;

/// @brief Field CurrentDnsServer, offset: 0x108, size: 0x8, def value: None
 ::System::IntPtr  CurrentDnsServer;

/// @brief Field DnsServerList, offset: 0x110, size: 0x20, def value: None
 ::System::Net::NetworkInformation::Win32_IP_ADDR_STRING  DnsServerList;

/// @brief Field NodeType, offset: 0x130, size: 0x4, def value: None
 ::System::Net::NetworkInformation::NetBiosNodeType  NodeType;

/// @brief Field ScopeId, offset: 0x134, size: 0x104, def value: None
 ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer  ScopeId;

/// @brief Field EnableRouting, offset: 0x238, size: 0x4, def value: None
 uint32_t  EnableRouting;

/// @brief Field EnableProxy, offset: 0x23c, size: 0x4, def value: None
 uint32_t  EnableProxy;

/// @brief Field EnableDns, offset: 0x240, size: 0x4, def value: None
 uint32_t  EnableDns;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal, HostName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal, DomainName) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal, CurrentDnsServer) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal, DnsServerList) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal, NodeType) == 0x130, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal, ScopeId) == 0x134, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal, EnableRouting) == 0x238, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal, EnableProxy) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal, EnableDns) == 0x240, "Offset mismatch!");

static_assert(sizeof(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal) == 0x248, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
