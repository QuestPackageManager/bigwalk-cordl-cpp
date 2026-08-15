#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/CopyLeaderboardDefinitionByIndexOptions.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__CopyLeaderboardDefinitionByIndexOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions.get_LeaderboardIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions::*)()>(&::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions::get_LeaderboardIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions>(),
                        {"get_LeaderboardIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions.set_LeaderboardIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions::set_LeaderboardIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions>(),
                        {"set_LeaderboardIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions::get_LeaderboardIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions>(),
                        {"get_LeaderboardIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions::set_LeaderboardIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions>(),
                        {"set_LeaderboardIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LeaderboardIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions::CopyLeaderboardDefinitionByIndexOptions(uint32_t  _LeaderboardIndex_k__BackingField) noexcept  {
this->_LeaderboardIndex_k__BackingField = _LeaderboardIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions::CopyLeaderboardDefinitionByIndexOptions()   {
}
