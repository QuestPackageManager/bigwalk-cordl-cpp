#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/QueryLeaderboardUserScoresOptions.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__UserScoresQueryStatInfo_impl.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_impl.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__QueryLeaderboardUserScoresOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__UserScoresQueryStatInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions.get_UserIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::ProductUserId*> (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::*)()>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::get_UserIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"get_UserIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions.set_UserIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::*)(::ArrayW<::Epic::OnlineServices::ProductUserId*>)>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::set_UserIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"set_UserIds", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::ProductUserId*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions.get_StatInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo> (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::*)()>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::get_StatInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"get_StatInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions.set_StatInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::*)(::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>)>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::set_StatInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"set_StatInfo", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions.get_StartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::*)()>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::get_StartTime)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180347870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"get_StartTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions.set_StartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::set_StartTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"set_StartTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions.get_EndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::*)()>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::get_EndTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"get_EndTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions.set_EndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::set_EndTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"set_EndTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::*)()>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::Epic::OnlineServices::ProductUserId*> Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::get_UserIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"get_UserIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::ProductUserId*>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::set_UserIds(::ArrayW<::Epic::OnlineServices::ProductUserId*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"set_UserIds", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::ProductUserId*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo> Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::get_StatInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"get_StatInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::set_StatInfo(::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"set_StatInfo", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::get_StartTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"get_StartTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::set_StartTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"set_StartTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::get_EndTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"get_EndTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::set_EndTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"set_EndTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_UserIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::ProductUserId*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StatInfo_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StartTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EndTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::QueryLeaderboardUserScoresOptions(::ArrayW<::Epic::OnlineServices::ProductUserId*>  _UserIds_k__BackingField, ::ArrayW<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>  _StatInfo_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _StartTime_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _EndTime_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept  {
this->_UserIds_k__BackingField = _UserIds_k__BackingField;
this->_StatInfo_k__BackingField = _StatInfo_k__BackingField;
this->_StartTime_k__BackingField = _StartTime_k__BackingField;
this->_EndTime_k__BackingField = _EndTime_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions::QueryLeaderboardUserScoresOptions()   {
}
