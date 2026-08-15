#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/Win32_IP_ADDR_STRING.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32_IP_ADDR_STRING_def.hpp"
// Ctor Parameters [CppParam { name: "Next", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "IpAddress", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "IpMask", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Context", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::Win32_IP_ADDR_STRING::Win32_IP_ADDR_STRING(::System::IntPtr  Next, ::StringW  IpAddress, ::StringW  IpMask, uint32_t  Context) noexcept  {
this->Next = Next;
this->IpAddress = IpAddress;
this->IpMask = IpMask;
this->Context = Context;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::Win32_IP_ADDR_STRING::Win32_IP_ADDR_STRING()   {
}
