#pragma once
// IWYU pragma private; include "Steamworks/VolumeHasChanged_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeHasChanged_t)
// Forward declare root types
namespace Steamworks {
struct VolumeHasChanged_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::VolumeHasChanged_t);
DEFINE_IL2CPP_CLASS(::Steamworks::VolumeHasChanged_t, "Steamworks", "VolumeHasChanged_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.VolumeHasChanged_t
#pragma pack(push, 8)
struct CORDL_TYPE VolumeHasChanged_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VolumeHasChanged_t() ;

// Ctor Parameters [CppParam { name: "m_flNewVolume", ty: "float_t", modifiers: "", def_value: None }]
constexpr VolumeHasChanged_t(float_t  m_flNewVolume) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16129};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xfa2)};

/// @brief Field m_flNewVolume, offset: 0x0, size: 0x4, def value: None
 float_t  m_flNewVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::VolumeHasChanged_t, m_flNewVolume) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::VolumeHasChanged_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
