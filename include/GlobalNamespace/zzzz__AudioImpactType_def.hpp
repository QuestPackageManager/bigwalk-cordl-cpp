#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioImpactType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioImpactType)
// Forward declare root types
namespace GlobalNamespace {
struct AudioImpactType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioImpactType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioImpactType, "", "AudioImpactType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioImpactType
struct CORDL_TYPE AudioImpactType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioImpactType_Unwrapped
enum struct __AudioImpactType_Unwrapped : int32_t {
__E_Hard = static_cast<int32_t>(0x0),
__E_Soft = static_cast<int32_t>(0x1),
__E_Silent = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioImpactType_Unwrapped () const noexcept {
return static_cast<__AudioImpactType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioImpactType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioImpactType(int32_t  value__) noexcept;

/// @brief Field Hard value: I32(0)
static ::GlobalNamespace::AudioImpactType const Hard;

/// @brief Field Silent value: I32(2)
static ::GlobalNamespace::AudioImpactType const Silent;

/// @brief Field Soft value: I32(1)
static ::GlobalNamespace::AudioImpactType const Soft;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4809};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioImpactType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioImpactType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
