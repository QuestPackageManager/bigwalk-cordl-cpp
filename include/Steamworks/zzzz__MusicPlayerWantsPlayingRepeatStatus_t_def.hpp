#pragma once
// IWYU pragma private; include "Steamworks/MusicPlayerWantsPlayingRepeatStatus_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MusicPlayerWantsPlayingRepeatStatus_t)
// Forward declare root types
namespace Steamworks {
struct MusicPlayerWantsPlayingRepeatStatus_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::MusicPlayerWantsPlayingRepeatStatus_t);
DEFINE_IL2CPP_CLASS(::Steamworks::MusicPlayerWantsPlayingRepeatStatus_t, "Steamworks", "MusicPlayerWantsPlayingRepeatStatus_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.MusicPlayerWantsPlayingRepeatStatus_t
#pragma pack(push, 8)
struct CORDL_TYPE MusicPlayerWantsPlayingRepeatStatus_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MusicPlayerWantsPlayingRepeatStatus_t() ;

// Ctor Parameters [CppParam { name: "m_nPlayingRepeatStatus", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MusicPlayerWantsPlayingRepeatStatus_t(int32_t  m_nPlayingRepeatStatus) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16143};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1012)};

/// @brief Field m_nPlayingRepeatStatus, offset: 0x0, size: 0x4, def value: None
 int32_t  m_nPlayingRepeatStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::MusicPlayerWantsPlayingRepeatStatus_t, m_nPlayingRepeatStatus) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::MusicPlayerWantsPlayingRepeatStatus_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
