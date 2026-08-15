#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/LeaderboardUserScoreInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardUserScoreInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardUserScore_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal::Get)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805059f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal::Get(::by_ref<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>"
constexpr  Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>* Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Leaderboards__LeaderboardUserScore_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Score", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal::LeaderboardUserScoreInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, int32_t  m_Score) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UserId = m_UserId;
this->m_Score = m_Score;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardUserScoreInternal::LeaderboardUserScoreInternal()   {
}
