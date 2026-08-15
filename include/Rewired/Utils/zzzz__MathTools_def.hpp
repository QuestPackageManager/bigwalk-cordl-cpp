#pragma once
// IWYU pragma private; include "Rewired/Utils/MathTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathTools)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired::Utils {
class MathTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::MathTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::MathTools*, "Rewired.Utils", "MathTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.MathTools
class CORDL_TYPE MathTools : public ::System::Object {
public:
// Declarations
/// @brief Method Abs, addr 0x1819079a0, size 0x70, virtual false, abstract: false, final false
static inline double_t Abs(double_t  value) ;

/// @brief Method Abs, addr 0x181907b40, size 0x70, virtual false, abstract: false, final false
static inline float_t Abs(float_t  value) ;

/// @brief Method Abs, addr 0x181907a70, size 0x70, virtual false, abstract: false, final false
static inline int16_t Abs(int16_t  value) ;

/// @brief Method Abs, addr 0x181907ae0, size 0x60, virtual false, abstract: false, final false
static inline int32_t Abs(int32_t  value) ;

/// @brief Method Abs, addr 0x181907930, size 0x70, virtual false, abstract: false, final false
static inline int64_t Abs(int64_t  value) ;

/// @brief Method Abs, addr 0x181907a10, size 0x60, virtual false, abstract: false, final false
static inline int8_t Abs(int8_t  value) ;

/// @brief Method Acos, addr 0x181907bb0, size 0x20, virtual false, abstract: false, final false
static inline float_t Acos(float_t  value) ;

/// @brief Method AngleIsBetween, addr 0x181907bd0, size 0x80, virtual false, abstract: false, final false
static inline bool AngleIsBetween(float_t  angle, float_t  min, float_t  max) ;

/// @brief Method AngleIsNear, addr 0x181907c50, size 0xa0, virtual false, abstract: false, final false
static inline bool AngleIsNear(float_t  angle, float_t  targetAngle, float_t  threshold) ;

/// @brief Method Approximately, addr 0x181907d30, size 0x60, virtual false, abstract: false, final false
static inline bool Approximately(float_t  a, float_t  b) ;

/// @brief Method ApproximatelyZero, addr 0x181907cf0, size 0x40, virtual false, abstract: false, final false
static inline bool ApproximatelyZero(float_t  a) ;

/// @brief Method Asin, addr 0x181907d90, size 0x20, virtual false, abstract: false, final false
static inline float_t Asin(float_t  value) ;

/// @brief Method Atan, addr 0x181907dd0, size 0x20, virtual false, abstract: false, final false
static inline float_t Atan(float_t  value) ;

/// @brief Method Atan2, addr 0x181907db0, size 0x20, virtual false, abstract: false, final false
static inline float_t Atan2(float_t  y, float_t  x) ;

/// @brief Method BooleanToSign, addr 0x181907df0, size 0x20, virtual false, abstract: false, final false
static inline float_t BooleanToSign(bool  b) ;

/// @brief Method Ceil, addr 0x181907e30, size 0x20, virtual false, abstract: false, final false
static inline float_t Ceil(float_t  value) ;

/// @brief Method CeilToInt, addr 0x181907e10, size 0x20, virtual false, abstract: false, final false
static inline int32_t CeilToInt(float_t  value) ;

/// @brief Method Clamp, addr 0x181907fc0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Clamp(::UnityEngine::Vector2  value, ::UnityEngine::Vector2  min, ::UnityEngine::Vector2  max) ;

/// @brief Method Clamp, addr 0x181908140, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Clamp(::UnityEngine::Vector2  value, float_t  min, float_t  max) ;

/// @brief Method Clamp, addr 0x1819080a0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Clamp(::UnityEngine::Vector3  value, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// @brief Method Clamp, addr 0x181908190, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Clamp(::UnityEngine::Vector3  value, float_t  min, float_t  max) ;

/// @brief Method Clamp, addr 0x181594500, size 0x20, virtual false, abstract: false, final false
static inline double_t Clamp(double_t  value, double_t  min, double_t  max) ;

/// @brief Method Clamp, addr 0x1819081d0, size 0x20, virtual false, abstract: false, final false
static inline float_t Clamp(float_t  value, float_t  min, float_t  max) ;

/// @brief Method Clamp, addr 0x181907fa0, size 0x20, virtual false, abstract: false, final false
static inline int16_t Clamp(int16_t  value, int16_t  min, int16_t  max) ;

/// @brief Method Clamp, addr 0x181908060, size 0x20, virtual false, abstract: false, final false
static inline int32_t Clamp(int32_t  value, int32_t  min, int32_t  max) ;

/// @brief Method Clamp, addr 0x181908020, size 0x20, virtual false, abstract: false, final false
static inline int64_t Clamp(int64_t  value, int64_t  min, int64_t  max) ;

/// @brief Method Clamp, addr 0x181908080, size 0x20, virtual false, abstract: false, final false
static inline int8_t Clamp(int8_t  value, int8_t  min, int8_t  max) ;

/// @brief Method Clamp, addr 0x181908040, size 0x20, virtual false, abstract: false, final false
static inline uint16_t Clamp(uint16_t  value, uint16_t  min, uint16_t  max) ;

/// @brief Method Clamp, addr 0x181908100, size 0x20, virtual false, abstract: false, final false
static inline uint32_t Clamp(uint32_t  value, uint32_t  min, uint32_t  max) ;

/// @brief Method Clamp, addr 0x1819081f0, size 0x20, virtual false, abstract: false, final false
static inline uint64_t Clamp(uint64_t  value, uint64_t  min, uint64_t  max) ;

/// @brief Method Clamp, addr 0x181908120, size 0x20, virtual false, abstract: false, final false
static inline uint8_t Clamp(uint8_t  value, uint8_t  min, uint8_t  max) ;

/// @brief Method Clamp01, addr 0x181907e50, size 0x20, virtual false, abstract: false, final false
static inline float_t Clamp01(float_t  value) ;

/// @brief Method ClampAngle360, addr 0x181907e70, size 0x130, virtual false, abstract: false, final false
static inline float_t ClampAngle360(float_t  angle) ;

/// @brief Method Cos, addr 0x181908210, size 0x20, virtual false, abstract: false, final false
static inline float_t Cos(float_t  value) ;

/// @brief Method Cross, addr 0x181908230, size 0x30, virtual false, abstract: false, final false
static inline float_t Cross(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method DeltaAngle, addr 0x181908260, size 0x60, virtual false, abstract: false, final false
static inline float_t DeltaAngle(float_t  current, float_t  target) ;

/// @brief Method Exp, addr 0x1819082c0, size 0x20, virtual false, abstract: false, final false
static inline float_t Exp(float_t  power) ;

/// @brief Method Floor, addr 0x181908300, size 0x20, virtual false, abstract: false, final false
static inline float_t Floor(float_t  value) ;

/// @brief Method FloorToInt, addr 0x1819082e0, size 0x20, virtual false, abstract: false, final false
static inline int32_t FloorToInt(float_t  value) ;

/// @brief Method GImGGOOLLRqPhPuZdiLcPMHpASJt, addr 0x181908320, size 0x20, virtual false, abstract: false, final false
static inline bool GImGGOOLLRqPhPuZdiLcPMHpASJt(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method GetOffsetToContainRect, addr 0x181908340, size 0xd0, virtual false, abstract: false, final false
static inline bool GetOffsetToContainRect(::UnityEngine::Rect  container, ::UnityEngine::Rect  child, ::by_ref<::UnityEngine::Vector2>  offset) ;

/// @brief Method IntPow, addr 0x181908410, size 0x20, virtual false, abstract: false, final false
static inline int32_t IntPow(int32_t  x, uint32_t  pow) ;

/// @brief Method IsEven, addr 0x181663e20, size 0x10, virtual false, abstract: false, final false
static inline bool IsEven(int32_t  value) ;

/// @brief Method IsExactlyEqual, addr 0x181908460, size 0x30, virtual false, abstract: false, final false
static inline bool IsExactlyEqual(double_t  a, double_t  b) ;

/// @brief Method IsExactlyEqual, addr 0x181908430, size 0x30, virtual false, abstract: false, final false
static inline bool IsExactlyEqual(float_t  a, float_t  b) ;

/// @brief Method IsLessMagnitudeOrEqual, addr 0x181908590, size 0x30, virtual false, abstract: false, final false
static inline bool IsLessMagnitudeOrEqual(double_t  a, double_t  b) ;

/// @brief Method IsLessMagnitudeOrEqual, addr 0x181908560, size 0x30, virtual false, abstract: false, final false
static inline bool IsLessMagnitudeOrEqual(float_t  a, float_t  b) ;

/// @brief Method IsLessMagnitudeOrEqual, addr 0x181908520, size 0x30, virtual false, abstract: false, final false
static inline bool IsLessMagnitudeOrEqual(int16_t  a, int16_t  b) ;

/// @brief Method IsLessMagnitudeOrEqual, addr 0x181908490, size 0x20, virtual false, abstract: false, final false
static inline bool IsLessMagnitudeOrEqual(int32_t  a, int32_t  b) ;

/// @brief Method IsLessMagnitudeOrEqual, addr 0x1819084b0, size 0x20, virtual false, abstract: false, final false
static inline bool IsLessMagnitudeOrEqual(int64_t  a, int64_t  b) ;

/// @brief Method IsLessMagnitudeOrEqual, addr 0x1819084d0, size 0x20, virtual false, abstract: false, final false
static inline bool IsLessMagnitudeOrEqual(int8_t  a, int8_t  b) ;

/// @brief Method IsLessMagnitudeOrEqual, addr 0x1819084f0, size 0x10, virtual false, abstract: false, final false
static inline bool IsLessMagnitudeOrEqual(uint16_t  a, uint16_t  b) ;

/// @brief Method IsLessMagnitudeOrEqual, addr 0x181908500, size 0x10, virtual false, abstract: false, final false
static inline bool IsLessMagnitudeOrEqual(uint32_t  a, uint32_t  b) ;

/// @brief Method IsLessMagnitudeOrEqual, addr 0x181908510, size 0x10, virtual false, abstract: false, final false
static inline bool IsLessMagnitudeOrEqual(uint64_t  a, uint64_t  b) ;

/// @brief Method IsLessMagnitudeOrEqual, addr 0x181908550, size 0x10, virtual false, abstract: false, final false
static inline bool IsLessMagnitudeOrEqual(uint8_t  a, uint8_t  b) ;

/// @brief Method IsMoreMagnitudeOrEqual, addr 0x181908680, size 0x30, virtual false, abstract: false, final false
static inline bool IsMoreMagnitudeOrEqual(double_t  a, double_t  b) ;

/// @brief Method IsMoreMagnitudeOrEqual, addr 0x1819085e0, size 0x30, virtual false, abstract: false, final false
static inline bool IsMoreMagnitudeOrEqual(float_t  a, float_t  b) ;

/// @brief Method IsMoreMagnitudeOrEqual, addr 0x181908650, size 0x30, virtual false, abstract: false, final false
static inline bool IsMoreMagnitudeOrEqual(int16_t  a, int16_t  b) ;

/// @brief Method IsMoreMagnitudeOrEqual, addr 0x1819085c0, size 0x20, virtual false, abstract: false, final false
static inline bool IsMoreMagnitudeOrEqual(int32_t  a, int32_t  b) ;

/// @brief Method IsMoreMagnitudeOrEqual, addr 0x181908630, size 0x20, virtual false, abstract: false, final false
static inline bool IsMoreMagnitudeOrEqual(int64_t  a, int64_t  b) ;

/// @brief Method IsMoreMagnitudeOrEqual, addr 0x1819086d0, size 0x20, virtual false, abstract: false, final false
static inline bool IsMoreMagnitudeOrEqual(int8_t  a, int8_t  b) ;

/// @brief Method IsMoreMagnitudeOrEqual, addr 0x181908620, size 0x10, virtual false, abstract: false, final false
static inline bool IsMoreMagnitudeOrEqual(uint16_t  a, uint16_t  b) ;

/// @brief Method IsMoreMagnitudeOrEqual, addr 0x181908610, size 0x10, virtual false, abstract: false, final false
static inline bool IsMoreMagnitudeOrEqual(uint32_t  a, uint32_t  b) ;

/// @brief Method IsMoreMagnitudeOrEqual, addr 0x1819086c0, size 0x10, virtual false, abstract: false, final false
static inline bool IsMoreMagnitudeOrEqual(uint64_t  a, uint64_t  b) ;

/// @brief Method IsMoreMagnitudeOrEqual, addr 0x1819086b0, size 0x10, virtual false, abstract: false, final false
static inline bool IsMoreMagnitudeOrEqual(uint8_t  a, uint8_t  b) ;

/// @brief Method IsNear, addr 0x181908940, size 0x30, virtual false, abstract: false, final false
static inline bool IsNear(float_t  value, float_t  targetValue) ;

/// @brief Method IsNear, addr 0x181908970, size 0x30, virtual false, abstract: false, final false
static inline bool IsNear(float_t  value, float_t  targetValue, float_t  threshold) ;

/// @brief Method IsNearOrWholeNumber, addr 0x181908890, size 0x50, virtual false, abstract: false, final false
static inline bool IsNearOrWholeNumber(float_t  value) ;

/// @brief Method IsNearOrWholeNumber, addr 0x181908800, size 0x90, virtual false, abstract: false, final false
static inline bool IsNearOrWholeNumber(float_t  value, ::by_ref<int32_t>  number) ;

/// @brief Method IsNearOrWholeNumber, addr 0x1819086f0, size 0xb0, virtual false, abstract: false, final false
static inline bool IsNearOrWholeNumber(float_t  value, ::by_ref<int32_t>  number, float_t  threshold) ;

/// @brief Method IsNearOrWholeNumber, addr 0x1819087a0, size 0x60, virtual false, abstract: false, final false
static inline bool IsNearOrWholeNumber(float_t  value, float_t  threshold) ;

/// @brief Method IsNearZero, addr 0x1819088e0, size 0x30, virtual false, abstract: false, final false
static inline bool IsNearZero(float_t  value) ;

/// @brief Method IsNearZero, addr 0x181908910, size 0x30, virtual false, abstract: false, final false
static inline bool IsNearZero(float_t  value, float_t  threshold) ;

/// @brief Method IsZero, addr 0x1819089f0, size 0x20, virtual false, abstract: false, final false
static inline bool IsZero(double_t  value) ;

/// @brief Method IsZero, addr 0x1819089c0, size 0x30, virtual false, abstract: false, final false
static inline bool IsZero(double_t  value, double_t  threshold) ;

/// @brief Method IsZero, addr 0x1819089a0, size 0x20, virtual false, abstract: false, final false
static inline bool IsZero(float_t  value) ;

/// @brief Method IsZero, addr 0x181908a10, size 0x30, virtual false, abstract: false, final false
static inline bool IsZero(float_t  value, float_t  threshold) ;

/// @brief Method LineIntersectsRect, addr 0x181908a40, size 0x410, virtual false, abstract: false, final false
static inline bool LineIntersectsRect(::UnityEngine::Vector2  point1, ::UnityEngine::Vector2  point2, ::UnityEngine::Rect  rect, ::by_ref<float_t>  sqrMagnitude) ;

/// @brief Method LineSegementsIntersect, addr 0x181908e50, size 0x2b0, virtual false, abstract: false, final false
static inline bool LineSegementsIntersect(::UnityEngine::Vector2  line1p1, ::UnityEngine::Vector2  line1p2, ::UnityEngine::Vector2  line2p1, ::UnityEngine::Vector2  line2p2, ::by_ref<::UnityEngine::Vector2>  intersection, bool  collinearIntersects) ;

/// @brief Method Log, addr 0x181909140, size 0x20, virtual false, abstract: false, final false
static inline float_t Log(float_t  value) ;

/// @brief Method Log, addr 0x181909120, size 0x20, virtual false, abstract: false, final false
static inline float_t Log(float_t  value, float_t  p) ;

/// @brief Method Log10, addr 0x181909100, size 0x20, virtual false, abstract: false, final false
static inline float_t Log10(float_t  value) ;

/// @brief Method Max, addr 0x181909360, size 0x10, virtual false, abstract: false, final false
static inline double_t Max(double_t  a, double_t  b) ;

/// @brief Method Max, addr 0x181909370, size 0x10, virtual false, abstract: false, final false
static inline float_t Max(float_t  a, float_t  b) ;

/// @brief Method Max, addr 0x18170f6f0, size 0x10, virtual false, abstract: false, final false
static inline int16_t Max(int16_t  a, int16_t  b) ;

/// @brief Method Max, addr 0x18170f690, size 0x10, virtual false, abstract: false, final false
static inline int32_t Max(int32_t  a, int32_t  b) ;

/// @brief Method Max, addr 0x18170f740, size 0x10, virtual false, abstract: false, final false
static inline int64_t Max(int64_t  a, int64_t  b) ;

/// @brief Method Max, addr 0x18170f700, size 0x10, virtual false, abstract: false, final false
static inline int8_t Max(int8_t  a, int8_t  b) ;

/// @brief Method Max, addr 0x18170f6b0, size 0x10, virtual false, abstract: false, final false
static inline uint16_t Max(uint16_t  a, uint16_t  b) ;

/// @brief Method Max, addr 0x18170f6a0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t Max(uint32_t  a, uint32_t  b) ;

/// @brief Method Max, addr 0x18170f710, size 0x10, virtual false, abstract: false, final false
static inline uint64_t Max(uint64_t  a, uint64_t  b) ;

/// @brief Method Max, addr 0x18170f680, size 0x10, virtual false, abstract: false, final false
static inline uint8_t Max(uint8_t  a, uint8_t  b) ;

/// @brief Method MaxMagnitude, addr 0x181909310, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 MaxMagnitude(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method MaxMagnitude, addr 0x181909260, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 MaxMagnitude(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method MaxMagnitude, addr 0x181909160, size 0x40, virtual false, abstract: false, final false
static inline double_t MaxMagnitude(double_t  a, double_t  b) ;

/// @brief Method MaxMagnitude, addr 0x181909200, size 0x40, virtual false, abstract: false, final false
static inline float_t MaxMagnitude(float_t  a, float_t  b) ;

/// @brief Method MaxMagnitude, addr 0x1819092e0, size 0x30, virtual false, abstract: false, final false
static inline int16_t MaxMagnitude(int16_t  a, int16_t  b) ;

/// @brief Method MaxMagnitude, addr 0x181909240, size 0x20, virtual false, abstract: false, final false
static inline int32_t MaxMagnitude(int32_t  a, int32_t  b) ;

/// @brief Method MaxMagnitude, addr 0x1819091d0, size 0x30, virtual false, abstract: false, final false
static inline int64_t MaxMagnitude(int64_t  a, int64_t  b) ;

/// @brief Method MaxMagnitude, addr 0x1819091a0, size 0x30, virtual false, abstract: false, final false
static inline int8_t MaxMagnitude(int8_t  a, int8_t  b) ;

/// @brief Method MaxMagnitude, addr 0x18170f6b0, size 0x10, virtual false, abstract: false, final false
static inline uint16_t MaxMagnitude(uint16_t  a, uint16_t  b) ;

/// @brief Method MaxMagnitude, addr 0x18170f6a0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t MaxMagnitude(uint32_t  a, uint32_t  b) ;

/// @brief Method MaxMagnitude, addr 0x18170f710, size 0x10, virtual false, abstract: false, final false
static inline uint64_t MaxMagnitude(uint64_t  a, uint64_t  b) ;

/// @brief Method MaxMagnitude, addr 0x18170f680, size 0x10, virtual false, abstract: false, final false
static inline uint8_t MaxMagnitude(uint8_t  a, uint8_t  b) ;

/// @brief Method Min, addr 0x181909590, size 0x10, virtual false, abstract: false, final false
static inline double_t Min(double_t  a, double_t  b) ;

/// @brief Method Min, addr 0x181909580, size 0x10, virtual false, abstract: false, final false
static inline float_t Min(float_t  a, float_t  b) ;

/// @brief Method Min, addr 0x18170f7f0, size 0x10, virtual false, abstract: false, final false
static inline int16_t Min(int16_t  a, int16_t  b) ;

/// @brief Method Min, addr 0x18170f810, size 0x10, virtual false, abstract: false, final false
static inline int32_t Min(int32_t  a, int32_t  b) ;

/// @brief Method Min, addr 0x18170f870, size 0x10, virtual false, abstract: false, final false
static inline int64_t Min(int64_t  a, int64_t  b) ;

/// @brief Method Min, addr 0x18170f7a0, size 0x10, virtual false, abstract: false, final false
static inline int8_t Min(int8_t  a, int8_t  b) ;

/// @brief Method Min, addr 0x18170f860, size 0x10, virtual false, abstract: false, final false
static inline uint16_t Min(uint16_t  a, uint16_t  b) ;

/// @brief Method Min, addr 0x18170f820, size 0x10, virtual false, abstract: false, final false
static inline uint32_t Min(uint32_t  a, uint32_t  b) ;

/// @brief Method Min, addr 0x18170f7b0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t Min(uint64_t  a, uint64_t  b) ;

/// @brief Method Min, addr 0x18170f800, size 0x10, virtual false, abstract: false, final false
static inline uint8_t Min(uint8_t  a, uint8_t  b) ;

/// @brief Method MinMagnitude, addr 0x1819094a0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 MinMagnitude(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method MinMagnitude, addr 0x1819093e0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 MinMagnitude(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method MinMagnitude, addr 0x181909520, size 0x40, virtual false, abstract: false, final false
static inline double_t MinMagnitude(double_t  a, double_t  b) ;

/// @brief Method MinMagnitude, addr 0x181909460, size 0x40, virtual false, abstract: false, final false
static inline float_t MinMagnitude(float_t  a, float_t  b) ;

/// @brief Method MinMagnitude, addr 0x1819094f0, size 0x30, virtual false, abstract: false, final false
static inline int16_t MinMagnitude(int16_t  a, int16_t  b) ;

/// @brief Method MinMagnitude, addr 0x181909560, size 0x20, virtual false, abstract: false, final false
static inline int32_t MinMagnitude(int32_t  a, int32_t  b) ;

/// @brief Method MinMagnitude, addr 0x1819093b0, size 0x30, virtual false, abstract: false, final false
static inline int64_t MinMagnitude(int64_t  a, int64_t  b) ;

/// @brief Method MinMagnitude, addr 0x181909380, size 0x30, virtual false, abstract: false, final false
static inline int8_t MinMagnitude(int8_t  a, int8_t  b) ;

/// @brief Method MinMagnitude, addr 0x18170f860, size 0x10, virtual false, abstract: false, final false
static inline uint16_t MinMagnitude(uint16_t  a, uint16_t  b) ;

/// @brief Method MinMagnitude, addr 0x18170f820, size 0x10, virtual false, abstract: false, final false
static inline uint32_t MinMagnitude(uint32_t  a, uint32_t  b) ;

/// @brief Method MinMagnitude, addr 0x18170f7b0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t MinMagnitude(uint64_t  a, uint64_t  b) ;

/// @brief Method MinMagnitude, addr 0x18170f800, size 0x10, virtual false, abstract: false, final false
static inline uint8_t MinMagnitude(uint8_t  a, uint8_t  b) ;

/// @brief Method Multiply, addr 0x1819095a0, size 0x30, virtual false, abstract: false, final false
static inline float_t Multiply(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

static inline ::Rewired::Utils::MathTools* New_ctor() ;

/// @brief Method Pow, addr 0x1819095d0, size 0x20, virtual false, abstract: false, final false
static inline float_t Pow(float_t  value, float_t  p) ;

/// @brief Method RectContains, addr 0x1819095f0, size 0x50, virtual false, abstract: false, final false
static inline bool RectContains(::UnityEngine::Rect  container, ::UnityEngine::Rect  child) ;

/// @brief Method RectContains, addr 0x181909640, size 0x190, virtual false, abstract: false, final false
static inline bool RectContains(::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pos, float_t  rotation) ;

/// @brief Method Repeat, addr 0x1819097d0, size 0x50, virtual false, abstract: false, final false
static inline float_t Repeat(float_t  t, float_t  length) ;

/// @brief Method ReverseAngleRotationDirection, addr 0x181909820, size 0x40, virtual false, abstract: false, final false
static inline float_t ReverseAngleRotationDirection(float_t  angle) ;

/// @brief Method RotateLocalPoint, addr 0x181909860, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 RotateLocalPoint(::UnityEngine::Vector2  point, float_t  angle) ;

/// @brief Method RotateWorldPoint, addr 0x1819098f0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 RotateWorldPoint(::UnityEngine::Vector2  point, ::UnityEngine::Vector2  center, float_t  angle) ;

/// @brief Method Round, addr 0x181909b20, size 0x20, virtual false, abstract: false, final false
static inline float_t Round(float_t  value) ;

/// @brief Method RoundOffIfNearWholeNumber, addr 0x1819099b0, size 0x80, virtual false, abstract: false, final false
static inline float_t RoundOffIfNearWholeNumber(float_t  value) ;

/// @brief Method RoundOffIfNearWholeNumber, addr 0x181909a30, size 0x90, virtual false, abstract: false, final false
static inline float_t RoundOffIfNearWholeNumber(float_t  value, float_t  threshold) ;

/// @brief Method RoundToInt, addr 0x181909ac0, size 0x20, virtual false, abstract: false, final false
static inline int32_t RoundToInt(float_t  value) ;

/// @brief Method RoundUpToPowerOf2, addr 0x181909ae0, size 0x40, virtual false, abstract: false, final false
static inline uint32_t RoundUpToPowerOf2(uint32_t  value) ;

/// @brief Method Sign, addr 0x181909b60, size 0x20, virtual false, abstract: false, final false
static inline float_t Sign(float_t  value) ;

/// @brief Method Sign, addr 0x181909b50, size 0x10, virtual false, abstract: false, final false
static inline int32_t Sign(int32_t  value) ;

/// @brief Method SignToBoolean, addr 0x181909b40, size 0x10, virtual false, abstract: false, final false
static inline bool SignToBoolean(float_t  sign) ;

/// @brief Method SignedAngle, addr 0x181909b80, size 0xe0, virtual false, abstract: false, final false
static inline float_t SignedAngle(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::Vector3  axis) ;

/// @brief Method Sin, addr 0x181909c60, size 0x20, virtual false, abstract: false, final false
static inline float_t Sin(float_t  value) ;

/// @brief Method SnapVectorToNearestAngle, addr 0x181909c80, size 0x2f0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 SnapVectorToNearestAngle(::UnityEngine::Vector2  vector, float_t  angle) ;

/// @brief Method Sqrt, addr 0x181909f70, size 0x30, virtual false, abstract: false, final false
static inline float_t Sqrt(float_t  value) ;

/// @brief Method Tan, addr 0x181909fa0, size 0x20, virtual false, abstract: false, final false
static inline float_t Tan(float_t  value) ;

/// @brief Method TransformRect, addr 0x181909fc0, size 0x290, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect TransformRect(::UnityEngine::Rect  fromRect, ::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to) ;

/// @brief Method TransformTo, addr 0x18190a250, size 0x190, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 TransformTo(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to) ;

/// @brief Method UuaqcpgNkEEoUbjUWHSfWwWjJmdR, addr 0x18190a3e0, size 0x110, virtual false, abstract: false, final false
static inline bool UuaqcpgNkEEoUbjUWHSfWwWjJmdR(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_2, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_3, ::by_ref<::UnityEngine::Vector2>  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method ValueInNewRange, addr 0x18190a520, size 0xb0, virtual false, abstract: false, final false
static inline float_t ValueInNewRange(float_t  oldValue, float_t  oldMin, float_t  oldMax, float_t  newMin, float_t  newMax) ;

/// @brief Method ValueInNewRange, addr 0x18190a4f0, size 0x30, virtual false, abstract: false, final false
static inline int32_t ValueInNewRange(int32_t  oldValue, int32_t  oldMin, int32_t  oldMax, int32_t  newMin, int32_t  newMax) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MathTools(MathTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathTools(MathTools const& ) = delete;

/// @brief Field AOVZGenhSkHIhFpyEDAbrgboLzgq offset 0xffffffff size 0x4
static constexpr float_t  AOVZGenhSkHIhFpyEDAbrgboLzgq{static_cast<float_t>(1e-10f)};

/// @brief Field Deg2Rad offset 0xffffffff size 0x4
static constexpr float_t  Deg2Rad{static_cast<float_t>(0.017453292f)};

/// @brief Field DnmPlSHFnNcOqIrZDlhsbNnOEuAF offset 0xffffffff size 0x4
static constexpr float_t  DnmPlSHFnNcOqIrZDlhsbNnOEuAF{static_cast<float_t>(0.0001f)};

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(1e-45f)};

/// @brief Field Infinity offset 0xffffffff size 0x4
static constexpr float_t  Infinity{INFINITY};

/// @brief Field NegativeInfinity offset 0xffffffff size 0x4
static constexpr float_t  NegativeInfinity{-INFINITY};

/// @brief Field PI offset 0xffffffff size 0x4
static constexpr float_t  PI{static_cast<float_t>(3.1415927f)};

/// @brief Field Rad2Deg offset 0xffffffff size 0x4
static constexpr float_t  Rad2Deg{static_cast<float_t>(57.29578f)};

/// @brief Field TjZHCQOPtKReIQYgtgiLrsKXQIms offset 0xffffffff size 0x8
static constexpr double_t  TjZHCQOPtKReIQYgtgiLrsKXQIms{static_cast<double_t>(0.0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2921};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::MathTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
