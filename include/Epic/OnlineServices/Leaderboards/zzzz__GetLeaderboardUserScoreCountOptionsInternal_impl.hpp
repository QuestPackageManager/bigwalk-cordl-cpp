#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/GetLeaderboardUserScoreCountOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__GetLeaderboardUserScoreCountOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__GetLeaderboardUserScoreCountOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>)>(&::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::*)()>(&::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>"
constexpr  Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>* Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Leaderboards__GetLeaderboardUserScoreCountOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::GetLeaderboardUserScoreCountOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_StatName) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_StatName = m_StatName;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptionsInternal::GetLeaderboardUserScoreCountOptionsInternal()   {
}
