#pragma once
// IWYU pragma private; include "Dissonance/FrameSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameSize)
// Forward declare root types
namespace Dissonance {
struct FrameSize;
}
// Write type traits
MARK_VAL_T(::Dissonance::FrameSize);
DEFINE_IL2CPP_CLASS(::Dissonance::FrameSize, "Dissonance", "FrameSize");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.FrameSize
struct CORDL_TYPE FrameSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FrameSize_Unwrapped
enum struct __FrameSize_Unwrapped : int32_t {
__E_Tiny = static_cast<int32_t>(0xffffffff),
__E_Small = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_Large = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FrameSize_Unwrapped () const noexcept {
return static_cast<__FrameSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FrameSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FrameSize(int32_t  value__) noexcept;

/// @brief Field Large value: I32(2)
static ::Dissonance::FrameSize const Large;

/// @brief Field Medium value: I32(1)
static ::Dissonance::FrameSize const Medium;

/// @brief Field Small value: I32(0)
static ::Dissonance::FrameSize const Small;

/// @brief Field Tiny value: I32(-1)
static ::Dissonance::FrameSize const Tiny;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16801};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::FrameSize, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::FrameSize) == 0x4, "Size mismatch!");

} // namespace end def Dissonance
