#pragma once
// IWYU pragma private; include "Shipmate/Porting/PlatformLeaderboardEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformLeaderboardEntry)
// Forward declare root types
namespace Shipmate::Porting {
class PlatformLeaderboardEntry;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::PlatformLeaderboardEntry*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::PlatformLeaderboardEntry*, "Shipmate.Porting", "PlatformLeaderboardEntry");
// Dependencies System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.PlatformLeaderboardEntry
class CORDL_TYPE PlatformLeaderboardEntry : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field rank, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_rank, put=__cordl_internal_set_rank)) int32_t  rank;

/// @brief Field score, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_score, put=__cordl_internal_set_score)) int64_t  score;

/// @brief Field smallData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_smallData, put=__cordl_internal_set_smallData)) ::ArrayW<uint8_t>  smallData;

static inline ::Shipmate::Porting::PlatformLeaderboardEntry* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int32_t const& __cordl_internal_get_rank() const;

constexpr int32_t& __cordl_internal_get_rank() ;

constexpr int64_t const& __cordl_internal_get_score() const;

constexpr int64_t& __cordl_internal_get_score() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_smallData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_smallData() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_rank(int32_t  value) ;

constexpr void __cordl_internal_set_score(int64_t  value) ;

constexpr void __cordl_internal_set_smallData(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformLeaderboardEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformLeaderboardEntry(PlatformLeaderboardEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformLeaderboardEntry(PlatformLeaderboardEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20609};

/// @brief Field rank, offset: 0x10, size: 0x4, def value: None
 int32_t  ___rank;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field score, offset: 0x20, size: 0x8, def value: None
 int64_t  ___score;

/// @brief Field smallData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___smallData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::PlatformLeaderboardEntry, ___rank) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::PlatformLeaderboardEntry, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::PlatformLeaderboardEntry, ___score) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::PlatformLeaderboardEntry, ___smallData) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::PlatformLeaderboardEntry) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting
