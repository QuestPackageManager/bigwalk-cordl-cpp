#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlayablePlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractPlayablePlatform)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
class AbstractPlatformEnvironment;
}
namespace Shipmate::Porting::Logs {
class PlatformLog;
}
namespace Shipmate::Porting {
class AbstractPlatformAchievements;
}
namespace Shipmate::Porting {
class AbstractPlatformCore;
}
namespace Shipmate::Porting {
class AbstractPlatformLeaderboards;
}
namespace Shipmate::Porting {
class AbstractPlatformLobby;
}
namespace Shipmate::Porting {
class AbstractPlatformLogic;
}
namespace Shipmate::Porting {
template<typename T>
class AbstractPlatformManager_1;
}
namespace Shipmate::Porting {
class AbstractPlatformMarketplace;
}
namespace Shipmate::Porting {
class AbstractPlatformRichPresence;
}
namespace Shipmate::Porting {
class AbstractPlatformStorage;
}
namespace Shipmate::Porting {
class AbstractPlatformUsers;
}
namespace Shipmate::Porting {
struct AbstractPlayablePlatform__AddLogic_d__14;
}
namespace Shipmate::Porting {
template<typename T>
struct AbstractPlayablePlatform__Init_d__15_1;
}
namespace Shipmate::Porting {
struct AbstractPlayablePlatform__RegisterLogics_d__13;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace Shipmate::Porting {
class AbstractPlayablePlatform;
}
namespace Shipmate::Porting {
struct AbstractPlayablePlatform__AddLogic_d__14;
}
namespace Shipmate::Porting {
template<typename T>
struct AbstractPlayablePlatform__Init_d__15_1;
}
namespace Shipmate::Porting {
struct AbstractPlayablePlatform__RegisterLogics_d__13;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AbstractPlayablePlatform*);
MARK_VAL_T(::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14);
MARK_GEN_VAL_T(::Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1);
MARK_VAL_T(::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlayablePlatform*, "Shipmate.Porting", "AbstractPlayablePlatform");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14, "Shipmate.Porting", "AbstractPlayablePlatform/<AddLogic>d__14");
DEFINE_IL2CPP_GEN_CLASS(::Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1, "Shipmate.Porting", "AbstractPlayablePlatform/<Init>d__15`1");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13, "Shipmate.Porting", "AbstractPlayablePlatform/<RegisterLogics>d__13");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlayablePlatform/<AddLogic>d__14
struct CORDL_TYPE AbstractPlayablePlatform__AddLogic_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac6d60, size 0x320, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlayablePlatform__AddLogic_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "aLogic", ty: "::Shipmate::Porting::AbstractPlatformLogic*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlayablePlatform*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr AbstractPlayablePlatform__AddLogic_d__14(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformLogic*  aLogic, ::Shipmate::Porting::AbstractPlayablePlatform*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20635};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field aLogic, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformLogic*  aLogic;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlayablePlatform*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14, aLogic) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14) == 0x38, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmate::Porting {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlayablePlatform/<Init>d__15`1<T>
struct CORDL_TYPE AbstractPlayablePlatform__Init_d__15_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlayablePlatform__Init_d__15_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlayablePlatform*", modifiers: "", def_value: None }, CppParam { name: "aManager", ty: "::UnityW<T>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr AbstractPlayablePlatform__Init_d__15_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlayablePlatform*  __4__this, ::UnityW<T>  aManager, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlayablePlatform*  __4__this;

/// @brief Field aManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<T>  aManager;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlayablePlatform/<RegisterLogics>d__13
struct CORDL_TYPE AbstractPlayablePlatform__RegisterLogics_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac83e0, size 0x8f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlayablePlatform__RegisterLogics_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlayablePlatform*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr AbstractPlayablePlatform__RegisterLogics_d__13(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlayablePlatform*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20637};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlayablePlatform*  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlayablePlatform
class CORDL_TYPE AbstractPlayablePlatform : public ::System::Object {
public:
// Declarations
using _AddLogic_d__14 = ::Shipmate::Porting::AbstractPlayablePlatform__AddLogic_d__14;

template<typename T>
using _Init_d__15_1 = ::Shipmate::Porting::AbstractPlayablePlatform__Init_d__15_1<T>;

using _RegisterLogics_d__13 = ::Shipmate::Porting::AbstractPlayablePlatform__RegisterLogics_d__13;

 __declspec(property(get=get_Achievements)) ::Shipmate::Porting::AbstractPlatformAchievements*  Achievements;

 __declspec(property(get=get_Core)) ::Shipmate::Porting::AbstractPlatformCore*  Core;

 __declspec(property(get=get_Environment)) ::GlobalNamespace::AbstractPlatformEnvironment*  Environment;

 __declspec(property(get=get_FullyInit)) bool  FullyInit;

 __declspec(property(get=get_IsSecondaryPlatform)) bool  IsSecondaryPlatform;

 __declspec(property(get=get_Leaderboards)) ::Shipmate::Porting::AbstractPlatformLeaderboards*  Leaderboards;

 __declspec(property(get=get_Lobby)) ::Shipmate::Porting::AbstractPlatformLobby*  Lobby;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Shipmate::Porting::Logs::PlatformLog*  Log;

 __declspec(property(get=get_Market)) ::Shipmate::Porting::AbstractPlatformMarketplace*  Market;

 __declspec(property(get=get_RichPresence)) ::Shipmate::Porting::AbstractPlatformRichPresence*  RichPresence;

 __declspec(property(get=get_Storage)) ::Shipmate::Porting::AbstractPlatformStorage*  Storage;

 __declspec(property(get=get_Users)) ::Shipmate::Porting::AbstractPlatformUsers*  Users;

/// @brief Field mAchievements, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mAchievements, put=__cordl_internal_set_mAchievements)) ::Shipmate::Porting::AbstractPlatformAchievements*  mAchievements;

/// @brief Field mAllLogics, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_mAllLogics, put=__cordl_internal_set_mAllLogics)) ::System::Collections::Generic::List_1<::Shipmate::Porting::AbstractPlatformLogic*>*  mAllLogics;

/// @brief Field mEnvironment, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mEnvironment, put=__cordl_internal_set_mEnvironment)) ::GlobalNamespace::AbstractPlatformEnvironment*  mEnvironment;

/// @brief Field mInitializationComplete, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_mInitializationComplete, put=__cordl_internal_set_mInitializationComplete)) bool  mInitializationComplete;

/// @brief Field mIsSecondaryPlatform, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_mIsSecondaryPlatform, put=__cordl_internal_set_mIsSecondaryPlatform)) bool  mIsSecondaryPlatform;

/// @brief Field mLeaderboards, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mLeaderboards, put=__cordl_internal_set_mLeaderboards)) ::Shipmate::Porting::AbstractPlatformLeaderboards*  mLeaderboards;

/// @brief Field mLobby, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mLobby, put=__cordl_internal_set_mLobby)) ::Shipmate::Porting::AbstractPlatformLobby*  mLobby;

/// @brief Field mMarketplace, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mMarketplace, put=__cordl_internal_set_mMarketplace)) ::Shipmate::Porting::AbstractPlatformMarketplace*  mMarketplace;

/// @brief Field mPlatformCore, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mPlatformCore, put=__cordl_internal_set_mPlatformCore)) ::Shipmate::Porting::AbstractPlatformCore*  mPlatformCore;

/// @brief Field mRichPresence, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mRichPresence, put=__cordl_internal_set_mRichPresence)) ::Shipmate::Porting::AbstractPlatformRichPresence*  mRichPresence;

/// @brief Field mStorage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mStorage, put=__cordl_internal_set_mStorage)) ::Shipmate::Porting::AbstractPlatformStorage*  mStorage;

/// @brief Field mUsers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_mUsers, put=__cordl_internal_set_mUsers)) ::Shipmate::Porting::AbstractPlatformUsers*  mUsers;

/// @brief Method AddLogic, addr 0x181ac62f0, size 0xa0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask AddLogic(::Shipmate::Porting::AbstractPlatformLogic*  aLogic) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Init(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager) ;

static inline ::Shipmate::Porting::AbstractPlayablePlatform* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181ac6390, size 0xb0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RegisterLogics, addr 0x181ac6440, size 0x80, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask RegisterLogics() ;

/// @brief Method Update, addr 0x181ac64c0, size 0x90, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Shipmate::Porting::AbstractPlatformAchievements* const& __cordl_internal_get_mAchievements() const;

constexpr ::Shipmate::Porting::AbstractPlatformAchievements*& __cordl_internal_get_mAchievements() ;

constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::AbstractPlatformLogic*>* const& __cordl_internal_get_mAllLogics() const;

constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::AbstractPlatformLogic*>*& __cordl_internal_get_mAllLogics() ;

constexpr ::GlobalNamespace::AbstractPlatformEnvironment* const& __cordl_internal_get_mEnvironment() const;

constexpr ::GlobalNamespace::AbstractPlatformEnvironment*& __cordl_internal_get_mEnvironment() ;

constexpr bool const& __cordl_internal_get_mInitializationComplete() const;

constexpr bool& __cordl_internal_get_mInitializationComplete() ;

constexpr bool const& __cordl_internal_get_mIsSecondaryPlatform() const;

constexpr bool& __cordl_internal_get_mIsSecondaryPlatform() ;

constexpr ::Shipmate::Porting::AbstractPlatformLeaderboards* const& __cordl_internal_get_mLeaderboards() const;

constexpr ::Shipmate::Porting::AbstractPlatformLeaderboards*& __cordl_internal_get_mLeaderboards() ;

constexpr ::Shipmate::Porting::AbstractPlatformLobby* const& __cordl_internal_get_mLobby() const;

constexpr ::Shipmate::Porting::AbstractPlatformLobby*& __cordl_internal_get_mLobby() ;

constexpr ::Shipmate::Porting::AbstractPlatformMarketplace* const& __cordl_internal_get_mMarketplace() const;

constexpr ::Shipmate::Porting::AbstractPlatformMarketplace*& __cordl_internal_get_mMarketplace() ;

constexpr ::Shipmate::Porting::AbstractPlatformCore* const& __cordl_internal_get_mPlatformCore() const;

constexpr ::Shipmate::Porting::AbstractPlatformCore*& __cordl_internal_get_mPlatformCore() ;

constexpr ::Shipmate::Porting::AbstractPlatformRichPresence* const& __cordl_internal_get_mRichPresence() const;

constexpr ::Shipmate::Porting::AbstractPlatformRichPresence*& __cordl_internal_get_mRichPresence() ;

constexpr ::Shipmate::Porting::AbstractPlatformStorage* const& __cordl_internal_get_mStorage() const;

constexpr ::Shipmate::Porting::AbstractPlatformStorage*& __cordl_internal_get_mStorage() ;

constexpr ::Shipmate::Porting::AbstractPlatformUsers* const& __cordl_internal_get_mUsers() const;

constexpr ::Shipmate::Porting::AbstractPlatformUsers*& __cordl_internal_get_mUsers() ;

constexpr void __cordl_internal_set_mAchievements(::Shipmate::Porting::AbstractPlatformAchievements*  value) ;

constexpr void __cordl_internal_set_mAllLogics(::System::Collections::Generic::List_1<::Shipmate::Porting::AbstractPlatformLogic*>*  value) ;

constexpr void __cordl_internal_set_mEnvironment(::GlobalNamespace::AbstractPlatformEnvironment*  value) ;

constexpr void __cordl_internal_set_mInitializationComplete(bool  value) ;

constexpr void __cordl_internal_set_mIsSecondaryPlatform(bool  value) ;

constexpr void __cordl_internal_set_mLeaderboards(::Shipmate::Porting::AbstractPlatformLeaderboards*  value) ;

constexpr void __cordl_internal_set_mLobby(::Shipmate::Porting::AbstractPlatformLobby*  value) ;

constexpr void __cordl_internal_set_mMarketplace(::Shipmate::Porting::AbstractPlatformMarketplace*  value) ;

constexpr void __cordl_internal_set_mPlatformCore(::Shipmate::Porting::AbstractPlatformCore*  value) ;

constexpr void __cordl_internal_set_mRichPresence(::Shipmate::Porting::AbstractPlatformRichPresence*  value) ;

constexpr void __cordl_internal_set_mStorage(::Shipmate::Porting::AbstractPlatformStorage*  value) ;

constexpr void __cordl_internal_set_mUsers(::Shipmate::Porting::AbstractPlatformUsers*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Shipmate::Porting::Logs::PlatformLog* getStaticF_Log() ;

/// @brief Method get_Achievements, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Shipmate::Porting::AbstractPlatformAchievements* get_Achievements() ;

/// @brief Method get_Core, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Shipmate::Porting::AbstractPlatformCore* get_Core() ;

/// @brief Method get_Environment, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AbstractPlatformEnvironment* get_Environment() ;

/// @brief Method get_FullyInit, addr 0x1815f5410, size 0x10, virtual false, abstract: false, final false
inline bool get_FullyInit() ;

/// @brief Method get_IsSecondaryPlatform, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsSecondaryPlatform() ;

/// @brief Method get_Leaderboards, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::Shipmate::Porting::AbstractPlatformLeaderboards* get_Leaderboards() ;

/// @brief Method get_Lobby, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Shipmate::Porting::AbstractPlatformLobby* get_Lobby() ;

/// @brief Method get_Market, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Shipmate::Porting::AbstractPlatformMarketplace* get_Market() ;

/// @brief Method get_RichPresence, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Shipmate::Porting::AbstractPlatformRichPresence* get_RichPresence() ;

/// @brief Method get_Storage, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Shipmate::Porting::AbstractPlatformStorage* get_Storage() ;

/// @brief Method get_Users, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Shipmate::Porting::AbstractPlatformUsers* get_Users() ;

static inline void setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlayablePlatform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlayablePlatform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlayablePlatform(AbstractPlayablePlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlayablePlatform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlayablePlatform(AbstractPlayablePlatform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20638};

/// @brief Field mPlatformCore, offset: 0x10, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformCore*  ___mPlatformCore;

/// @brief Field mMarketplace, offset: 0x18, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformMarketplace*  ___mMarketplace;

/// @brief Field mAchievements, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformAchievements*  ___mAchievements;

/// @brief Field mStorage, offset: 0x28, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformStorage*  ___mStorage;

/// @brief Field mRichPresence, offset: 0x30, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformRichPresence*  ___mRichPresence;

/// @brief Field mEnvironment, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::AbstractPlatformEnvironment*  ___mEnvironment;

/// @brief Field mUsers, offset: 0x40, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformUsers*  ___mUsers;

/// @brief Field mLobby, offset: 0x48, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformLobby*  ___mLobby;

/// @brief Field mLeaderboards, offset: 0x50, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformLeaderboards*  ___mLeaderboards;

/// @brief Field mAllLogics, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Shipmate::Porting::AbstractPlatformLogic*>*  ___mAllLogics;

/// @brief Field mIsSecondaryPlatform, offset: 0x60, size: 0x1, def value: None
 bool  ___mIsSecondaryPlatform;

/// @brief Field mInitializationComplete, offset: 0x61, size: 0x1, def value: None
 bool  ___mInitializationComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mPlatformCore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mMarketplace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mAchievements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mStorage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mRichPresence) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mEnvironment) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mUsers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mLobby) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mLeaderboards) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mAllLogics) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mIsSecondaryPlatform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlayablePlatform, ___mInitializationComplete) == 0x61, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlayablePlatform) == 0x68, "Size mismatch!");

} // namespace end def Shipmate::Porting
