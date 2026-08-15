#pragma once
// IWYU pragma private; include "UnityEngine/Animations/JobMethodIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JobMethodIndex)
// Forward declare root types
namespace UnityEngine::Animations {
struct JobMethodIndex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::JobMethodIndex);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::JobMethodIndex, "UnityEngine.Animations", "JobMethodIndex");
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.JobMethodIndex
struct CORDL_TYPE JobMethodIndex {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JobMethodIndex_Unwrapped
enum struct __JobMethodIndex_Unwrapped : int32_t {
__E_ProcessRootMotionMethodIndex = static_cast<int32_t>(0x0),
__E_ProcessAnimationMethodIndex = static_cast<int32_t>(0x1),
__E_MethodIndexCount = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JobMethodIndex_Unwrapped () const noexcept {
return static_cast<__JobMethodIndex_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JobMethodIndex() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JobMethodIndex(int32_t  value__) noexcept;

/// @brief Field MethodIndexCount value: I32(2)
static ::UnityEngine::Animations::JobMethodIndex const MethodIndexCount;

/// @brief Field ProcessAnimationMethodIndex value: I32(1)
static ::UnityEngine::Animations::JobMethodIndex const ProcessAnimationMethodIndex;

/// @brief Field ProcessRootMotionMethodIndex value: I32(0)
static ::UnityEngine::Animations::JobMethodIndex const ProcessRootMotionMethodIndex;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19929};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::JobMethodIndex, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::JobMethodIndex) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Animations
