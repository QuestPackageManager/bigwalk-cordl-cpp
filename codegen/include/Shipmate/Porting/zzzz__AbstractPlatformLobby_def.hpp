#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformLobby.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractPlatformLobby)
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
struct AbstractPlatformLobby__JoinLobby_d__16;
}
namespace Shipmate::Porting {
struct AbstractPlatformLobby__LeaveLobby_d__21;
}
namespace Shipmate::Porting {
struct AbstractPlatformLobby__SetLobbyDataPreCreation_d__23;
}
namespace Shipmate::Porting {
struct AbstractPlatformLobby__SetLobbyData_d__22;
}
namespace Shipmate::Porting {
class LobbyData;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
class AbstractPlatformLobby;
}
namespace Shipmate::Porting {
struct AbstractPlatformLobby__JoinLobby_d__16;
}
namespace Shipmate::Porting {
struct AbstractPlatformLobby__LeaveLobby_d__21;
}
namespace Shipmate::Porting {
struct AbstractPlatformLobby__SetLobbyDataPreCreation_d__23;
}
namespace Shipmate::Porting {
struct AbstractPlatformLobby__SetLobbyData_d__22;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AbstractPlatformLobby*);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformLobby*, "Shipmate.Porting", "AbstractPlatformLobby");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16, "Shipmate.Porting", "AbstractPlatformLobby/<JoinLobby>d__16");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21, "Shipmate.Porting", "AbstractPlatformLobby/<LeaveLobby>d__21");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23, "Shipmate.Porting", "AbstractPlatformLobby/<SetLobbyDataPreCreation>d__23");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22, "Shipmate.Porting", "AbstractPlatformLobby/<SetLobbyData>d__22");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformLobby/<JoinLobby>d__16
struct CORDL_TYPE AbstractPlatformLobby__JoinLobby_d__16 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac7ed0, size 0x2b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformLobby__JoinLobby_d__16() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformLobby*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr AbstractPlatformLobby__JoinLobby_d__16(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLobby*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20639};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformLobby*  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformLobby/<LeaveLobby>d__21
struct CORDL_TYPE AbstractPlatformLobby__LeaveLobby_d__21 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac8180, size 0xa0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformLobby__LeaveLobby_d__21() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformLobby*", modifiers: "", def_value: None }]
constexpr AbstractPlatformLobby__LeaveLobby_d__21(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLobby*  __4__this) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20640};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformLobby*  __4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21, __4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21) == 0x20, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformLobby/<SetLobbyData>d__22
struct CORDL_TYPE AbstractPlatformLobby__SetLobbyData_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac8e90, size 0xa0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformLobby__SetLobbyData_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformLobby*", modifiers: "", def_value: None }, CppParam { name: "aData", ty: "::Shipmate::Porting::LobbyData*", modifiers: "", def_value: None }]
constexpr AbstractPlatformLobby__SetLobbyData_d__22(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLobby*  __4__this, ::Shipmate::Porting::LobbyData*  aData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20641};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformLobby*  __4__this;

/// @brief Field aData, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::LobbyData*  aData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22, aData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22) == 0x28, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformLobby/<SetLobbyDataPreCreation>d__23
struct CORDL_TYPE AbstractPlatformLobby__SetLobbyDataPreCreation_d__23 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac8e90, size 0xa0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformLobby__SetLobbyDataPreCreation_d__23() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformLobby*", modifiers: "", def_value: None }, CppParam { name: "aData", ty: "::Shipmate::Porting::LobbyData*", modifiers: "", def_value: None }]
constexpr AbstractPlatformLobby__SetLobbyDataPreCreation_d__23(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLobby*  __4__this, ::Shipmate::Porting::LobbyData*  aData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformLobby*  __4__this;

/// @brief Field aData, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::LobbyData*  aData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23, aData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23) == 0x28, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Shipmate.Porting.AbstractPlatformLogic
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformLobby
class CORDL_TYPE AbstractPlatformLobby : public ::Shipmate::Porting::AbstractPlatformLogic {
public:
// Declarations
using _JoinLobby_d__16 = ::Shipmate::Porting::AbstractPlatformLobby__JoinLobby_d__16;

using _LeaveLobby_d__21 = ::Shipmate::Porting::AbstractPlatformLobby__LeaveLobby_d__21;

using _SetLobbyDataPreCreation_d__23 = ::Shipmate::Porting::AbstractPlatformLobby__SetLobbyDataPreCreation_d__23;

using _SetLobbyData_d__22 = ::Shipmate::Porting::AbstractPlatformLobby__SetLobbyData_d__22;

 __declspec(property(get=get_CreateSoloLobby)) bool  CreateSoloLobby;

 __declspec(property(get=get_CurrentLobbyData)) ::Shipmate::Porting::LobbyData*  CurrentLobbyData;

 __declspec(property(get=get_DummyLobbyNameToUse, put=set_DummyLobbyNameToUse)) ::StringW  DummyLobbyNameToUse;

 __declspec(property(put=set_IsCrossPlatform)) bool  IsCrossPlatform;

/// @brief Field LobbyCreatedSuccesfully, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_LobbyCreatedSuccesfully, put=__cordl_internal_set_LobbyCreatedSuccesfully)) ::System::Action*  LobbyCreatedSuccesfully;

/// @brief Field LobbyInviteAccepted, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_LobbyInviteAccepted, put=__cordl_internal_set_LobbyInviteAccepted)) ::System::Action*  LobbyInviteAccepted;

/// @brief Field LobbyJoinedSuccesfully, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LobbyJoinedSuccesfully, put=__cordl_internal_set_LobbyJoinedSuccesfully)) ::System::Action*  LobbyJoinedSuccesfully;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Shipmate::Porting::Logs::PlatformLog*  Log;

 __declspec(property(get=get_PendingLobbyInvite)) ::StringW  PendingLobbyInvite;

/// @brief Field mCreateLobbyDataFunc, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mCreateLobbyDataFunc, put=__cordl_internal_set_mCreateLobbyDataFunc)) ::System::Func_1<::Shipmate::Porting::LobbyData*>*  mCreateLobbyDataFunc;

/// @brief Field mCurrentLobbyData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_mCurrentLobbyData, put=__cordl_internal_set_mCurrentLobbyData)) ::Shipmate::Porting::LobbyData*  mCurrentLobbyData;

/// @brief Field mDummyLobbyNameToUse, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mDummyLobbyNameToUse, put=__cordl_internal_set_mDummyLobbyNameToUse)) ::StringW  mDummyLobbyNameToUse;

/// @brief Field mIsPlayingCrossplatform, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_mIsPlayingCrossplatform, put=__cordl_internal_set_mIsPlayingCrossplatform)) bool  mIsPlayingCrossplatform;

/// @brief Field mPendingLobbyInvite, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mPendingLobbyInvite, put=__cordl_internal_set_mPendingLobbyInvite)) ::StringW  mPendingLobbyInvite;

/// @brief Method CanJoinLobby, addr 0x181ac5350, size 0x60, virtual true, abstract: false, final false
inline bool CanJoinLobby(::StringW  aLobbyStr) ;

/// @brief Method ClearPendingLobbyInvite, addr 0x181ac53b0, size 0x20, virtual false, abstract: false, final false
inline void ClearPendingLobbyInvite() ;

/// @brief Method CreateLobby, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask CreateLobby(::StringW  aLobbyId, bool  aIsPrivate) ;

/// @brief Method CreateLobbyData, addr 0x181ac53d0, size 0x40, virtual false, abstract: false, final false
inline ::Shipmate::Porting::LobbyData* CreateLobbyData() ;

/// @brief Method CreatedLobby, addr 0x181ac5410, size 0x10, virtual false, abstract: false, final false
inline void CreatedLobby() ;

/// @brief Method FetchLobbyData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask FetchLobbyData() ;

/// @brief Method GetAllFriends, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint64_t>> GetAllFriends() ;

/// @brief Method GetOnlineFriends, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint64_t>> GetOnlineFriends() ;

/// @brief Method JoinLobby, addr 0x181ac5420, size 0x80, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask JoinLobby(::StringW  aLobbyId) ;

/// @brief Method JoinPendingLobbyInvite, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask JoinPendingLobbyInvite() ;

/// @brief Method JoinedLobby, addr 0x181ac54a0, size 0x30, virtual false, abstract: false, final false
inline void JoinedLobby() ;

/// @brief Method LeaveLobby, addr 0x181ac54d0, size 0x80, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask LeaveLobby() ;

static inline ::Shipmate::Porting::AbstractPlatformLobby* New_ctor() ;

/// @brief Method SetLobbyData, addr 0x181ac5550, size 0xa0, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask SetLobbyData(::Shipmate::Porting::LobbyData*  aData) ;

/// @brief Method SetLobbyDataCreationFunc, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void SetLobbyDataCreationFunc(::System::Func_1<::Shipmate::Porting::LobbyData*>*  aFunc) ;

/// @brief Method SetLobbyDataPreCreation, addr 0x181ac5550, size 0xa0, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask SetLobbyDataPreCreation(::Shipmate::Porting::LobbyData*  aData) ;

/// @brief Method SetPendingLobbyInvite, addr 0x181ac55f0, size 0xd0, virtual false, abstract: false, final false
inline void SetPendingLobbyInvite(::StringW  aPendingLobbyInvite) ;

/// @brief Method ShowInviteFriendInterface, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ShowInviteFriendInterface() ;

constexpr ::System::Action* const& __cordl_internal_get_LobbyCreatedSuccesfully() const;

constexpr ::System::Action*& __cordl_internal_get_LobbyCreatedSuccesfully() ;

constexpr ::System::Action* const& __cordl_internal_get_LobbyInviteAccepted() const;

constexpr ::System::Action*& __cordl_internal_get_LobbyInviteAccepted() ;

constexpr ::System::Action* const& __cordl_internal_get_LobbyJoinedSuccesfully() const;

constexpr ::System::Action*& __cordl_internal_get_LobbyJoinedSuccesfully() ;

constexpr ::System::Func_1<::Shipmate::Porting::LobbyData*>* const& __cordl_internal_get_mCreateLobbyDataFunc() const;

constexpr ::System::Func_1<::Shipmate::Porting::LobbyData*>*& __cordl_internal_get_mCreateLobbyDataFunc() ;

constexpr ::Shipmate::Porting::LobbyData* const& __cordl_internal_get_mCurrentLobbyData() const;

constexpr ::Shipmate::Porting::LobbyData*& __cordl_internal_get_mCurrentLobbyData() ;

constexpr ::StringW const& __cordl_internal_get_mDummyLobbyNameToUse() const;

constexpr ::StringW& __cordl_internal_get_mDummyLobbyNameToUse() ;

constexpr bool const& __cordl_internal_get_mIsPlayingCrossplatform() const;

constexpr bool& __cordl_internal_get_mIsPlayingCrossplatform() ;

constexpr ::StringW const& __cordl_internal_get_mPendingLobbyInvite() const;

constexpr ::StringW& __cordl_internal_get_mPendingLobbyInvite() ;

constexpr void __cordl_internal_set_LobbyCreatedSuccesfully(::System::Action*  value) ;

constexpr void __cordl_internal_set_LobbyInviteAccepted(::System::Action*  value) ;

constexpr void __cordl_internal_set_LobbyJoinedSuccesfully(::System::Action*  value) ;

constexpr void __cordl_internal_set_mCreateLobbyDataFunc(::System::Func_1<::Shipmate::Porting::LobbyData*>*  value) ;

constexpr void __cordl_internal_set_mCurrentLobbyData(::Shipmate::Porting::LobbyData*  value) ;

constexpr void __cordl_internal_set_mDummyLobbyNameToUse(::StringW  value) ;

constexpr void __cordl_internal_set_mIsPlayingCrossplatform(bool  value) ;

constexpr void __cordl_internal_set_mPendingLobbyInvite(::StringW  value) ;

/// @brief Method .ctor, addr 0x181ac5230, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_LobbyCreatedSuccesfully, addr 0x18062ea20, size 0x80, virtual false, abstract: false, final false
inline void add_LobbyCreatedSuccesfully(::System::Action*  value) ;

/// @brief Method add_LobbyInviteAccepted, addr 0x181a8dfe0, size 0x80, virtual false, abstract: false, final false
inline void add_LobbyInviteAccepted(::System::Action*  value) ;

/// @brief Method add_LobbyJoinedSuccesfully, addr 0x1802fc2e0, size 0x80, virtual false, abstract: false, final false
inline void add_LobbyJoinedSuccesfully(::System::Action*  value) ;

static inline ::Shipmate::Porting::Logs::PlatformLog* getStaticF_Log() ;

/// @brief Method get_CreateSoloLobby, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_CreateSoloLobby() ;

/// @brief Method get_CurrentLobbyData, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Shipmate::Porting::LobbyData* get_CurrentLobbyData() ;

/// @brief Method get_DummyLobbyNameToUse, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_DummyLobbyNameToUse() ;

/// @brief Method get_PendingLobbyInvite, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_PendingLobbyInvite() ;

/// @brief Method remove_LobbyCreatedSuccesfully, addr 0x18062ebb0, size 0x80, virtual false, abstract: false, final false
inline void remove_LobbyCreatedSuccesfully(::System::Action*  value) ;

/// @brief Method remove_LobbyInviteAccepted, addr 0x181a8df40, size 0x80, virtual false, abstract: false, final false
inline void remove_LobbyInviteAccepted(::System::Action*  value) ;

/// @brief Method remove_LobbyJoinedSuccesfully, addr 0x1802fc360, size 0x80, virtual false, abstract: false, final false
inline void remove_LobbyJoinedSuccesfully(::System::Action*  value) ;

static inline void setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value) ;

/// @brief Method set_DummyLobbyNameToUse, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_DummyLobbyNameToUse(::StringW  value) ;

/// @brief Method set_IsCrossPlatform, addr 0x180499eb0, size 0x10, virtual false, abstract: false, final false
inline void set_IsCrossPlatform(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformLobby() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformLobby", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformLobby(AbstractPlatformLobby && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformLobby", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformLobby(AbstractPlatformLobby const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20643};

/// @brief Field LobbyInviteAccepted, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___LobbyInviteAccepted;

/// @brief Field LobbyJoinedSuccesfully, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___LobbyJoinedSuccesfully;

/// @brief Field LobbyCreatedSuccesfully, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___LobbyCreatedSuccesfully;

/// @brief Field mIsPlayingCrossplatform, offset: 0x30, size: 0x1, def value: None
 bool  ___mIsPlayingCrossplatform;

/// @brief Field mPendingLobbyInvite, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___mPendingLobbyInvite;

/// @brief Field mCurrentLobbyData, offset: 0x40, size: 0x8, def value: None
 ::Shipmate::Porting::LobbyData*  ___mCurrentLobbyData;

/// @brief Field mDummyLobbyNameToUse, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___mDummyLobbyNameToUse;

/// @brief Field mCreateLobbyDataFunc, offset: 0x50, size: 0x8, def value: None
 ::System::Func_1<::Shipmate::Porting::LobbyData*>*  ___mCreateLobbyDataFunc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby, ___LobbyInviteAccepted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby, ___LobbyJoinedSuccesfully) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby, ___LobbyCreatedSuccesfully) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby, ___mIsPlayingCrossplatform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby, ___mPendingLobbyInvite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby, ___mCurrentLobbyData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby, ___mDummyLobbyNameToUse) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformLobby, ___mCreateLobbyDataFunc) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformLobby) == 0x58, "Size mismatch!");

} // namespace end def Shipmate::Porting
