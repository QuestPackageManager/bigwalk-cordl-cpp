#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsoleButtonSwapHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConsoleButtonSwapHandler)
namespace GlobalNamespace {
class ConsoleButtonSwapHandler_SwapButtons;
}
namespace Rewired {
class ControllerStatusChangedEventArgs;
}
namespace Rewired {
class Controller;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ConsoleButtonSwapHandler;
}
namespace GlobalNamespace {
class ConsoleButtonSwapHandler_SwapButtons;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConsoleButtonSwapHandler*);
MARK_REF_T(::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsoleButtonSwapHandler*, "", "ConsoleButtonSwapHandler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*, "", "ConsoleButtonSwapHandler/SwapButtons");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsoleButtonSwapHandler/SwapButtons
class CORDL_TYPE ConsoleButtonSwapHandler_SwapButtons : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActionNameA)) ::StringW  ActionNameA;

 __declspec(property(get=get_ActionNameB)) ::StringW  ActionNameB;

/// @brief Field actionNameA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_actionNameA, put=__cordl_internal_set_actionNameA)) ::StringW  actionNameA;

/// @brief Field actionNameB, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_actionNameB, put=__cordl_internal_set_actionNameB)) ::StringW  actionNameB;

static inline ::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_actionNameA() const;

constexpr ::StringW& __cordl_internal_get_actionNameA() ;

constexpr ::StringW const& __cordl_internal_get_actionNameB() const;

constexpr ::StringW& __cordl_internal_get_actionNameB() ;

constexpr void __cordl_internal_set_actionNameA(::StringW  value) ;

constexpr void __cordl_internal_set_actionNameB(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActionNameA, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_ActionNameA() ;

/// @brief Method get_ActionNameB, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_ActionNameB() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsoleButtonSwapHandler_SwapButtons() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsoleButtonSwapHandler_SwapButtons", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsoleButtonSwapHandler_SwapButtons(ConsoleButtonSwapHandler_SwapButtons && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleButtonSwapHandler_SwapButtons", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsoleButtonSwapHandler_SwapButtons(ConsoleButtonSwapHandler_SwapButtons const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5519};

/// @brief Field actionNameA, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___actionNameA;

/// @brief Field actionNameB, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___actionNameB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons, ___actionNameA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons, ___actionNameB) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsoleButtonSwapHandler
class CORDL_TYPE ConsoleButtonSwapHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SwapButtons = ::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons;

/// @brief Field OnSwapTrigger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSwapTrigger, put=setStaticF_OnSwapTrigger)) ::System::Action*  OnSwapTrigger;

/// @brief Field consoleSwapButtonsList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_consoleSwapButtonsList, put=__cordl_internal_set_consoleSwapButtonsList)) ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  consoleSwapButtonsList;

/// @brief Field swapButtonsNintendo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_swapButtonsNintendo, put=__cordl_internal_set_swapButtonsNintendo)) ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  swapButtonsNintendo;

/// @brief Field swapButtonsPS5, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_swapButtonsPS5, put=__cordl_internal_set_swapButtonsPS5)) ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  swapButtonsPS5;

static inline ::GlobalNamespace::ConsoleButtonSwapHandler* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18037c700, size 0x130, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ReInputOnControllerConnectedEvent, addr 0x18037c830, size 0xc0, virtual false, abstract: false, final false
inline void ReInputOnControllerConnectedEvent(::Rewired::ControllerStatusChangedEventArgs*  obj) ;

/// @brief Method Refresh, addr 0x18037c8f0, size 0x30, virtual false, abstract: false, final false
static inline void Refresh() ;

/// @brief Method Start, addr 0x18037c920, size 0x140, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Swap, addr 0x18037caf0, size 0x220, virtual false, abstract: false, final false
inline void Swap() ;

/// @brief Method SwapButton, addr 0x18037ca60, size 0x90, virtual false, abstract: false, final false
static inline void SwapButton(::Rewired::Controller*  controller, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  buttonsToSwap) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>* const& __cordl_internal_get_consoleSwapButtonsList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*& __cordl_internal_get_consoleSwapButtonsList() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>* const& __cordl_internal_get_swapButtonsNintendo() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*& __cordl_internal_get_swapButtonsNintendo() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>* const& __cordl_internal_get_swapButtonsPS5() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*& __cordl_internal_get_swapButtonsPS5() ;

constexpr void __cordl_internal_set_consoleSwapButtonsList(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  value) ;

constexpr void __cordl_internal_set_swapButtonsNintendo(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  value) ;

constexpr void __cordl_internal_set_swapButtonsPS5(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  value) ;

/// @brief Method .ctor, addr 0x18037cd10, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_OnSwapTrigger() ;

static inline void setStaticF_OnSwapTrigger(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsoleButtonSwapHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsoleButtonSwapHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsoleButtonSwapHandler(ConsoleButtonSwapHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleButtonSwapHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsoleButtonSwapHandler(ConsoleButtonSwapHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5520};

/// @brief Field swapButtonsPS5, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  ___swapButtonsPS5;

/// @brief Field swapButtonsNintendo, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  ___swapButtonsNintendo;

/// @brief Field consoleSwapButtonsList, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleButtonSwapHandler_SwapButtons*>*  ___consoleSwapButtonsList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsoleButtonSwapHandler, ___swapButtonsPS5) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleButtonSwapHandler, ___swapButtonsNintendo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleButtonSwapHandler, ___consoleSwapButtonsList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsoleButtonSwapHandler) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
