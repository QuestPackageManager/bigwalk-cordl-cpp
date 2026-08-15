#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/Win32_FIXED_INFO_Marshal.hpp"
#include "System/Net/NetworkInformation/zzzz__NetBiosNodeType_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32_IP_ADDR_STRING_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32_FIXED_INFO_Marshal_def.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32_FIXED_INFO_Marshal_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer(uint8_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer(uint8_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer(uint8_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "HostName", ty: "::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "DomainName", ty: "::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "CurrentDnsServer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "DnsServerList", ty: "::System::Net::NetworkInformation::Win32_IP_ADDR_STRING", modifiers: "", def_value: Some("{}") }, CppParam { name: "NodeType", ty: "::System::Net::NetworkInformation::NetBiosNodeType", modifiers: "", def_value: Some("{}") }, CppParam { name: "ScopeId", ty: "::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "EnableRouting", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EnableProxy", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EnableDns", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal::Win32_FIXED_INFO_Marshal(::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__HostName_e__FixedBuffer  HostName, ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__DomainName_e__FixedBuffer  DomainName, ::System::IntPtr  CurrentDnsServer, ::System::Net::NetworkInformation::Win32_IP_ADDR_STRING  DnsServerList, ::System::Net::NetworkInformation::NetBiosNodeType  NodeType, ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal__ScopeId_e__FixedBuffer  ScopeId, uint32_t  EnableRouting, uint32_t  EnableProxy, uint32_t  EnableDns) noexcept  {
this->HostName = HostName;
this->DomainName = DomainName;
this->CurrentDnsServer = CurrentDnsServer;
this->DnsServerList = DnsServerList;
this->NodeType = NodeType;
this->ScopeId = ScopeId;
this->EnableRouting = EnableRouting;
this->EnableProxy = EnableProxy;
this->EnableDns = EnableDns;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal::Win32_FIXED_INFO_Marshal()   {
}
