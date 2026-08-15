#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Filtered.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Filtered)
namespace WaveHarmonic::Crest {
struct Filtered_Mode;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct Filtered_Mode;
}
namespace WaveHarmonic::Crest {
class Filtered;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Filtered_Mode);
MARK_REF_T(::WaveHarmonic::Crest::Filtered*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Filtered_Mode, "WaveHarmonic.Crest", "Filtered/Mode");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Filtered*, "WaveHarmonic.Crest", "Filtered");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Filtered/Mode
struct CORDL_TYPE Filtered_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Filtered_Mode_Unwrapped
enum struct __Filtered_Mode_Unwrapped : int32_t {
__E_Include = static_cast<int32_t>(0x0),
__E_Exclude = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Filtered_Mode_Unwrapped () const noexcept {
return static_cast<__Filtered_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Filtered_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Filtered_Mode(int32_t  value__) noexcept;

/// @brief Field Exclude value: I32(1)
static ::WaveHarmonic::Crest::Filtered_Mode const Exclude;

/// @brief Field Include value: I32(0)
static ::WaveHarmonic::Crest::Filtered_Mode const Include;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20106};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Filtered_Mode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Filtered_Mode) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Filtered
class CORDL_TYPE Filtered : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
using Mode = ::WaveHarmonic::Crest::Filtered_Mode;

static inline ::WaveHarmonic::Crest::Filtered* New_ctor(int32_t  unset) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(int32_t  unset) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Filtered() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Filtered", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Filtered(Filtered && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Filtered", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Filtered(Filtered const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20107};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Filtered) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
