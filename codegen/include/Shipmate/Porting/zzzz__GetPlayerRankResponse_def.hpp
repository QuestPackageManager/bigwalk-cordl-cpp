#pragma once
// IWYU pragma private; include "Shipmate/Porting/GetPlayerRankResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetPlayerRankResponse)
namespace Shipmate::Porting {
class PlatformLeaderboardEntry;
}
// Forward declare root types
namespace Shipmate::Porting {
class GetPlayerRankResponse;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::GetPlayerRankResponse*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::GetPlayerRankResponse*, "Shipmate.Porting", "GetPlayerRankResponse");
// Dependencies System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.GetPlayerRankResponse
class CORDL_TYPE GetPlayerRankResponse : public ::System::Object {
public:
// Declarations
/// @brief Field playerEntry, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerEntry, put=__cordl_internal_set_playerEntry)) ::Shipmate::Porting::PlatformLeaderboardEntry*  playerEntry;

/// @brief Field totalEntries, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalEntries, put=__cordl_internal_set_totalEntries)) int32_t  totalEntries;

static inline ::Shipmate::Porting::GetPlayerRankResponse* New_ctor() ;

constexpr ::Shipmate::Porting::PlatformLeaderboardEntry* const& __cordl_internal_get_playerEntry() const;

constexpr ::Shipmate::Porting::PlatformLeaderboardEntry*& __cordl_internal_get_playerEntry() ;

constexpr int32_t const& __cordl_internal_get_totalEntries() const;

constexpr int32_t& __cordl_internal_get_totalEntries() ;

constexpr void __cordl_internal_set_playerEntry(::Shipmate::Porting::PlatformLeaderboardEntry*  value) ;

constexpr void __cordl_internal_set_totalEntries(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerRankResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerRankResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerRankResponse(GetPlayerRankResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerRankResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerRankResponse(GetPlayerRankResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20611};

/// @brief Field playerEntry, offset: 0x10, size: 0x8, def value: None
 ::Shipmate::Porting::PlatformLeaderboardEntry*  ___playerEntry;

/// @brief Field totalEntries, offset: 0x18, size: 0x4, def value: None
 int32_t  ___totalEntries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::GetPlayerRankResponse, ___playerEntry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::GetPlayerRankResponse, ___totalEntries) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::GetPlayerRankResponse) == 0x20, "Size mismatch!");

} // namespace end def Shipmate::Porting
