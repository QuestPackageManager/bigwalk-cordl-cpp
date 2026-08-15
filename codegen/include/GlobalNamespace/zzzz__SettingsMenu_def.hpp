#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsMenu)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace GlobalNamespace {
class RebindMenu;
}
namespace GlobalNamespace {
class SettingsCatagory;
}
namespace GlobalNamespace {
struct SettingsMenu__SelectTask_d__28;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsMenu;
}
namespace GlobalNamespace {
struct SettingsMenu__SelectTask_d__28;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SettingsMenu*);
MARK_VAL_T(::GlobalNamespace::SettingsMenu__SelectTask_d__28);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsMenu*, "", "SettingsMenu");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsMenu__SelectTask_d__28, "", "SettingsMenu/<SelectTask>d__28");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: SettingsMenu/<SelectTask>d__28
struct CORDL_TYPE SettingsMenu__SelectTask_d__28 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1804441d0, size 0x2c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SettingsMenu__SelectTask_d__28() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "target", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr SettingsMenu__SelectTask_d__28(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::UnityEngine::GameObject>  target, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5310};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  target;

/// @brief Field <>u__1, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsMenu__SelectTask_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu__SelectTask_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu__SelectTask_d__28, target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu__SelectTask_d__28, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsMenu__SelectTask_d__28) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.UI.Selectable
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsMenu
class CORDL_TYPE SettingsMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SelectTask_d__28 = ::GlobalNamespace::SettingsMenu__SelectTask_d__28;

/// @brief Field activeCatagory, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeCatagory, put=__cordl_internal_set_activeCatagory)) ::UnityW<::GlobalNamespace::SettingsCatagory>  activeCatagory;

/// @brief Field buttonList, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonList, put=__cordl_internal_set_buttonList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*  buttonList;

/// @brief Field catagoryAudio, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_catagoryAudio, put=__cordl_internal_set_catagoryAudio)) ::UnityW<::GlobalNamespace::SettingsCatagory>  catagoryAudio;

/// @brief Field catagoryControls, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_catagoryControls, put=__cordl_internal_set_catagoryControls)) ::UnityW<::GlobalNamespace::SettingsCatagory>  catagoryControls;

/// @brief Field catagoryGeneral, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_catagoryGeneral, put=__cordl_internal_set_catagoryGeneral)) ::UnityW<::GlobalNamespace::SettingsCatagory>  catagoryGeneral;

/// @brief Field catagoryGraphics, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_catagoryGraphics, put=__cordl_internal_set_catagoryGraphics)) ::UnityW<::GlobalNamespace::SettingsCatagory>  catagoryGraphics;

/// @brief Field catagoryRebind, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_catagoryRebind, put=__cordl_internal_set_catagoryRebind)) ::UnityW<::GlobalNamespace::SettingsCatagory>  catagoryRebind;

/// @brief Field contents, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_contents, put=__cordl_internal_set_contents)) ::UnityW<::UnityEngine::Transform>  contents;

/// @brief Field isInMainMenu, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInMainMenu, put=__cordl_internal_set_isInMainMenu)) bool  isInMainMenu;

/// @brief Field lastSelected, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSelected, put=__cordl_internal_set_lastSelected)) ::UnityW<::UnityEngine::GameObject>  lastSelected;

/// @brief Field logVerbose, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field postRebindDefaultSelections, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_postRebindDefaultSelections, put=__cordl_internal_set_postRebindDefaultSelections)) ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>  postRebindDefaultSelections;

/// @brief Field rebindMenuGamepad, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rebindMenuGamepad, put=__cordl_internal_set_rebindMenuGamepad)) ::UnityW<::GlobalNamespace::RebindMenu>  rebindMenuGamepad;

/// @brief Field rebindMenuGamepadNMouseL, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_rebindMenuGamepadNMouseL, put=__cordl_internal_set_rebindMenuGamepadNMouseL)) ::UnityW<::GlobalNamespace::RebindMenu>  rebindMenuGamepadNMouseL;

/// @brief Field rebindMenuGamepadNMouseR, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rebindMenuGamepadNMouseR, put=__cordl_internal_set_rebindMenuGamepadNMouseR)) ::UnityW<::GlobalNamespace::RebindMenu>  rebindMenuGamepadNMouseR;

/// @brief Field rebindMenuKeyboard, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rebindMenuKeyboard, put=__cordl_internal_set_rebindMenuKeyboard)) ::UnityW<::GlobalNamespace::RebindMenu>  rebindMenuKeyboard;

/// @brief Method ActionGoToRebindGamepad, addr 0x18043db50, size 0x60, virtual false, abstract: false, final false
inline void ActionGoToRebindGamepad() ;

/// @brief Method ActionGoToRebindGamepadNmouseL, addr 0x18043da90, size 0x60, virtual false, abstract: false, final false
inline void ActionGoToRebindGamepadNmouseL() ;

/// @brief Method ActionGoToRebindGamepadNmouseR, addr 0x18043daf0, size 0x60, virtual false, abstract: false, final false
inline void ActionGoToRebindGamepadNmouseR() ;

/// @brief Method ActionGoToRebindKeyboard, addr 0x18043dbb0, size 0x60, virtual false, abstract: false, final false
inline void ActionGoToRebindKeyboard() ;

/// @brief Method ActionResetAudio, addr 0x18043dc10, size 0x130, virtual false, abstract: false, final false
inline void ActionResetAudio() ;

/// @brief Method ActionResetControls, addr 0x18043dd40, size 0x110, virtual false, abstract: false, final false
inline void ActionResetControls() ;

/// @brief Method ActionResetGeneral, addr 0x18043de50, size 0x130, virtual false, abstract: false, final false
inline void ActionResetGeneral() ;

/// @brief Method ActionResetGraphics, addr 0x18043df80, size 0x110, virtual false, abstract: false, final false
inline void ActionResetGraphics() ;

/// @brief Method GoBack, addr 0x18043e130, size 0x240, virtual false, abstract: false, final false
inline void GoBack() ;

/// @brief Method GoBackFromCatagory, addr 0x18043e090, size 0xa0, virtual false, abstract: false, final false
inline void GoBackFromCatagory() ;

/// @brief Method GoToPostRebindState, addr 0x18043e370, size 0x1d0, virtual false, abstract: false, final false
inline void GoToPostRebindState() ;

/// @brief Method NavigateToAudio, addr 0x18043e540, size 0x40, virtual false, abstract: false, final false
inline void NavigateToAudio() ;

/// @brief Method NavigateToCatagory, addr 0x18043e580, size 0x40, virtual false, abstract: false, final false
inline void NavigateToCatagory(::GlobalNamespace::SettingsCatagory*  catagory) ;

/// @brief Method NavigateToControls, addr 0x18043e5c0, size 0x40, virtual false, abstract: false, final false
inline void NavigateToControls() ;

/// @brief Method NavigateToGeneral, addr 0x18043e600, size 0x40, virtual false, abstract: false, final false
inline void NavigateToGeneral() ;

/// @brief Method NavigateToGraphics, addr 0x18043e640, size 0x40, virtual false, abstract: false, final false
inline void NavigateToGraphics() ;

/// @brief Method NavigateToRebind, addr 0x18043e680, size 0x40, virtual false, abstract: false, final false
inline void NavigateToRebind() ;

static inline ::GlobalNamespace::SettingsMenu* New_ctor() ;

/// @brief Method OnDisable, addr 0x18043e6c0, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18043e6f0, size 0x110, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PressCatagoryButton, addr 0x18043e800, size 0xc0, virtual false, abstract: false, final false
inline void PressCatagoryButton(::GlobalNamespace::SettingsCatagory*  catagory) ;

/// @brief Method RefreshAll, addr 0x18043e8c0, size 0x70, virtual false, abstract: false, final false
inline void RefreshAll() ;

/// @brief Method SelectTask, addr 0x18043e930, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid SelectTask(::UnityEngine::GameObject*  target) ;

/// @brief Method SetToAudio, addr 0x18043e9a0, size 0x10, virtual false, abstract: false, final false
inline void SetToAudio() ;

/// @brief Method SetToControls, addr 0x18043e9b0, size 0x10, virtual false, abstract: false, final false
inline void SetToControls() ;

/// @brief Method SetToGeneral, addr 0x18043e9c0, size 0x10, virtual false, abstract: false, final false
inline void SetToGeneral() ;

/// @brief Method SetToGraphics, addr 0x18043e9d0, size 0x10, virtual false, abstract: false, final false
inline void SetToGraphics() ;

/// @brief Method SetToRebinding, addr 0x18043e9e0, size 0x10, virtual false, abstract: false, final false
inline void SetToRebinding() ;

/// @brief Method SettingBackEvent, addr 0x18043e9f0, size 0x190, virtual false, abstract: false, final false
inline void SettingBackEvent() ;

/// @brief Method Start, addr 0x18043eb80, size 0x20, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwapToCatagory, addr 0x18043eba0, size 0xc0, virtual false, abstract: false, final false
inline void SwapToCatagory(::GlobalNamespace::SettingsCatagory*  newCatagory) ;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& __cordl_internal_get_activeCatagory() const;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& __cordl_internal_get_activeCatagory() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>* const& __cordl_internal_get_buttonList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*& __cordl_internal_get_buttonList() ;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& __cordl_internal_get_catagoryAudio() const;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& __cordl_internal_get_catagoryAudio() ;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& __cordl_internal_get_catagoryControls() const;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& __cordl_internal_get_catagoryControls() ;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& __cordl_internal_get_catagoryGeneral() const;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& __cordl_internal_get_catagoryGeneral() ;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& __cordl_internal_get_catagoryGraphics() const;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& __cordl_internal_get_catagoryGraphics() ;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory> const& __cordl_internal_get_catagoryRebind() const;

constexpr ::UnityW<::GlobalNamespace::SettingsCatagory>& __cordl_internal_get_catagoryRebind() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_contents() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_contents() ;

constexpr bool const& __cordl_internal_get_isInMainMenu() const;

constexpr bool& __cordl_internal_get_isInMainMenu() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_lastSelected() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_lastSelected() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>> const& __cordl_internal_get_postRebindDefaultSelections() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>& __cordl_internal_get_postRebindDefaultSelections() ;

constexpr ::UnityW<::GlobalNamespace::RebindMenu> const& __cordl_internal_get_rebindMenuGamepad() const;

constexpr ::UnityW<::GlobalNamespace::RebindMenu>& __cordl_internal_get_rebindMenuGamepad() ;

constexpr ::UnityW<::GlobalNamespace::RebindMenu> const& __cordl_internal_get_rebindMenuGamepadNMouseL() const;

constexpr ::UnityW<::GlobalNamespace::RebindMenu>& __cordl_internal_get_rebindMenuGamepadNMouseL() ;

constexpr ::UnityW<::GlobalNamespace::RebindMenu> const& __cordl_internal_get_rebindMenuGamepadNMouseR() const;

constexpr ::UnityW<::GlobalNamespace::RebindMenu>& __cordl_internal_get_rebindMenuGamepadNMouseR() ;

constexpr ::UnityW<::GlobalNamespace::RebindMenu> const& __cordl_internal_get_rebindMenuKeyboard() const;

constexpr ::UnityW<::GlobalNamespace::RebindMenu>& __cordl_internal_get_rebindMenuKeyboard() ;

constexpr void __cordl_internal_set_activeCatagory(::UnityW<::GlobalNamespace::SettingsCatagory>  value) ;

constexpr void __cordl_internal_set_buttonList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*  value) ;

constexpr void __cordl_internal_set_catagoryAudio(::UnityW<::GlobalNamespace::SettingsCatagory>  value) ;

constexpr void __cordl_internal_set_catagoryControls(::UnityW<::GlobalNamespace::SettingsCatagory>  value) ;

constexpr void __cordl_internal_set_catagoryGeneral(::UnityW<::GlobalNamespace::SettingsCatagory>  value) ;

constexpr void __cordl_internal_set_catagoryGraphics(::UnityW<::GlobalNamespace::SettingsCatagory>  value) ;

constexpr void __cordl_internal_set_catagoryRebind(::UnityW<::GlobalNamespace::SettingsCatagory>  value) ;

constexpr void __cordl_internal_set_contents(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_isInMainMenu(bool  value) ;

constexpr void __cordl_internal_set_lastSelected(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_postRebindDefaultSelections(::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>  value) ;

constexpr void __cordl_internal_set_rebindMenuGamepad(::UnityW<::GlobalNamespace::RebindMenu>  value) ;

constexpr void __cordl_internal_set_rebindMenuGamepadNMouseL(::UnityW<::GlobalNamespace::RebindMenu>  value) ;

constexpr void __cordl_internal_set_rebindMenuGamepadNMouseR(::UnityW<::GlobalNamespace::RebindMenu>  value) ;

constexpr void __cordl_internal_set_rebindMenuKeyboard(::UnityW<::GlobalNamespace::RebindMenu>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsMenu(SettingsMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsMenu(SettingsMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5311};

/// @brief Field isInMainMenu, offset: 0x20, size: 0x1, def value: None
 bool  ___isInMainMenu;

/// @brief Field catagoryGeneral, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsCatagory>  ___catagoryGeneral;

/// @brief Field catagoryGraphics, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsCatagory>  ___catagoryGraphics;

/// @brief Field catagoryAudio, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsCatagory>  ___catagoryAudio;

/// @brief Field catagoryControls, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsCatagory>  ___catagoryControls;

/// @brief Field catagoryRebind, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsCatagory>  ___catagoryRebind;

/// @brief Field rebindMenuKeyboard, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RebindMenu>  ___rebindMenuKeyboard;

/// @brief Field rebindMenuGamepad, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RebindMenu>  ___rebindMenuGamepad;

/// @brief Field rebindMenuGamepadNMouseR, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RebindMenu>  ___rebindMenuGamepadNMouseR;

/// @brief Field rebindMenuGamepadNMouseL, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RebindMenu>  ___rebindMenuGamepadNMouseL;

/// @brief Field contents, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___contents;

/// @brief Field postRebindDefaultSelections, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>  ___postRebindDefaultSelections;

/// @brief Field logVerbose, offset: 0x80, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field activeCatagory, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsCatagory>  ___activeCatagory;

/// @brief Field buttonList, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*  ___buttonList;

/// @brief Field lastSelected, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___lastSelected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___isInMainMenu) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___catagoryGeneral) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___catagoryGraphics) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___catagoryAudio) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___catagoryControls) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___catagoryRebind) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___rebindMenuKeyboard) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___rebindMenuGamepad) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___rebindMenuGamepadNMouseR) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___rebindMenuGamepadNMouseL) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___contents) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___postRebindDefaultSelections) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___logVerbose) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___activeCatagory) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___buttonList) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsMenu, ___lastSelected) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsMenu) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
