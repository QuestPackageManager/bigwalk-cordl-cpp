#pragma once
// IWYU pragma private; include "Steamworks/ScreenshotRequested_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenshotRequested_t)
// Forward declare root types
namespace Steamworks {
struct ScreenshotRequested_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::ScreenshotRequested_t);
DEFINE_IL2CPP_CLASS(::Steamworks::ScreenshotRequested_t, "Steamworks", "ScreenshotRequested_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ScreenshotRequested_t
#pragma pack(push, 8)
struct CORDL_TYPE ScreenshotRequested_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScreenshotRequested_t() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16181};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x8fe)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Steamworks::ScreenshotRequested_t) == 0x1, "Size mismatch!");

} // namespace end def Steamworks
