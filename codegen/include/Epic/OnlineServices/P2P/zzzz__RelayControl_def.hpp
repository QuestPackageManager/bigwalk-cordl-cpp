#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/RelayControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RelayControl)
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct RelayControl;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::RelayControl);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::RelayControl, "Epic.OnlineServices.P2P", "RelayControl");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.RelayControl
struct CORDL_TYPE RelayControl {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RelayControl_Unwrapped
enum struct __RelayControl_Unwrapped : int32_t {
__E_NoRelays = static_cast<int32_t>(0x0),
__E_AllowRelays = static_cast<int32_t>(0x1),
__E_ForceRelays = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RelayControl_Unwrapped () const noexcept {
return static_cast<__RelayControl_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RelayControl() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RelayControl(int32_t  value__) noexcept;

/// @brief Field AllowRelays value: I32(1)
static ::Epic::OnlineServices::P2P::RelayControl const AllowRelays;

/// @brief Field ForceRelays value: I32(2)
static ::Epic::OnlineServices::P2P::RelayControl const ForceRelays;

/// @brief Field NoRelays value: I32(0)
static ::Epic::OnlineServices::P2P::RelayControl const NoRelays;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9594};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::RelayControl, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::RelayControl) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
