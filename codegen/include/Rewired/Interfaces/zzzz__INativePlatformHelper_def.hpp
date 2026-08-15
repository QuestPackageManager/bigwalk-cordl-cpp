#pragma once
// IWYU pragma private; include "Rewired/Interfaces/INativePlatformHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INativePlatformHelper)
// Forward declare root types
namespace Rewired::Interfaces {
class INativePlatformHelper;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::INativePlatformHelper*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::INativePlatformHelper*, "Rewired.Interfaces", "INativePlatformHelper");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.INativePlatformHelper
class CORDL_TYPE INativePlatformHelper {
public:
// Declarations
 __declspec(property(get=get_isApplicationFocused)) bool  isApplicationFocused;

/// @brief Method get_isApplicationFocused, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_isApplicationFocused() ;

// Ctor Parameters [CppParam { name: "", ty: "INativePlatformHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
INativePlatformHelper(INativePlatformHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2229};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
