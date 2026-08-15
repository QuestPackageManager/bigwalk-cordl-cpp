#pragma once
// IWYU pragma private; include "Rewired/InputActionEventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__InputActionEventType_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionEventData)
namespace GlobalNamespace {
class bjNrHIdcztWtOhCzFNvyEAWtiLIA;
}
namespace Rewired {
struct AxisCoordinateMode;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
struct InputActionEventType;
}
namespace Rewired {
struct InputActionSourceData;
}
namespace Rewired {
class Player;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace Rewired {
struct InputActionEventData;
}
// Write type traits
MARK_VAL_T(::Rewired::InputActionEventData);
DEFINE_IL2CPP_CLASS(::Rewired::InputActionEventData, "Rewired", "InputActionEventData");
// Dependencies Rewired.InputActionEventType, Rewired.UpdateLoopType
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputActionEventData
struct CORDL_TYPE InputActionEventData {
public:
// Declarations
 __declspec(property(get=get_actionDescriptiveName)) ::StringW  actionDescriptiveName;

 __declspec(property(get=get_actionName)) ::StringW  actionName;

 __declspec(property(get=get_eventType, put=NiEpSqqGavxGZGrxJggCYQwFIEKp)) ::Rewired::InputActionEventType  eventType;

 __declspec(property(get=get_player)) ::Rewired::Player*  player;

/// @brief Method GetAxis, addr 0x181843790, size 0x30, virtual false, abstract: false, final false
inline float_t GetAxis() ;

/// @brief Method GetAxisCoordinateMode, addr 0x181843550, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::AxisCoordinateMode GetAxisCoordinateMode() ;

/// @brief Method GetAxisCoordinateModePrev, addr 0x181843520, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::AxisCoordinateMode GetAxisCoordinateModePrev() ;

/// @brief Method GetAxisDelta, addr 0x181843580, size 0x30, virtual false, abstract: false, final false
inline float_t GetAxisDelta() ;

/// @brief Method GetAxisPrev, addr 0x1818435b0, size 0x30, virtual false, abstract: false, final false
inline float_t GetAxisPrev() ;

/// @brief Method GetAxisRaw, addr 0x181843700, size 0x30, virtual false, abstract: false, final false
inline float_t GetAxisRaw() ;

/// @brief Method GetAxisRawCoordinateMode, addr 0x181843610, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::AxisCoordinateMode GetAxisRawCoordinateMode() ;

/// @brief Method GetAxisRawCoordinateModePrev, addr 0x1818435e0, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::AxisCoordinateMode GetAxisRawCoordinateModePrev() ;

/// @brief Method GetAxisRawDelta, addr 0x181843640, size 0x30, virtual false, abstract: false, final false
inline float_t GetAxisRawDelta() ;

/// @brief Method GetAxisRawPrev, addr 0x181843670, size 0x30, virtual false, abstract: false, final false
inline float_t GetAxisRawPrev() ;

/// @brief Method GetAxisRawTimeActive, addr 0x1818436a0, size 0x30, virtual false, abstract: false, final false
inline double_t GetAxisRawTimeActive() ;

/// @brief Method GetAxisRawTimeInactive, addr 0x1818436d0, size 0x30, virtual false, abstract: false, final false
inline double_t GetAxisRawTimeInactive() ;

/// @brief Method GetAxisTimeActive, addr 0x181843730, size 0x30, virtual false, abstract: false, final false
inline double_t GetAxisTimeActive() ;

/// @brief Method GetAxisTimeInactive, addr 0x181843760, size 0x30, virtual false, abstract: false, final false
inline double_t GetAxisTimeInactive() ;

/// @brief Method GetButton, addr 0x181843ca0, size 0x30, virtual false, abstract: false, final false
inline bool GetButton() ;

/// @brief Method GetButtonDoublePressDown, addr 0x1818437c0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonDoublePressDown() ;

/// @brief Method GetButtonDoublePressDown, addr 0x1818437f0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonDoublePressDown(float_t  speed) ;

/// @brief Method GetButtonDoublePressHold, addr 0x181843820, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonDoublePressHold() ;

/// @brief Method GetButtonDoublePressHold, addr 0x181843850, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonDoublePressHold(float_t  speed) ;

/// @brief Method GetButtonDoublePressUp, addr 0x181843880, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonDoublePressUp() ;

/// @brief Method GetButtonDoublePressUp, addr 0x1818438b0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonDoublePressUp(float_t  speed) ;

/// @brief Method GetButtonDown, addr 0x1818438e0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonDown() ;

/// @brief Method GetButtonLongPress, addr 0x181843970, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonLongPress() ;

/// @brief Method GetButtonLongPressDown, addr 0x181843910, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonLongPressDown() ;

/// @brief Method GetButtonLongPressUp, addr 0x181843940, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonLongPressUp() ;

/// @brief Method GetButtonPrev, addr 0x1818439a0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonPrev() ;

/// @brief Method GetButtonRepeating, addr 0x1818439d0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonRepeating() ;

/// @brief Method GetButtonShortPress, addr 0x181843a60, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonShortPress() ;

/// @brief Method GetButtonShortPressDown, addr 0x181843a00, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonShortPressDown() ;

/// @brief Method GetButtonShortPressUp, addr 0x181843a30, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonShortPressUp() ;

/// @brief Method GetButtonSinglePressDown, addr 0x181843a90, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonSinglePressDown() ;

/// @brief Method GetButtonSinglePressHold, addr 0x181843ac0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonSinglePressHold() ;

/// @brief Method GetButtonSinglePressUp, addr 0x181843af0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonSinglePressUp() ;

/// @brief Method GetButtonTimePressed, addr 0x181843b20, size 0x30, virtual false, abstract: false, final false
inline double_t GetButtonTimePressed() ;

/// @brief Method GetButtonTimeUnpressed, addr 0x181843b50, size 0x30, virtual false, abstract: false, final false
inline double_t GetButtonTimeUnpressed() ;

/// @brief Method GetButtonTimedPress, addr 0x181843c10, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonTimedPress(float_t  time) ;

/// @brief Method GetButtonTimedPress, addr 0x181843c40, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonTimedPress(float_t  time, float_t  expireIn) ;

/// @brief Method GetButtonTimedPressDown, addr 0x181843b80, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonTimedPressDown(float_t  time) ;

/// @brief Method GetButtonTimedPressUp, addr 0x181843bb0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonTimedPressUp(float_t  time) ;

/// @brief Method GetButtonTimedPressUp, addr 0x181843be0, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonTimedPressUp(float_t  time, float_t  expireIn) ;

/// @brief Method GetButtonUp, addr 0x181843c70, size 0x30, virtual false, abstract: false, final false
inline bool GetButtonUp() ;

/// @brief Method GetCurrentInputSources, addr 0x181843cd0, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputActionSourceData>* GetCurrentInputSources() ;

/// @brief Method GetNegativeButton, addr 0x181844230, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButton() ;

/// @brief Method GetNegativeButtonDoublePressDown, addr 0x181843d80, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonDoublePressDown() ;

/// @brief Method GetNegativeButtonDoublePressDown, addr 0x181843d50, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonDoublePressDown(float_t  speed) ;

/// @brief Method GetNegativeButtonDoublePressHold, addr 0x181843db0, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonDoublePressHold() ;

/// @brief Method GetNegativeButtonDoublePressHold, addr 0x181843de0, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonDoublePressHold(float_t  speed) ;

/// @brief Method GetNegativeButtonDoublePressUp, addr 0x181843e10, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonDoublePressUp() ;

/// @brief Method GetNegativeButtonDoublePressUp, addr 0x181843e40, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonDoublePressUp(float_t  speed) ;

/// @brief Method GetNegativeButtonDown, addr 0x181843e70, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonDown() ;

/// @brief Method GetNegativeButtonLongPress, addr 0x181843f00, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonLongPress() ;

/// @brief Method GetNegativeButtonLongPressDown, addr 0x181843ea0, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonLongPressDown() ;

/// @brief Method GetNegativeButtonLongPressUp, addr 0x181843ed0, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonLongPressUp() ;

/// @brief Method GetNegativeButtonPrev, addr 0x181843f30, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonPrev() ;

/// @brief Method GetNegativeButtonRepeating, addr 0x181843f60, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonRepeating() ;

/// @brief Method GetNegativeButtonShortPress, addr 0x181843ff0, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonShortPress() ;

/// @brief Method GetNegativeButtonShortPressDown, addr 0x181843f90, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonShortPressDown() ;

/// @brief Method GetNegativeButtonShortPressUp, addr 0x181843fc0, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonShortPressUp() ;

/// @brief Method GetNegativeButtonSinglePressDown, addr 0x181844020, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonSinglePressDown() ;

/// @brief Method GetNegativeButtonSinglePressHold, addr 0x181844050, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonSinglePressHold() ;

/// @brief Method GetNegativeButtonSinglePressUp, addr 0x181844080, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonSinglePressUp() ;

/// @brief Method GetNegativeButtonTimePressed, addr 0x1818440b0, size 0x30, virtual false, abstract: false, final false
inline double_t GetNegativeButtonTimePressed() ;

/// @brief Method GetNegativeButtonTimeUnpressed, addr 0x1818440e0, size 0x30, virtual false, abstract: false, final false
inline double_t GetNegativeButtonTimeUnpressed() ;

/// @brief Method GetNegativeButtonTimedPress, addr 0x1818441a0, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonTimedPress(float_t  time) ;

/// @brief Method GetNegativeButtonTimedPress, addr 0x1818441d0, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonTimedPress(float_t  time, float_t  expireIn) ;

/// @brief Method GetNegativeButtonTimedPressDown, addr 0x181844110, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonTimedPressDown(float_t  time) ;

/// @brief Method GetNegativeButtonTimedPressUp, addr 0x181844140, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonTimedPressUp(float_t  time) ;

/// @brief Method GetNegativeButtonTimedPressUp, addr 0x181844170, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonTimedPressUp(float_t  time, float_t  expireIn) ;

/// @brief Method GetNegativeButtonUp, addr 0x181844200, size 0x30, virtual false, abstract: false, final false
inline bool GetNegativeButtonUp() ;

/// @brief Method IsCurrentInputSource, addr 0x181844260, size 0xa0, virtual false, abstract: false, final false
inline bool IsCurrentInputSource(::Rewired::Controller*  controller) ;

/// @brief Method IsCurrentInputSource, addr 0x1818443b0, size 0x90, virtual false, abstract: false, final false
inline bool IsCurrentInputSource(::Rewired::ControllerType  controllerType) ;

/// @brief Method IsCurrentInputSource, addr 0x181844300, size 0xb0, virtual false, abstract: false, final false
inline bool IsCurrentInputSource(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method NiEpSqqGavxGZGrxJggCYQwFIEKp, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void NiEpSqqGavxGZGrxJggCYQwFIEKp(::Rewired::InputActionEventType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181844440, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::bjNrHIdcztWtOhCzFNvyEAWtiLIA*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_actionDescriptiveName, addr 0x1818444a0, size 0xa0, virtual false, abstract: false, final false
inline ::StringW get_actionDescriptiveName() ;

/// @brief Method get_actionName, addr 0x181844540, size 0xa0, virtual false, abstract: false, final false
inline ::StringW get_actionName() ;

/// @brief Method get_eventType, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::InputActionEventType get_eventType() ;

/// @brief Method get_player, addr 0x1818445e0, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::Player* get_player() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionEventData() ;

// Ctor Parameters [CppParam { name: "OIUJLGCQaMvAgIqfMEQRbbccfNsC", ty: "::GlobalNamespace::bjNrHIdcztWtOhCzFNvyEAWtiLIA*", modifiers: "", def_value: None }, CppParam { name: "mywRDqrUvJNJkChRSnYrkvzATNpv", ty: "::Rewired::InputActionEventType", modifiers: "", def_value: None }, CppParam { name: "playerId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "actionId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "updateLoop", ty: "::Rewired::UpdateLoopType", modifiers: "", def_value: None }]
constexpr InputActionEventData(::GlobalNamespace::bjNrHIdcztWtOhCzFNvyEAWtiLIA*  OIUJLGCQaMvAgIqfMEQRbbccfNsC, ::Rewired::InputActionEventType  mywRDqrUvJNJkChRSnYrkvzATNpv, int32_t  playerId, int32_t  actionId, ::Rewired::UpdateLoopType  updateLoop) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1751};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field OIUJLGCQaMvAgIqfMEQRbbccfNsC, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::bjNrHIdcztWtOhCzFNvyEAWtiLIA*  OIUJLGCQaMvAgIqfMEQRbbccfNsC;

/// @brief Field mywRDqrUvJNJkChRSnYrkvzATNpv, offset: 0x8, size: 0x4, def value: None
 ::Rewired::InputActionEventType  mywRDqrUvJNJkChRSnYrkvzATNpv;

/// @brief Field playerId, offset: 0xc, size: 0x4, def value: None
 int32_t  playerId;

/// @brief Field actionId, offset: 0x10, size: 0x4, def value: None
 int32_t  actionId;

/// @brief Field updateLoop, offset: 0x14, size: 0x4, def value: None
 ::Rewired::UpdateLoopType  updateLoop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputActionEventData, OIUJLGCQaMvAgIqfMEQRbbccfNsC) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputActionEventData, mywRDqrUvJNJkChRSnYrkvzATNpv) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputActionEventData, playerId) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputActionEventData, actionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputActionEventData, updateLoop) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputActionEventData) == 0x18, "Size mismatch!");

} // namespace end def Rewired
