#pragma once
// IWYU pragma private; include "Steamworks/MusicPlayerWantsLooped_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MusicPlayerWantsLooped_t)
// Forward declare root types
namespace Steamworks {
struct MusicPlayerWantsLooped_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::MusicPlayerWantsLooped_t);
DEFINE_IL2CPP_CLASS(::Steamworks::MusicPlayerWantsLooped_t, "Steamworks", "MusicPlayerWantsLooped_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.MusicPlayerWantsLooped_t
#pragma pack(push, 8)
struct CORDL_TYPE MusicPlayerWantsLooped_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MusicPlayerWantsLooped_t() ;

// Ctor Parameters [CppParam { name: "m_bLooped", ty: "bool", modifiers: "", def_value: None }]
constexpr MusicPlayerWantsLooped_t(bool  m_bLooped) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16139};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x100e)};

/// @brief Field m_bLooped, offset: 0x0, size: 0x1, def value: None
 bool  m_bLooped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::MusicPlayerWantsLooped_t, m_bLooped) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::MusicPlayerWantsLooped_t) == 0x1, "Size mismatch!");

} // namespace end def Steamworks
