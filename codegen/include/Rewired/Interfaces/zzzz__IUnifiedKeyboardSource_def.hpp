#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IUnifiedKeyboardSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IUnifiedKeyboardSource)
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
struct InputSource;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IUnifiedKeyboardSource;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IUnifiedKeyboardSource*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IUnifiedKeyboardSource*, "Rewired.Interfaces", "IUnifiedKeyboardSource");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IUnifiedKeyboardSource
class CORDL_TYPE IUnifiedKeyboardSource {
public:
// Declarations
 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_controllerExtension)) ::Rewired::Controller_Extension*  controllerExtension;

 __declspec(property(get=get_hardwareMap)) ::Rewired::HardwareControllerMap_Game*  hardwareMap;

 __declspec(property(get=get_inputSource)) ::Rewired::InputSource  inputSource;

/// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method UpdateInputData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateInputData(::Rewired::ControllerDataUpdater*  dataUpdater) ;

/// @brief Method get_buttonCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_buttonCount() ;

/// @brief Method get_controllerExtension, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* get_controllerExtension() ;

/// @brief Method get_hardwareMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::HardwareControllerMap_Game* get_hardwareMap() ;

/// @brief Method get_inputSource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::InputSource get_inputSource() ;

// Ctor Parameters [CppParam { name: "", ty: "IUnifiedKeyboardSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUnifiedKeyboardSource(IUnifiedKeyboardSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2236};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
