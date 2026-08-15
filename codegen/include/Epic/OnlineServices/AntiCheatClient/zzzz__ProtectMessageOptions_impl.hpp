#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/ProtectMessageOptions.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__ProtectMessageOptions_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::get_Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::*)(::System::ArraySegment_1<uint8_t>)>(&::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::set_Data)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180347400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>(),
                        {"set_Data", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions.get_OutBufferSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::get_OutBufferSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>(),
                        {"get_OutBufferSizeBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions.set_OutBufferSizeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::*)(uint32_t)>(&::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::set_OutBufferSizeBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>(),
                        {"set_OutBufferSizeBytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::ArraySegment_1<uint8_t> Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::set_Data(::System::ArraySegment_1<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>(),
                        {"set_Data", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::get_OutBufferSizeBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>(),
                        {"get_OutBufferSizeBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::set_OutBufferSizeBytes(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>(),
                        {"set_OutBufferSizeBytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Data_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OutBufferSizeBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::ProtectMessageOptions(::System::ArraySegment_1<uint8_t>  _Data_k__BackingField, uint32_t  _OutBufferSizeBytes_k__BackingField) noexcept  {
this->_Data_k__BackingField = _Data_k__BackingField;
this->_OutBufferSizeBytes_k__BackingField = _OutBufferSizeBytes_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions::ProtectMessageOptions()   {
}
