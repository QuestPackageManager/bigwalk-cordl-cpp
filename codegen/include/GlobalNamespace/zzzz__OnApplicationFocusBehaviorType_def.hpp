#pragma once
// IWYU pragma private; include "GlobalNamespace/OnApplicationFocusBehaviorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnApplicationFocusBehaviorType)
// Forward declare root types
namespace GlobalNamespace {
struct OnApplicationFocusBehaviorType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OnApplicationFocusBehaviorType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnApplicationFocusBehaviorType, "", "OnApplicationFocusBehaviorType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OnApplicationFocusBehaviorType
struct CORDL_TYPE OnApplicationFocusBehaviorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OnApplicationFocusBehaviorType_Unwrapped
enum struct __OnApplicationFocusBehaviorType_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_Mute = static_cast<int32_t>(0x1),
__E_Pause = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OnApplicationFocusBehaviorType_Unwrapped () const noexcept {
return static_cast<__OnApplicationFocusBehaviorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OnApplicationFocusBehaviorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OnApplicationFocusBehaviorType(int32_t  value__) noexcept;

/// @brief Field Mute value: I32(1)
static ::GlobalNamespace::OnApplicationFocusBehaviorType const Mute;

/// @brief Field Nothing value: I32(0)
static ::GlobalNamespace::OnApplicationFocusBehaviorType const Nothing;

/// @brief Field Pause value: I32(2)
static ::GlobalNamespace::OnApplicationFocusBehaviorType const Pause;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17506};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnApplicationFocusBehaviorType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnApplicationFocusBehaviorType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
