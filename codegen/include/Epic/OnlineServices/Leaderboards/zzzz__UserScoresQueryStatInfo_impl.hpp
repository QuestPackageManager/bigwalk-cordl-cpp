#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/UserScoresQueryStatInfo.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardAggregation_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__UserScoresQueryStatInfo_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardAggregation_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo.get_StatName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::*)()>(&::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::get_StatName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>(),
                        {"get_StatName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo.set_StatName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::set_StatName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>(),
                        {"set_StatName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo.get_Aggregation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Leaderboards::LeaderboardAggregation (::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::*)()>(&::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::get_Aggregation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>(),
                        {"get_Aggregation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo.set_Aggregation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::*)(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation)>(&::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::set_Aggregation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>(),
                        {"set_Aggregation", {}, {::i2c::type_of<::Epic::OnlineServices::Leaderboards::LeaderboardAggregation>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::get_StatName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>(),
                        {"get_StatName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::set_StatName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>(),
                        {"set_StatName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::get_Aggregation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>(),
                        {"get_Aggregation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Leaderboards::LeaderboardAggregation>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::set_Aggregation(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>(),
                        {"set_Aggregation", {}, {::i2c::type_of<::Epic::OnlineServices::Leaderboards::LeaderboardAggregation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_StatName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Aggregation_k__BackingField", ty: "::Epic::OnlineServices::Leaderboards::LeaderboardAggregation", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::UserScoresQueryStatInfo(::Epic::OnlineServices::Utf8String*  _StatName_k__BackingField, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  _Aggregation_k__BackingField) noexcept  {
this->_StatName_k__BackingField = _StatName_k__BackingField;
this->_Aggregation_k__BackingField = _Aggregation_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo::UserScoresQueryStatInfo()   {
}
