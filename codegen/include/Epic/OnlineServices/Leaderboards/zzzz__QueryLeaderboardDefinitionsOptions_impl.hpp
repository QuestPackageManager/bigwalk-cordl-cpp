#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/QueryLeaderboardDefinitionsOptions.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__QueryLeaderboardDefinitionsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions.get_StartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::*)()>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::get_StartTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"get_StartTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions.set_StartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::set_StartTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805115e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"set_StartTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions.get_EndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::*)()>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::get_EndTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"get_EndTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions.set_EndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::set_EndTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804f66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"set_EndTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::*)()>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::System::DateTimeOffset> Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::get_StartTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"get_StartTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::set_StartTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"set_StartTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::get_EndTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"get_EndTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::set_EndTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"set_EndTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_StartTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EndTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::QueryLeaderboardDefinitionsOptions(::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept  {
this->_StartTime_k__BackingField = _StartTime_k__BackingField;
this->_EndTime_k__BackingField = _EndTime_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions::QueryLeaderboardDefinitionsOptions()   {
}
