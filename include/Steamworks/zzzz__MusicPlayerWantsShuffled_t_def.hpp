#pragma once
// IWYU pragma private; include "Steamworks/MusicPlayerWantsShuffled_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MusicPlayerWantsShuffled_t)
// Forward declare root types
namespace Steamworks {
struct MusicPlayerWantsShuffled_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::MusicPlayerWantsShuffled_t);
DEFINE_IL2CPP_CLASS(::Steamworks::MusicPlayerWantsShuffled_t, "Steamworks", "MusicPlayerWantsShuffled_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.MusicPlayerWantsShuffled_t
#pragma pack(push, 8)
struct CORDL_TYPE MusicPlayerWantsShuffled_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MusicPlayerWantsShuffled_t() ;

// Ctor Parameters [CppParam { name: "m_bShuffled", ty: "bool", modifiers: "", def_value: None }]
constexpr MusicPlayerWantsShuffled_t(bool  m_bShuffled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16138};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x100d)};

/// @brief Field m_bShuffled, offset: 0x0, size: 0x1, def value: None
 bool  m_bShuffled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::MusicPlayerWantsShuffled_t, m_bShuffled) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::MusicPlayerWantsShuffled_t) == 0x1, "Size mismatch!");

} // namespace end def Steamworks
