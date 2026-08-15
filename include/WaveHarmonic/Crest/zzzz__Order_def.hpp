#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Order.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Order)
namespace WaveHarmonic::Crest {
struct Order_Placement;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct Order_Placement;
}
namespace WaveHarmonic::Crest {
class Order;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Order_Placement);
MARK_REF_T(::WaveHarmonic::Crest::Order*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Order_Placement, "WaveHarmonic.Crest", "Order/Placement");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Order*, "WaveHarmonic.Crest", "Order");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.Order/Placement
struct CORDL_TYPE Order_Placement {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Order_Placement_Unwrapped
enum struct __Order_Placement_Unwrapped : int32_t {
__E_Heading = static_cast<int32_t>(0x0),
__E_Below = static_cast<int32_t>(0x1),
__E_Above = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Order_Placement_Unwrapped () const noexcept {
return static_cast<__Order_Placement_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Order_Placement() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Order_Placement(int32_t  value__) noexcept;

/// @brief Field Above value: I32(2)
static ::WaveHarmonic::Crest::Order_Placement const Above;

/// @brief Field Below value: I32(1)
static ::WaveHarmonic::Crest::Order_Placement const Below;

/// @brief Field Heading value: I32(0)
static ::WaveHarmonic::Crest::Order_Placement const Heading;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20083};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Order_Placement, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Order_Placement) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Order
class CORDL_TYPE Order : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
using Placement = ::WaveHarmonic::Crest::Order_Placement;

static inline ::WaveHarmonic::Crest::Order* New_ctor(::StringW  target, ::WaveHarmonic::Crest::Order_Placement  placement) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  target, ::WaveHarmonic::Crest::Order_Placement  placement) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Order() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Order", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Order(Order && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Order", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Order(Order const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20084};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Order) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
