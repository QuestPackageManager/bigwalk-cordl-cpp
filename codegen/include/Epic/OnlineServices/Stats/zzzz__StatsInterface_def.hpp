#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/StatsInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StatsInterface)
namespace Epic::OnlineServices::Stats {
struct CopyStatByIndexOptions;
}
namespace Epic::OnlineServices::Stats {
struct CopyStatByNameOptions;
}
namespace Epic::OnlineServices::Stats {
struct GetStatCountOptions;
}
namespace Epic::OnlineServices::Stats {
struct IngestStatOptions;
}
namespace Epic::OnlineServices::Stats {
class OnIngestStatCompleteCallback;
}
namespace Epic::OnlineServices::Stats {
class OnQueryStatsCompleteCallback;
}
namespace Epic::OnlineServices::Stats {
struct QueryStatsOptions;
}
namespace Epic::OnlineServices::Stats {
struct Stat;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Stats {
class StatsInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Stats::StatsInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::StatsInterface*, "Epic.OnlineServices.Stats", "StatsInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Stats {
// Is value type: false
// CS Name: Epic.OnlineServices.Stats.StatsInterface
class CORDL_TYPE StatsInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyStatByIndex, addr 0x1804e0f70, size 0x130, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyStatByIndex(::by_ref<::Epic::OnlineServices::Stats::CopyStatByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Stats::Stat>>  outStat) ;

/// @brief Method CopyStatByName, addr 0x1804e10a0, size 0x110, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyStatByName(::by_ref<::Epic::OnlineServices::Stats::CopyStatByNameOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Stats::Stat>>  outStat) ;

/// @brief Method GetStatsCount, addr 0x1804e11b0, size 0xe0, virtual false, abstract: false, final false
inline uint32_t GetStatsCount(::by_ref<::Epic::OnlineServices::Stats::GetStatCountOptions>  options) ;

/// @brief Method IngestStat, addr 0x1804e1290, size 0x270, virtual false, abstract: false, final false
inline void IngestStat(::by_ref<::Epic::OnlineServices::Stats::IngestStatOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Stats::OnIngestStatCompleteCallback*  completionDelegate) ;

static inline ::Epic::OnlineServices::Stats::StatsInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Stats::StatsInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryStats, addr 0x1804e1500, size 0x270, virtual false, abstract: false, final false
inline void QueryStats(::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Stats::OnQueryStatsCompleteCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StatsInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StatsInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StatsInterface(StatsInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StatsInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StatsInterface(StatsInterface const& ) = delete;

/// @brief Field COPYSTATBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYSTATBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYSTATBYNAME_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYSTATBYNAME_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETSTATCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETSTATCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETSTATSCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETSTATSCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field INGESTDATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  INGESTDATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field INGESTSTAT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  INGESTSTAT_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field MAX_INGEST_STATS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_INGEST_STATS{static_cast<int32_t>(0xbb8)};

/// @brief Field MAX_QUERY_STATS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_QUERY_STATS{static_cast<int32_t>(0x3e8)};

/// @brief Field QUERYSTATS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYSTATS_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field STAT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  STAT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field TIME_UNDEFINED offset 0xffffffff size 0x4
static constexpr int32_t  TIME_UNDEFINED{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Stats::StatsInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
