#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceCompressor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceCompressor)
// Forward declare root types
namespace GlobalNamespace {
struct VoiceCompressor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoiceCompressor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceCompressor, "", "VoiceCompressor");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VoiceCompressor
struct CORDL_TYPE VoiceCompressor {
public:
// Declarations
 __declspec(property(get=get_Reduction, put=set_Reduction)) float_t  Reduction;

/// @brief Field Threshold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Threshold, put=setStaticF_Threshold)) float_t  Threshold;

/// @brief Method Prepare, addr 0x1804a6d20, size 0xd0, virtual false, abstract: false, final false
inline void Prepare(int32_t  sampleRate) ;

/// @brief Method Process, addr 0x1804a6df0, size 0xe0, virtual false, abstract: false, final false
inline float_t Process(float_t  sample) ;

/// @brief Method Reset, addr 0x1804a6ed0, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

static inline float_t getStaticF_Threshold() ;

/// @brief Method get_Reduction, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Reduction() ;

static inline void setStaticF_Threshold(float_t  value) ;

/// @brief Method set_Reduction, addr 0x1802f80f0, size 0x10, virtual false, abstract: false, final false
inline void set_Reduction(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VoiceCompressor() ;

// Ctor Parameters [CppParam { name: "_peak", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_envelope", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_threshold", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_kneeWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_sampleRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_attackCoefficient", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_releaseCoefficient", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Reduction_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr VoiceCompressor(float_t  _peak, float_t  _envelope, float_t  _threshold, float_t  _kneeWidth, int32_t  _sampleRate, float_t  _attackCoefficient, float_t  _releaseCoefficient, float_t  _Reduction_k__BackingField) noexcept;

/// @brief Field ATTACK_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  ATTACK_SECONDS{static_cast<float_t>(0.005f)};

/// @brief Field DENORMAL_FLOOR offset 0xffffffff size 0x4
static constexpr float_t  DENORMAL_FLOOR{static_cast<float_t>(1e-12f)};

/// @brief Field DebugBypass offset 0xffffffff size 0x1
static constexpr bool  DebugBypass{false};

/// @brief Field EXPONENT offset 0xffffffff size 0x4
static constexpr float_t  EXPONENT{static_cast<float_t>(0.5f)};

/// @brief Field KNEE_FACTOR offset 0xffffffff size 0x4
static constexpr float_t  KNEE_FACTOR{static_cast<float_t>(1.4f)};

/// @brief Field MAX_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  MAX_THRESHOLD{static_cast<float_t>(0.6f)};

/// @brief Field RATIO offset 0xffffffff size 0x4
static constexpr float_t  RATIO{static_cast<float_t>(2.0f)};

/// @brief Field RELEASE_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  RELEASE_SECONDS{static_cast<float_t>(0.15f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17628};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _peak, offset: 0x0, size: 0x4, def value: None
 float_t  _peak;

/// @brief Field _envelope, offset: 0x4, size: 0x4, def value: None
 float_t  _envelope;

/// @brief Field _threshold, offset: 0x8, size: 0x4, def value: None
 float_t  _threshold;

/// @brief Field _kneeWidth, offset: 0xc, size: 0x4, def value: None
 float_t  _kneeWidth;

/// @brief Field _sampleRate, offset: 0x10, size: 0x4, def value: None
 int32_t  _sampleRate;

/// @brief Field _attackCoefficient, offset: 0x14, size: 0x4, def value: None
 float_t  _attackCoefficient;

/// @brief Field _releaseCoefficient, offset: 0x18, size: 0x4, def value: None
 float_t  _releaseCoefficient;

/// @brief Field <Reduction>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  _Reduction_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceCompressor, _peak) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceCompressor, _envelope) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceCompressor, _threshold) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceCompressor, _kneeWidth) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceCompressor, _sampleRate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceCompressor, _attackCoefficient) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceCompressor, _releaseCoefficient) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceCompressor, _Reduction_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceCompressor) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
