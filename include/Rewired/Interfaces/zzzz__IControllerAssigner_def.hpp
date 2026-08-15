#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerAssigner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerAssigner)
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IControllerAssigner;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IControllerAssigner*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IControllerAssigner*, "Rewired.Interfaces", "IControllerAssigner");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IControllerAssigner
class CORDL_TYPE IControllerAssigner {
public:
// Declarations
 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

/// @brief Method AssignController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AssignController(::Rewired::ControllerType  controllerType, ::Rewired::Controller*  controller) ;

/// @brief Method CanHandleAssignment, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool CanHandleAssignment(::Rewired::ControllerType  controllerType, ::Rewired::Controller*  controller) ;

/// @brief Method get_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method set_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_enabled(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerAssigner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerAssigner(IControllerAssigner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2245};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
