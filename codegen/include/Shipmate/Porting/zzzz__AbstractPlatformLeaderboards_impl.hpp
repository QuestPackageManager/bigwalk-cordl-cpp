#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformLeaderboards.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLeaderboards_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLog_def.hpp"
#include "Shipmate/Porting/zzzz__ELeaderboardType_def.hpp"
#include "Shipmate/Porting/zzzz__GetPlayerRankResponse_def.hpp"
#include "Shipmate/Porting/zzzz__PlatformLeaderboardEntry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLeaderboards.RecordScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::PlatformLeaderboardEntry*> (::Shipmate::Porting::AbstractPlatformLeaderboards::*)(int64_t, int32_t, ::ArrayW<uint8_t>)>(&::Shipmate::Porting::AbstractPlatformLeaderboards::RecordScore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLeaderboards.GetLeaderboardRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::Shipmate::Porting::PlatformLeaderboardEntry*>*> (::Shipmate::Porting::AbstractPlatformLeaderboards::*)(int32_t, int32_t, int32_t, ::Shipmate::Porting::ELeaderboardType)>(&::Shipmate::Porting::AbstractPlatformLeaderboards::GetLeaderboardRange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLeaderboards.GetPlayerRanking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::GetPlayerRankResponse*> (::Shipmate::Porting::AbstractPlatformLeaderboards::*)(int32_t, ::Shipmate::Porting::ELeaderboardType)>(&::Shipmate::Porting::AbstractPlatformLeaderboards::GetPlayerRanking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformLeaderboards._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformLeaderboards::*)()>(&::Shipmate::Porting::AbstractPlatformLeaderboards::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac5340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Shipmate::Porting::AbstractPlatformLeaderboards::__cordl_internal_get_mEntriesToShow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mEntriesToShow;
}
constexpr int32_t const& Shipmate::Porting::AbstractPlatformLeaderboards::__cordl_internal_get_mEntriesToShow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mEntriesToShow;
}
constexpr void Shipmate::Porting::AbstractPlatformLeaderboards::__cordl_internal_set_mEntriesToShow(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mEntriesToShow = value;
}
inline void Shipmate::Porting::AbstractPlatformLeaderboards::setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlatformLeaderboards*>(std::forward<::Shipmate::Porting::Logs::PlatformLog*>(value));
}
inline ::Shipmate::Porting::Logs::PlatformLog* Shipmate::Porting::AbstractPlatformLeaderboards::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlatformLeaderboards*>();
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::PlatformLeaderboardEntry*> Shipmate::Porting::AbstractPlatformLeaderboards::RecordScore(int64_t  aScore, int32_t  aLeaderboardId, ::ArrayW<uint8_t>  aSmallData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::PlatformLeaderboardEntry*>>(this, ___internal_method, aScore, aLeaderboardId, aSmallData);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::Shipmate::Porting::PlatformLeaderboardEntry*>*> Shipmate::Porting::AbstractPlatformLeaderboards::GetLeaderboardRange(int32_t  aLeaderboardId, int32_t  aStartRank, int32_t  aRange, ::Shipmate::Porting::ELeaderboardType  aLeaderboardType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::Shipmate::Porting::PlatformLeaderboardEntry*>*>>(this, ___internal_method, aLeaderboardId, aStartRank, aRange, aLeaderboardType);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::GetPlayerRankResponse*> Shipmate::Porting::AbstractPlatformLeaderboards::GetPlayerRanking(int32_t  aLeaderboardId, ::Shipmate::Porting::ELeaderboardType  aLeaderboardType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::GetPlayerRankResponse*>>(this, ___internal_method, aLeaderboardId, aLeaderboardType);
}
inline void Shipmate::Porting::AbstractPlatformLeaderboards::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformLeaderboards*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformLeaderboards* Shipmate::Porting::AbstractPlatformLeaderboards::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AbstractPlatformLeaderboards*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformLeaderboards::AbstractPlatformLeaderboards()   {
}
