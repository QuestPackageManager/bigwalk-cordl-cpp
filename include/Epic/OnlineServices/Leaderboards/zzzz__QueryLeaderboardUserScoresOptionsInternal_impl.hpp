#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/QueryLeaderboardUserScoresOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__QueryLeaderboardUserScoresOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__QueryLeaderboardUserScoresOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>)>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18051d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::*)()>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18051d590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>"
constexpr  Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>* Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Leaderboards__QueryLeaderboardUserScoresOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatInfo", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatInfoCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EndTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::QueryLeaderboardUserScoresOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserIds, uint32_t  m_UserIdsCount, ::System::IntPtr  m_StatInfo, uint32_t  m_StatInfoCount, int64_t  m_StartTime, int64_t  m_EndTime, ::System::IntPtr  m_LocalUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UserIds = m_UserIds;
this->m_UserIdsCount = m_UserIdsCount;
this->m_StatInfo = m_StatInfo;
this->m_StatInfoCount = m_StatInfoCount;
this->m_StartTime = m_StartTime;
this->m_EndTime = m_EndTime;
this->m_LocalUserId = m_LocalUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptionsInternal::QueryLeaderboardUserScoresOptionsInternal()   {
}
