#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/KernelSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KernelSize)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct KernelSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::KernelSize);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::KernelSize, "UnityEngine.Rendering.PostProcessing", "KernelSize");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.KernelSize
struct CORDL_TYPE KernelSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KernelSize_Unwrapped
enum struct __KernelSize_Unwrapped : int32_t {
__E_Small = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_Large = static_cast<int32_t>(0x2),
__E_VeryLarge = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KernelSize_Unwrapped () const noexcept {
return static_cast<__KernelSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KernelSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KernelSize(int32_t  value__) noexcept;

/// @brief Field Large value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::KernelSize const Large;

/// @brief Field Medium value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::KernelSize const Medium;

/// @brief Field Small value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::KernelSize const Small;

/// @brief Field VeryLarge value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::KernelSize const VeryLarge;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18562};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::KernelSize, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::KernelSize) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
