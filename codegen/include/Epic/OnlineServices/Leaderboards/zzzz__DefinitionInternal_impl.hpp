#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/DefinitionInternal.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardAggregation_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__DefinitionInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__Definition_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::DefinitionInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::DefinitionInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::Definition>)>(&::Epic::OnlineServices::Leaderboards::DefinitionInternal::Get)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x180504b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::DefinitionInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::Definition>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::DefinitionInternal::Get(::by_ref<::Epic::OnlineServices::Leaderboards::Definition>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::DefinitionInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::Definition>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::Definition>"
constexpr  Epic::OnlineServices::Leaderboards::DefinitionInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::Definition>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::Definition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::Definition>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::Definition>* Epic::OnlineServices::Leaderboards::DefinitionInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Leaderboards__Definition_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::Definition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LeaderboardId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Aggregation", ty: "::Epic::OnlineServices::Leaderboards::LeaderboardAggregation", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EndTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::DefinitionInternal::DefinitionInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LeaderboardId, ::System::IntPtr  m_StatName, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  m_Aggregation, int64_t  m_StartTime, int64_t  m_EndTime) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LeaderboardId = m_LeaderboardId;
this->m_StatName = m_StatName;
this->m_Aggregation = m_Aggregation;
this->m_StartTime = m_StartTime;
this->m_EndTime = m_EndTime;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::DefinitionInternal::DefinitionInternal()   {
}
