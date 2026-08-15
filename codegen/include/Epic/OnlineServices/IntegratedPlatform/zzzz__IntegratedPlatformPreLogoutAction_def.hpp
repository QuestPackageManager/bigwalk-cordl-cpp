#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformPreLogoutAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntegratedPlatformPreLogoutAction)
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformPreLogoutAction;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction, "Epic.OnlineServices.IntegratedPlatform", "IntegratedPlatformPreLogoutAction");
// Dependencies 
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformPreLogoutAction
struct CORDL_TYPE IntegratedPlatformPreLogoutAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IntegratedPlatformPreLogoutAction_Unwrapped
enum struct __IntegratedPlatformPreLogoutAction_Unwrapped : int32_t {
__E_ProcessLogoutImmediately = static_cast<int32_t>(0x0),
__E_DeferLogout = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IntegratedPlatformPreLogoutAction_Unwrapped () const noexcept {
return static_cast<__IntegratedPlatformPreLogoutAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IntegratedPlatformPreLogoutAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IntegratedPlatformPreLogoutAction(int32_t  value__) noexcept;

/// @brief Field DeferLogout value: I32(1)
static ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction const DeferLogout;

/// @brief Field ProcessLogoutImmediately value: I32(0)
static ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction const ProcessLogoutImmediately;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8810};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
