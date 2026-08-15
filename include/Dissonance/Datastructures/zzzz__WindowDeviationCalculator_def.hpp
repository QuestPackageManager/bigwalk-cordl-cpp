#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/WindowDeviationCalculator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Datastructures/zzzz__BaseWindowCalculator_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowDeviationCalculator)
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Datastructures {
class WindowDeviationCalculator;
}
// Write type traits
MARK_REF_T(::Dissonance::Datastructures::WindowDeviationCalculator*);
DEFINE_IL2CPP_CLASS(::Dissonance::Datastructures::WindowDeviationCalculator*, "Dissonance.Datastructures", "WindowDeviationCalculator");
// Dependencies Dissonance.Datastructures.BaseWindowCalculator`1<T>
namespace Dissonance::Datastructures {
// Is value type: false
// CS Name: Dissonance.Datastructures.WindowDeviationCalculator
class CORDL_TYPE WindowDeviationCalculator : public ::Dissonance::Datastructures::BaseWindowCalculator_1<float_t> {
public:
// Declarations
 __declspec(property(get=get_Confidence)) float_t  Confidence;

 __declspec(property(get=get_Mean, put=set_Mean)) float_t  Mean;

 __declspec(property(get=get_StdDev, put=set_StdDev)) float_t  StdDev;

/// @brief Field <Mean>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Mean_k__BackingField, put=__cordl_internal_set__Mean_k__BackingField)) float_t  _Mean_k__BackingField;

/// @brief Field <StdDev>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__StdDev_k__BackingField, put=__cordl_internal_set__StdDev_k__BackingField)) float_t  _StdDev_k__BackingField;

/// @brief Field _sum, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__sum, put=__cordl_internal_set__sum)) float_t  _sum;

/// @brief Field _sumOfSquares, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sumOfSquares, put=__cordl_internal_set__sumOfSquares)) float_t  _sumOfSquares;

/// @brief Method CalculateDeviation, addr 0x1805ef9f0, size 0x70, virtual false, abstract: false, final false
inline float_t CalculateDeviation(float_t  mean, float_t  meanOfSquares) ;

/// @brief Method Clear, addr 0x1805efa60, size 0x10, virtual true, abstract: false, final false
inline void Clear() ;

static inline ::Dissonance::Datastructures::WindowDeviationCalculator* New_ctor(uint32_t  size) ;

/// @brief Method Updated, addr 0x1805efa70, size 0x140, virtual true, abstract: false, final false
inline void Updated(::System::Nullable_1<float_t>  removed, float_t  added) ;

constexpr float_t const& __cordl_internal_get__Mean_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Mean_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__StdDev_k__BackingField() const;

constexpr float_t& __cordl_internal_get__StdDev_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__sum() const;

constexpr float_t& __cordl_internal_get__sum() ;

constexpr float_t const& __cordl_internal_get__sumOfSquares() const;

constexpr float_t& __cordl_internal_get__sumOfSquares() ;

constexpr void __cordl_internal_set__Mean_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__StdDev_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__sum(float_t  value) ;

constexpr void __cordl_internal_set__sumOfSquares(float_t  value) ;

/// @brief Method .ctor, addr 0x1805efbb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  size) ;

/// @brief Method get_Confidence, addr 0x1805efbc0, size 0x40, virtual false, abstract: false, final false
inline float_t get_Confidence() ;

/// @brief Method get_Mean, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Mean() ;

/// @brief Method get_StdDev, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_StdDev() ;

/// @brief Method set_Mean, addr 0x1802f81c0, size 0x10, virtual false, abstract: false, final false
inline void set_Mean(float_t  value) ;

/// @brief Method set_StdDev, addr 0x1802f43c0, size 0x10, virtual false, abstract: false, final false
inline void set_StdDev(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowDeviationCalculator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowDeviationCalculator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowDeviationCalculator(WindowDeviationCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowDeviationCalculator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowDeviationCalculator(WindowDeviationCalculator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16945};

/// @brief Field _sum, offset: 0x18, size: 0x4, def value: None
 float_t  ____sum;

/// @brief Field _sumOfSquares, offset: 0x1c, size: 0x4, def value: None
 float_t  ____sumOfSquares;

/// @brief Field <StdDev>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____StdDev_k__BackingField;

/// @brief Field <Mean>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____Mean_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Datastructures::WindowDeviationCalculator, ____sum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Datastructures::WindowDeviationCalculator, ____sumOfSquares) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Datastructures::WindowDeviationCalculator, ____StdDev_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Datastructures::WindowDeviationCalculator, ____Mean_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Datastructures::WindowDeviationCalculator) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Datastructures
