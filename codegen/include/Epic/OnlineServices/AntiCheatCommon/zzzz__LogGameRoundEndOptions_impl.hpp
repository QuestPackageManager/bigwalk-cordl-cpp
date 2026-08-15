#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogGameRoundEndOptions.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogGameRoundEndOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions.get_WinningTeamId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions::get_WinningTeamId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions>(),
                        {"get_WinningTeamId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions.set_WinningTeamId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions::*)(uint32_t)>(&::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions::set_WinningTeamId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions>(),
                        {"set_WinningTeamId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions::get_WinningTeamId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions>(),
                        {"get_WinningTeamId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions::set_WinningTeamId(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions>(),
                        {"set_WinningTeamId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_WinningTeamId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions::LogGameRoundEndOptions(uint32_t  _WinningTeamId_k__BackingField) noexcept  {
this->_WinningTeamId_k__BackingField = _WinningTeamId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions::LogGameRoundEndOptions()   {
}
