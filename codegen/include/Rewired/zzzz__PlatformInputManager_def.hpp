#pragma once
// IWYU pragma private; include "Rewired/PlatformInputManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInputManager)
namespace Rewired::Interfaces {
class IInputSource;
}
namespace Rewired::Interfaces {
class IUnifiedKeyboardSource;
}
namespace Rewired::Interfaces {
class IUnifiedMouseSource;
}
namespace Rewired {
class BridgedController;
}
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
class ControllerDisconnectedEventArgs;
}
namespace Rewired {
struct InputSource;
}
namespace Rewired {
class UpdateControllerInfoEventArgs;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Rewired {
class PlatformInputManager;
}
// Write type traits
MARK_REF_T(::Rewired::PlatformInputManager*);
DEFINE_IL2CPP_CLASS(::Rewired::PlatformInputManager*, "Rewired", "PlatformInputManager");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlatformInputManager
class CORDL_TYPE PlatformInputManager : public ::System::Object {
public:
// Declarations
/// @brief Field _DeviceConnectedEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__DeviceConnectedEvent, put=__cordl_internal_set__DeviceConnectedEvent)) ::System::Action_1<::Rewired::BridgedController*>*  _DeviceConnectedEvent;

/// @brief Field _DeviceDisconnectedEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DeviceDisconnectedEvent, put=__cordl_internal_set__DeviceDisconnectedEvent)) ::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*  _DeviceDisconnectedEvent;

/// @brief Field _SystemDeviceConnectedEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__SystemDeviceConnectedEvent, put=__cordl_internal_set__SystemDeviceConnectedEvent)) ::System::Action*  _SystemDeviceConnectedEvent;

/// @brief Field _SystemDeviceDisconnectedEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__SystemDeviceDisconnectedEvent, put=__cordl_internal_set__SystemDeviceDisconnectedEvent)) ::System::Action*  _SystemDeviceDisconnectedEvent;

/// @brief Field _UpdateControllerInfoEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpdateControllerInfoEvent, put=__cordl_internal_set__UpdateControllerInfoEvent)) ::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*  _UpdateControllerInfoEvent;

 __declspec(property(get=get_deviceCount)) int32_t  deviceCount;

 __declspec(property(get=get_inputSource)) ::Rewired::Interfaces::IInputSource*  inputSource;

 __declspec(property(get=get_inputSourceType)) ::Rewired::InputSource  inputSourceType;

 __declspec(property(get=get_primaryInputManager)) ::Rewired::PlatformInputManager*  primaryInputManager;

/// @brief Method GetInputDataUpdateDelegate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>* GetInputDataUpdateDelegate() ;

/// @brief Method GetUnifiedKeyboardSource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IUnifiedKeyboardSource* GetUnifiedKeyboardSource() ;

/// @brief Method GetUnifiedMouseSource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IUnifiedMouseSource* GetUnifiedMouseSource() ;

/// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Rewired::PlatformInputManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetUnityJoystickId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetUnityJoystickId(int32_t  joystickId, int32_t  unityJoystickId) ;

/// @brief Method SystemDeviceConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SystemDeviceConnected() ;

/// @brief Method SystemDeviceDisconnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SystemDeviceDisconnected() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update(::Rewired::UpdateLoopType  currentUpdateLoop) ;

/// @brief Method UpdateControllerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateControllerData(int32_t  controllerId, ::Rewired::ControllerDataUpdater*  data) ;

constexpr ::System::Action_1<::Rewired::BridgedController*>* const& __cordl_internal_get__DeviceConnectedEvent() const;

constexpr ::System::Action_1<::Rewired::BridgedController*>*& __cordl_internal_get__DeviceConnectedEvent() ;

constexpr ::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>* const& __cordl_internal_get__DeviceDisconnectedEvent() const;

constexpr ::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*& __cordl_internal_get__DeviceDisconnectedEvent() ;

constexpr ::System::Action* const& __cordl_internal_get__SystemDeviceConnectedEvent() const;

constexpr ::System::Action*& __cordl_internal_get__SystemDeviceConnectedEvent() ;

constexpr ::System::Action* const& __cordl_internal_get__SystemDeviceDisconnectedEvent() const;

constexpr ::System::Action*& __cordl_internal_get__SystemDeviceDisconnectedEvent() ;

constexpr ::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>* const& __cordl_internal_get__UpdateControllerInfoEvent() const;

constexpr ::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*& __cordl_internal_get__UpdateControllerInfoEvent() ;

constexpr void __cordl_internal_set__DeviceConnectedEvent(::System::Action_1<::Rewired::BridgedController*>*  value) ;

constexpr void __cordl_internal_set__DeviceDisconnectedEvent(::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*  value) ;

constexpr void __cordl_internal_set__SystemDeviceConnectedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set__SystemDeviceDisconnectedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set__UpdateControllerInfoEvent(::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_DeviceConnectedEvent, addr 0x1818461e0, size 0x90, virtual false, abstract: false, final false
inline void add_DeviceConnectedEvent(::System::Action_1<::Rewired::BridgedController*>*  value) ;

/// @brief Method add_DeviceDisconnectedEvent, addr 0x181846270, size 0x90, virtual false, abstract: false, final false
inline void add_DeviceDisconnectedEvent(::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*  value) ;

/// @brief Method add_SystemDeviceConnectedEvent, addr 0x181846300, size 0x90, virtual false, abstract: false, final false
inline void add_SystemDeviceConnectedEvent(::System::Action*  value) ;

/// @brief Method add_SystemDeviceDisconnectedEvent, addr 0x181846390, size 0x90, virtual false, abstract: false, final false
inline void add_SystemDeviceDisconnectedEvent(::System::Action*  value) ;

/// @brief Method add_UpdateControllerInfoEvent, addr 0x181846420, size 0x90, virtual false, abstract: false, final false
inline void add_UpdateControllerInfoEvent(::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*  value) ;

/// @brief Method get_deviceCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_deviceCount() ;

/// @brief Method get_inputSource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IInputSource* get_inputSource() ;

/// @brief Method get_inputSourceType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::InputSource get_inputSourceType() ;

/// @brief Method get_primaryInputManager, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::PlatformInputManager* get_primaryInputManager() ;

/// @brief Method remove_DeviceConnectedEvent, addr 0x1818464b0, size 0x90, virtual false, abstract: false, final false
inline void remove_DeviceConnectedEvent(::System::Action_1<::Rewired::BridgedController*>*  value) ;

/// @brief Method remove_DeviceDisconnectedEvent, addr 0x181846540, size 0x90, virtual false, abstract: false, final false
inline void remove_DeviceDisconnectedEvent(::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*  value) ;

/// @brief Method remove_SystemDeviceConnectedEvent, addr 0x1818465d0, size 0x90, virtual false, abstract: false, final false
inline void remove_SystemDeviceConnectedEvent(::System::Action*  value) ;

/// @brief Method remove_SystemDeviceDisconnectedEvent, addr 0x181846660, size 0x90, virtual false, abstract: false, final false
inline void remove_SystemDeviceDisconnectedEvent(::System::Action*  value) ;

/// @brief Method remove_UpdateControllerInfoEvent, addr 0x1818466f0, size 0x90, virtual false, abstract: false, final false
inline void remove_UpdateControllerInfoEvent(::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformInputManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformInputManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInputManager(PlatformInputManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInputManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInputManager(PlatformInputManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1772};

/// @brief Field _DeviceConnectedEvent, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Rewired::BridgedController*>*  ____DeviceConnectedEvent;

/// @brief Field _DeviceDisconnectedEvent, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Rewired::ControllerDisconnectedEventArgs*>*  ____DeviceDisconnectedEvent;

/// @brief Field _UpdateControllerInfoEvent, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Rewired::UpdateControllerInfoEventArgs*>*  ____UpdateControllerInfoEvent;

/// @brief Field _SystemDeviceConnectedEvent, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ____SystemDeviceConnectedEvent;

/// @brief Field _SystemDeviceDisconnectedEvent, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ____SystemDeviceDisconnectedEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlatformInputManager, ____DeviceConnectedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlatformInputManager, ____DeviceDisconnectedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlatformInputManager, ____UpdateControllerInfoEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlatformInputManager, ____SystemDeviceConnectedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlatformInputManager, ____SystemDeviceDisconnectedEvent) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlatformInputManager) == 0x38, "Size mismatch!");

} // namespace end def Rewired
