#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/ReceiveMessageFromPeerOptions.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__ReceiveMessageFromPeerOptions_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions.get_PeerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::get_PeerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>(),
                        {"get_PeerHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions.set_PeerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::set_PeerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>(),
                        {"set_PeerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::get_Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::*)(::System::ArraySegment_1<uint8_t>)>(&::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::set_Data)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18051eaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>(),
                        {"set_Data", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::get_PeerHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>(),
                        {"get_PeerHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::set_PeerHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>(),
                        {"set_PeerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::ArraySegment_1<uint8_t> Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::set_Data(::System::ArraySegment_1<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>(),
                        {"set_Data", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PeerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Data_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::ReceiveMessageFromPeerOptions(::System::IntPtr  _PeerHandle_k__BackingField, ::System::ArraySegment_1<uint8_t>  _Data_k__BackingField) noexcept  {
this->_PeerHandle_k__BackingField = _PeerHandle_k__BackingField;
this->_Data_k__BackingField = _Data_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions::ReceiveMessageFromPeerOptions()   {
}
