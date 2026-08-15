#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseNetworkManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseNetworkManager)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
class HouseNetworkManager__AddPlayerDelayed_d__13;
}
namespace GlobalNamespace {
struct HouseNetworkManager__CreateHostEosLobbyAsync_d__19;
}
namespace GlobalNamespace {
class HouseNetworkManager__LoadSubScenes_d__11;
}
namespace GlobalNamespace {
class HouseNetworkManager___c;
}
namespace GlobalNamespace {
class LocalPlayerFullyReadyEvent;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Shipmates::Events {
class ShowErrorMessageEvent;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HouseNetworkManager;
}
namespace GlobalNamespace {
class HouseNetworkManager__AddPlayerDelayed_d__13;
}
namespace GlobalNamespace {
class HouseNetworkManager__LoadSubScenes_d__11;
}
namespace GlobalNamespace {
class HouseNetworkManager___c;
}
namespace GlobalNamespace {
struct HouseNetworkManager__CreateHostEosLobbyAsync_d__19;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HouseNetworkManager*);
MARK_REF_T(::GlobalNamespace::HouseNetworkManager__AddPlayerDelayed_d__13*);
MARK_REF_T(::GlobalNamespace::HouseNetworkManager__LoadSubScenes_d__11*);
MARK_REF_T(::GlobalNamespace::HouseNetworkManager___c*);
MARK_VAL_T(::GlobalNamespace::HouseNetworkManager__CreateHostEosLobbyAsync_d__19);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseNetworkManager*, "", "HouseNetworkManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseNetworkManager__AddPlayerDelayed_d__13*, "", "HouseNetworkManager/<AddPlayerDelayed>d__13");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseNetworkManager__LoadSubScenes_d__11*, "", "HouseNetworkManager/<LoadSubScenes>d__11");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseNetworkManager___c*, "", "HouseNetworkManager/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseNetworkManager__CreateHostEosLobbyAsync_d__19, "", "HouseNetworkManager/<CreateHostEosLobbyAsync>d__19");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseNetworkManager/<>c
class CORDL_TYPE HouseNetworkManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::HouseNetworkManager___c*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Func_1<bool>*  __9__19_0;

static inline ::GlobalNamespace::HouseNetworkManager___c* New_ctor() ;

/// @brief Method <CreateHostEosLobbyAsync>b__19_0, addr 0x18042f340, size 0x40, virtual false, abstract: false, final false
inline bool _CreateHostEosLobbyAsync_b__19_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::HouseNetworkManager___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__19_0() ;

static inline void setStaticF___9(::GlobalNamespace::HouseNetworkManager___c*  value) ;

static inline void setStaticF___9__19_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseNetworkManager___c(HouseNetworkManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseNetworkManager___c(HouseNetworkManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5164};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HouseNetworkManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseNetworkManager/<AddPlayerDelayed>d__13
class CORDL_TYPE HouseNetworkManager__AddPlayerDelayed_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HouseNetworkManager>  __4__this;

/// @brief Field connectionToClient, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionToClient, put=__cordl_internal_set_connectionToClient)) ::Mirror::NetworkConnectionToClient*  connectionToClient;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18042b7e0, size 0x340, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::HouseNetworkManager__AddPlayerDelayed_d__13* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::HouseNetworkManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::HouseNetworkManager>& __cordl_internal_get___4__this() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get_connectionToClient() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get_connectionToClient() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HouseNetworkManager>  value) ;

constexpr void __cordl_internal_set_connectionToClient(::Mirror::NetworkConnectionToClient*  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkManager__AddPlayerDelayed_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkManager__AddPlayerDelayed_d__13", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseNetworkManager__AddPlayerDelayed_d__13(HouseNetworkManager__AddPlayerDelayed_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkManager__AddPlayerDelayed_d__13", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseNetworkManager__AddPlayerDelayed_d__13(HouseNetworkManager__AddPlayerDelayed_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5165};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HouseNetworkManager>  _____4__this;

/// @brief Field connectionToClient, offset: 0x28, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ___connectionToClient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__AddPlayerDelayed_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__AddPlayerDelayed_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__AddPlayerDelayed_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__AddPlayerDelayed_d__13, ___connectionToClient) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseNetworkManager__AddPlayerDelayed_d__13) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: HouseNetworkManager/<CreateHostEosLobbyAsync>d__19
struct CORDL_TYPE HouseNetworkManager__CreateHostEosLobbyAsync_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042c2d0, size 0x820, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkManager__CreateHostEosLobbyAsync_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HouseNetworkManager>", modifiers: "", def_value: None }, CppParam { name: "_hostPlatformId_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_playerName_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr HouseNetworkManager__CreateHostEosLobbyAsync_d__19(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::HouseNetworkManager>  __4__this, ::StringW  _hostPlatformId_5__2, ::StringW  _playerName_5__3, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5166};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HouseNetworkManager>  __4__this;

/// @brief Field <hostPlatformId>5__2, offset: 0x18, size: 0x8, def value: None
 ::StringW  _hostPlatformId_5__2;

/// @brief Field <playerName>5__3, offset: 0x20, size: 0x8, def value: None
 ::StringW  _playerName_5__3;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__CreateHostEosLobbyAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__CreateHostEosLobbyAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__CreateHostEosLobbyAsync_d__19, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__CreateHostEosLobbyAsync_d__19, _hostPlatformId_5__2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__CreateHostEosLobbyAsync_d__19, _playerName_5__3) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__CreateHostEosLobbyAsync_d__19, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseNetworkManager__CreateHostEosLobbyAsync_d__19) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseNetworkManager/<LoadSubScenes>d__11
class CORDL_TYPE HouseNetworkManager__LoadSubScenes_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HouseNetworkManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18042e750, size 0x1c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::HouseNetworkManager__LoadSubScenes_d__11* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::HouseNetworkManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::HouseNetworkManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HouseNetworkManager>  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkManager__LoadSubScenes_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkManager__LoadSubScenes_d__11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseNetworkManager__LoadSubScenes_d__11(HouseNetworkManager__LoadSubScenes_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkManager__LoadSubScenes_d__11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseNetworkManager__LoadSubScenes_d__11(HouseNetworkManager__LoadSubScenes_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5167};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HouseNetworkManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__LoadSubScenes_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__LoadSubScenes_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager__LoadSubScenes_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseNetworkManager__LoadSubScenes_d__11) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Mirror.NetworkManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseNetworkManager
class CORDL_TYPE HouseNetworkManager : public ::Mirror::NetworkManager {
public:
// Declarations
using _AddPlayerDelayed_d__13 = ::GlobalNamespace::HouseNetworkManager__AddPlayerDelayed_d__13;

using _CreateHostEosLobbyAsync_d__19 = ::GlobalNamespace::HouseNetworkManager__CreateHostEosLobbyAsync_d__19;

using _LoadSubScenes_d__11 = ::GlobalNamespace::HouseNetworkManager__LoadSubScenes_d__11;

using __c = ::GlobalNamespace::HouseNetworkManager___c;

 __declspec(property(get=get_LocalPlayerFullyReady)) bool  LocalPlayerFullyReady;

/// @brief Field localPlayerFullyReady, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerFullyReady, put=__cordl_internal_set_localPlayerFullyReady)) bool  localPlayerFullyReady;

/// @brief Field subScenesAreLoaded, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_subScenesAreLoaded, put=__cordl_internal_set_subScenesAreLoaded)) bool  subScenesAreLoaded;

/// @brief Field wasHost, offset 0x83, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHost, put=__cordl_internal_set_wasHost)) bool  wasHost;

/// @brief Method AddPlayerDelayed, addr 0x180421d90, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AddPlayerDelayed(::Mirror::NetworkConnectionToClient*  connectionToClient) ;

/// @brief Method CreateHostEosLobbyAsync, addr 0x180421df0, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid CreateHostEosLobbyAsync() ;

/// @brief Method GetLocalPlatformUserID, addr 0x180421e60, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW GetLocalPlatformUserID() ;

/// @brief Method GetPlayerName, addr 0x180421f00, size 0x70, virtual false, abstract: false, final false
inline ::StringW GetPlayerName() ;

/// @brief Method HandleInGameDisconnection, addr 0x180421f70, size 0x50, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask HandleInGameDisconnection(::Shipmates::Events::ShowErrorMessageEvent*  arg) ;

/// @brief Method LoadSubScenes, addr 0x180421fc0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LoadSubScenes() ;

static inline ::GlobalNamespace::HouseNetworkManager* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x180422010, size 0xd0, virtual true, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnClientConnect, addr 0x1804220e0, size 0x220, virtual true, abstract: false, final false
inline void OnClientConnect() ;

/// @brief Method OnDestroy, addr 0x180422300, size 0x50, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x180422350, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804223a0, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLocalPlayerFullyReady, addr 0x1804223f0, size 0x90, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnLocalPlayerFullyReady(::GlobalNamespace::LocalPlayerFullyReadyEvent*  evnt) ;

/// @brief Method OnServerAddPlayer, addr 0x180422480, size 0x80, virtual true, abstract: false, final false
inline void OnServerAddPlayer(::Mirror::NetworkConnectionToClient*  connectionToClient) ;

/// @brief Method OnStartClient, addr 0x180422500, size 0x50, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartHost, addr 0x180422550, size 0x70, virtual true, abstract: false, final false
inline void OnStartHost() ;

/// @brief Method OnStartServer, addr 0x1804225c0, size 0x60, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x180422620, size 0x60, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopHost, addr 0x180422680, size 0x50, virtual true, abstract: false, final false
inline void OnStopHost() ;

/// @brief Method Update, addr 0x1804226e0, size 0x10, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_localPlayerFullyReady() const;

constexpr bool& __cordl_internal_get_localPlayerFullyReady() ;

constexpr bool const& __cordl_internal_get_subScenesAreLoaded() const;

constexpr bool& __cordl_internal_get_subScenesAreLoaded() ;

constexpr bool const& __cordl_internal_get_wasHost() const;

constexpr bool& __cordl_internal_get_wasHost() ;

constexpr void __cordl_internal_set_localPlayerFullyReady(bool  value) ;

constexpr void __cordl_internal_set_subScenesAreLoaded(bool  value) ;

constexpr void __cordl_internal_set_wasHost(bool  value) ;

/// @brief Method <>n__0, addr 0x1804226d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> __n__0() ;

/// @brief Method .ctor, addr 0x1804226f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LocalPlayerFullyReady, addr 0x180422700, size 0x10, virtual false, abstract: false, final false
inline bool get_LocalPlayerFullyReady() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseNetworkManager(HouseNetworkManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseNetworkManager(HouseNetworkManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5168};

/// @brief Field subScenesAreLoaded, offset: 0x82, size: 0x1, def value: None
 bool  ___subScenesAreLoaded;

/// @brief Field wasHost, offset: 0x83, size: 0x1, def value: None
 bool  ___wasHost;

/// @brief Field localPlayerFullyReady, offset: 0x84, size: 0x1, def value: None
 bool  ___localPlayerFullyReady;

/// @brief Size padding 0x90 - 0x88 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseNetworkManager, ___subScenesAreLoaded) == 0x82, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager, ___wasHost) == 0x83, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseNetworkManager, ___localPlayerFullyReady) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseNetworkManager) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
