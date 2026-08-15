#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/AchievementsInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__AchievementsInterface_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__AddNotifyAchievementsUnlockedOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__AddNotifyAchievementsUnlockedV2Options_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionByAchievementIdOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionV2ByAchievementIdOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionV2ByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyPlayerAchievementByAchievementIdOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyPlayerAchievementByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyUnlockedAchievementByAchievementIdOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyUnlockedAchievementByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__DefinitionV2_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__Definition_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__GetAchievementDefinitionCountOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__GetPlayerAchievementCountOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__GetUnlockedAchievementCountOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackV2_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallback_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnQueryDefinitionsCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnQueryPlayerAchievementsCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnUnlockAchievementsCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__PlayerAchievement_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__QueryDefinitionsOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__QueryPlayerAchievementsOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__UnlockAchievementsOptions_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__UnlockedAchievement_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::AchievementsInterface::*)()>(&::Epic::OnlineServices::Achievements::AchievementsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.AddNotifyAchievementsUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions>, ::System::Object*, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallback*)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::AddNotifyAchievementsUnlocked)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18052cdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"AddNotifyAchievementsUnlocked", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.AddNotifyAchievementsUnlockedV2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>, ::System::Object*, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2*)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::AddNotifyAchievementsUnlockedV2)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18052cbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"AddNotifyAchievementsUnlockedV2", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.CopyAchievementDefinitionByAchievementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::Definition>>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::CopyAchievementDefinitionByAchievementId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18052cfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyAchievementDefinitionByAchievementId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::Definition>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.CopyAchievementDefinitionByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::Definition>>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::CopyAchievementDefinitionByIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18052d060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyAchievementDefinitionByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::Definition>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.CopyAchievementDefinitionV2ByAchievementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2>>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::CopyAchievementDefinitionV2ByAchievementId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18052d0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyAchievementDefinitionV2ByAchievementId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.CopyAchievementDefinitionV2ByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2>>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::CopyAchievementDefinitionV2ByIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18052d1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyAchievementDefinitionV2ByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.CopyPlayerAchievementByAchievementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::CopyPlayerAchievementByAchievementId)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18052d220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyPlayerAchievementByAchievementId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.CopyPlayerAchievementByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::CopyPlayerAchievementByIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18052d310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyPlayerAchievementByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.CopyUnlockedAchievementByAchievementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::CopyUnlockedAchievementByAchievementId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18052d3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyUnlockedAchievementByAchievementId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.CopyUnlockedAchievementByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::CopyUnlockedAchievementByIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18052d4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyUnlockedAchievementByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.GetAchievementDefinitionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::GetAchievementDefinitionCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18052d590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"GetAchievementDefinitionCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.GetPlayerAchievementCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::GetPlayerAchievementCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18052d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"GetPlayerAchievementCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.GetUnlockedAchievementCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions>)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::GetUnlockedAchievementCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18052d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"GetUnlockedAchievementCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.QueryDefinitions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>, ::System::Object*, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallback*)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::QueryDefinitions)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18052d6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"QueryDefinitions", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.QueryPlayerAchievements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions>, ::System::Object*, ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallback*)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::QueryPlayerAchievements)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18052d910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"QueryPlayerAchievements", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.RemoveNotifyAchievementsUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(uint64_t)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::RemoveNotifyAchievementsUnlocked)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18052db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"RemoveNotifyAchievementsUnlocked", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::AchievementsInterface.UnlockAchievements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::AchievementsInterface::*)(::by_ref<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>, ::System::Object*, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallback*)>(&::Epic::OnlineServices::Achievements::AchievementsInterface::UnlockAchievements)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18052db70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"UnlockAchievements", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::AchievementsInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::AchievementsInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::Achievements::AchievementsInterface::AddNotifyAchievementsUnlocked(::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"AddNotifyAchievementsUnlocked", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::Achievements::AchievementsInterface::AddNotifyAchievementsUnlockedV2(::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"AddNotifyAchievementsUnlockedV2", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Achievements::AchievementsInterface::CopyAchievementDefinitionByAchievementId(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::Definition>>  outDefinition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyAchievementDefinitionByAchievementId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::Definition>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outDefinition);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Achievements::AchievementsInterface::CopyAchievementDefinitionByIndex(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::Definition>>  outDefinition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyAchievementDefinitionByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::Definition>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outDefinition);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Achievements::AchievementsInterface::CopyAchievementDefinitionV2ByAchievementId(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2>>  outDefinition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyAchievementDefinitionV2ByAchievementId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outDefinition);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Achievements::AchievementsInterface::CopyAchievementDefinitionV2ByIndex(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2>>  outDefinition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyAchievementDefinitionV2ByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outDefinition);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Achievements::AchievementsInterface::CopyPlayerAchievementByAchievementId(::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>>  outAchievement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyPlayerAchievementByAchievementId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outAchievement);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Achievements::AchievementsInterface::CopyPlayerAchievementByIndex(::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>>  outAchievement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyPlayerAchievementByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outAchievement);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Achievements::AchievementsInterface::CopyUnlockedAchievementByAchievementId(::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>>  outAchievement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyUnlockedAchievementByAchievementId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outAchievement);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Achievements::AchievementsInterface::CopyUnlockedAchievementByIndex(::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>>  outAchievement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"CopyUnlockedAchievementByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outAchievement);
}
inline uint32_t Epic::OnlineServices::Achievements::AchievementsInterface::GetAchievementDefinitionCount(::by_ref<::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"GetAchievementDefinitionCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Achievements::AchievementsInterface::GetPlayerAchievementCount(::by_ref<::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"GetPlayerAchievementCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Achievements::AchievementsInterface::GetUnlockedAchievementCount(::by_ref<::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"GetUnlockedAchievementCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Achievements::AchievementsInterface::QueryDefinitions(::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"QueryDefinitions", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Achievements::AchievementsInterface::QueryPlayerAchievements(::by_ref<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"QueryPlayerAchievements", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Achievements::AchievementsInterface::RemoveNotifyAchievementsUnlocked(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"RemoveNotifyAchievementsUnlocked", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Achievements::AchievementsInterface::UnlockAchievements(::by_ref<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::AchievementsInterface*>(),
                        {"UnlockAchievements", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Achievements::AchievementsInterface* Epic::OnlineServices::Achievements::AchievementsInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Achievements::AchievementsInterface*>());
}
inline ::Epic::OnlineServices::Achievements::AchievementsInterface* Epic::OnlineServices::Achievements::AchievementsInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Achievements::AchievementsInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::AchievementsInterface::AchievementsInterface()   {
}
