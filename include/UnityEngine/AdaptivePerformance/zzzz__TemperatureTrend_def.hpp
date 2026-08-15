#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/TemperatureTrend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TemperatureTrend)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class TemperatureTrend;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::TemperatureTrend*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::TemperatureTrend*, "UnityEngine.AdaptivePerformance", "TemperatureTrend");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.TemperatureTrend
class CORDL_TYPE TemperatureTrend : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ThermalTrend, put=set_ThermalTrend)) float_t  ThermalTrend;

/// @brief Field <ThermalTrend>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__ThermalTrend_k__BackingField, put=__cordl_internal_set__ThermalTrend_k__BackingField)) float_t  _ThermalTrend_k__BackingField;

/// @brief Field m_NextValueIndex, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextValueIndex, put=__cordl_internal_set_m_NextValueIndex)) int32_t  m_NextValueIndex;

/// @brief Field m_NumValues, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NumValues, put=__cordl_internal_set_m_NumValues)) int32_t  m_NumValues;

/// @brief Field m_OldestValueIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_OldestValueIndex, put=__cordl_internal_set_m_OldestValueIndex)) int32_t  m_OldestValueIndex;

/// @brief Field m_SumX, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SumX, put=__cordl_internal_set_m_SumX)) double_t  m_SumX;

/// @brief Field m_SumXX, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SumXX, put=__cordl_internal_set_m_SumXX)) double_t  m_SumXX;

/// @brief Field m_SumXY, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SumXY, put=__cordl_internal_set_m_SumXY)) double_t  m_SumXY;

/// @brief Field m_SumY, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SumY, put=__cordl_internal_set_m_SumY)) double_t  m_SumY;

/// @brief Field m_Temperature, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Temperature, put=__cordl_internal_set_m_Temperature)) ::ArrayW<float_t>  m_Temperature;

/// @brief Field m_TimeStamps, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TimeStamps, put=__cordl_internal_set_m_TimeStamps)) ::ArrayW<float_t>  m_TimeStamps;

/// @brief Field m_UseProviderTrend, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseProviderTrend, put=__cordl_internal_set_m_UseProviderTrend)) bool  m_UseProviderTrend;

static inline ::UnityEngine::AdaptivePerformance::TemperatureTrend* New_ctor(bool  useProviderTrend) ;

/// @brief Method PopOldestValue, addr 0x182222670, size 0x90, virtual false, abstract: false, final false
inline void PopOldestValue() ;

/// @brief Method PushNewValue, addr 0x182222700, size 0xa0, virtual false, abstract: false, final false
inline void PushNewValue(float_t  tempLevel, float_t  timestamp) ;

/// @brief Method Reset, addr 0x1822227a0, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0x1822228b0, size 0x1b0, virtual false, abstract: false, final false
inline void Update(float_t  temperatureTrendFromProvider, float_t  newTemperatureLevel, bool  changed, float_t  newTemperatureTimestamp) ;

/// @brief Method UpdateTrend, addr 0x1822227c0, size 0xf0, virtual false, abstract: false, final false
inline void UpdateTrend() ;

constexpr float_t const& __cordl_internal_get__ThermalTrend_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ThermalTrend_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_NextValueIndex() const;

constexpr int32_t& __cordl_internal_get_m_NextValueIndex() ;

constexpr int32_t const& __cordl_internal_get_m_NumValues() const;

constexpr int32_t& __cordl_internal_get_m_NumValues() ;

constexpr int32_t const& __cordl_internal_get_m_OldestValueIndex() const;

constexpr int32_t& __cordl_internal_get_m_OldestValueIndex() ;

constexpr double_t const& __cordl_internal_get_m_SumX() const;

constexpr double_t& __cordl_internal_get_m_SumX() ;

constexpr double_t const& __cordl_internal_get_m_SumXX() const;

constexpr double_t& __cordl_internal_get_m_SumXX() ;

constexpr double_t const& __cordl_internal_get_m_SumXY() const;

constexpr double_t& __cordl_internal_get_m_SumXY() ;

constexpr double_t const& __cordl_internal_get_m_SumY() const;

constexpr double_t& __cordl_internal_get_m_SumY() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_Temperature() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_Temperature() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_TimeStamps() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_TimeStamps() ;

constexpr bool const& __cordl_internal_get_m_UseProviderTrend() const;

constexpr bool& __cordl_internal_get_m_UseProviderTrend() ;

constexpr void __cordl_internal_set__ThermalTrend_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_NextValueIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_NumValues(int32_t  value) ;

constexpr void __cordl_internal_set_m_OldestValueIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_SumX(double_t  value) ;

constexpr void __cordl_internal_set_m_SumXX(double_t  value) ;

constexpr void __cordl_internal_set_m_SumXY(double_t  value) ;

constexpr void __cordl_internal_set_m_SumY(double_t  value) ;

constexpr void __cordl_internal_set_m_Temperature(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_TimeStamps(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_UseProviderTrend(bool  value) ;

/// @brief Method .ctor, addr 0x182222a60, size 0x70, virtual false, abstract: false, final false
inline void _ctor(bool  useProviderTrend) ;

/// @brief Method get_ThermalTrend, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_ThermalTrend() ;

/// @brief Method set_ThermalTrend, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_ThermalTrend(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemperatureTrend() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemperatureTrend", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TemperatureTrend(TemperatureTrend && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemperatureTrend", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemperatureTrend(TemperatureTrend const& ) = delete;

/// @brief Field MeasurementTimeframeSeconds offset 0xffffffff size 0x4
static constexpr int32_t  MeasurementTimeframeSeconds{static_cast<int32_t>(0x14)};

/// @brief Field SamplesCapacity offset 0xffffffff size 0x4
static constexpr int32_t  SamplesCapacity{static_cast<int32_t>(0xc8)};

/// @brief Field SlopeAtMaxTrend offset 0xffffffff size 0x8
static constexpr double_t  SlopeAtMaxTrend{static_cast<double_t>(0.0)};

/// @brief Field UpdateFrequency offset 0xffffffff size 0x4
static constexpr int32_t  UpdateFrequency{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19392};

/// @brief Field m_UseProviderTrend, offset: 0x10, size: 0x1, def value: None
 bool  ___m_UseProviderTrend;

/// @brief Field m_SumX, offset: 0x18, size: 0x8, def value: None
 double_t  ___m_SumX;

/// @brief Field m_SumY, offset: 0x20, size: 0x8, def value: None
 double_t  ___m_SumY;

/// @brief Field m_SumXY, offset: 0x28, size: 0x8, def value: None
 double_t  ___m_SumXY;

/// @brief Field m_SumXX, offset: 0x30, size: 0x8, def value: None
 double_t  ___m_SumXX;

/// @brief Field m_TimeStamps, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_TimeStamps;

/// @brief Field m_Temperature, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_Temperature;

/// @brief Field m_NumValues, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_NumValues;

/// @brief Field m_NextValueIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___m_NextValueIndex;

/// @brief Field m_OldestValueIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ___m_OldestValueIndex;

/// @brief Field <ThermalTrend>k__BackingField, offset: 0x54, size: 0x4, def value: None
 float_t  ____ThermalTrend_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ___m_UseProviderTrend) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ___m_SumX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ___m_SumY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ___m_SumXY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ___m_SumXX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ___m_TimeStamps) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ___m_Temperature) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ___m_NumValues) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ___m_NextValueIndex) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ___m_OldestValueIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::TemperatureTrend, ____ThermalTrend_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::TemperatureTrend) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
