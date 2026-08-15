#pragma once
// IWYU pragma private; include "Animancer/Units/AnimationTimeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Units/zzzz__UnitsAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationTimeAttribute)
namespace Animancer::Units {
struct AnimationTimeAttribute_Units;
}
// Forward declare root types
namespace Animancer::Units {
struct AnimationTimeAttribute_Units;
}
namespace Animancer::Units {
class AnimationTimeAttribute;
}
// Write type traits
MARK_VAL_T(::Animancer::Units::AnimationTimeAttribute_Units);
MARK_REF_T(::Animancer::Units::AnimationTimeAttribute*);
DEFINE_IL2CPP_CLASS(::Animancer::Units::AnimationTimeAttribute_Units, "Animancer.Units", "AnimationTimeAttribute/Units");
DEFINE_IL2CPP_CLASS(::Animancer::Units::AnimationTimeAttribute*, "Animancer.Units", "AnimationTimeAttribute");
// Dependencies 
namespace Animancer::Units {
// Is value type: true
// CS Name: Animancer.Units.AnimationTimeAttribute/Units
struct CORDL_TYPE AnimationTimeAttribute_Units {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnimationTimeAttribute_Units_Unwrapped
enum struct __AnimationTimeAttribute_Units_Unwrapped : int32_t {
__E_Normalized = static_cast<int32_t>(0x0),
__E_Seconds = static_cast<int32_t>(0x1),
__E_Frames = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimationTimeAttribute_Units_Unwrapped () const noexcept {
return static_cast<__AnimationTimeAttribute_Units_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnimationTimeAttribute_Units() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimationTimeAttribute_Units(int32_t  value__) noexcept;

/// @brief Field Frames value: I32(2)
static ::Animancer::Units::AnimationTimeAttribute_Units const Frames;

/// @brief Field Normalized value: I32(0)
static ::Animancer::Units::AnimationTimeAttribute_Units const Normalized;

/// @brief Field Seconds value: I32(1)
static ::Animancer::Units::AnimationTimeAttribute_Units const Seconds;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18242};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Units::AnimationTimeAttribute_Units, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::Units::AnimationTimeAttribute_Units) == 0x4, "Size mismatch!");

} // namespace end def Animancer::Units
// Dependencies Animancer.Units.UnitsAttribute
namespace Animancer::Units {
// Is value type: false
// CS Name: Animancer.Units.AnimationTimeAttribute
class CORDL_TYPE AnimationTimeAttribute : public ::Animancer::Units::UnitsAttribute {
public:
// Declarations
using Units = ::Animancer::Units::AnimationTimeAttribute_Units;

static inline ::Animancer::Units::AnimationTimeAttribute* New_ctor(::Animancer::Units::AnimationTimeAttribute_Units  units) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::Animancer::Units::AnimationTimeAttribute_Units  units) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationTimeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationTimeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationTimeAttribute(AnimationTimeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationTimeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationTimeAttribute(AnimationTimeAttribute const& ) = delete;

/// @brief Field Tooltip offset 0xffffffff size 0x8
static constexpr ::ConstString  Tooltip{u"x = Normalized, s = Seconds, f = Frame"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18243};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Units::AnimationTimeAttribute) == 0x20, "Size mismatch!");

} // namespace end def Animancer::Units
