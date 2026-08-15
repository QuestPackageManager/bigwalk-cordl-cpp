#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformUsers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractPlatformUsers)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmate::Porting {
struct AbstractPlatformUsers__DispatchLogout_d__14;
}
namespace Shipmate::Porting {
struct AuthTypes;
}
namespace Shipmate::Porting {
class BaseAuthValues;
}
namespace Shipmate::Porting {
struct EUserFetchingType;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Shipmate::Porting {
class AbstractPlatformUsers;
}
namespace Shipmate::Porting {
struct AbstractPlatformUsers__DispatchLogout_d__14;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AbstractPlatformUsers*);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformUsers*, "Shipmate.Porting", "AbstractPlatformUsers");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14, "Shipmate.Porting", "AbstractPlatformUsers/<DispatchLogout>d__14");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformUsers/<DispatchLogout>d__14
struct CORDL_TYPE AbstractPlatformUsers__DispatchLogout_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac7a60, size 0x2b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformUsers__DispatchLogout_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformUsers*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr AbstractPlatformUsers__DispatchLogout_d__14(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformUsers*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20629};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformUsers*  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Shipmate.Porting.AbstractPlatformLogic
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformUsers
class CORDL_TYPE AbstractPlatformUsers : public ::Shipmate::Porting::AbstractPlatformLogic {
public:
// Declarations
using _DispatchLogout_d__14 = ::Shipmate::Porting::AbstractPlatformUsers__DispatchLogout_d__14;

 __declspec(property(get=get_HasUser)) bool  HasUser;

 __declspec(property(get=get_LocalPlatformType)) ::Shipmate::Porting::AuthTypes  LocalPlatformType;

 __declspec(property(get=get_MainUserName)) ::StringW  MainUserName;

 __declspec(property(put=set_ShouldWatchForUserChange)) bool  ShouldWatchForUserChange;

 __declspec(property(get=get_UserId)) uint64_t  UserId;

/// @brief Field UserLoggedOut, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserLoggedOut, put=__cordl_internal_set_UserLoggedOut)) ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  UserLoggedOut;

/// @brief Field mShouldWatchForUserChange, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_mShouldWatchForUserChange, put=__cordl_internal_set_mShouldWatchForUserChange)) bool  mShouldWatchForUserChange;

/// @brief Method CleanupAuth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CleanupAuth() ;

/// @brief Method DispatchLogout, addr 0x181ac6110, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask DispatchLogout() ;

/// @brief Method FetchMainUser, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask FetchMainUser(::Shipmate::Porting::EUserFetchingType  aRequestAccountPicker) ;

/// @brief Method GetAuth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::Shipmate::Porting::BaseAuthValues*> GetAuth(bool  aRequireOnlineAccount, ::System::Threading::CancellationToken  cancellationToken, bool  skipUpsell) ;

/// @brief Method HasCrossplayPrivilege, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool HasCrossplayPrivilege() ;

/// @brief Method HasUGCPriviledges, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool HasUGCPriviledges() ;

static inline ::Shipmate::Porting::AbstractPlatformUsers* New_ctor() ;

/// @brief Method RefreshPriviledges, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask RefreshPriviledges() ;

/// @brief Method RevokeMainUser, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RevokeMainUser() ;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* const& __cordl_internal_get_UserLoggedOut() const;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*& __cordl_internal_get_UserLoggedOut() ;

constexpr bool const& __cordl_internal_get_mShouldWatchForUserChange() const;

constexpr bool& __cordl_internal_get_mShouldWatchForUserChange() ;

constexpr void __cordl_internal_set_UserLoggedOut(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  value) ;

constexpr void __cordl_internal_set_mShouldWatchForUserChange(bool  value) ;

/// @brief Method .ctor, addr 0x181ac5230, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_UserLoggedOut, addr 0x181ac61d0, size 0x90, virtual false, abstract: false, final false
inline void add_UserLoggedOut(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  value) ;

/// @brief Method get_HasUser, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_HasUser() ;

/// @brief Method get_LocalPlatformType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Shipmate::Porting::AuthTypes get_LocalPlatformType() ;

/// @brief Method get_MainUserName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_MainUserName() ;

/// @brief Method get_UserId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint64_t get_UserId() ;

/// @brief Method remove_UserLoggedOut, addr 0x181ac6260, size 0x90, virtual false, abstract: false, final false
inline void remove_UserLoggedOut(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  value) ;

/// @brief Method set_ShouldWatchForUserChange, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_ShouldWatchForUserChange(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformUsers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformUsers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformUsers(AbstractPlatformUsers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformUsers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformUsers(AbstractPlatformUsers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20630};

/// @brief Field UserLoggedOut, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  ___UserLoggedOut;

/// @brief Field mShouldWatchForUserChange, offset: 0x20, size: 0x1, def value: None
 bool  ___mShouldWatchForUserChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformUsers, ___UserLoggedOut) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformUsers, ___mShouldWatchForUserChange) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformUsers) == 0x28, "Size mismatch!");

} // namespace end def Shipmate::Porting
