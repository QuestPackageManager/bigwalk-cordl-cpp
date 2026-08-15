#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Data/CustomControllerElementTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__Pole_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomControllerElementTarget)
namespace Rewired::ComponentControls::Data {
class CustomControllerElementSelector;
}
namespace Rewired::ComponentControls::Data {
struct CustomControllerElementTarget_ValueRange;
}
namespace Rewired {
struct Pole;
}
// Forward declare root types
namespace Rewired::ComponentControls::Data {
struct CustomControllerElementTarget_ValueRange;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTarget;
}
// Write type traits
MARK_VAL_T(::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange);
MARK_REF_T(::Rewired::ComponentControls::Data::CustomControllerElementTarget*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange, "Rewired.ComponentControls.Data", "CustomControllerElementTarget/ValueRange");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Data::CustomControllerElementTarget*, "Rewired.ComponentControls.Data", "CustomControllerElementTarget");
// Dependencies 
namespace Rewired::ComponentControls::Data {
// Is value type: true
// CS Name: Rewired.ComponentControls.Data.CustomControllerElementTarget/ValueRange
struct CORDL_TYPE CustomControllerElementTarget_ValueRange {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomControllerElementTarget_ValueRange_Unwrapped
enum struct __CustomControllerElementTarget_ValueRange_Unwrapped : int32_t {
__E_Full = static_cast<int32_t>(0x0),
__E_Positive = static_cast<int32_t>(0x1),
__E_Negative = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomControllerElementTarget_ValueRange_Unwrapped () const noexcept {
return static_cast<__CustomControllerElementTarget_ValueRange_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerElementTarget_ValueRange() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomControllerElementTarget_ValueRange(int32_t  value__) noexcept;

/// @brief Field Full value: I32(0)
static ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange const Full;

/// @brief Field Negative value: I32(2)
static ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange const Negative;

/// @brief Field Positive value: I32(1)
static ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange const Positive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2806};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Data
// Dependencies Rewired.ComponentControls.Data.CustomControllerElementTarget::ValueRange, Rewired.Pole, System.Object
namespace Rewired::ComponentControls::Data {
// Is value type: false
// CS Name: Rewired.ComponentControls.Data.CustomControllerElementTarget
class CORDL_TYPE CustomControllerElementTarget : public ::System::Object {
public:
// Declarations
using ValueRange = ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange;

/// @brief Field _element, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__element, put=__cordl_internal_set__element)) ::Rewired::ComponentControls::Data::CustomControllerElementSelector*  _element;

/// @brief Field _invert, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__invert, put=__cordl_internal_set__invert)) bool  _invert;

/// @brief Field _valueContribution, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueContribution, put=__cordl_internal_set__valueContribution)) ::Rewired::Pole  _valueContribution;

/// @brief Field _valueRange, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueRange, put=__cordl_internal_set__valueRange)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange  _valueRange;

 __declspec(property(get=get_element)) ::Rewired::ComponentControls::Data::CustomControllerElementSelector*  element;

 __declspec(property(get=get_invert, put=set_invert)) bool  invert;

 __declspec(property(get=get_valueContribution, put=set_valueContribution)) ::Rewired::Pole  valueContribution;

 __declspec(property(get=get_valueRange, put=set_valueRange)) ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange  valueRange;

/// @brief Method ClearElementCaches, addr 0x1818f08d0, size 0x20, virtual false, abstract: false, final false
inline void ClearElementCaches() ;

static inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* New_ctor() ;

static inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget* New_ctor(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector* const& __cordl_internal_get__element() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector*& __cordl_internal_get__element() ;

constexpr bool const& __cordl_internal_get__invert() const;

constexpr bool& __cordl_internal_get__invert() ;

constexpr ::Rewired::Pole const& __cordl_internal_get__valueContribution() const;

constexpr ::Rewired::Pole& __cordl_internal_get__valueContribution() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange const& __cordl_internal_get__valueRange() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange& __cordl_internal_get__valueRange() ;

constexpr void __cordl_internal_set__element(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  value) ;

constexpr void __cordl_internal_set__invert(bool  value) ;

constexpr void __cordl_internal_set__valueContribution(::Rewired::Pole  value) ;

constexpr void __cordl_internal_set__valueRange(::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange  value) ;

/// @brief Method .ctor, addr 0x1818f08f0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818f0940, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_element, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementSelector* get_element() ;

/// @brief Method get_invert, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_invert() ;

/// @brief Method get_valueContribution, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Pole get_valueContribution() ;

/// @brief Method get_valueRange, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange get_valueRange() ;

/// @brief Method set_invert, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_invert(bool  value) ;

/// @brief Method set_valueContribution, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_valueContribution(::Rewired::Pole  value) ;

/// @brief Method set_valueRange, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_valueRange(::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerElementTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerElementTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControllerElementTarget(CustomControllerElementTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerElementTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControllerElementTarget(CustomControllerElementTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2807};

/// @brief Field _element, offset: 0x10, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementSelector*  ____element;

/// @brief Field _valueRange, offset: 0x18, size: 0x4, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange  ____valueRange;

/// @brief Field _valueContribution, offset: 0x1c, size: 0x4, def value: None
 ::Rewired::Pole  ____valueContribution;

/// @brief Field _invert, offset: 0x20, size: 0x1, def value: None
 bool  ____invert;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementTarget, ____element) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementTarget, ____valueRange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementTarget, ____valueContribution) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementTarget, ____invert) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Data::CustomControllerElementTarget) == 0x28, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Data
