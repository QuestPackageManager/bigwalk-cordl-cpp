#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityFilterType)
// Forward declare root types
namespace GlobalNamespace {
struct UnityFilterType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityFilterType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityFilterType, "", "UnityFilterType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityFilterType
struct CORDL_TYPE UnityFilterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityFilterType_Unwrapped
enum struct __UnityFilterType_Unwrapped : int32_t {
__E_LowPassFilter = static_cast<int32_t>(0x0),
__E_HighPassFilter = static_cast<int32_t>(0x1),
__E_EchoFilter = static_cast<int32_t>(0x2),
__E_ChorusFilter = static_cast<int32_t>(0x3),
__E_ReverbFilter = static_cast<int32_t>(0x4),
__E_DistortionFilter = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityFilterType_Unwrapped () const noexcept {
return static_cast<__UnityFilterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityFilterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityFilterType(int32_t  value__) noexcept;

/// @brief Field ChorusFilter value: I32(3)
static ::GlobalNamespace::UnityFilterType const ChorusFilter;

/// @brief Field DistortionFilter value: I32(5)
static ::GlobalNamespace::UnityFilterType const DistortionFilter;

/// @brief Field EchoFilter value: I32(2)
static ::GlobalNamespace::UnityFilterType const EchoFilter;

/// @brief Field HighPassFilter value: I32(1)
static ::GlobalNamespace::UnityFilterType const HighPassFilter;

/// @brief Field LowPassFilter value: I32(0)
static ::GlobalNamespace::UnityFilterType const LowPassFilter;

/// @brief Field ReverbFilter value: I32(4)
static ::GlobalNamespace::UnityFilterType const ReverbFilter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17501};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityFilterType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityFilterType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
