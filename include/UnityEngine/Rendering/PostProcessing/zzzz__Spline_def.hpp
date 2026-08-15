#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Spline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Spline)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class Spline;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::Spline*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Spline*, "UnityEngine.Rendering.PostProcessing", "Spline");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.Spline
class CORDL_TYPE Spline : public ::System::Object {
public:
// Declarations
/// @brief Field cachedData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedData, put=__cordl_internal_set_cachedData)) ::ArrayW<float_t>  cachedData;

/// @brief Field curve, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_curve, put=__cordl_internal_set_curve)) ::UnityEngine::AnimationCurve*  curve;

/// @brief Field frameCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameCount, put=__cordl_internal_set_frameCount)) int32_t  frameCount;

/// @brief Field m_InternalLoopingCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InternalLoopingCurve, put=__cordl_internal_set_m_InternalLoopingCurve)) ::UnityEngine::AnimationCurve*  m_InternalLoopingCurve;

/// @brief Field m_Loop, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Loop, put=__cordl_internal_set_m_Loop)) bool  m_Loop;

/// @brief Field m_Range, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Range, put=__cordl_internal_set_m_Range)) float_t  m_Range;

/// @brief Field m_ZeroValue, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ZeroValue, put=__cordl_internal_set_m_ZeroValue)) float_t  m_ZeroValue;

/// @brief Method Cache, addr 0x181fd15d0, size 0x250, virtual false, abstract: false, final false
inline void Cache(int32_t  frame) ;

/// @brief Method Evaluate, addr 0x181fd1820, size 0x70, virtual false, abstract: false, final false
inline float_t Evaluate(float_t  t) ;

/// @brief Method Evaluate, addr 0x181fd1890, size 0x30, virtual false, abstract: false, final false
inline float_t Evaluate(float_t  t, int32_t  length) ;

/// @brief Method GetHashCode, addr 0x181fd18c0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::Rendering::PostProcessing::Spline* New_ctor(::UnityEngine::AnimationCurve*  curve, float_t  zeroValue, bool  loop, ::UnityEngine::Vector2  bounds) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_cachedData() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_cachedData() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_curve() ;

constexpr int32_t const& __cordl_internal_get_frameCount() const;

constexpr int32_t& __cordl_internal_get_frameCount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_InternalLoopingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_InternalLoopingCurve() ;

constexpr bool const& __cordl_internal_get_m_Loop() const;

constexpr bool& __cordl_internal_get_m_Loop() ;

constexpr float_t const& __cordl_internal_get_m_Range() const;

constexpr float_t& __cordl_internal_get_m_Range() ;

constexpr float_t const& __cordl_internal_get_m_ZeroValue() const;

constexpr float_t& __cordl_internal_get_m_ZeroValue() ;

constexpr void __cordl_internal_set_cachedData(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_frameCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_InternalLoopingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_Loop(bool  value) ;

constexpr void __cordl_internal_set_m_Range(float_t  value) ;

constexpr void __cordl_internal_set_m_ZeroValue(float_t  value) ;

/// @brief Method .ctor, addr 0x181fd18f0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AnimationCurve*  curve, float_t  zeroValue, bool  loop, ::UnityEngine::Vector2  bounds) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Spline(Spline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spline(Spline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18665};

/// @brief Field k_Precision offset 0xffffffff size 0x4
static constexpr int32_t  k_Precision{static_cast<int32_t>(0x80)};

/// @brief Field k_Step offset 0xffffffff size 0x4
static constexpr float_t  k_Step{static_cast<float_t>(0.0078125f)};

/// @brief Field curve, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___curve;

/// @brief Field m_Loop, offset: 0x18, size: 0x1, def value: None
 bool  ___m_Loop;

/// @brief Field m_ZeroValue, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_ZeroValue;

/// @brief Field m_Range, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_Range;

/// @brief Field m_InternalLoopingCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_InternalLoopingCurve;

/// @brief Field frameCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___frameCount;

/// @brief Field cachedData, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ___cachedData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Spline, ___curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Spline, ___m_Loop) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Spline, ___m_ZeroValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Spline, ___m_Range) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Spline, ___m_InternalLoopingCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Spline, ___frameCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Spline, ___cachedData) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Spline) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
