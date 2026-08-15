#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/StatsInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Stats/zzzz__StatsInterface_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__CopyStatByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__CopyStatByNameOptions_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__GetStatCountOptions_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__IngestStatOptions_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__OnIngestStatCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__OnQueryStatsCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__QueryStatsOptions_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__Stat_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Stats::StatsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::StatsInterface::*)()>(&::Epic::OnlineServices::Stats::StatsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::StatsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::StatsInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Stats::StatsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::StatsInterface.CopyStatByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Stats::StatsInterface::*)(::by_ref<::Epic::OnlineServices::Stats::CopyStatByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Stats::Stat>>)>(&::Epic::OnlineServices::Stats::StatsInterface::CopyStatByIndex)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804e0f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {"CopyStatByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::CopyStatByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Stats::Stat>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::StatsInterface.CopyStatByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Stats::StatsInterface::*)(::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Stats::Stat>>)>(&::Epic::OnlineServices::Stats::StatsInterface::CopyStatByName)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804e10a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {"CopyStatByName", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Stats::Stat>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::StatsInterface.GetStatsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Stats::StatsInterface::*)(::by_ref<::Epic::OnlineServices::Stats::GetStatCountOptions>)>(&::Epic::OnlineServices::Stats::StatsInterface::GetStatsCount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804e11b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {"GetStatsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::GetStatCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::StatsInterface.IngestStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::StatsInterface::*)(::by_ref<::Epic::OnlineServices::Stats::IngestStatOptions>, ::System::Object*, ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallback*)>(&::Epic::OnlineServices::Stats::StatsInterface::IngestStat)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1804e1290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {"IngestStat", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::IngestStatOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Stats::OnIngestStatCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::StatsInterface.QueryStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::StatsInterface::*)(::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptions>, ::System::Object*, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallback*)>(&::Epic::OnlineServices::Stats::StatsInterface::QueryStats)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1804e1500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {"QueryStats", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Stats::StatsInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Stats::StatsInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Stats::StatsInterface::CopyStatByIndex(::by_ref<::Epic::OnlineServices::Stats::CopyStatByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Stats::Stat>>  outStat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {"CopyStatByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::CopyStatByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Stats::Stat>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outStat);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Stats::StatsInterface::CopyStatByName(::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Stats::Stat>>  outStat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {"CopyStatByName", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Stats::Stat>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outStat);
}
inline uint32_t Epic::OnlineServices::Stats::StatsInterface::GetStatsCount(::by_ref<::Epic::OnlineServices::Stats::GetStatCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {"GetStatsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::GetStatCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Stats::StatsInterface::IngestStat(::by_ref<::Epic::OnlineServices::Stats::IngestStatOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {"IngestStat", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::IngestStatOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Stats::OnIngestStatCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Stats::StatsInterface::QueryStats(::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatsInterface*>(),
                        {"QueryStats", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Stats::StatsInterface* Epic::OnlineServices::Stats::StatsInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Stats::StatsInterface*>());
}
inline ::Epic::OnlineServices::Stats::StatsInterface* Epic::OnlineServices::Stats::StatsInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Stats::StatsInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Stats::StatsInterface::StatsInterface()   {
}
