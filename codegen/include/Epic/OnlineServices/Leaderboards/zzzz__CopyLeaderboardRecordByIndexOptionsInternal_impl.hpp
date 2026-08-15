#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/CopyLeaderboardRecordByIndexOptionsInternal.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__CopyLeaderboardRecordByIndexOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__CopyLeaderboardRecordByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>)>(&::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805046f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::*)()>(&::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>"
constexpr  Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>* Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Leaderboards__CopyLeaderboardRecordByIndexOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LeaderboardRecordIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::CopyLeaderboardRecordByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_LeaderboardRecordIndex) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LeaderboardRecordIndex = m_LeaderboardRecordIndex;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptionsInternal::CopyLeaderboardRecordByIndexOptionsInternal()   {
}
