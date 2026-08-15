#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ColorUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorUtilities)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class ColorUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ColorUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ColorUtilities*, "UnityEngine.Rendering.PostProcessing", "ColorUtilities");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ColorUtilities
class CORDL_TYPE ColorUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method CIExyToLMS, addr 0x181fbf1f0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 CIExyToLMS(float_t  x, float_t  y) ;

/// @brief Method ColorToGain, addr 0x181fbf280, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ColorToGain(::UnityEngine::Vector4  color) ;

/// @brief Method ColorToInverseGamma, addr 0x181fbf2f0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ColorToInverseGamma(::UnityEngine::Vector4  color) ;

/// @brief Method ColorToLift, addr 0x181fbf3b0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ColorToLift(::UnityEngine::Vector4  color) ;

/// @brief Method ComputeColorBalance, addr 0x181fbf420, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ComputeColorBalance(float_t  temperature, float_t  tint) ;

/// @brief Method LinearToLogC, addr 0x181fbf540, size 0x50, virtual false, abstract: false, final false
static inline float_t LinearToLogC(float_t  x) ;

/// @brief Method LogCToLinear, addr 0x181fbf590, size 0x60, virtual false, abstract: false, final false
static inline float_t LogCToLinear(float_t  x) ;

/// @brief Method StandardIlluminantY, addr 0x181fbf5f0, size 0x30, virtual false, abstract: false, final false
static inline float_t StandardIlluminantY(float_t  x) ;

/// @brief Method ToHex, addr 0x181fbf620, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ToHex(::UnityEngine::Color  c) ;

/// @brief Method ToRGBA, addr 0x181fbf6a0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ToRGBA(uint32_t  hex) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorUtilities(ColorUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorUtilities(ColorUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18649};

/// @brief Field logC_a offset 0xffffffff size 0x4
static constexpr float_t  logC_a{static_cast<float_t>(5.555556f)};

/// @brief Field logC_b offset 0xffffffff size 0x4
static constexpr float_t  logC_b{static_cast<float_t>(0.047996f)};

/// @brief Field logC_c offset 0xffffffff size 0x4
static constexpr float_t  logC_c{static_cast<float_t>(0.244161f)};

/// @brief Field logC_cut offset 0xffffffff size 0x4
static constexpr float_t  logC_cut{static_cast<float_t>(0.011361f)};

/// @brief Field logC_d offset 0xffffffff size 0x4
static constexpr float_t  logC_d{static_cast<float_t>(0.386036f)};

/// @brief Field logC_e offset 0xffffffff size 0x4
static constexpr float_t  logC_e{static_cast<float_t>(5.301883f)};

/// @brief Field logC_f offset 0xffffffff size 0x4
static constexpr float_t  logC_f{static_cast<float_t>(0.092819f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ColorUtilities) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
