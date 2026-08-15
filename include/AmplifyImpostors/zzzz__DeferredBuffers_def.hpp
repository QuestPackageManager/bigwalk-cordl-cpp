#pragma once
// IWYU pragma private; include "AmplifyImpostors/DeferredBuffers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeferredBuffers)
// Forward declare root types
namespace AmplifyImpostors {
struct DeferredBuffers;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::DeferredBuffers);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::DeferredBuffers, "AmplifyImpostors", "DeferredBuffers");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.DeferredBuffers
struct CORDL_TYPE DeferredBuffers {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeferredBuffers_Unwrapped
enum struct __DeferredBuffers_Unwrapped : int32_t {
__E_AlbedoAlpha = static_cast<int32_t>(0x1),
__E_SpecularSmoothness = static_cast<int32_t>(0x2),
__E_NormalDepth = static_cast<int32_t>(0x4),
__E_EmissionOcclusion = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeferredBuffers_Unwrapped () const noexcept {
return static_cast<__DeferredBuffers_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeferredBuffers() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DeferredBuffers(int32_t  value__) noexcept;

/// @brief Field AlbedoAlpha value: I32(1)
static ::AmplifyImpostors::DeferredBuffers const AlbedoAlpha;

/// @brief Field EmissionOcclusion value: I32(8)
static ::AmplifyImpostors::DeferredBuffers const EmissionOcclusion;

/// @brief Field NormalDepth value: I32(4)
static ::AmplifyImpostors::DeferredBuffers const NormalDepth;

/// @brief Field SpecularSmoothness value: I32(2)
static ::AmplifyImpostors::DeferredBuffers const SpecularSmoothness;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::DeferredBuffers, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::DeferredBuffers) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
