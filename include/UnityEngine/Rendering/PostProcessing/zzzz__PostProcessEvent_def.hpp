#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessEvent)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct PostProcessEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::PostProcessEvent);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessEvent, "UnityEngine.Rendering.PostProcessing", "PostProcessEvent");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessEvent
struct CORDL_TYPE PostProcessEvent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PostProcessEvent_Unwrapped
enum struct __PostProcessEvent_Unwrapped : int32_t {
__E_BeforeTransparent = static_cast<int32_t>(0x0),
__E_BeforeStack = static_cast<int32_t>(0x1),
__E_AfterStack = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PostProcessEvent_Unwrapped () const noexcept {
return static_cast<__PostProcessEvent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PostProcessEvent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PostProcessEvent(int32_t  value__) noexcept;

/// @brief Field AfterStack value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::PostProcessEvent const AfterStack;

/// @brief Field BeforeStack value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::PostProcessEvent const BeforeStack;

/// @brief Field BeforeTransparent value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::PostProcessEvent const BeforeTransparent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18628};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessEvent, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessEvent) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
