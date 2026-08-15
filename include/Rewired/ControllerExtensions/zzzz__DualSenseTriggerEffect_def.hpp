#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseTriggerEffect)
// Forward declare root types
namespace Rewired::ControllerExtensions {
class DualSenseTriggerEffect;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::DualSenseTriggerEffect*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerEffect*, "Rewired.ControllerExtensions", "DualSenseTriggerEffect");
// Dependencies System.Object
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerEffect
class CORDL_TYPE DualSenseTriggerEffect : public ::System::Object {
public:
// Declarations
/// @brief Method Clamp, addr 0x1818cddf0, size 0xb0, virtual false, abstract: false, final false
static inline uint8_t Clamp(uint8_t  value, uint8_t  min, uint8_t  max) ;

/// @brief Method IsInRange, addr 0x1818cdea0, size 0x10, virtual false, abstract: false, final false
static inline bool IsInRange(uint8_t  value, uint8_t  min, uint8_t  max) ;

/// @brief Method LogValueClamped, addr 0x1818cdeb0, size 0x60, virtual false, abstract: false, final false
static inline void LogValueClamped(uint8_t  origValue, uint8_t  clampedValue) ;

/// @brief Method NormalizeAmplitude, addr 0x1818cdf10, size 0x20, virtual false, abstract: false, final false
static inline float_t NormalizeAmplitude(uint8_t  value) ;

/// @brief Method NormalizeFrequency, addr 0x1818cdf30, size 0x20, virtual false, abstract: false, final false
static inline float_t NormalizeFrequency(uint8_t  value) ;

/// @brief Method NormalizePosition, addr 0x1818cdf50, size 0x20, virtual false, abstract: false, final false
static inline float_t NormalizePosition(uint8_t  value) ;

/// @brief Method NormalizeStrength, addr 0x1818cdf10, size 0x20, virtual false, abstract: false, final false
static inline float_t NormalizeStrength(uint8_t  value) ;

/// @brief Method ThrowArgumentOutOfRange, addr 0x1818cdf70, size 0x100, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRange(::StringW  name, uint8_t  min, uint8_t  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DualSenseTriggerEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualSenseTriggerEffect(DualSenseTriggerEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualSenseTriggerEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualSenseTriggerEffect(DualSenseTriggerEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2687};

/// @brief Field amplitudeMax offset 0xffffffff size 0x1
static constexpr uint8_t  amplitudeMax{static_cast<uint8_t>(0x8u)};

/// @brief Field amplitudeMin offset 0xffffffff size 0x1
static constexpr uint8_t  amplitudeMin{static_cast<uint8_t>(0x0u)};

/// @brief Field frequencyMax offset 0xffffffff size 0x1
static constexpr uint8_t  frequencyMax{static_cast<uint8_t>(0xffu)};

/// @brief Field frequencyMin offset 0xffffffff size 0x1
static constexpr uint8_t  frequencyMin{static_cast<uint8_t>(0x0u)};

/// @brief Field positionCount offset 0xffffffff size 0x1
static constexpr uint8_t  positionCount{static_cast<uint8_t>(0xau)};

/// @brief Field positionMax offset 0xffffffff size 0x1
static constexpr uint8_t  positionMax{static_cast<uint8_t>(0x9u)};

/// @brief Field positionMin offset 0xffffffff size 0x1
static constexpr uint8_t  positionMin{static_cast<uint8_t>(0x0u)};

/// @brief Field strengthMax offset 0xffffffff size 0x1
static constexpr uint8_t  strengthMax{static_cast<uint8_t>(0x8u)};

/// @brief Field strengthMin offset 0xffffffff size 0x1
static constexpr uint8_t  strengthMin{static_cast<uint8_t>(0x0u)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerEffect) == 0x10, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
