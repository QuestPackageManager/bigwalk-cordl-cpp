#pragma once
// IWYU pragma private; include "UnityEngine/Mathf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mathf)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct Mathf;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Mathf);
DEFINE_IL2CPP_CLASS(::UnityEngine::Mathf, "UnityEngine", "Mathf");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mathf
#pragma pack(push, 0)
struct CORDL_TYPE Mathf {
public:
// Declarations
/// @brief Field Epsilon, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Epsilon, put=setStaticF_Epsilon)) float_t  Epsilon;

/// @brief Method Abs, addr 0x18170f380, size 0x10, virtual false, abstract: false, final false
static inline float_t Abs(float_t  f) ;

/// @brief Method Abs, addr 0x18171bf40, size 0x10, virtual false, abstract: false, final false
static inline int32_t Abs(int32_t  value) ;

/// @brief Method Acos, addr 0x181907bb0, size 0x20, virtual false, abstract: false, final false
static inline float_t Acos(float_t  f) ;

/// @brief Method Approximately, addr 0x182273070, size 0x50, virtual false, abstract: false, final false
static inline bool Approximately(float_t  a, float_t  b) ;

/// @brief Method Asin, addr 0x181907d90, size 0x20, virtual false, abstract: false, final false
static inline float_t Asin(float_t  f) ;

/// @brief Method Atan, addr 0x181907dd0, size 0x20, virtual false, abstract: false, final false
static inline float_t Atan(float_t  f) ;

/// @brief Method Atan2, addr 0x181907db0, size 0x20, virtual false, abstract: false, final false
static inline float_t Atan2(float_t  y, float_t  x) ;

/// @brief Method Ceil, addr 0x181907e30, size 0x20, virtual false, abstract: false, final false
static inline float_t Ceil(float_t  f) ;

/// @brief Method CeilToInt, addr 0x181907e10, size 0x20, virtual false, abstract: false, final false
static inline int32_t CeilToInt(float_t  f) ;

/// @brief Method Clamp, addr 0x1819081d0, size 0x20, virtual false, abstract: false, final false
static inline float_t Clamp(float_t  value, float_t  min, float_t  max) ;

/// @brief Method Clamp, addr 0x182273160, size 0x20, virtual false, abstract: false, final false
static inline int32_t Clamp(int32_t  value, int32_t  min, int32_t  max) ;

/// @brief Method Clamp01, addr 0x181907e50, size 0x20, virtual false, abstract: false, final false
static inline float_t Clamp01(float_t  value) ;

/// @brief Method ClampToFloat, addr 0x1822730c0, size 0x60, virtual false, abstract: false, final false
static inline float_t ClampToFloat(double_t  value) ;

/// @brief Method ClampToInt, addr 0x182273120, size 0x20, virtual false, abstract: false, final false
static inline int32_t ClampToInt(int64_t  value) ;

/// @brief Method ClampToUInt, addr 0x182273140, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ClampToUInt(int64_t  value) ;

/// @brief Method ClosestPowerOfTwo, addr 0x182273180, size 0x50, virtual false, abstract: false, final false
static inline int32_t ClosestPowerOfTwo(int32_t  value) ;

/// @brief Method CorrelatedColorTemperatureToRGB, addr 0x1822731e0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Color CorrelatedColorTemperatureToRGB(float_t  kelvin) ;

/// @brief Method CorrelatedColorTemperatureToRGB_Injected, addr 0x1822731d0, size 0x10, virtual false, abstract: false, final false
static inline void CorrelatedColorTemperatureToRGB_Injected(float_t  kelvin, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method Cos, addr 0x181908210, size 0x20, virtual false, abstract: false, final false
static inline float_t Cos(float_t  f) ;

/// @brief Method DeltaAngle, addr 0x1802f5db0, size 0x70, virtual false, abstract: false, final false
static inline float_t DeltaAngle(float_t  current, float_t  target) ;

/// @brief Method DiscardLeastSignificantDecimal, addr 0x182273210, size 0x50, virtual false, abstract: false, final false
static inline double_t DiscardLeastSignificantDecimal(double_t  v) ;

/// @brief Method Exp, addr 0x1819082c0, size 0x20, virtual false, abstract: false, final false
static inline float_t Exp(float_t  power) ;

/// @brief Method FloatToHalf, addr 0x182273260, size 0x10, virtual false, abstract: false, final false
static inline uint16_t FloatToHalf(float_t  val) ;

/// @brief Method Floor, addr 0x181908300, size 0x20, virtual false, abstract: false, final false
static inline float_t Floor(float_t  f) ;

/// @brief Method FloorToInt, addr 0x1819082e0, size 0x20, virtual false, abstract: false, final false
static inline int32_t FloorToInt(float_t  f) ;

/// @brief Method GammaToLinearSpace, addr 0x182273270, size 0x10, virtual false, abstract: false, final false
static inline float_t GammaToLinearSpace(float_t  value) ;

/// @brief Method GetNumberOfDecimalsForMinimumDifference, addr 0x182273280, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetNumberOfDecimalsForMinimumDifference(double_t  minDifference) ;

/// @brief Method HalfToFloat, addr 0x1822732b0, size 0x10, virtual false, abstract: false, final false
static inline float_t HalfToFloat(uint16_t  val) ;

/// @brief Method InverseLerp, addr 0x1822732c0, size 0x40, virtual false, abstract: false, final false
static inline float_t InverseLerp(float_t  a, float_t  b, float_t  value) ;

/// @brief Method IsPowerOfTwo, addr 0x181eab120, size 0x10, virtual false, abstract: false, final false
static inline bool IsPowerOfTwo(int32_t  value) ;

/// @brief Method Lerp, addr 0x1802f5e20, size 0x40, virtual false, abstract: false, final false
static inline float_t Lerp(float_t  a, float_t  b, float_t  t) ;

/// @brief Method LerpAngle, addr 0x182273300, size 0xb0, virtual false, abstract: false, final false
static inline float_t LerpAngle(float_t  a, float_t  b, float_t  t) ;

/// @brief Method LerpUnclamped, addr 0x18030b390, size 0x10, virtual false, abstract: false, final false
static inline float_t LerpUnclamped(float_t  a, float_t  b, float_t  t) ;

/// @brief Method LinearToGammaSpace, addr 0x1822733b0, size 0x10, virtual false, abstract: false, final false
static inline float_t LinearToGammaSpace(float_t  value) ;

/// @brief Method Log, addr 0x181909140, size 0x20, virtual false, abstract: false, final false
static inline float_t Log(float_t  f) ;

/// @brief Method Log, addr 0x181909120, size 0x20, virtual false, abstract: false, final false
static inline float_t Log(float_t  f, float_t  p) ;

/// @brief Method Log10, addr 0x181909100, size 0x20, virtual false, abstract: false, final false
static inline float_t Log10(float_t  f) ;

/// @brief Method Max, addr 0x182273470, size 0x10, virtual false, abstract: false, final false
static inline float_t Max(float_t  a, float_t  b) ;

/// @brief Method Max, addr 0x1822733c0, size 0xb0, virtual false, abstract: false, final false
static inline float_t Max(::ArrayW<float_t>  values) ;

/// @brief Method Max, addr 0x1821142b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t Max(int32_t  a, int32_t  b) ;

/// @brief Method Min, addr 0x182273480, size 0x10, virtual false, abstract: false, final false
static inline float_t Min(float_t  a, float_t  b) ;

/// @brief Method Min, addr 0x1802dc440, size 0x10, virtual false, abstract: false, final false
static inline int32_t Min(int32_t  a, int32_t  b) ;

/// @brief Method Min, addr 0x1802d5440, size 0x40, virtual false, abstract: false, final false
static inline int32_t Min(::ArrayW<int32_t>  values) ;

/// @brief Method MoveTowards, addr 0x182273490, size 0x50, virtual false, abstract: false, final false
static inline float_t MoveTowards(float_t  current, float_t  target, float_t  maxDelta) ;

/// @brief Method MoveTowardsAngle, addr 0x1802f5e60, size 0x100, virtual false, abstract: false, final false
static inline float_t MoveTowardsAngle(float_t  current, float_t  target, float_t  maxDelta) ;

/// @brief Method NextPowerOfTwo, addr 0x1822734e0, size 0x30, virtual false, abstract: false, final false
static inline int32_t NextPowerOfTwo(int32_t  value) ;

/// @brief Method PerlinNoise, addr 0x182273510, size 0x10, virtual false, abstract: false, final false
static inline float_t PerlinNoise(float_t  x, float_t  y) ;

/// @brief Method PingPong, addr 0x182273520, size 0x80, virtual false, abstract: false, final false
static inline float_t PingPong(float_t  t, float_t  length) ;

/// @brief Method Pow, addr 0x1819095d0, size 0x20, virtual false, abstract: false, final false
static inline float_t Pow(float_t  f, float_t  p) ;

/// @brief Method Repeat, addr 0x1802f5f60, size 0x60, virtual false, abstract: false, final false
static inline float_t Repeat(float_t  t, float_t  length) ;

/// @brief Method Round, addr 0x181909b20, size 0x20, virtual false, abstract: false, final false
static inline float_t Round(float_t  f) ;

/// @brief Method RoundBasedOnMinimumDifference, addr 0x1822735a0, size 0x80, virtual false, abstract: false, final false
static inline double_t RoundBasedOnMinimumDifference(double_t  valueToRound, double_t  minDifference) ;

/// @brief Method RoundToInt, addr 0x181909ac0, size 0x20, virtual false, abstract: false, final false
static inline int32_t RoundToInt(float_t  f) ;

/// @brief Method Sign, addr 0x182273620, size 0x20, virtual false, abstract: false, final false
static inline float_t Sign(float_t  f) ;

/// @brief Method Sin, addr 0x181909c60, size 0x20, virtual false, abstract: false, final false
static inline float_t Sin(float_t  f) ;

/// @brief Method SmoothDamp, addr 0x182273700, size 0x70, virtual false, abstract: false, final false
static inline float_t SmoothDamp(float_t  current, float_t  target, ::by_ref<float_t>  currentVelocity, float_t  smoothTime) ;

/// @brief Method SmoothDamp, addr 0x182273770, size 0x160, virtual false, abstract: false, final false
static inline float_t SmoothDamp(float_t  current, float_t  target, ::by_ref<float_t>  currentVelocity, float_t  smoothTime, float_t  maxSpeed, float_t  deltaTime) ;

/// @brief Method SmoothDampAngle, addr 0x1803e3150, size 0xe0, virtual false, abstract: false, final false
static inline float_t SmoothDampAngle(float_t  current, float_t  target, ::by_ref<float_t>  currentVelocity, float_t  smoothTime) ;

/// @brief Method SmoothDampAngle, addr 0x182273640, size 0xc0, virtual false, abstract: false, final false
static inline float_t SmoothDampAngle(float_t  current, float_t  target, ::by_ref<float_t>  currentVelocity, float_t  smoothTime, float_t  maxSpeed, float_t  deltaTime) ;

/// @brief Method SmoothStep, addr 0x1822738d0, size 0x60, virtual false, abstract: false, final false
static inline float_t SmoothStep(float_t  from, float_t  to, float_t  t) ;

/// @brief Method Sqrt, addr 0x181909f70, size 0x30, virtual false, abstract: false, final false
static inline float_t Sqrt(float_t  f) ;

/// @brief Method Tan, addr 0x181909fa0, size 0x20, virtual false, abstract: false, final false
static inline float_t Tan(float_t  f) ;

static inline float_t getStaticF_Epsilon() ;

static inline void setStaticF_Epsilon(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Mathf() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Mathf) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine
