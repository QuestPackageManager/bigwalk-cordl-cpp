#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformCore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractPlatformCore)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmate::Porting::Logs {
class PlatformLog;
}
namespace Shipmate::Porting {
struct AbstractPlatformCore__AsyncSanitizedString_d__12;
}
namespace Shipmate::Porting {
struct AbstractPlatformCore__CallOnSuspending_d__15;
}
namespace Shipmate::Porting {
struct AbstractPlatformCore__GetVirtualKeyboardInput_d__19;
}
namespace Shipmate::Porting {
struct AbstractPlatformCore__InternalAsyncSanitizedString_d__18;
}
namespace Shipmate::Porting {
struct KeyboardContent;
}
namespace Shipmate::Porting {
struct VirtualKeyboardShowType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Shipmate::Porting {
class AbstractPlatformCore;
}
namespace Shipmate::Porting {
struct AbstractPlatformCore__AsyncSanitizedString_d__12;
}
namespace Shipmate::Porting {
struct AbstractPlatformCore__CallOnSuspending_d__15;
}
namespace Shipmate::Porting {
struct AbstractPlatformCore__GetVirtualKeyboardInput_d__19;
}
namespace Shipmate::Porting {
struct AbstractPlatformCore__InternalAsyncSanitizedString_d__18;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AbstractPlatformCore*);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformCore*, "Shipmate.Porting", "AbstractPlatformCore");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12, "Shipmate.Porting", "AbstractPlatformCore/<AsyncSanitizedString>d__12");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15, "Shipmate.Porting", "AbstractPlatformCore/<CallOnSuspending>d__15");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19, "Shipmate.Porting", "AbstractPlatformCore/<GetVirtualKeyboardInput>d__19");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18, "Shipmate.Porting", "AbstractPlatformCore/<InternalAsyncSanitizedString>d__18");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformCore/<AsyncSanitizedString>d__12
struct CORDL_TYPE AbstractPlatformCore__AsyncSanitizedString_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac7100, size 0x380, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformCore__AsyncSanitizedString_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "aString", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformCore*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>", modifiers: "", def_value: None }]
constexpr AbstractPlatformCore__AsyncSanitizedString_d__12(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>  __t__builder, ::StringW  aString, ::Shipmate::Porting::AbstractPlatformCore*  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20600};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field aString, offset: 0x20, size: 0x8, def value: None
 ::StringW  aString;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformCore*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12, aString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12) == 0x48, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformCore/<CallOnSuspending>d__15
struct CORDL_TYPE AbstractPlatformCore__CallOnSuspending_d__15 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac7480, size 0x470, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformCore__CallOnSuspending_d__15() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformCore*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr AbstractPlatformCore__CallOnSuspending_d__15(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformCore*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20601};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformCore*  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformCore/<GetVirtualKeyboardInput>d__19
struct CORDL_TYPE AbstractPlatformCore__GetVirtualKeyboardInput_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac7e60, size 0x70, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformCore__GetVirtualKeyboardInput_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "aStartStr", ty: "::StringW", modifiers: "", def_value: None }]
constexpr AbstractPlatformCore__GetVirtualKeyboardInput_d__19(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>  __t__builder, ::StringW  aStartStr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20602};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field aStartStr, offset: 0x20, size: 0x8, def value: None
 ::StringW  aStartStr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19, aStartStr) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19) == 0x28, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformCore/<InternalAsyncSanitizedString>d__18
struct CORDL_TYPE AbstractPlatformCore__InternalAsyncSanitizedString_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac7e60, size 0x70, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformCore__InternalAsyncSanitizedString_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "aString", ty: "::StringW", modifiers: "", def_value: None }]
constexpr AbstractPlatformCore__InternalAsyncSanitizedString_d__18(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>  __t__builder, ::StringW  aString) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20603};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field aString, offset: 0x20, size: 0x8, def value: None
 ::StringW  aString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18, aString) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18) == 0x28, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Shipmate.Porting.AbstractPlatformLogic
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformCore
class CORDL_TYPE AbstractPlatformCore : public ::Shipmate::Porting::AbstractPlatformLogic {
public:
// Declarations
using _AsyncSanitizedString_d__12 = ::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12;

using _CallOnSuspending_d__15 = ::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15;

using _GetVirtualKeyboardInput_d__19 = ::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19;

using _InternalAsyncSanitizedString_d__18 = ::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18;

 __declspec(property(get=get_AccountLanguage)) ::StringW  AccountLanguage;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Shipmate::Porting::Logs::PlatformLog*  Log;

/// @brief Field OnOverlayShownChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOverlayShownChanged, put=__cordl_internal_set_OnOverlayShownChanged)) ::System::Action_1<bool>*  OnOverlayShownChanged;

/// @brief Field OnResuming, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnResuming, put=__cordl_internal_set_OnResuming)) ::System::Action*  OnResuming;

/// @brief Field mOnSuspendingListeners, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mOnSuspendingListeners, put=__cordl_internal_set_mOnSuspendingListeners)) ::System::Collections::Generic::List_1<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>*  mOnSuspendingListeners;

/// @brief Field mSanitizedString, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mSanitizedString, put=__cordl_internal_set_mSanitizedString)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  mSanitizedString;

/// @brief Method AsyncSanitizedString, addr 0x181ac4d00, size 0xc0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> AsyncSanitizedString(::StringW  aString) ;

/// @brief Method CallOnResuming, addr 0x181ac4dc0, size 0x10, virtual false, abstract: false, final false
inline void CallOnResuming() ;

/// @brief Method CallOnSuspending, addr 0x181ac4dd0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask CallOnSuspending() ;

/// @brief Method CoreInitialization, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CoreInitialization() ;

/// @brief Method Destroy, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method DoOnOverlayShownChanged, addr 0x181ac4e50, size 0x10, virtual false, abstract: false, final false
inline void DoOnOverlayShownChanged(bool  aShown) ;

/// @brief Method GetVirtualKeyboardInput, addr 0x181ac4e60, size 0x90, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> GetVirtualKeyboardInput(::StringW  aStartStr, ::StringW  aPopupTitle, ::StringW  aPopupDesc, ::Shipmate::Porting::KeyboardContent  contentType, ::Shipmate::Porting::VirtualKeyboardShowType  aKeyboardType, int32_t  aMaxLength) ;

/// @brief Method InternalAsyncSanitizedString, addr 0x181ac4e60, size 0x90, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> InternalAsyncSanitizedString(::StringW  aString) ;

static inline ::Shipmate::Porting::AbstractPlatformCore* New_ctor() ;

/// @brief Method RegisterOnSuspendingListener, addr 0x181ac4ef0, size 0x70, virtual false, abstract: false, final false
inline void RegisterOnSuspendingListener(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  aOnSuspendingTask) ;

/// @brief Method SetOnlineMode, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void SetOnlineMode(bool  aOnline) ;

/// @brief Method UnregisterOnSuspendingListener, addr 0x181ac4f60, size 0x30, virtual false, abstract: false, final false
inline void UnregisterOnSuspendingListener(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  aOnSuspendingTask) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnOverlayShownChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnOverlayShownChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_OnResuming() const;

constexpr ::System::Action*& __cordl_internal_get_OnResuming() ;

constexpr ::System::Collections::Generic::List_1<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>* const& __cordl_internal_get_mOnSuspendingListeners() const;

constexpr ::System::Collections::Generic::List_1<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>*& __cordl_internal_get_mOnSuspendingListeners() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_mSanitizedString() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_mSanitizedString() ;

constexpr void __cordl_internal_set_OnOverlayShownChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnResuming(::System::Action*  value) ;

constexpr void __cordl_internal_set_mOnSuspendingListeners(::System::Collections::Generic::List_1<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>*  value) ;

constexpr void __cordl_internal_set_mSanitizedString(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x181ac4fe0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnOverlayShownChanged, addr 0x181ac5080, size 0x90, virtual false, abstract: false, final false
inline void add_OnOverlayShownChanged(::System::Action_1<bool>*  value) ;

/// @brief Method add_OnResuming, addr 0x1802fc2e0, size 0x80, virtual false, abstract: false, final false
inline void add_OnResuming(::System::Action*  value) ;

static inline ::Shipmate::Porting::Logs::PlatformLog* getStaticF_Log() ;

/// @brief Method get_AccountLanguage, addr 0x181ac5110, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_AccountLanguage() ;

/// @brief Method remove_OnOverlayShownChanged, addr 0x181ac5150, size 0x90, virtual false, abstract: false, final false
inline void remove_OnOverlayShownChanged(::System::Action_1<bool>*  value) ;

/// @brief Method remove_OnResuming, addr 0x1802fc360, size 0x80, virtual false, abstract: false, final false
inline void remove_OnResuming(::System::Action*  value) ;

static inline void setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformCore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformCore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformCore(AbstractPlatformCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformCore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformCore(AbstractPlatformCore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20604};

/// @brief Field mOnSuspendingListeners, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>*  ___mOnSuspendingListeners;

/// @brief Field OnResuming, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnResuming;

/// @brief Field OnOverlayShownChanged, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnOverlayShownChanged;

/// @brief Field mSanitizedString, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___mSanitizedString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore, ___mOnSuspendingListeners) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore, ___OnResuming) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore, ___OnOverlayShownChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformCore, ___mSanitizedString) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformCore) == 0x38, "Size mismatch!");

} // namespace end def Shipmate::Porting
