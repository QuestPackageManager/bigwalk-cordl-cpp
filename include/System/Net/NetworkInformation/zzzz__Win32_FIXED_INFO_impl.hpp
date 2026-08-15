#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/Win32_FIXED_INFO.hpp"
#include "System/Net/NetworkInformation/zzzz__NetBiosNodeType_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32_IP_ADDR_STRING_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32_FIXED_INFO_def.hpp"
// Ctor Parameters [CppParam { name: "HostName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "DomainName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "CurrentDnsServer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "DnsServerList", ty: "::System::Net::NetworkInformation::Win32_IP_ADDR_STRING", modifiers: "", def_value: Some("{}") }, CppParam { name: "NodeType", ty: "::System::Net::NetworkInformation::NetBiosNodeType", modifiers: "", def_value: Some("{}") }, CppParam { name: "ScopeId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "EnableRouting", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EnableProxy", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EnableDns", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::Win32_FIXED_INFO::Win32_FIXED_INFO(::StringW  HostName, ::StringW  DomainName, ::System::IntPtr  CurrentDnsServer, ::System::Net::NetworkInformation::Win32_IP_ADDR_STRING  DnsServerList, ::System::Net::NetworkInformation::NetBiosNodeType  NodeType, ::StringW  ScopeId, uint32_t  EnableRouting, uint32_t  EnableProxy, uint32_t  EnableDns) noexcept  {
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
constexpr ::System::Net::NetworkInformation::Win32_FIXED_INFO::Win32_FIXED_INFO()   {
}
