#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/ReceiveMessageFromServerOptions.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__ReceiveMessageFromServerOptions_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions::get_Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions::*)(::System::ArraySegment_1<uint8_t>)>(&::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions::set_Data)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180347400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>(),
                        {"set_Data", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::ArraySegment_1<uint8_t> Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions::set_Data(::System::ArraySegment_1<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>(),
                        {"set_Data", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Data_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions::ReceiveMessageFromServerOptions(::System::ArraySegment_1<uint8_t>  _Data_k__BackingField) noexcept  {
this->_Data_k__BackingField = _Data_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions::ReceiveMessageFromServerOptions()   {
}
