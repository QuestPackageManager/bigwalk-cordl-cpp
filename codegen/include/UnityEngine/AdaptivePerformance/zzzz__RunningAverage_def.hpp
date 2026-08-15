#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/RunningAverage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RunningAverage)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class RunningAverage;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::RunningAverage*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::RunningAverage*, "UnityEngine.AdaptivePerformance", "RunningAverage");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.RunningAverage
class CORDL_TYPE RunningAverage : public ::System::Object {
public:
// Declarations
/// @brief Field m_AverageValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AverageValue, put=__cordl_internal_set_m_AverageValue)) float_t  m_AverageValue;

/// @brief Field m_LastIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastIndex, put=__cordl_internal_set_m_LastIndex)) int32_t  m_LastIndex;

/// @brief Field m_NumValues, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NumValues, put=__cordl_internal_set_m_NumValues)) int32_t  m_NumValues;

/// @brief Field m_Values, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Values, put=__cordl_internal_set_m_Values)) ::ArrayW<float_t>  m_Values;

/// @brief Method AddValue, addr 0x182222540, size 0x70, virtual false, abstract: false, final false
inline void AddValue(float_t  NewValue) ;

/// @brief Method GetAverageOr, addr 0x1822225b0, size 0x10, virtual false, abstract: false, final false
inline float_t GetAverageOr(float_t  defaultValue) ;

/// @brief Method GetMostRecentValueOr, addr 0x1822225c0, size 0x20, virtual false, abstract: false, final false
inline float_t GetMostRecentValueOr(float_t  defaultValue) ;

/// @brief Method GetNumValues, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t GetNumValues() ;

/// @brief Method GetSampleWindowSize, addr 0x1809d15e0, size 0x4e0, virtual false, abstract: false, final false
inline int32_t GetSampleWindowSize() ;

static inline ::UnityEngine::AdaptivePerformance::RunningAverage* New_ctor(int32_t  sampleWindowSize) ;

/// @brief Method Reset, addr 0x1822225e0, size 0x30, virtual false, abstract: false, final false
inline void Reset() ;

constexpr float_t const& __cordl_internal_get_m_AverageValue() const;

constexpr float_t& __cordl_internal_get_m_AverageValue() ;

constexpr int32_t const& __cordl_internal_get_m_LastIndex() const;

constexpr int32_t& __cordl_internal_get_m_LastIndex() ;

constexpr int32_t const& __cordl_internal_get_m_NumValues() const;

constexpr int32_t& __cordl_internal_get_m_NumValues() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_Values() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_Values() ;

constexpr void __cordl_internal_set_m_AverageValue(float_t  value) ;

constexpr void __cordl_internal_set_m_LastIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_NumValues(int32_t  value) ;

constexpr void __cordl_internal_set_m_Values(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x182222610, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleWindowSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RunningAverage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RunningAverage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RunningAverage(RunningAverage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RunningAverage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RunningAverage(RunningAverage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19391};

/// @brief Field m_Values, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_Values;

/// @brief Field m_NumValues, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_NumValues;

/// @brief Field m_LastIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_LastIndex;

/// @brief Field m_AverageValue, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_AverageValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::RunningAverage, ___m_Values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::RunningAverage, ___m_NumValues) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::RunningAverage, ___m_LastIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::RunningAverage, ___m_AverageValue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::RunningAverage) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
