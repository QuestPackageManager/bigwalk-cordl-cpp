#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformLeaderboards.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractPlatformLeaderboards)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Shipmate::Porting::Logs {
class PlatformLog;
}
namespace Shipmate::Porting {
struct ELeaderboardType;
}
namespace Shipmate::Porting {
class GetPlayerRankResponse;
}
namespace Shipmate::Porting {
class PlatformLeaderboardEntry;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Shipmate::Porting {
class AbstractPlatformLeaderboards;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AbstractPlatformLeaderboards*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformLeaderboards*, "Shipmate.Porting", "AbstractPlatformLeaderboards");
// Dependencies Shipmate.Porting.AbstractPlatformLogic
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformLeaderboards
class CORDL_TYPE AbstractPlatformLeaderboards : public ::Shipmate::Porting::AbstractPlatformLogic {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Shipmate::Porting::Logs::PlatformLog*  Log;

/// @brief Field mEntriesToShow, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_mEntriesToShow, put=__cordl_internal_set_mEntriesToShow)) int32_t  mEntriesToShow;

/// @brief Method GetLeaderboardRange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::Shipmate::Porting::PlatformLeaderboardEntry*>*> GetLeaderboardRange(int32_t  aLeaderboardId, int32_t  aStartRank, int32_t  aRange, ::Shipmate::Porting::ELeaderboardType  aLeaderboardType) ;

/// @brief Method GetPlayerRanking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::GetPlayerRankResponse*> GetPlayerRanking(int32_t  aLeaderboardId, ::Shipmate::Porting::ELeaderboardType  aLeaderboardType) ;

static inline ::Shipmate::Porting::AbstractPlatformLeaderboards* New_ctor() ;

/// @brief Method RecordScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::PlatformLeaderboardEntry*> RecordScore(int64_t  aScore, int32_t  aLeaderboardId, ::ArrayW<uint8_t>  aSmallData) ;

constexpr int32_t const& __cordl_internal_get_mEntriesToShow() const;

constexpr int32_t& __cordl_internal_get_mEntriesToShow() ;

constexpr void __cordl_internal_set_mEntriesToShow(int32_t  value) ;

/// @brief Method .ctor, addr 0x181ac5340, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Shipmate::Porting::Logs::PlatformLog* getStaticF_Log() ;

static inline void setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformLeaderboards() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformLeaderboards", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformLeaderboards(AbstractPlatformLeaderboards && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformLeaderboards", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformLeaderboards(AbstractPlatformLeaderboards const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20607};

/// @brief Field mEntriesToShow, offset: 0x18, size: 0x4, def value: None
 int32_t  ___mEntriesToShow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLeaderboards, ___mEntriesToShow) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformLeaderboards) == 0x20, "Size mismatch!");

} // namespace end def Shipmate::Porting
