#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/GetProtectMessageOutputLengthOptions.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__GetProtectMessageOutputLengthOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions.get_DataLengthBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions::*)()>(&::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions::get_DataLengthBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>(),
                        {"get_DataLengthBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions.set_DataLengthBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions::*)(uint32_t)>(&::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions::set_DataLengthBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>(),
                        {"set_DataLengthBytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions::get_DataLengthBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>(),
                        {"get_DataLengthBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions::set_DataLengthBytes(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>(),
                        {"set_DataLengthBytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_DataLengthBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions::GetProtectMessageOutputLengthOptions(uint32_t  _DataLengthBytes_k__BackingField) noexcept  {
this->_DataLengthBytes_k__BackingField = _DataLengthBytes_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions::GetProtectMessageOutputLengthOptions()   {
}
