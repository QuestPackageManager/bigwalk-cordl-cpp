#pragma once
// IWYU pragma private; include "Steamworks/MusicPlayerSelectsPlaylistEntry_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MusicPlayerSelectsPlaylistEntry_t)
// Forward declare root types
namespace Steamworks {
struct MusicPlayerSelectsPlaylistEntry_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::MusicPlayerSelectsPlaylistEntry_t);
DEFINE_IL2CPP_CLASS(::Steamworks::MusicPlayerSelectsPlaylistEntry_t, "Steamworks", "MusicPlayerSelectsPlaylistEntry_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.MusicPlayerSelectsPlaylistEntry_t
#pragma pack(push, 8)
struct CORDL_TYPE MusicPlayerSelectsPlaylistEntry_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MusicPlayerSelectsPlaylistEntry_t() ;

// Ctor Parameters [CppParam { name: "nID", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MusicPlayerSelectsPlaylistEntry_t(int32_t  nID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16142};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xfad)};

/// @brief Field nID, offset: 0x0, size: 0x4, def value: None
 int32_t  nID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::MusicPlayerSelectsPlaylistEntry_t, nID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::MusicPlayerSelectsPlaylistEntry_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
