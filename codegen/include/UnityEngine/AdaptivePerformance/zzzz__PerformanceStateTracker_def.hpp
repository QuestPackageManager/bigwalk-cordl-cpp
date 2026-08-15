#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceStateTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceStateTracker)
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine::AdaptivePerformance {
struct StateAction;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class PerformanceStateTracker;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::PerformanceStateTracker*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceStateTracker*, "UnityEngine.AdaptivePerformance", "PerformanceStateTracker");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.PerformanceStateTracker
class CORDL_TYPE PerformanceStateTracker : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Trend, put=set_Trend)) float_t  Trend;

/// @brief Field <Trend>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Trend_k__BackingField, put=__cordl_internal_set__Trend_k__BackingField)) float_t  _Trend_k__BackingField;

/// @brief Field m_SampleCapacity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SampleCapacity, put=__cordl_internal_set_m_SampleCapacity)) int32_t  m_SampleCapacity;

/// @brief Field m_Samples, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Samples, put=__cordl_internal_set_m_Samples)) ::System::Collections::Generic::Queue_1<float_t>*  m_Samples;

/// @brief Method GetEffectiveTargetFrameRate, addr 0x182219da0, size 0x20, virtual true, abstract: false, final false
inline float_t GetEffectiveTargetFrameRate() ;

static inline ::UnityEngine::AdaptivePerformance::PerformanceStateTracker* New_ctor(int32_t  sampleCapacity) ;

/// @brief Method Update, addr 0x1822222f0, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::StateAction Update() ;

constexpr float_t const& __cordl_internal_get__Trend_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Trend_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_SampleCapacity() const;

constexpr int32_t& __cordl_internal_get_m_SampleCapacity() ;

constexpr ::System::Collections::Generic::Queue_1<float_t>* const& __cordl_internal_get_m_Samples() const;

constexpr ::System::Collections::Generic::Queue_1<float_t>*& __cordl_internal_get_m_Samples() ;

constexpr void __cordl_internal_set__Trend_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_SampleCapacity(int32_t  value) ;

constexpr void __cordl_internal_set_m_Samples(::System::Collections::Generic::Queue_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x1822224e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleCapacity) ;

/// @brief Method get_Trend, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Trend() ;

/// @brief Method set_Trend, addr 0x1802f80f0, size 0x10, virtual false, abstract: false, final false
inline void set_Trend(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerformanceStateTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerformanceStateTracker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerformanceStateTracker(PerformanceStateTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceStateTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerformanceStateTracker(PerformanceStateTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19402};

/// @brief Field m_Samples, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<float_t>*  ___m_Samples;

/// @brief Field m_SampleCapacity, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_SampleCapacity;

/// @brief Field <Trend>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  ____Trend_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceStateTracker, ___m_Samples) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceStateTracker, ___m_SampleCapacity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceStateTracker, ____Trend_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceStateTracker) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
