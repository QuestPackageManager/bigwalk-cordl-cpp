#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinMenu)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
class HouseScroller;
}
namespace GlobalNamespace {
class IMenuSelectionRefresher;
}
namespace GlobalNamespace {
struct JoinFriendCard_FriendGameInfo;
}
namespace GlobalNamespace {
class JoinFriendCard;
}
namespace GlobalNamespace {
struct JoinMenu__FetchFriends_d__29;
}
namespace GlobalNamespace {
struct JoinMenu__GetFriendsIds_d__32;
}
namespace GlobalNamespace {
struct JoinMenu__Init_d__19;
}
namespace GlobalNamespace {
struct JoinMenu__PollFriendsLoop_d__22;
}
namespace GlobalNamespace {
struct JoinMenu__ValidateAuth_d__20;
}
namespace GlobalNamespace {
class JoinMenu___c;
}
namespace Shipmates::Events {
class ShowErrorMessageEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace TMPro {
class TMP_InputField;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class JoinMenu;
}
namespace GlobalNamespace {
class JoinMenu___c;
}
namespace GlobalNamespace {
struct JoinMenu__FetchFriends_d__29;
}
namespace GlobalNamespace {
struct JoinMenu__GetFriendsIds_d__32;
}
namespace GlobalNamespace {
struct JoinMenu__Init_d__19;
}
namespace GlobalNamespace {
struct JoinMenu__PollFriendsLoop_d__22;
}
namespace GlobalNamespace {
struct JoinMenu__ValidateAuth_d__20;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JoinMenu*);
MARK_REF_T(::GlobalNamespace::JoinMenu___c*);
MARK_VAL_T(::GlobalNamespace::JoinMenu__FetchFriends_d__29);
MARK_VAL_T(::GlobalNamespace::JoinMenu__GetFriendsIds_d__32);
MARK_VAL_T(::GlobalNamespace::JoinMenu__Init_d__19);
MARK_VAL_T(::GlobalNamespace::JoinMenu__PollFriendsLoop_d__22);
MARK_VAL_T(::GlobalNamespace::JoinMenu__ValidateAuth_d__20);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinMenu*, "", "JoinMenu");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinMenu___c*, "", "JoinMenu/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinMenu__FetchFriends_d__29, "", "JoinMenu/<FetchFriends>d__29");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinMenu__GetFriendsIds_d__32, "", "JoinMenu/<GetFriendsIds>d__32");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinMenu__Init_d__19, "", "JoinMenu/<Init>d__19");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinMenu__PollFriendsLoop_d__22, "", "JoinMenu/<PollFriendsLoop>d__22");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinMenu__ValidateAuth_d__20, "", "JoinMenu/<ValidateAuth>d__20");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: JoinMenu/<>c
class CORDL_TYPE JoinMenu___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::JoinMenu___c*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Func_1<bool>*  __9__19_0;

static inline ::GlobalNamespace::JoinMenu___c* New_ctor() ;

/// @brief Method <Init>b__19_0, addr 0x180444520, size 0x30, virtual false, abstract: false, final false
inline bool _Init_b__19_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::JoinMenu___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__19_0() ;

static inline void setStaticF___9(::GlobalNamespace::JoinMenu___c*  value) ;

static inline void setStaticF___9__19_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoinMenu___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoinMenu___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JoinMenu___c(JoinMenu___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoinMenu___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoinMenu___c(JoinMenu___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5292};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::JoinMenu___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: JoinMenu/<FetchFriends>d__29
struct CORDL_TYPE JoinMenu__FetchFriends_d__29 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180441d30, size 0xba0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1804428d0, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinMenu__FetchFriends_d__29() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::JoinMenu>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>", modifiers: "", def_value: None }]
constexpr JoinMenu__FetchFriends_d__29(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::JoinMenu>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::StringW>*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5293};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::JoinMenu>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::StringW>*>  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinMenu__FetchFriends_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__FetchFriends_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__FetchFriends_d__29, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__FetchFriends_d__29, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__FetchFriends_d__29, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinMenu__FetchFriends_d__29) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: JoinMenu/<GetFriendsIds>d__32
struct CORDL_TYPE JoinMenu__GetFriendsIds_d__32 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1804428f0, size 0x170, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinMenu__GetFriendsIds_d__32() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::StringW>*>", modifiers: "", def_value: None }]
constexpr JoinMenu__GetFriendsIds_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::StringW>*>  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5294};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::StringW>*>  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinMenu__GetFriendsIds_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__GetFriendsIds_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinMenu__GetFriendsIds_d__32) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: JoinMenu/<Init>d__19
struct CORDL_TYPE JoinMenu__Init_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180443430, size 0xaa0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinMenu__Init_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::JoinMenu>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr JoinMenu__Init_d__19(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::JoinMenu>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5295};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::JoinMenu>  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinMenu__Init_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__Init_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__Init_d__19, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__Init_d__19, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinMenu__Init_d__19) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: JoinMenu/<PollFriendsLoop>d__22
struct CORDL_TYPE JoinMenu__PollFriendsLoop_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180443ed0, size 0x300, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1804428d0, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinMenu__PollFriendsLoop_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::JoinMenu>", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr JoinMenu__PollFriendsLoop_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::JoinMenu>  __4__this, ::System::Threading::CancellationToken  token, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5296};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::JoinMenu>  __4__this;

/// @brief Field token, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinMenu__PollFriendsLoop_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__PollFriendsLoop_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__PollFriendsLoop_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__PollFriendsLoop_d__22, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__PollFriendsLoop_d__22, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinMenu__PollFriendsLoop_d__22) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: JoinMenu/<ValidateAuth>d__20
struct CORDL_TYPE JoinMenu__ValidateAuth_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180444710, size 0x100, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinMenu__ValidateAuth_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }]
constexpr JoinMenu__ValidateAuth_d__20(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5297};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinMenu__ValidateAuth_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu__ValidateAuth_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinMenu__ValidateAuth_d__20) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: JoinMenu
class CORDL_TYPE JoinMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FetchFriends_d__29 = ::GlobalNamespace::JoinMenu__FetchFriends_d__29;

using _GetFriendsIds_d__32 = ::GlobalNamespace::JoinMenu__GetFriendsIds_d__32;

using _Init_d__19 = ::GlobalNamespace::JoinMenu__Init_d__19;

using _PollFriendsLoop_d__22 = ::GlobalNamespace::JoinMenu__PollFriendsLoop_d__22;

using _ValidateAuth_d__20 = ::GlobalNamespace::JoinMenu__ValidateAuth_d__20;

using __c = ::GlobalNamespace::JoinMenu___c;

/// @brief Field RequiresAuth, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_RequiresAuth, put=__cordl_internal_set_RequiresAuth)) bool  RequiresAuth;

/// @brief Field _cts, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__cts, put=__cordl_internal_set__cts)) ::System::Threading::CancellationTokenSource*  _cts;

/// @brief Field addressField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_addressField, put=__cordl_internal_set_addressField)) ::UnityW<::TMPro::TMP_InputField>  addressField;

/// @brief Field cardParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cardParent, put=__cordl_internal_set_cardParent)) ::UnityW<::UnityEngine::Transform>  cardParent;

/// @brief Field cards, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_cards, put=__cordl_internal_set_cards)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::JoinFriendCard>>*  cards;

/// @brief Field friendGameInfos, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendGameInfos, put=__cordl_internal_set_friendGameInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  friendGameInfos;

/// @brief Field friendsIdsCache, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendsIdsCache, put=__cordl_internal_set_friendsIdsCache)) ::ArrayW<uint64_t>  friendsIdsCache;

/// @brief Field friendsSection, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendsSection, put=__cordl_internal_set_friendsSection)) ::UnityW<::UnityEngine::Transform>  friendsSection;

/// @brief Field joinFriendCardPrefab, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinFriendCardPrefab, put=__cordl_internal_set_joinFriendCardPrefab)) ::UnityW<::UnityEngine::GameObject>  joinFriendCardPrefab;

/// @brief Field lastFriendsListFetch, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFriendsListFetch, put=__cordl_internal_set_lastFriendsListFetch)) float_t  lastFriendsListFetch;

/// @brief Field logVerbose, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field noneFoundCard, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_noneFoundCard, put=__cordl_internal_set_noneFoundCard)) ::UnityW<::UnityEngine::Transform>  noneFoundCard;

/// @brief Field pollInterval, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_pollInterval, put=__cordl_internal_set_pollInterval)) float_t  pollInterval;

/// @brief Field scroller, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_scroller, put=__cordl_internal_set_scroller)) ::UnityW<::GlobalNamespace::HouseScroller>  scroller;

/// @brief Field timeAtLastPoll, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtLastPoll, put=__cordl_internal_set_timeAtLastPoll)) float_t  timeAtLastPoll;

/// @brief Convert operator to "::GlobalNamespace::IMenuSelectionRefresher"
constexpr operator  ::GlobalNamespace::IMenuSelectionRefresher*() noexcept;

/// @brief Method AddCard, addr 0x180434910, size 0x100, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::JoinFriendCard> AddCard() ;

/// @brief Method AddDummyCard, addr 0x180434a10, size 0x130, virtual false, abstract: false, final false
inline void AddDummyCard() ;

/// @brief Method Awake, addr 0x180434b40, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Back, addr 0x180434bd0, size 0xb0, virtual false, abstract: false, final false
inline void Back() ;

/// @brief Method Connect, addr 0x180434e10, size 0x80, virtual false, abstract: false, final false
inline void Connect() ;

/// @brief Method ConnectTo, addr 0x180434c80, size 0x190, virtual false, abstract: false, final false
inline void ConnectTo(::StringW  joinCode) ;

/// @brief Method FetchFriends, addr 0x180434e90, size 0x90, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* FetchFriends() ;

/// @brief Method GetFriendsIds, addr 0x180434f20, size 0x70, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::StringW>*>* GetFriendsIds() ;

/// @brief Method GoToConnectingMenu, addr 0x180434f90, size 0x90, virtual false, abstract: false, final false
inline void GoToConnectingMenu() ;

/// @brief Method GoToTitleMenu, addr 0x180431150, size 0x70, virtual false, abstract: false, final false
inline void GoToTitleMenu() ;

/// @brief Method Init, addr 0x180435020, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid Init() ;

static inline ::GlobalNamespace::JoinMenu* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180435090, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1804350e0, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180435120, size 0x70, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFailedConnection, addr 0x180435190, size 0x180, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnFailedConnection(::Shipmates::Events::ShowErrorMessageEvent*  arg) ;

/// @brief Method PollFriendsLoop, addr 0x180435310, size 0xb0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* PollFriendsLoop(::System::Threading::CancellationToken  token) ;

/// @brief Method RefreshMenuSelection, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void RefreshMenuSelection() ;

/// @brief Method ResetRequiresAuth, addr 0x1804353c0, size 0x10, virtual false, abstract: false, final false
inline void ResetRequiresAuth() ;

/// @brief Method ValidateAuth, addr 0x1804353d0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ValidateAuth() ;

/// @brief Method ValidateRequiresAuth, addr 0x180435430, size 0x40, virtual false, abstract: false, final false
inline bool ValidateRequiresAuth() ;

constexpr bool const& __cordl_internal_get_RequiresAuth() const;

constexpr bool& __cordl_internal_get_RequiresAuth() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cts() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cts() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_addressField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_addressField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cardParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cardParent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::JoinFriendCard>>* const& __cordl_internal_get_cards() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::JoinFriendCard>>*& __cordl_internal_get_cards() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>* const& __cordl_internal_get_friendGameInfos() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*& __cordl_internal_get_friendGameInfos() ;

constexpr ::ArrayW<uint64_t> const& __cordl_internal_get_friendsIdsCache() const;

constexpr ::ArrayW<uint64_t>& __cordl_internal_get_friendsIdsCache() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_friendsSection() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_friendsSection() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_joinFriendCardPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_joinFriendCardPrefab() ;

constexpr float_t const& __cordl_internal_get_lastFriendsListFetch() const;

constexpr float_t& __cordl_internal_get_lastFriendsListFetch() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_noneFoundCard() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_noneFoundCard() ;

constexpr float_t const& __cordl_internal_get_pollInterval() const;

constexpr float_t& __cordl_internal_get_pollInterval() ;

constexpr ::UnityW<::GlobalNamespace::HouseScroller> const& __cordl_internal_get_scroller() const;

constexpr ::UnityW<::GlobalNamespace::HouseScroller>& __cordl_internal_get_scroller() ;

constexpr float_t const& __cordl_internal_get_timeAtLastPoll() const;

constexpr float_t& __cordl_internal_get_timeAtLastPoll() ;

constexpr void __cordl_internal_set_RequiresAuth(bool  value) ;

constexpr void __cordl_internal_set__cts(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_addressField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set_cardParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_cards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::JoinFriendCard>>*  value) ;

constexpr void __cordl_internal_set_friendGameInfos(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  value) ;

constexpr void __cordl_internal_set_friendsIdsCache(::ArrayW<uint64_t>  value) ;

constexpr void __cordl_internal_set_friendsSection(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_joinFriendCardPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_lastFriendsListFetch(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_noneFoundCard(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pollInterval(float_t  value) ;

constexpr void __cordl_internal_set_scroller(::UnityW<::GlobalNamespace::HouseScroller>  value) ;

constexpr void __cordl_internal_set_timeAtLastPoll(float_t  value) ;

/// @brief Method .ctor, addr 0x180435470, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IMenuSelectionRefresher"
constexpr ::GlobalNamespace::IMenuSelectionRefresher* i___GlobalNamespace__IMenuSelectionRefresher() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoinMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoinMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JoinMenu(JoinMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoinMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoinMenu(JoinMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5298};

/// @brief Field addressField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___addressField;

/// @brief Field cardParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cardParent;

/// @brief Field pollInterval, offset: 0x30, size: 0x4, def value: None
 float_t  ___pollInterval;

/// @brief Field noneFoundCard, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___noneFoundCard;

/// @brief Field scroller, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HouseScroller>  ___scroller;

/// @brief Field friendsSection, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___friendsSection;

/// @brief Field joinFriendCardPrefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___joinFriendCardPrefab;

/// @brief Field logVerbose, offset: 0x58, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field friendGameInfos, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  ___friendGameInfos;

/// @brief Field cards, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::JoinFriendCard>>*  ___cards;

/// @brief Field timeAtLastPoll, offset: 0x70, size: 0x4, def value: None
 float_t  ___timeAtLastPoll;

/// @brief Field _cts, offset: 0x78, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____cts;

/// @brief Field RequiresAuth, offset: 0x80, size: 0x1, def value: None
 bool  ___RequiresAuth;

/// @brief Field friendsIdsCache, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<uint64_t>  ___friendsIdsCache;

/// @brief Field lastFriendsListFetch, offset: 0x90, size: 0x4, def value: None
 float_t  ___lastFriendsListFetch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinMenu, ___addressField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___cardParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___pollInterval) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___noneFoundCard) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___scroller) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___friendsSection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___joinFriendCardPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___logVerbose) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___friendGameInfos) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___cards) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___timeAtLastPoll) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ____cts) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___RequiresAuth) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___friendsIdsCache) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinMenu, ___lastFriendsListFetch) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinMenu) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
