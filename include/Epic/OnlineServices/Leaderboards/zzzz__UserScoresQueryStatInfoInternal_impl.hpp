#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/UserScoresQueryStatInfoInternal.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardAggregation_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__UserScoresQueryStatInfoInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__UserScoresQueryStatInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>)>(&::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f3150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::*)()>(&::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::Set(::by_ref<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>"
constexpr  Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>* Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Leaderboards__UserScoresQueryStatInfo_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Aggregation", ty: "::Epic::OnlineServices::Leaderboards::LeaderboardAggregation", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::UserScoresQueryStatInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_StatName, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  m_Aggregation) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_StatName = m_StatName;
this->m_Aggregation = m_Aggregation;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal::UserScoresQueryStatInfoInternal()   {
}
