#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/NintendoSwitchGamepadVibration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NintendoSwitchGamepadVibration)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct NintendoSwitchGamepadVibration;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration, "Rewired.ControllerExtensions", "NintendoSwitchGamepadVibration");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.NintendoSwitchGamepadVibration
struct CORDL_TYPE NintendoSwitchGamepadVibration {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>"
constexpr operator  ::System::IEquatable_1<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>*() ;

/// @brief Method CIAXGegmgQFLpONlKQcWWHypSiui, addr 0x1802e1e90, size 0x10, virtual false, abstract: false, final false
static inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration CIAXGegmgQFLpONlKQcWWHypSiui() ;

/// @brief Method Create, addr 0x1818da8c0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration Create() ;

/// @brief Method Create, addr 0x1818da870, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration Create(float_t  amplitudeLow, float_t  amplitudeHigh) ;

/// @brief Method Create, addr 0x1818da800, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration Create(float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh) ;

/// @brief Method Equals, addr 0x1818da900, size 0xb0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180646bf0, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  other) ;

/// @brief Method GetHashCode, addr 0x1818da9b0, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1818daa30, size 0xf0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1818dab20, size 0x70, virtual false, abstract: false, final false
inline void _ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Convert to "::System::IEquatable_1<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>"
constexpr ::System::IEquatable_1<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>* i___System__IEquatable_1___Rewired__ControllerExtensions__NintendoSwitchGamepadVibration_() ;

/// @brief Method op_Equality, addr 0x180646bf0, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  a, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  b) ;

/// @brief Method op_Inequality, addr 0x1818dab90, size 0x50, virtual false, abstract: false, final false
static inline bool op_Inequality(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  a, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchGamepadVibration() ;

// Ctor Parameters [CppParam { name: "amplitudeLow", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "frequencyLow", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "amplitudeHigh", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "frequencyHigh", ty: "float_t", modifiers: "", def_value: None }]
constexpr NintendoSwitchGamepadVibration(float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field frequencyHighDefault offset 0xffffffff size 0x4
static constexpr int32_t  frequencyHighDefault{static_cast<int32_t>(0x140)};

/// @brief Field frequencyHighMax offset 0xffffffff size 0x4
static constexpr float_t  frequencyHighMax{static_cast<float_t>(1252.5723f)};

/// @brief Field frequencyHighMin offset 0xffffffff size 0x4
static constexpr float_t  frequencyHighMin{static_cast<float_t>(81.75177f)};

/// @brief Field frequencyLowDefault offset 0xffffffff size 0x4
static constexpr int32_t  frequencyLowDefault{static_cast<int32_t>(0xa0)};

/// @brief Field frequencyLowMax offset 0xffffffff size 0x4
static constexpr float_t  frequencyLowMax{static_cast<float_t>(626.28613f)};

/// @brief Field frequencyLowMin offset 0xffffffff size 0x4
static constexpr float_t  frequencyLowMin{static_cast<float_t>(40.875885f)};

/// @brief Field amplitudeLow, offset: 0x0, size: 0x4, def value: None
 float_t  amplitudeLow;

/// @brief Field frequencyLow, offset: 0x4, size: 0x4, def value: None
 float_t  frequencyLow;

/// @brief Field amplitudeHigh, offset: 0x8, size: 0x4, def value: None
 float_t  amplitudeHigh;

/// @brief Field frequencyHigh, offset: 0xc, size: 0x4, def value: None
 float_t  frequencyHigh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration, amplitudeLow) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration, frequencyLow) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration, amplitudeHigh) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration, frequencyHigh) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration) == 0x10, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
