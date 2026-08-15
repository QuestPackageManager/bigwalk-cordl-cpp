#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerBlockListManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerBlockListManager)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace GlobalNamespace {
struct PlayerBlockListManager__RefreshBlockedList_d__13;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Action;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerBlockListManager;
}
namespace GlobalNamespace {
struct PlayerBlockListManager__RefreshBlockedList_d__13;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerBlockListManager*);
MARK_VAL_T(::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerBlockListManager*, "", "PlayerBlockListManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13, "", "PlayerBlockListManager/<RefreshBlockedList>d__13");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerBlockListManager/<RefreshBlockedList>d__13
struct CORDL_TYPE PlayerBlockListManager__RefreshBlockedList_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ace1f0, size 0xb0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerBlockListManager__RefreshBlockedList_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerBlockListManager>", modifiers: "", def_value: None }]
constexpr PlayerBlockListManager__RefreshBlockedList_d__13(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlayerBlockListManager>  __4__this) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerBlockListManager>  __4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13, __4__this) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Shipmate.Utils.SingletonBehaviour`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerBlockListManager
class CORDL_TYPE PlayerBlockListManager : public ::Shipmate::Utils::SingletonBehaviour_1<::UnityW<::GlobalNamespace::PlayerBlockListManager>> {
public:
// Declarations
using _RefreshBlockedList_d__13 = ::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13;

/// @brief Field BlockedUserListChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BlockedUserListChanged, put=setStaticF_BlockedUserListChanged)) ::System::Action*  BlockedUserListChanged;

 __declspec(property(get=get_BlockedUsersList)) ::System::Collections::Generic::HashSet_1<uint64_t>*  BlockedUsersList;

/// @brief Field LocalBlockedUserListChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LocalBlockedUserListChanged, put=setStaticF_LocalBlockedUserListChanged)) ::System::Action*  LocalBlockedUserListChanged;

/// @brief Field blockedUsersList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockedUsersList, put=__cordl_internal_set_blockedUsersList)) ::System::Collections::Generic::HashSet_1<uint64_t>*  blockedUsersList;

/// @brief Field counterBlockedUsersList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_counterBlockedUsersList, put=__cordl_internal_set_counterBlockedUsersList)) ::System::Collections::Generic::HashSet_1<uint64_t>*  counterBlockedUsersList;

/// @brief Field fullBlockedUsersList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullBlockedUsersList, put=__cordl_internal_set_fullBlockedUsersList)) ::System::Collections::Generic::HashSet_1<uint64_t>*  fullBlockedUsersList;

/// @brief Method AddCounterBlockedUser, addr 0x181acd220, size 0x40, virtual false, abstract: false, final false
inline void AddCounterBlockedUser(uint64_t  userId) ;

/// @brief Method IsUserBlocked, addr 0x181acd260, size 0x30, virtual false, abstract: false, final false
inline bool IsUserBlocked(uint64_t  userId) ;

/// @brief Method IsUserLocallyBlocked, addr 0x181acd290, size 0x30, virtual false, abstract: false, final false
inline bool IsUserLocallyBlocked(uint64_t  userId) ;

/// @brief Method LogBlockList, addr 0x181acd2c0, size 0x130, virtual false, abstract: false, final false
inline void LogBlockList() ;

static inline ::GlobalNamespace::PlayerBlockListManager* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x181acd3f0, size 0x60, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnDisable, addr 0x181acd450, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181acd4a0, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSceneLoaded, addr 0x181acd4f0, size 0x60, virtual false, abstract: false, final false
inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene  arg0, ::UnityEngine::SceneManagement::LoadSceneMode  arg1) ;

/// @brief Method RefreshBlockedList, addr 0x181acd550, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid RefreshBlockedList() ;

/// @brief Method RefreshFullBlockList, addr 0x181acd5b0, size 0x90, virtual false, abstract: false, final false
inline void RefreshFullBlockList() ;

/// @brief Method RemoveCounterBlockedUser, addr 0x181acd640, size 0x40, virtual false, abstract: false, final false
inline void RemoveCounterBlockedUser(uint64_t  userId) ;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& __cordl_internal_get_blockedUsersList() const;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& __cordl_internal_get_blockedUsersList() ;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& __cordl_internal_get_counterBlockedUsersList() const;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& __cordl_internal_get_counterBlockedUsersList() ;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& __cordl_internal_get_fullBlockedUsersList() const;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& __cordl_internal_get_fullBlockedUsersList() ;

constexpr void __cordl_internal_set_blockedUsersList(::System::Collections::Generic::HashSet_1<uint64_t>*  value) ;

constexpr void __cordl_internal_set_counterBlockedUsersList(::System::Collections::Generic::HashSet_1<uint64_t>*  value) ;

constexpr void __cordl_internal_set_fullBlockedUsersList(::System::Collections::Generic::HashSet_1<uint64_t>*  value) ;

/// @brief Method .ctor, addr 0x181acd680, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_BlockedUserListChanged, addr 0x181acd730, size 0x90, virtual false, abstract: false, final false
static inline void add_BlockedUserListChanged(::System::Action*  value) ;

/// @brief Method add_LocalBlockedUserListChanged, addr 0x181acd7c0, size 0x90, virtual false, abstract: false, final false
static inline void add_LocalBlockedUserListChanged(::System::Action*  value) ;

static inline ::System::Action* getStaticF_BlockedUserListChanged() ;

static inline ::System::Action* getStaticF_LocalBlockedUserListChanged() ;

/// @brief Method get_BlockedUsersList, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<uint64_t>* get_BlockedUsersList() ;

/// @brief Method remove_BlockedUserListChanged, addr 0x181acd850, size 0x90, virtual false, abstract: false, final false
static inline void remove_BlockedUserListChanged(::System::Action*  value) ;

/// @brief Method remove_LocalBlockedUserListChanged, addr 0x181acd8e0, size 0x90, virtual false, abstract: false, final false
static inline void remove_LocalBlockedUserListChanged(::System::Action*  value) ;

static inline void setStaticF_BlockedUserListChanged(::System::Action*  value) ;

static inline void setStaticF_LocalBlockedUserListChanged(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerBlockListManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerBlockListManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerBlockListManager(PlayerBlockListManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerBlockListManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerBlockListManager(PlayerBlockListManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21049};

/// @brief Field blockedUsersList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<uint64_t>*  ___blockedUsersList;

/// @brief Field counterBlockedUsersList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<uint64_t>*  ___counterBlockedUsersList;

/// @brief Field fullBlockedUsersList, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<uint64_t>*  ___fullBlockedUsersList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerBlockListManager, ___blockedUsersList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBlockListManager, ___counterBlockedUsersList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBlockListManager, ___fullBlockedUsersList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerBlockListManager) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
