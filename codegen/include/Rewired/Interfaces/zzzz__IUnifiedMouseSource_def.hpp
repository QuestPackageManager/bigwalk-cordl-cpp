#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IUnifiedMouseSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IUnifiedMouseSource)
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
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IUnifiedMouseSource;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IUnifiedMouseSource*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IUnifiedMouseSource*, "Rewired.Interfaces", "IUnifiedMouseSource");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IUnifiedMouseSource
class CORDL_TYPE IUnifiedMouseSource {
public:
// Declarations
 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_controllerExtension)) ::Rewired::Controller_Extension*  controllerExtension;

 __declspec(property(get=get_hardwareMap)) ::Rewired::HardwareControllerMap_Game*  hardwareMap;

 __declspec(property(get=get_inputSource)) ::Rewired::InputSource  inputSource;

 __declspec(property(get=get_mousePosition)) ::UnityEngine::Vector2  mousePosition;

/// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method UpdateInputData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateInputData(::Rewired::ControllerDataUpdater*  dataUpdater) ;

/// @brief Method get_axisCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_axisCount() ;

/// @brief Method get_buttonCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_buttonCount() ;

/// @brief Method get_controllerExtension, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* get_controllerExtension() ;

/// @brief Method get_hardwareMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::HardwareControllerMap_Game* get_hardwareMap() ;

/// @brief Method get_inputSource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::InputSource get_inputSource() ;

/// @brief Method get_mousePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_mousePosition() ;

// Ctor Parameters [CppParam { name: "", ty: "IUnifiedMouseSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUnifiedMouseSource(IUnifiedMouseSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2235};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
