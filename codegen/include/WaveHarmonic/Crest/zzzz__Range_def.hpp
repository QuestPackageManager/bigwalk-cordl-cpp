#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Range.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Range)
namespace WaveHarmonic::Crest {
struct Range_Clamp;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct Range_Clamp;
}
namespace WaveHarmonic::Crest {
class Range;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Range_Clamp);
MARK_REF_T(::WaveHarmonic::Crest::Range*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Range_Clamp, "WaveHarmonic.Crest", "Range/Clamp");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Range*, "WaveHarmonic.Crest", "Range");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Range/Clamp
struct CORDL_TYPE Range_Clamp {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Range_Clamp_Unwrapped
enum struct __Range_Clamp_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Minimum = static_cast<int32_t>(0x1),
__E_Maximum = static_cast<int32_t>(0x2),
__E_Both = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Range_Clamp_Unwrapped () const noexcept {
return static_cast<__Range_Clamp_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Range_Clamp() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Range_Clamp(int32_t  value__) noexcept;

/// @brief Field Both value: I32(3)
static ::WaveHarmonic::Crest::Range_Clamp const Both;

/// @brief Field Maximum value: I32(2)
static ::WaveHarmonic::Crest::Range_Clamp const Maximum;

/// @brief Field Minimum value: I32(1)
static ::WaveHarmonic::Crest::Range_Clamp const Minimum;

/// @brief Field None value: I32(0)
static ::WaveHarmonic::Crest::Range_Clamp const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Range_Clamp, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Range_Clamp) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Range
class CORDL_TYPE Range : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
using Clamp = ::WaveHarmonic::Crest::Range_Clamp;

static inline ::WaveHarmonic::Crest::Range* New_ctor(float_t  minimum, float_t  maximum, ::WaveHarmonic::Crest::Range_Clamp  clamp, float_t  scale, bool  delayed, int32_t  step, bool  power) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(float_t  minimum, float_t  maximum, ::WaveHarmonic::Crest::Range_Clamp  clamp, float_t  scale, bool  delayed, int32_t  step, bool  power) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Range() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Range", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Range(Range && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Range", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Range(Range const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20102};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Range) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
