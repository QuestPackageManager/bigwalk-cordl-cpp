#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/LeaderboardsInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardsInterface_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__CopyLeaderboardDefinitionByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__CopyLeaderboardDefinitionByLeaderboardIdOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__CopyLeaderboardRecordByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__CopyLeaderboardRecordByUserIdOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__CopyLeaderboardUserScoreByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__CopyLeaderboardUserScoreByUserIdOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__Definition_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__GetLeaderboardDefinitionCountOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__GetLeaderboardRecordCountOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__GetLeaderboardUserScoreCountOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardRecord_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardUserScore_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardDefinitionsCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardRanksCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__OnQueryLeaderboardUserScoresCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__QueryLeaderboardDefinitionsOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__QueryLeaderboardRanksOptions_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__QueryLeaderboardUserScoresOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)()>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.CopyLeaderboardDefinitionByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::Definition>>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardDefinitionByIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180505a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardDefinitionByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::Definition>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.CopyLeaderboardDefinitionByLeaderboardId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::Definition>>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardDefinitionByLeaderboardId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180505b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardDefinitionByLeaderboardId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::Definition>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.CopyLeaderboardRecordByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardRecordByIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180505bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardRecordByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.CopyLeaderboardRecordByUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByUserIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardRecordByUserId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180505c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardRecordByUserId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByUserIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.CopyLeaderboardUserScoreByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardUserScoreByIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180505d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardUserScoreByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.CopyLeaderboardUserScoreByUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByUserIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardUserScoreByUserId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180505dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardUserScoreByUserId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByUserIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.GetLeaderboardDefinitionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::GetLeaderboardDefinitionCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180505eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"GetLeaderboardDefinitionCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.GetLeaderboardRecordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::GetLeaderboardRecordCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180505ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"GetLeaderboardRecordCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.GetLeaderboardUserScoreCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::GetLeaderboardUserScoreCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180505f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"GetLeaderboardUserScoreCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.QueryLeaderboardDefinitions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>, ::System::Object*, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallback*)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::QueryLeaderboardDefinitions)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180505fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"QueryLeaderboardDefinitions", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.QueryLeaderboardRanks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>, ::System::Object*, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallback*)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::QueryLeaderboardRanks)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805060a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"QueryLeaderboardRanks", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface.QueryLeaderboardUserScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::*)(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>, ::System::Object*, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallback*)>(&::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::QueryLeaderboardUserScores)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1805061a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"QueryLeaderboardUserScores", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Leaderboards::LeaderboardsInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Leaderboards::LeaderboardsInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardDefinitionByIndex(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::Definition>>  outLeaderboardDefinition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardDefinitionByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::Definition>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outLeaderboardDefinition);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardDefinitionByLeaderboardId(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::Definition>>  outLeaderboardDefinition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardDefinitionByLeaderboardId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::Definition>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outLeaderboardDefinition);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardRecordByIndex(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>  outLeaderboardRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardRecordByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outLeaderboardRecord);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardRecordByUserId(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByUserIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>  outLeaderboardRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardRecordByUserId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByUserIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outLeaderboardRecord);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardUserScoreByIndex(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>  outLeaderboardUserScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardUserScoreByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outLeaderboardUserScore);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Leaderboards::LeaderboardsInterface::CopyLeaderboardUserScoreByUserId(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByUserIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>  outLeaderboardUserScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"CopyLeaderboardUserScoreByUserId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByUserIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outLeaderboardUserScore);
}
inline uint32_t Epic::OnlineServices::Leaderboards::LeaderboardsInterface::GetLeaderboardDefinitionCount(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"GetLeaderboardDefinitionCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Leaderboards::LeaderboardsInterface::GetLeaderboardRecordCount(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"GetLeaderboardRecordCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Leaderboards::LeaderboardsInterface::GetLeaderboardUserScoreCount(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"GetLeaderboardUserScoreCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Leaderboards::LeaderboardsInterface::QueryLeaderboardDefinitions(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"QueryLeaderboardDefinitions", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Leaderboards::LeaderboardsInterface::QueryLeaderboardRanks(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"QueryLeaderboardRanks", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Leaderboards::LeaderboardsInterface::QueryLeaderboardUserScores(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(),
                        {"QueryLeaderboardUserScores", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* Epic::OnlineServices::Leaderboards::LeaderboardsInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>());
}
inline ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* Epic::OnlineServices::Leaderboards::LeaderboardsInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface::LeaderboardsInterface()   {
}
