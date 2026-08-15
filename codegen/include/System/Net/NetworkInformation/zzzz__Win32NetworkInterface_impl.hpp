#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/Win32NetworkInterface.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32_FIXED_INFO_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32NetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__Win32_FIXED_INFO_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::Win32NetworkInterface.GetNetworkParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::System::Net::NetworkInformation::Win32NetworkInterface::GetNetworkParams)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dab450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::Win32NetworkInterface*>(),
                        {"GetNetworkParams", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::Win32NetworkInterface.MultiByteToWideChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t, uint32_t, uint8_t*, int32_t, char16_t*, int32_t)>(&::System::Net::NetworkInformation::Win32NetworkInterface::MultiByteToWideChar)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181dab4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::Win32NetworkInterface*>(),
                        {"MultiByteToWideChar", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::Win32NetworkInterface.get_FixedInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::Win32_FIXED_INFO (*)()>(&::System::Net::NetworkInformation::Win32NetworkInterface::get_FixedInfo)> {
  constexpr static std::size_t size = 0xb20;
  constexpr static std::size_t addrs = 0x181dab680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::Win32NetworkInterface*>(),
                        {"get_FixedInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::Win32NetworkInterface._get_FixedInfo_g__GetStringFromMultiByte_5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t*)>(&::System::Net::NetworkInformation::Win32NetworkInterface::_get_FixedInfo_g__GetStringFromMultiByte_5_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181dab5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::Win32NetworkInterface*>(),
                        {"<get_FixedInfo>g__GetStringFromMultiByte|5_0", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::Win32NetworkInterface::setStaticF_fixedInfo(::System::Net::NetworkInformation::Win32_FIXED_INFO  value)  {
::cordl_internals::setStaticField<::System::Net::NetworkInformation::Win32_FIXED_INFO, "fixedInfo", ::System::Net::NetworkInformation::Win32NetworkInterface*>(std::forward<::System::Net::NetworkInformation::Win32_FIXED_INFO>(value));
}
inline ::System::Net::NetworkInformation::Win32_FIXED_INFO System::Net::NetworkInformation::Win32NetworkInterface::getStaticF_fixedInfo()  {
return ::cordl_internals::getStaticField<::System::Net::NetworkInformation::Win32_FIXED_INFO, "fixedInfo", ::System::Net::NetworkInformation::Win32NetworkInterface*>();
}
inline void System::Net::NetworkInformation::Win32NetworkInterface::setStaticF_initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "initialized", ::System::Net::NetworkInformation::Win32NetworkInterface*>(std::forward<bool>(value));
}
inline bool System::Net::NetworkInformation::Win32NetworkInterface::getStaticF_initialized()  {
return ::cordl_internals::getStaticField<bool, "initialized", ::System::Net::NetworkInformation::Win32NetworkInterface*>();
}
inline int32_t System::Net::NetworkInformation::Win32NetworkInterface::GetNetworkParams(::System::IntPtr  ptr, ::by_ref<int32_t>  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::Win32NetworkInterface*>(),
                        {"GetNetworkParams", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, size);
}
inline int32_t System::Net::NetworkInformation::Win32NetworkInterface::MultiByteToWideChar(uint32_t  CodePage, uint32_t  dwFlags, uint8_t*  lpMultiByteStr, int32_t  cbMultiByte, char16_t*  lpWideCharStr, int32_t  cchWideChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::Win32NetworkInterface*>(),
                        {"MultiByteToWideChar", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}
inline ::System::Net::NetworkInformation::Win32_FIXED_INFO System::Net::NetworkInformation::Win32NetworkInterface::get_FixedInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::Win32NetworkInterface*>(),
                        {"get_FixedInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::Win32_FIXED_INFO>(nullptr, ___internal_method);
}
inline ::StringW System::Net::NetworkInformation::Win32NetworkInterface::_get_FixedInfo_g__GetStringFromMultiByte_5_0(uint8_t*  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::Win32NetworkInterface*>(),
                        {"<get_FixedInfo>g__GetStringFromMultiByte|5_0", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::Win32NetworkInterface::Win32NetworkInterface()   {
}
