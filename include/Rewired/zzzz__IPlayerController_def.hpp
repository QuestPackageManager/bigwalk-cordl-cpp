#pragma once
// IWYU pragma private; include "Rewired/IPlayerController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IPlayerController)
namespace Rewired {
class PlayerController_Axis;
}
namespace Rewired {
class PlayerController_Button;
}
namespace Rewired {
class PlayerController_Element;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Rewired {
class IPlayerController;
}
// Write type traits
MARK_REF_T(::Rewired::IPlayerController*);
DEFINE_IL2CPP_CLASS(::Rewired::IPlayerController*, "Rewired", "IPlayerController");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IPlayerController
class CORDL_TYPE IPlayerController {
public:
// Declarations
 __declspec(property(get=get_axes)) ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Axis*>*  axes;

 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_buttons)) ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Button*>*  buttons;

 __declspec(property(get=get_elementCount)) int32_t  elementCount;

 __declspec(property(get=get_elements)) ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Element*>*  elements;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_playerId, put=set_playerId)) int32_t  playerId;

/// @brief Method GetAxis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t GetAxis(int32_t  index) ;

/// @brief Method GetAxisRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t GetAxisRaw(int32_t  index) ;

/// @brief Method GetButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetButton(int32_t  index) ;

/// @brief Method GetButtonDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetButtonDown(int32_t  index) ;

/// @brief Method GetButtonUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetButtonUp(int32_t  index) ;

/// @brief Method GetElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Element* GetElement(int32_t  index) ;

/// @brief Method GetElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline T GetElement(int32_t  index) ;

/// @brief Method add_AxisValueChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_AxisValueChangedEvent(::System::Action_2<int32_t,float_t>*  value) ;

/// @brief Method add_ButtonStateChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_ButtonStateChangedEvent(::System::Action_2<int32_t,bool>*  value) ;

/// @brief Method add_EnabledStateChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_EnabledStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method get_axes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Axis*>* get_axes() ;

/// @brief Method get_axisCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_axisCount() ;

/// @brief Method get_buttonCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_buttonCount() ;

/// @brief Method get_buttons, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Button*>* get_buttons() ;

/// @brief Method get_elementCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_elementCount() ;

/// @brief Method get_elements, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Element*>* get_elements() ;

/// @brief Method get_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_playerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_playerId() ;

/// @brief Method remove_AxisValueChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_AxisValueChangedEvent(::System::Action_2<int32_t,float_t>*  value) ;

/// @brief Method remove_ButtonStateChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_ButtonStateChangedEvent(::System::Action_2<int32_t,bool>*  value) ;

/// @brief Method remove_EnabledStateChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_EnabledStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method set_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_playerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_playerId(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPlayerController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlayerController(IPlayerController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1899};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
