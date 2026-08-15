#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightEvent)
// Forward declare root types
namespace UnityEngine::Rendering {
struct LightEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LightEvent);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LightEvent, "UnityEngine.Rendering", "LightEvent");
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LightEvent
struct CORDL_TYPE LightEvent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LightEvent_Unwrapped
enum struct __LightEvent_Unwrapped : int32_t {
__E_BeforeShadowMap = static_cast<int32_t>(0x0),
__E_AfterShadowMap = static_cast<int32_t>(0x1),
__E_BeforeScreenspaceMask = static_cast<int32_t>(0x2),
__E_AfterScreenspaceMask = static_cast<int32_t>(0x3),
__E_BeforeShadowMapPass = static_cast<int32_t>(0x4),
__E_AfterShadowMapPass = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightEvent_Unwrapped () const noexcept {
return static_cast<__LightEvent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LightEvent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LightEvent(int32_t  value__) noexcept;

/// @brief Field AfterScreenspaceMask value: I32(3)
static ::UnityEngine::Rendering::LightEvent const AfterScreenspaceMask;

/// @brief Field AfterShadowMap value: I32(1)
static ::UnityEngine::Rendering::LightEvent const AfterShadowMap;

/// @brief Field AfterShadowMapPass value: I32(5)
static ::UnityEngine::Rendering::LightEvent const AfterShadowMapPass;

/// @brief Field BeforeScreenspaceMask value: I32(2)
static ::UnityEngine::Rendering::LightEvent const BeforeScreenspaceMask;

/// @brief Field BeforeShadowMap value: I32(0)
static ::UnityEngine::Rendering::LightEvent const BeforeShadowMap;

/// @brief Field BeforeShadowMapPass value: I32(4)
static ::UnityEngine::Rendering::LightEvent const BeforeShadowMapPass;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LightEvent, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::LightEvent) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
