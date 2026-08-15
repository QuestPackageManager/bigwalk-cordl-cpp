#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/UnregisterPeerOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__UnregisterPeerOptions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions.get_PeerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions::get_PeerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>(),
                        {"get_PeerHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions.set_PeerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions::set_PeerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>(),
                        {"set_PeerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions::get_PeerHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>(),
                        {"get_PeerHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions::set_PeerHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>(),
                        {"set_PeerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PeerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions::UnregisterPeerOptions(::System::IntPtr  _PeerHandle_k__BackingField) noexcept  {
this->_PeerHandle_k__BackingField = _PeerHandle_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions::UnregisterPeerOptions()   {
}
