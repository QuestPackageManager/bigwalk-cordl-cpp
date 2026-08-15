#pragma once
// IWYU pragma private; include "Steamworks/GameOverlayActivated_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameOverlayActivated_t)
// Forward declare root types
namespace Steamworks {
struct GameOverlayActivated_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GameOverlayActivated_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GameOverlayActivated_t, "Steamworks", "GameOverlayActivated_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GameOverlayActivated_t
#pragma pack(push, 8)
struct CORDL_TYPE GameOverlayActivated_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameOverlayActivated_t() ;

// Ctor Parameters [CppParam { name: "m_bActive", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr GameOverlayActivated_t(uint8_t  m_bActive) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16035};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x14b)};

/// @brief Field m_bActive, offset: 0x0, size: 0x1, def value: None
 uint8_t  m_bActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GameOverlayActivated_t, m_bActive) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GameOverlayActivated_t) == 0x1, "Size mismatch!");

} // namespace end def Steamworks
