#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectingMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectingMenu)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
struct ConnectingMenu__CancelTask_d__5;
}
namespace GlobalNamespace {
class ConnectingMenu___c;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectingMenu;
}
namespace GlobalNamespace {
class ConnectingMenu___c;
}
namespace GlobalNamespace {
struct ConnectingMenu__CancelTask_d__5;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConnectingMenu*);
MARK_REF_T(::GlobalNamespace::ConnectingMenu___c*);
MARK_VAL_T(::GlobalNamespace::ConnectingMenu__CancelTask_d__5);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConnectingMenu*, "", "ConnectingMenu");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConnectingMenu___c*, "", "ConnectingMenu/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConnectingMenu__CancelTask_d__5, "", "ConnectingMenu/<CancelTask>d__5");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectingMenu/<>c
class CORDL_TYPE ConnectingMenu___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::ConnectingMenu___c*  __9;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::System::Func_1<bool>*  __9__5_0;

static inline ::GlobalNamespace::ConnectingMenu___c* New_ctor() ;

/// @brief Method <CancelTask>b__5_0, addr 0x180444490, size 0x20, virtual false, abstract: false, final false
inline bool _CancelTask_b__5_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ConnectingMenu___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__5_0() ;

static inline void setStaticF___9(::GlobalNamespace::ConnectingMenu___c*  value) ;

static inline void setStaticF___9__5_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectingMenu___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectingMenu___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectingMenu___c(ConnectingMenu___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectingMenu___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectingMenu___c(ConnectingMenu___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5276};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ConnectingMenu___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConnectingMenu/<CancelTask>d__5
struct CORDL_TYPE ConnectingMenu__CancelTask_d__5 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180441320, size 0x3d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConnectingMenu__CancelTask_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ConnectingMenu>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr ConnectingMenu__CancelTask_d__5(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ConnectingMenu>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5277};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ConnectingMenu>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectingMenu__CancelTask_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectingMenu__CancelTask_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectingMenu__CancelTask_d__5, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectingMenu__CancelTask_d__5, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConnectingMenu__CancelTask_d__5) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectingMenu
class CORDL_TYPE ConnectingMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CancelTask_d__5 = ::GlobalNamespace::ConnectingMenu__CancelTask_d__5;

using __c = ::GlobalNamespace::ConnectingMenu___c;

/// @brief Field cancelButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancelButton, put=__cordl_internal_set_cancelButton)) ::UnityW<::UnityEngine::UI::Button>  cancelButton;

/// @brief Method Cancel, addr 0x180431310, size 0xc0, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method CancelTask, addr 0x180431290, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask CancelTask() ;

/// @brief Method GoToJoinMenu, addr 0x1804313d0, size 0x70, virtual false, abstract: false, final false
inline void GoToJoinMenu() ;

/// @brief Method GoToLoading, addr 0x180431440, size 0x70, virtual false, abstract: false, final false
inline void GoToLoading() ;

static inline ::GlobalNamespace::ConnectingMenu* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804314b0, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Update, addr 0x1804314d0, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_cancelButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_cancelButton() ;

constexpr void __cordl_internal_set_cancelButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectingMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectingMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectingMenu(ConnectingMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectingMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectingMenu(ConnectingMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5278};

/// @brief Field cancelButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___cancelButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectingMenu, ___cancelButton) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConnectingMenu) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
