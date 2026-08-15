#pragma once
// IWYU pragma private; include "GlobalNamespace/HostMenuSelect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HostMenuSelect)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
class GameSlotCard;
}
namespace GlobalNamespace {
struct HostMenuSelect__Init_d__13;
}
namespace GlobalNamespace {
struct HostMenuSelect__ValidateAuth_d__14;
}
namespace GlobalNamespace {
class HostMenuSelect___c;
}
namespace GlobalNamespace {
class HouseScroller;
}
namespace GlobalNamespace {
class IMenuSelectionRefresher;
}
namespace GlobalNamespace {
class ManagedButton;
}
namespace GlobalNamespace {
class SaveData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HostMenuSelect;
}
namespace GlobalNamespace {
class HostMenuSelect___c;
}
namespace GlobalNamespace {
struct HostMenuSelect__Init_d__13;
}
namespace GlobalNamespace {
struct HostMenuSelect__ValidateAuth_d__14;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HostMenuSelect*);
MARK_REF_T(::GlobalNamespace::HostMenuSelect___c*);
MARK_VAL_T(::GlobalNamespace::HostMenuSelect__Init_d__13);
MARK_VAL_T(::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HostMenuSelect*, "", "HostMenuSelect");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HostMenuSelect___c*, "", "HostMenuSelect/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HostMenuSelect__Init_d__13, "", "HostMenuSelect/<Init>d__13");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14, "", "HostMenuSelect/<ValidateAuth>d__14");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HostMenuSelect/<>c
class CORDL_TYPE HostMenuSelect___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::HostMenuSelect___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Func_1<bool>*  __9__13_0;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Comparison_1<::GlobalNamespace::SaveData*>*  __9__16_0;

static inline ::GlobalNamespace::HostMenuSelect___c* New_ctor() ;

/// @brief Method <Init>b__13_0, addr 0x180444520, size 0x30, virtual false, abstract: false, final false
inline bool _Init_b__13_0() ;

/// @brief Method <RefreshSlotCards>b__16_0, addr 0x1804444b0, size 0x30, virtual false, abstract: false, final false
inline int32_t _RefreshSlotCards_b__16_0(::GlobalNamespace::SaveData*  a, ::GlobalNamespace::SaveData*  b) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::HostMenuSelect___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__13_0() ;

static inline ::System::Comparison_1<::GlobalNamespace::SaveData*>* getStaticF___9__16_0() ;

static inline void setStaticF___9(::GlobalNamespace::HostMenuSelect___c*  value) ;

static inline void setStaticF___9__13_0(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__16_0(::System::Comparison_1<::GlobalNamespace::SaveData*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostMenuSelect___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostMenuSelect___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HostMenuSelect___c(HostMenuSelect___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostMenuSelect___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostMenuSelect___c(HostMenuSelect___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5286};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HostMenuSelect___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: HostMenuSelect/<Init>d__13
struct CORDL_TYPE HostMenuSelect__Init_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180442a60, size 0x9d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HostMenuSelect__Init_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HostMenuSelect>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr HostMenuSelect__Init_d__13(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::HostMenuSelect>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HostMenuSelect>  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HostMenuSelect__Init_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect__Init_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect__Init_d__13, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect__Init_d__13, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HostMenuSelect__Init_d__13) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: HostMenuSelect/<ValidateAuth>d__14
struct CORDL_TYPE HostMenuSelect__ValidateAuth_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180444690, size 0x80, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HostMenuSelect__ValidateAuth_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }]
constexpr HostMenuSelect__ValidateAuth_d__14(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5288};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HostMenuSelect
class CORDL_TYPE HostMenuSelect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Init_d__13 = ::GlobalNamespace::HostMenuSelect__Init_d__13;

using _ValidateAuth_d__14 = ::GlobalNamespace::HostMenuSelect__ValidateAuth_d__14;

using __c = ::GlobalNamespace::HostMenuSelect___c;

/// @brief Field RequiresAuth, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_RequiresAuth, put=__cordl_internal_set_RequiresAuth)) bool  RequiresAuth;

/// @brief Field cards, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cards, put=__cordl_internal_set_cards)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameSlotCard>>*  cards;

/// @brief Field leftHandDefaultSelection, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandDefaultSelection, put=__cordl_internal_set_leftHandDefaultSelection)) ::UnityW<::GlobalNamespace::ManagedButton>  leftHandDefaultSelection;

/// @brief Field logVerbose, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field rightHandDefaultSelection, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandDefaultSelection, put=__cordl_internal_set_rightHandDefaultSelection)) ::UnityW<::GlobalNamespace::ManagedButton>  rightHandDefaultSelection;

/// @brief Field scroller, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_scroller, put=__cordl_internal_set_scroller)) ::UnityW<::GlobalNamespace::HouseScroller>  scroller;

/// @brief Field slotCardParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotCardParent, put=__cordl_internal_set_slotCardParent)) ::UnityW<::UnityEngine::Transform>  slotCardParent;

/// @brief Field slotCardPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotCardPrefab, put=__cordl_internal_set_slotCardPrefab)) ::UnityW<::UnityEngine::GameObject>  slotCardPrefab;

/// @brief Convert operator to "::GlobalNamespace::IMenuSelectionRefresher"
constexpr operator  ::GlobalNamespace::IMenuSelectionRefresher*() noexcept;

/// @brief Method ActionSelectSaveData, addr 0x180433690, size 0xb0, virtual false, abstract: false, final false
inline void ActionSelectSaveData(::GlobalNamespace::SaveData*  saveData) ;

/// @brief Method AddGameSlotCard, addr 0x180433740, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameSlotCard> AddGameSlotCard() ;

/// @brief Method Back, addr 0x180431150, size 0x70, virtual false, abstract: false, final false
inline void Back() ;

/// @brief Method GoToHostMenuConfirm, addr 0x180433620, size 0x70, virtual false, abstract: false, final false
inline void GoToHostMenuConfirm() ;

/// @brief Method GoToLoadingMenu, addr 0x180431440, size 0x70, virtual false, abstract: false, final false
inline void GoToLoadingMenu() ;

/// @brief Method GoToTitleMenu, addr 0x180431150, size 0x70, virtual false, abstract: false, final false
inline void GoToTitleMenu() ;

/// @brief Method Init, addr 0x180433780, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid Init() ;

/// @brief Method NavigateRight, addr 0x1804337f0, size 0xb0, virtual false, abstract: false, final false
inline void NavigateRight() ;

static inline ::GlobalNamespace::HostMenuSelect* New_ctor() ;

/// @brief Method OnEnable, addr 0x1804338a0, size 0x70, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshMenuSelection, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void RefreshMenuSelection() ;

/// @brief Method RefreshSlotCards, addr 0x180433910, size 0x430, virtual false, abstract: false, final false
inline void RefreshSlotCards() ;

/// @brief Method ResetRequiresAuth, addr 0x180433d40, size 0x10, virtual false, abstract: false, final false
inline void ResetRequiresAuth() ;

/// @brief Method StartNewGame, addr 0x180433d50, size 0xb0, virtual false, abstract: false, final false
inline void StartNewGame() ;

/// @brief Method ValidateAuth, addr 0x180433e00, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ValidateAuth() ;

/// @brief Method ValidateRequiresAuth, addr 0x180433e60, size 0x40, virtual false, abstract: false, final false
inline bool ValidateRequiresAuth() ;

constexpr bool const& __cordl_internal_get_RequiresAuth() const;

constexpr bool& __cordl_internal_get_RequiresAuth() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameSlotCard>>* const& __cordl_internal_get_cards() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameSlotCard>>*& __cordl_internal_get_cards() ;

constexpr ::UnityW<::GlobalNamespace::ManagedButton> const& __cordl_internal_get_leftHandDefaultSelection() const;

constexpr ::UnityW<::GlobalNamespace::ManagedButton>& __cordl_internal_get_leftHandDefaultSelection() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::ManagedButton> const& __cordl_internal_get_rightHandDefaultSelection() const;

constexpr ::UnityW<::GlobalNamespace::ManagedButton>& __cordl_internal_get_rightHandDefaultSelection() ;

constexpr ::UnityW<::GlobalNamespace::HouseScroller> const& __cordl_internal_get_scroller() const;

constexpr ::UnityW<::GlobalNamespace::HouseScroller>& __cordl_internal_get_scroller() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_slotCardParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_slotCardParent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_slotCardPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_slotCardPrefab() ;

constexpr void __cordl_internal_set_RequiresAuth(bool  value) ;

constexpr void __cordl_internal_set_cards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameSlotCard>>*  value) ;

constexpr void __cordl_internal_set_leftHandDefaultSelection(::UnityW<::GlobalNamespace::ManagedButton>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_rightHandDefaultSelection(::UnityW<::GlobalNamespace::ManagedButton>  value) ;

constexpr void __cordl_internal_set_scroller(::UnityW<::GlobalNamespace::HouseScroller>  value) ;

constexpr void __cordl_internal_set_slotCardParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_slotCardPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x180433ea0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IMenuSelectionRefresher"
constexpr ::GlobalNamespace::IMenuSelectionRefresher* i___GlobalNamespace__IMenuSelectionRefresher() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostMenuSelect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostMenuSelect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HostMenuSelect(HostMenuSelect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostMenuSelect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostMenuSelect(HostMenuSelect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5289};

/// @brief Field slotCardPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___slotCardPrefab;

/// @brief Field slotCardParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___slotCardParent;

/// @brief Field cards, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameSlotCard>>*  ___cards;

/// @brief Field scroller, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HouseScroller>  ___scroller;

/// @brief Field rightHandDefaultSelection, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ManagedButton>  ___rightHandDefaultSelection;

/// @brief Field leftHandDefaultSelection, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ManagedButton>  ___leftHandDefaultSelection;

/// @brief Field logVerbose, offset: 0x50, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field RequiresAuth, offset: 0x51, size: 0x1, def value: None
 bool  ___RequiresAuth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HostMenuSelect, ___slotCardPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect, ___slotCardParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect, ___cards) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect, ___scroller) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect, ___rightHandDefaultSelection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect, ___leftHandDefaultSelection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect, ___logVerbose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenuSelect, ___RequiresAuth) == 0x51, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HostMenuSelect) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
