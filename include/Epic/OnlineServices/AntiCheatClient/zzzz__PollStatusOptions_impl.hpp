#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/PollStatusOptions.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__PollStatusOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::PollStatusOptions.get_OutMessageLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::AntiCheatClient::PollStatusOptions::*)()>(&::Epic::OnlineServices::AntiCheatClient::PollStatusOptions::get_OutMessageLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::PollStatusOptions>(),
                        {"get_OutMessageLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::PollStatusOptions.set_OutMessageLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::PollStatusOptions::*)(uint32_t)>(&::Epic::OnlineServices::AntiCheatClient::PollStatusOptions::set_OutMessageLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::PollStatusOptions>(),
                        {"set_OutMessageLength", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::AntiCheatClient::PollStatusOptions::get_OutMessageLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::PollStatusOptions>(),
                        {"get_OutMessageLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::PollStatusOptions::set_OutMessageLength(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::PollStatusOptions>(),
                        {"set_OutMessageLength", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_OutMessageLength_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::PollStatusOptions::PollStatusOptions(uint32_t  _OutMessageLength_k__BackingField) noexcept  {
this->_OutMessageLength_k__BackingField = _OutMessageLength_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::PollStatusOptions::PollStatusOptions()   {
}
