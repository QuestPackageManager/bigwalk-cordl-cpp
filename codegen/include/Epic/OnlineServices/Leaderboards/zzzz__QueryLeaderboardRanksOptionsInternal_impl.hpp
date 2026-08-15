#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/QueryLeaderboardRanksOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__QueryLeaderboardRanksOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__QueryLeaderboardRanksOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>)>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180503d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::*)()>(&::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>"
constexpr  Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>* Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Leaderboards__QueryLeaderboardRanksOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LeaderboardId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::QueryLeaderboardRanksOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LeaderboardId, ::System::IntPtr  m_LocalUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LeaderboardId = m_LeaderboardId;
this->m_LocalUserId = m_LocalUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptionsInternal::QueryLeaderboardRanksOptionsInternal()   {
}
