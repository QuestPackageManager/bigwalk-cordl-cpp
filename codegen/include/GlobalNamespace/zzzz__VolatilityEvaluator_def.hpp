#pragma once
// IWYU pragma private; include "GlobalNamespace/VolatilityEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VolatilityEvaluator)
// Forward declare root types
namespace GlobalNamespace {
class VolatilityEvaluator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VolatilityEvaluator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VolatilityEvaluator*, "", "VolatilityEvaluator");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VolatilityEvaluator
class CORDL_TYPE VolatilityEvaluator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Volatility)) float_t  Volatility;

/// @brief Field alpha, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_alpha, put=__cordl_internal_set_alpha)) float_t  alpha;

/// @brief Field ema, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_ema, put=__cordl_internal_set_ema)) float_t  ema;

/// @brief Field emaSq, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_emaSq, put=__cordl_internal_set_emaSq)) float_t  emaSq;

/// @brief Field isInitialized, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitialized, put=__cordl_internal_set_isInitialized)) bool  isInitialized;

static inline ::GlobalNamespace::VolatilityEvaluator* New_ctor(float_t  alpha) ;

/// @brief Method Reset, addr 0x180346ed0, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method UpdateVolatility, addr 0x180346ee0, size 0x90, virtual false, abstract: false, final false
inline float_t UpdateVolatility(float_t  value) ;

constexpr float_t const& __cordl_internal_get_alpha() const;

constexpr float_t& __cordl_internal_get_alpha() ;

constexpr float_t const& __cordl_internal_get_ema() const;

constexpr float_t& __cordl_internal_get_ema() ;

constexpr float_t const& __cordl_internal_get_emaSq() const;

constexpr float_t& __cordl_internal_get_emaSq() ;

constexpr bool const& __cordl_internal_get_isInitialized() const;

constexpr bool& __cordl_internal_get_isInitialized() ;

constexpr void __cordl_internal_set_alpha(float_t  value) ;

constexpr void __cordl_internal_set_ema(float_t  value) ;

constexpr void __cordl_internal_set_emaSq(float_t  value) ;

constexpr void __cordl_internal_set_isInitialized(bool  value) ;

/// @brief Method .ctor, addr 0x180346f70, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  alpha) ;

/// @brief Method get_Volatility, addr 0x180346fb0, size 0x1d0, virtual false, abstract: false, final false
inline float_t get_Volatility() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VolatilityEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolatilityEvaluator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VolatilityEvaluator(VolatilityEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolatilityEvaluator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolatilityEvaluator(VolatilityEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4811};

/// @brief Field alpha, offset: 0x10, size: 0x4, def value: None
 float_t  ___alpha;

/// @brief Field ema, offset: 0x14, size: 0x4, def value: None
 float_t  ___ema;

/// @brief Field emaSq, offset: 0x18, size: 0x4, def value: None
 float_t  ___emaSq;

/// @brief Field isInitialized, offset: 0x1c, size: 0x1, def value: None
 bool  ___isInitialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VolatilityEvaluator, ___alpha) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolatilityEvaluator, ___ema) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolatilityEvaluator, ___emaSq) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolatilityEvaluator, ___isInitialized) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VolatilityEvaluator) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
