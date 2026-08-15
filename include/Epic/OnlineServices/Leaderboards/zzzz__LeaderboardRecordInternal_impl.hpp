#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/LeaderboardRecordInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardRecordInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardRecord_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal::Get)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180505920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal::Get(::by_ref<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>"
constexpr  Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>* Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Leaderboards__LeaderboardRecord_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Rank", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Score", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserDisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal::LeaderboardRecordInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, uint32_t  m_Rank, int32_t  m_Score, ::System::IntPtr  m_UserDisplayName) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UserId = m_UserId;
this->m_Rank = m_Rank;
this->m_Score = m_Score;
this->m_UserDisplayName = m_UserDisplayName;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardRecordInternal::LeaderboardRecordInternal()   {
}
