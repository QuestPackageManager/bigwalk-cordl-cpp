#pragma once
// IWYU pragma private; include "GlobalNamespace/ControlsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControlsManager)
namespace GlobalNamespace {
struct ControlsManager_ControlsState;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ControlsManager_ControlsState;
}
namespace GlobalNamespace {
class ControlsManager;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ControlsManager_ControlsState);
MARK_REF_T(::GlobalNamespace::ControlsManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControlsManager_ControlsState, "", "ControlsManager/ControlsState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControlsManager*, "", "ControlsManager");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ControlsManager/ControlsState
struct CORDL_TYPE ControlsManager_ControlsState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControlsManager_ControlsState_Unwrapped
enum struct __ControlsManager_ControlsState_Unwrapped : int32_t {
__E_MainMenu = static_cast<int32_t>(0x0),
__E_WorldMenu = static_cast<int32_t>(0x1),
__E_Gameplay = static_cast<int32_t>(0x2),
__E_TextInput = static_cast<int32_t>(0x3),
__E_Rebinding = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControlsManager_ControlsState_Unwrapped () const noexcept {
return static_cast<__ControlsManager_ControlsState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControlsManager_ControlsState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ControlsManager_ControlsState(int32_t  value__) noexcept;

/// @brief Field Gameplay value: I32(2)
static ::GlobalNamespace::ControlsManager_ControlsState const Gameplay;

/// @brief Field MainMenu value: I32(0)
static ::GlobalNamespace::ControlsManager_ControlsState const MainMenu;

/// @brief Field Rebinding value: I32(4)
static ::GlobalNamespace::ControlsManager_ControlsState const Rebinding;

/// @brief Field TextInput value: I32(3)
static ::GlobalNamespace::ControlsManager_ControlsState const TextInput;

/// @brief Field WorldMenu value: I32(1)
static ::GlobalNamespace::ControlsManager_ControlsState const WorldMenu;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5157};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControlsManager_ControlsState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControlsManager_ControlsState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ControlsManager
class CORDL_TYPE ControlsManager : public ::System::Object {
public:
// Declarations
using ControlsState = ::GlobalNamespace::ControlsManager_ControlsState;

/// @brief Field MultiplierHeadControl, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MultiplierHeadControl, put=setStaticF_MultiplierHeadControl)) float_t  MultiplierHeadControl;

/// @brief Field controllerTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_controllerTypes, put=setStaticF_controllerTypes)) ::System::Collections::Generic::List_1<::Rewired::ControllerType>*  controllerTypes;

/// @brief Field inputPlayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_inputPlayers, put=setStaticF_inputPlayers)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  inputPlayers;

/// @brief Field menuModeActive, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_menuModeActive, put=setStaticF_menuModeActive)) bool  menuModeActive;

/// @brief Field rebindModeActive, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_rebindModeActive, put=setStaticF_rebindModeActive)) bool  rebindModeActive;

/// @brief Field textInputModeActive, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_textInputModeActive, put=setStaticF_textInputModeActive)) bool  textInputModeActive;

/// @brief Field worldIsActive, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_worldIsActive, put=setStaticF_worldIsActive)) bool  worldIsActive;

/// @brief Method Initialize, addr 0x18041f240, size 0x260, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::ControlsManager* New_ctor() ;

/// @brief Method Refresh, addr 0x18041f4a0, size 0x670, virtual false, abstract: false, final false
static inline void Refresh() ;

/// @brief Method SetControllerTypes, addr 0x18041fb10, size 0x140, virtual false, abstract: false, final false
static inline void SetControllerTypes() ;

/// @brief Method SetMenuMode, addr 0x18041fc50, size 0xa0, virtual false, abstract: false, final false
static inline void SetMenuMode(bool  active) ;

/// @brief Method SetRebindMode, addr 0x18041fcf0, size 0x50, virtual false, abstract: false, final false
static inline void SetRebindMode(bool  active) ;

/// @brief Method SetTextInputMode, addr 0x18041fd40, size 0x50, virtual false, abstract: false, final false
static inline void SetTextInputMode(bool  active) ;

/// @brief Method SetWorldIsActive, addr 0x18041fd90, size 0x50, virtual false, abstract: false, final false
static inline void SetWorldIsActive(bool  active) ;

/// @brief Method <Refresh>g__DisableAll|14_0, addr 0x18041fde0, size 0x4f0, virtual false, abstract: false, final false
static inline void _Refresh_g__DisableAll_14_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_MultiplierHeadControl() ;

static inline ::System::Collections::Generic::List_1<::Rewired::ControllerType>* getStaticF_controllerTypes() ;

static inline ::System::Collections::Generic::IList_1<::Rewired::Player*>* getStaticF_inputPlayers() ;

static inline bool getStaticF_menuModeActive() ;

static inline bool getStaticF_rebindModeActive() ;

static inline bool getStaticF_textInputModeActive() ;

static inline bool getStaticF_worldIsActive() ;

static inline void setStaticF_MultiplierHeadControl(float_t  value) ;

static inline void setStaticF_controllerTypes(::System::Collections::Generic::List_1<::Rewired::ControllerType>*  value) ;

static inline void setStaticF_inputPlayers(::System::Collections::Generic::IList_1<::Rewired::Player*>*  value) ;

static inline void setStaticF_menuModeActive(bool  value) ;

static inline void setStaticF_rebindModeActive(bool  value) ;

static inline void setStaticF_textInputModeActive(bool  value) ;

static inline void setStaticF_worldIsActive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControlsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControlsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControlsManager(ControlsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControlsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControlsManager(ControlsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5158};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ControlsManager) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
