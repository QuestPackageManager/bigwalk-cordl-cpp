#pragma once
// IWYU pragma private; include "Mirror/NetworkClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__ConnectState_def.hpp"
#include "Mirror/zzzz__ExponentialMovingAverage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkClient)
namespace Mirror {
struct ChangeOwnerMessage;
}
namespace Mirror {
struct EntityStateMessage;
}
namespace Mirror {
class InterestManagementBase;
}
namespace Mirror {
class NetworkClient___c;
}
namespace Mirror {
template<typename T>
class NetworkClient___c__DisplayClass53_0_1;
}
namespace Mirror {
template<typename T>
class NetworkClient___c__DisplayClass55_0_1;
}
namespace Mirror {
class NetworkClient___c__DisplayClass61_0;
}
namespace Mirror {
class NetworkClient___c__DisplayClass62_0;
}
namespace Mirror {
class NetworkClient___c__DisplayClass66_0;
}
namespace Mirror {
class NetworkConnection;
}
namespace Mirror {
class NetworkIdentity;
}
namespace Mirror {
class NetworkMessageDelegate;
}
namespace Mirror {
struct NetworkPongMessage;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
struct ObjectDestroyMessage;
}
namespace Mirror {
struct ObjectHideMessage;
}
namespace Mirror {
struct ObjectSpawnFinishedMessage;
}
namespace Mirror {
struct ObjectSpawnStartedMessage;
}
namespace Mirror {
struct RpcBufferMessage;
}
namespace Mirror {
struct RpcMessage;
}
namespace Mirror {
class SnapshotInterpolationSettings;
}
namespace Mirror {
class SpawnDelegate;
}
namespace Mirror {
class SpawnHandlerDelegate;
}
namespace Mirror {
struct SpawnMessage;
}
namespace Mirror {
struct TimeSnapshotMessage;
}
namespace Mirror {
struct TimeSnapshot;
}
namespace Mirror {
struct TransportError;
}
namespace Mirror {
class UnSpawnDelegate;
}
namespace Mirror {
class Unbatcher;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Uri;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror {
class NetworkClient;
}
namespace Mirror {
class NetworkClient___c;
}
namespace Mirror {
template<typename T>
class NetworkClient___c__DisplayClass53_0_1;
}
namespace Mirror {
template<typename T>
class NetworkClient___c__DisplayClass55_0_1;
}
namespace Mirror {
class NetworkClient___c__DisplayClass61_0;
}
namespace Mirror {
class NetworkClient___c__DisplayClass62_0;
}
namespace Mirror {
class NetworkClient___c__DisplayClass66_0;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkClient*);
MARK_REF_T(::Mirror::NetworkClient___c*);
MARK_GEN_REF_T_PTR(::Mirror::NetworkClient___c__DisplayClass53_0_1);
MARK_GEN_REF_T_PTR(::Mirror::NetworkClient___c__DisplayClass55_0_1);
MARK_REF_T(::Mirror::NetworkClient___c__DisplayClass61_0*);
MARK_REF_T(::Mirror::NetworkClient___c__DisplayClass62_0*);
MARK_REF_T(::Mirror::NetworkClient___c__DisplayClass66_0*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkClient*, "Mirror", "NetworkClient");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkClient___c*, "Mirror", "NetworkClient/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::NetworkClient___c__DisplayClass53_0_1, "Mirror", "NetworkClient/<>c__DisplayClass53_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::NetworkClient___c__DisplayClass55_0_1, "Mirror", "NetworkClient/<>c__DisplayClass55_0`1");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkClient___c__DisplayClass61_0*, "Mirror", "NetworkClient/<>c__DisplayClass61_0");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkClient___c__DisplayClass62_0*, "Mirror", "NetworkClient/<>c__DisplayClass62_0");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkClient___c__DisplayClass66_0*, "Mirror", "NetworkClient/<>c__DisplayClass66_0");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkClient/<>c
class CORDL_TYPE NetworkClient___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Mirror::NetworkClient___c*  __9;

/// @brief Field <>9__52_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_0, put=setStaticF___9__52_0)) ::System::Action_1<::Mirror::NetworkPongMessage>*  __9__52_0;

/// @brief Field <>9__52_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_1, put=setStaticF___9__52_1)) ::System::Action_1<::Mirror::ObjectSpawnStartedMessage>*  __9__52_1;

/// @brief Field <>9__52_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_2, put=setStaticF___9__52_2)) ::System::Action_1<::Mirror::ObjectSpawnFinishedMessage>*  __9__52_2;

/// @brief Field <>9__52_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_3, put=setStaticF___9__52_3)) ::System::Action_1<::Mirror::EntityStateMessage>*  __9__52_3;

/// @brief Field <>9__82_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__82_0, put=setStaticF___9__82_0)) ::System::Func_2<::UnityW<::Mirror::NetworkIdentity>,uint32_t>*  __9__82_0;

static inline ::Mirror::NetworkClient___c* New_ctor() ;

/// @brief Method <OnObjectSpawnFinished>b__82_0, addr 0x1805f9fd0, size 0x20, virtual false, abstract: false, final false
inline uint32_t _OnObjectSpawnFinished_b__82_0(::Mirror::NetworkIdentity*  uv) ;

/// @brief Method <RegisterMessageHandlers>b__52_0, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _RegisterMessageHandlers_b__52_0(::Mirror::NetworkPongMessage  _) ;

/// @brief Method <RegisterMessageHandlers>b__52_1, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _RegisterMessageHandlers_b__52_1(::Mirror::ObjectSpawnStartedMessage  _) ;

/// @brief Method <RegisterMessageHandlers>b__52_2, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _RegisterMessageHandlers_b__52_2(::Mirror::ObjectSpawnFinishedMessage  _) ;

/// @brief Method <RegisterMessageHandlers>b__52_3, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _RegisterMessageHandlers_b__52_3(::Mirror::EntityStateMessage  _) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Mirror::NetworkClient___c* getStaticF___9() ;

static inline ::System::Action_1<::Mirror::NetworkPongMessage>* getStaticF___9__52_0() ;

static inline ::System::Action_1<::Mirror::ObjectSpawnStartedMessage>* getStaticF___9__52_1() ;

static inline ::System::Action_1<::Mirror::ObjectSpawnFinishedMessage>* getStaticF___9__52_2() ;

static inline ::System::Action_1<::Mirror::EntityStateMessage>* getStaticF___9__52_3() ;

static inline ::System::Func_2<::UnityW<::Mirror::NetworkIdentity>,uint32_t>* getStaticF___9__82_0() ;

static inline void setStaticF___9(::Mirror::NetworkClient___c*  value) ;

static inline void setStaticF___9__52_0(::System::Action_1<::Mirror::NetworkPongMessage>*  value) ;

static inline void setStaticF___9__52_1(::System::Action_1<::Mirror::ObjectSpawnStartedMessage>*  value) ;

static inline void setStaticF___9__52_2(::System::Action_1<::Mirror::ObjectSpawnFinishedMessage>*  value) ;

static inline void setStaticF___9__52_3(::System::Action_1<::Mirror::EntityStateMessage>*  value) ;

static inline void setStaticF___9__82_0(::System::Func_2<::UnityW<::Mirror::NetworkIdentity>,uint32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkClient___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkClient___c(NetworkClient___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkClient___c(NetworkClient___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18303};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkClient___c) == 0x10, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.NetworkClient/<>c__DisplayClass53_0`1<T>
class CORDL_TYPE NetworkClient___c__DisplayClass53_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Action_1<T>*  handler;

static inline ::Mirror::NetworkClient___c__DisplayClass53_0_1<T>* New_ctor() ;

/// @brief Method <RegisterHandler>g__HandlerWrapped|0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _RegisterHandler_g__HandlerWrapped_0(::Mirror::NetworkConnection*  _, T  value) ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_handler() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_handler() ;

constexpr void __cordl_internal_set_handler(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkClient___c__DisplayClass53_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c__DisplayClass53_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkClient___c__DisplayClass53_0_1(NetworkClient___c__DisplayClass53_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c__DisplayClass53_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkClient___c__DisplayClass53_0_1(NetworkClient___c__DisplayClass53_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18304};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<T>*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.NetworkClient/<>c__DisplayClass55_0`1<T>
class CORDL_TYPE NetworkClient___c__DisplayClass55_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Action_1<T>*  handler;

static inline ::Mirror::NetworkClient___c__DisplayClass55_0_1<T>* New_ctor() ;

/// @brief Method <ReplaceHandler>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ReplaceHandler_b__0(::Mirror::NetworkConnection*  _, T  value) ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_handler() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_handler() ;

constexpr void __cordl_internal_set_handler(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkClient___c__DisplayClass55_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c__DisplayClass55_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkClient___c__DisplayClass55_0_1(NetworkClient___c__DisplayClass55_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c__DisplayClass55_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkClient___c__DisplayClass55_0_1(NetworkClient___c__DisplayClass55_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18305};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<T>*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkClient/<>c__DisplayClass61_0
class CORDL_TYPE NetworkClient___c__DisplayClass61_0 : public ::System::Object {
public:
// Declarations
/// @brief Field spawnHandler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnHandler, put=__cordl_internal_set_spawnHandler)) ::Mirror::SpawnDelegate*  spawnHandler;

static inline ::Mirror::NetworkClient___c__DisplayClass61_0* New_ctor() ;

/// @brief Method <RegisterPrefab>b__0, addr 0x181552830, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> _RegisterPrefab_b__0(::Mirror::SpawnMessage  msg) ;

constexpr ::Mirror::SpawnDelegate* const& __cordl_internal_get_spawnHandler() const;

constexpr ::Mirror::SpawnDelegate*& __cordl_internal_get_spawnHandler() ;

constexpr void __cordl_internal_set_spawnHandler(::Mirror::SpawnDelegate*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkClient___c__DisplayClass61_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c__DisplayClass61_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkClient___c__DisplayClass61_0(NetworkClient___c__DisplayClass61_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c__DisplayClass61_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkClient___c__DisplayClass61_0(NetworkClient___c__DisplayClass61_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18306};

/// @brief Field spawnHandler, offset: 0x10, size: 0x8, def value: None
 ::Mirror::SpawnDelegate*  ___spawnHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkClient___c__DisplayClass61_0, ___spawnHandler) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkClient___c__DisplayClass61_0) == 0x18, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkClient/<>c__DisplayClass62_0
class CORDL_TYPE NetworkClient___c__DisplayClass62_0 : public ::System::Object {
public:
// Declarations
/// @brief Field spawnHandler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnHandler, put=__cordl_internal_set_spawnHandler)) ::Mirror::SpawnDelegate*  spawnHandler;

static inline ::Mirror::NetworkClient___c__DisplayClass62_0* New_ctor() ;

/// @brief Method <RegisterPrefab>b__0, addr 0x181552830, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> _RegisterPrefab_b__0(::Mirror::SpawnMessage  msg) ;

constexpr ::Mirror::SpawnDelegate* const& __cordl_internal_get_spawnHandler() const;

constexpr ::Mirror::SpawnDelegate*& __cordl_internal_get_spawnHandler() ;

constexpr void __cordl_internal_set_spawnHandler(::Mirror::SpawnDelegate*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkClient___c__DisplayClass62_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c__DisplayClass62_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkClient___c__DisplayClass62_0(NetworkClient___c__DisplayClass62_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c__DisplayClass62_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkClient___c__DisplayClass62_0(NetworkClient___c__DisplayClass62_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18307};

/// @brief Field spawnHandler, offset: 0x10, size: 0x8, def value: None
 ::Mirror::SpawnDelegate*  ___spawnHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkClient___c__DisplayClass62_0, ___spawnHandler) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkClient___c__DisplayClass62_0) == 0x18, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkClient/<>c__DisplayClass66_0
class CORDL_TYPE NetworkClient___c__DisplayClass66_0 : public ::System::Object {
public:
// Declarations
/// @brief Field spawnHandler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnHandler, put=__cordl_internal_set_spawnHandler)) ::Mirror::SpawnDelegate*  spawnHandler;

static inline ::Mirror::NetworkClient___c__DisplayClass66_0* New_ctor() ;

/// @brief Method <RegisterSpawnHandler>b__0, addr 0x181552830, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> _RegisterSpawnHandler_b__0(::Mirror::SpawnMessage  msg) ;

constexpr ::Mirror::SpawnDelegate* const& __cordl_internal_get_spawnHandler() const;

constexpr ::Mirror::SpawnDelegate*& __cordl_internal_get_spawnHandler() ;

constexpr void __cordl_internal_set_spawnHandler(::Mirror::SpawnDelegate*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkClient___c__DisplayClass66_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c__DisplayClass66_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkClient___c__DisplayClass66_0(NetworkClient___c__DisplayClass66_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient___c__DisplayClass66_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkClient___c__DisplayClass66_0(NetworkClient___c__DisplayClass66_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18308};

/// @brief Field spawnHandler, offset: 0x10, size: 0x8, def value: None
 ::Mirror::SpawnDelegate*  ___spawnHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkClient___c__DisplayClass66_0, ___spawnHandler) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkClient___c__DisplayClass66_0) == 0x18, "Size mismatch!");

} // namespace end def Mirror
// Dependencies Mirror.ConnectState, Mirror.ExponentialMovingAverage, System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkClient
class CORDL_TYPE NetworkClient : public ::System::Object {
public:
// Declarations
using __c = ::Mirror::NetworkClient___c;

template<typename T>
using __c__DisplayClass53_0_1 = ::Mirror::NetworkClient___c__DisplayClass53_0_1<T>;

template<typename T>
using __c__DisplayClass55_0_1 = ::Mirror::NetworkClient___c__DisplayClass55_0_1<T>;

using __c__DisplayClass61_0 = ::Mirror::NetworkClient___c__DisplayClass61_0;

using __c__DisplayClass62_0 = ::Mirror::NetworkClient___c__DisplayClass62_0;

using __c__DisplayClass66_0 = ::Mirror::NetworkClient___c__DisplayClass66_0;

/// @brief Field OnConnectedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnConnectedEvent, put=setStaticF_OnConnectedEvent)) ::System::Action*  OnConnectedEvent;

/// @brief Field OnDisconnectedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDisconnectedEvent, put=setStaticF_OnDisconnectedEvent)) ::System::Action*  OnDisconnectedEvent;

/// @brief Field OnErrorEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnErrorEvent, put=setStaticF_OnErrorEvent)) ::System::Action_2<::Mirror::TransportError,::StringW>*  OnErrorEvent;

/// @brief Field <connection>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__connection_k__BackingField, put=setStaticF__connection_k__BackingField)) ::Mirror::NetworkConnection*  _connection_k__BackingField;

/// @brief Field <localPlayer>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localPlayer_k__BackingField, put=setStaticF__localPlayer_k__BackingField)) ::UnityW<::Mirror::NetworkIdentity>  _localPlayer_k__BackingField;

/// @brief Field aoi, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_aoi, put=setStaticF_aoi)) ::UnityW<::Mirror::InterestManagementBase>  aoi;

/// @brief Field connectState, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_connectState, put=setStaticF_connectState)) ::Mirror::ConnectState  connectState;

/// @brief Field deliveryTimeEma, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF_deliveryTimeEma, put=setStaticF_deliveryTimeEma)) ::Mirror::ExponentialMovingAverage  deliveryTimeEma;

/// @brief Field deliveryTimeEmaDuration, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_deliveryTimeEmaDuration, put=setStaticF_deliveryTimeEmaDuration)) int32_t  deliveryTimeEmaDuration;

/// @brief Field driftEma, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF_driftEma, put=setStaticF_driftEma)) ::Mirror::ExponentialMovingAverage  driftEma;

/// @brief Field dynamicAdjustment, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_dynamicAdjustment, put=setStaticF_dynamicAdjustment)) bool  dynamicAdjustment;

/// @brief Field dynamicAdjustmentTolerance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_dynamicAdjustmentTolerance, put=setStaticF_dynamicAdjustmentTolerance)) float_t  dynamicAdjustmentTolerance;

/// @brief Field handlers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_handlers, put=setStaticF_handlers)) ::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*  handlers;

/// @brief Field isLoadingScene, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isLoadingScene, put=setStaticF_isLoadingScene)) bool  isLoadingScene;

/// @brief Field isSpawnFinished, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isSpawnFinished, put=setStaticF_isSpawnFinished)) bool  isSpawnFinished;

/// @brief Field lastSendTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lastSendTime, put=setStaticF_lastSendTime)) double_t  lastSendTime;

/// @brief Field localTimeline, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localTimeline, put=setStaticF_localTimeline)) double_t  localTimeline;

/// @brief Field localTimescale, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localTimescale, put=setStaticF_localTimescale)) double_t  localTimescale;

/// @brief Field prefabs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_prefabs, put=setStaticF_prefabs)) ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::UnityEngine::GameObject>>*  prefabs;

/// @brief Field ready, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ready, put=setStaticF_ready)) bool  ready;

/// @brief Field snapshotSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_snapshotSettings, put=setStaticF_snapshotSettings)) ::Mirror::SnapshotInterpolationSettings*  snapshotSettings;

/// @brief Field snapshots, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_snapshots, put=setStaticF_snapshots)) ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*  snapshots;

/// @brief Field spawnHandlers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_spawnHandlers, put=setStaticF_spawnHandlers)) ::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::SpawnHandlerDelegate*>*  spawnHandlers;

/// @brief Field spawnableObjects, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_spawnableObjects, put=setStaticF_spawnableObjects)) ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*  spawnableObjects;

/// @brief Field spawned, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_spawned, put=setStaticF_spawned)) ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*  spawned;

/// @brief Field unbatcher, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unbatcher, put=setStaticF_unbatcher)) ::Mirror::Unbatcher*  unbatcher;

/// @brief Field unspawnHandlers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unspawnHandlers, put=setStaticF_unspawnHandlers)) ::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::UnSpawnDelegate*>*  unspawnHandlers;

/// @brief Method AddPlayer, addr 0x181539c50, size 0x120, virtual false, abstract: false, final false
static inline bool AddPlayer() ;

/// @brief Method AddTransportHandlers, addr 0x181539d70, size 0x310, virtual false, abstract: false, final false
static inline void AddTransportHandlers() ;

/// @brief Method ApplySpawnPayload, addr 0x18153a080, size 0x480, virtual false, abstract: false, final false
static inline void ApplySpawnPayload(::Mirror::NetworkIdentity*  identity, ::Mirror::SpawnMessage  message) ;

/// @brief Method BootstrapIdentity, addr 0x18153a500, size 0xf0, virtual false, abstract: false, final false
static inline void BootstrapIdentity(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method Broadcast, addr 0x18153a610, size 0x2b0, virtual false, abstract: false, final false
static inline void Broadcast() ;

/// @brief Method BroadcastTimeSnapshot, addr 0x18153a5f0, size 0x20, virtual false, abstract: false, final false
static inline void BroadcastTimeSnapshot() ;

/// @brief Method ChangeOwner, addr 0x18153a8c0, size 0x240, virtual false, abstract: false, final false
static inline void ChangeOwner(::Mirror::NetworkIdentity*  identity, ::Mirror::ChangeOwnerMessage  message) ;

/// @brief Method ClearSpawners, addr 0x18153ab00, size 0x80, virtual false, abstract: false, final false
static inline void ClearSpawners() ;

/// @brief Method Connect, addr 0x18153ada0, size 0xe0, virtual false, abstract: false, final false
static inline void Connect(::StringW  address) ;

/// @brief Method Connect, addr 0x18153acc0, size 0xe0, virtual false, abstract: false, final false
static inline void Connect(::System::Uri*  uri) ;

/// @brief Method ConnectHost, addr 0x18153ab80, size 0x130, virtual false, abstract: false, final false
static inline void ConnectHost() ;

/// @brief Method ConnectLocalServer, addr 0x18153acb0, size 0x10, virtual false, abstract: false, final false
static inline void ConnectLocalServer() ;

/// @brief Method DestroyAllClientObjects, addr 0x18153ae80, size 0x2c0, virtual false, abstract: false, final false
static inline void DestroyAllClientObjects() ;

/// @brief Method DestroyObject, addr 0x18153b140, size 0x1f0, virtual false, abstract: false, final false
static inline void DestroyObject(uint32_t  netId) ;

/// @brief Method Disconnect, addr 0x18153b330, size 0xa0, virtual false, abstract: false, final false
static inline void Disconnect() ;

/// @brief Method FindOrSpawnObject, addr 0x18153b3d0, size 0x300, virtual false, abstract: false, final false
static inline bool FindOrSpawnObject(::Mirror::SpawnMessage  message, ::by_ref<::Mirror::NetworkIdentity*>  identity) ;

/// @brief Method GetAndRemoveSceneObject, addr 0x18153b6d0, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::NetworkIdentity> GetAndRemoveSceneObject(uint64_t  sceneId) ;

/// @brief Method GetExistingObject, addr 0x18153b770, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::NetworkIdentity> GetExistingObject(uint32_t  netid) ;

/// @brief Method GetPrefab, addr 0x18153b7e0, size 0xa0, virtual false, abstract: false, final false
static inline bool GetPrefab(uint32_t  assetId, ::by_ref<::UnityEngine::GameObject*>  prefab) ;

/// @brief Method InitTimeInterpolation, addr 0x18153b880, size 0x1d0, virtual false, abstract: false, final false
static inline void InitTimeInterpolation() ;

/// @brief Method Initialize, addr 0x18153baf0, size 0x210, virtual false, abstract: false, final false
static inline void Initialize(bool  hostMode) ;

/// @brief Method InitializeIdentityFlags, addr 0x18153ba50, size 0xa0, virtual false, abstract: false, final false
static inline void InitializeIdentityFlags(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method InternalAddPlayer, addr 0x18153bd00, size 0xf0, virtual false, abstract: false, final false
static inline void InternalAddPlayer(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method InvokeIdentityCallbacks, addr 0x18153bdf0, size 0x80, virtual false, abstract: false, final false
static inline void InvokeIdentityCallbacks(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method InvokeUnSpawnHandler, addr 0x18153be70, size 0xa0, virtual false, abstract: false, final false
static inline bool InvokeUnSpawnHandler(uint32_t  assetId, ::UnityEngine::GameObject*  obj) ;

/// @brief Method NetworkEarlyUpdate, addr 0x18153bf10, size 0x130, virtual false, abstract: false, final false
static inline void NetworkEarlyUpdate() ;

/// @brief Method NetworkLateUpdate, addr 0x18153c040, size 0x280, virtual false, abstract: false, final false
static inline void NetworkLateUpdate() ;

/// @brief Method OnChangeOwner, addr 0x18153c2c0, size 0x2f0, virtual false, abstract: false, final false
static inline void OnChangeOwner(::Mirror::ChangeOwnerMessage  message) ;

/// @brief Method OnEntityStateMessage, addr 0x18153c5b0, size 0x160, virtual false, abstract: false, final false
static inline void OnEntityStateMessage(::Mirror::EntityStateMessage  message) ;

/// @brief Method OnGUI, addr 0x18153c710, size 0x640, virtual false, abstract: false, final false
static inline void OnGUI() ;

/// @brief Method OnHostClientObjectDestroy, addr 0x18153cd50, size 0xe0, virtual false, abstract: false, final false
static inline void OnHostClientObjectDestroy(::Mirror::ObjectDestroyMessage  message) ;

/// @brief Method OnHostClientObjectHide, addr 0x18153ce30, size 0xe0, virtual false, abstract: false, final false
static inline void OnHostClientObjectHide(::Mirror::ObjectHideMessage  message) ;

/// @brief Method OnHostClientSpawn, addr 0x18153cf10, size 0x280, virtual false, abstract: false, final false
static inline void OnHostClientSpawn(::Mirror::SpawnMessage  message) ;

/// @brief Method OnObjectDestroy, addr 0x18153d190, size 0x10, virtual false, abstract: false, final false
static inline void OnObjectDestroy(::Mirror::ObjectDestroyMessage  message) ;

/// @brief Method OnObjectHide, addr 0x18153d190, size 0x10, virtual false, abstract: false, final false
static inline void OnObjectHide(::Mirror::ObjectHideMessage  message) ;

/// @brief Method OnObjectSpawnFinished, addr 0x18153d1a0, size 0x2a0, virtual false, abstract: false, final false
static inline void OnObjectSpawnFinished(::Mirror::ObjectSpawnFinishedMessage  _) ;

/// @brief Method OnObjectSpawnStarted, addr 0x18153d440, size 0x40, virtual false, abstract: false, final false
static inline void OnObjectSpawnStarted(::Mirror::ObjectSpawnStartedMessage  _) ;

/// @brief Method OnRPCBufferMessage, addr 0x18153d480, size 0x1e0, virtual false, abstract: false, final false
static inline void OnRPCBufferMessage(::Mirror::RpcBufferMessage  message) ;

/// @brief Method OnRPCMessage, addr 0x18153d660, size 0x1b0, virtual false, abstract: false, final false
static inline void OnRPCMessage(::Mirror::RpcMessage  message) ;

/// @brief Method OnSpawn, addr 0x18153d810, size 0xa0, virtual false, abstract: false, final false
static inline void OnSpawn(::Mirror::SpawnMessage  message) ;

/// @brief Method OnTimeSnapshot, addr 0x18153d940, size 0x1c0, virtual false, abstract: false, final false
static inline void OnTimeSnapshot(::Mirror::TimeSnapshot  snap) ;

/// @brief Method OnTimeSnapshotMessage, addr 0x18153d8b0, size 0x90, virtual false, abstract: false, final false
static inline void OnTimeSnapshotMessage(::Mirror::TimeSnapshotMessage  _) ;

/// @brief Method OnTransportConnected, addr 0x18153db00, size 0x100, virtual false, abstract: false, final false
static inline void OnTransportConnected() ;

/// @brief Method OnTransportData, addr 0x18153dc00, size 0x4b0, virtual false, abstract: false, final false
static inline void OnTransportData(::System::ArraySegment_1<uint8_t>  data, int32_t  channelId) ;

/// @brief Method OnTransportDisconnected, addr 0x18153e0b0, size 0x110, virtual false, abstract: false, final false
static inline void OnTransportDisconnected() ;

/// @brief Method OnTransportError, addr 0x18153e1c0, size 0xa0, virtual false, abstract: false, final false
static inline void OnTransportError(::Mirror::TransportError  error, ::StringW  reason) ;

/// @brief Method PrepareToSpawnSceneObjects, addr 0x18153e260, size 0x2b0, virtual false, abstract: false, final false
static inline void PrepareToSpawnSceneObjects() ;

/// @brief Method Ready, addr 0x18153e510, size 0x110, virtual false, abstract: false, final false
static inline bool Ready() ;

/// @brief Method RegisterHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterHandler(::System::Action_1<T>*  handler, bool  requireAuthentication) ;

/// @brief Method RegisterMessageHandlers, addr 0x18153e620, size 0x4c0, virtual false, abstract: false, final false
static inline void RegisterMessageHandlers(bool  hostMode) ;

/// @brief Method RegisterPrefab, addr 0x18153ed70, size 0x310, virtual false, abstract: false, final false
static inline void RegisterPrefab(::UnityEngine::GameObject*  prefab) ;

/// @brief Method RegisterPrefab, addr 0x18153f080, size 0x3f0, virtual false, abstract: false, final false
static inline void RegisterPrefab(::UnityEngine::GameObject*  prefab, uint32_t  newAssetId) ;

/// @brief Method RegisterPrefab, addr 0x18153f620, size 0xe0, virtual false, abstract: false, final false
static inline void RegisterPrefab(::UnityEngine::GameObject*  prefab, uint32_t  newAssetId, ::Mirror::SpawnDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler) ;

/// @brief Method RegisterPrefab, addr 0x18153f700, size 0x400, virtual false, abstract: false, final false
static inline void RegisterPrefab(::UnityEngine::GameObject*  prefab, uint32_t  newAssetId, ::Mirror::SpawnHandlerDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler) ;

/// @brief Method RegisterPrefab, addr 0x18153f470, size 0x1b0, virtual false, abstract: false, final false
static inline void RegisterPrefab(::UnityEngine::GameObject*  prefab, ::Mirror::SpawnDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler) ;

/// @brief Method RegisterPrefab, addr 0x18153fb00, size 0x3b0, virtual false, abstract: false, final false
static inline void RegisterPrefab(::UnityEngine::GameObject*  prefab, ::Mirror::SpawnHandlerDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler) ;

/// @brief Method RegisterPrefabIdentity, addr 0x18153eae0, size 0x290, virtual false, abstract: false, final false
static inline void RegisterPrefabIdentity(::Mirror::NetworkIdentity*  prefab) ;

/// @brief Method RegisterSpawnHandler, addr 0x181540120, size 0xc0, virtual false, abstract: false, final false
static inline void RegisterSpawnHandler(uint32_t  assetId, ::Mirror::SpawnDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler) ;

/// @brief Method RegisterSpawnHandler, addr 0x18153feb0, size 0x270, virtual false, abstract: false, final false
static inline void RegisterSpawnHandler(uint32_t  assetId, ::Mirror::SpawnHandlerDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler) ;

/// @brief Method RemoveTransportHandlers, addr 0x1815401e0, size 0x310, virtual false, abstract: false, final false
static inline void RemoveTransportHandlers() ;

/// @brief Method ReplaceHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ReplaceHandler(::System::Action_1<T>*  handler, bool  requireAuthentication) ;

/// @brief Method ReplaceHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ReplaceHandler(::System::Action_2<::Mirror::NetworkConnection*,T>*  handler, bool  requireAuthentication) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Send(T  message, int32_t  channelId) ;

/// @brief Method Shutdown, addr 0x1815404f0, size 0x360, virtual false, abstract: false, final false
static inline void Shutdown() ;

/// @brief Method SpawnPrefab, addr 0x181540850, size 0x280, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::NetworkIdentity> SpawnPrefab(::Mirror::SpawnMessage  message) ;

/// @brief Method SpawnSceneObject, addr 0x181540ad0, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::NetworkIdentity> SpawnSceneObject(uint64_t  sceneId) ;

/// @brief Method UnpackAndInvoke, addr 0x181540bb0, size 0x1b0, virtual false, abstract: false, final false
static inline bool UnpackAndInvoke(::Mirror::NetworkReader*  reader, int32_t  channelId) ;

/// @brief Method UnregisterHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool UnregisterHandler() ;

/// @brief Method UnregisterPrefab, addr 0x181540d60, size 0x140, virtual false, abstract: false, final false
static inline void UnregisterPrefab(::UnityEngine::GameObject*  prefab) ;

/// @brief Method UnregisterSpawnHandler, addr 0x181540ea0, size 0x80, virtual false, abstract: false, final false
static inline void UnregisterSpawnHandler(uint32_t  assetId) ;

/// @brief Method UpdateTimeInterpolation, addr 0x181540f20, size 0xd0, virtual false, abstract: false, final false
static inline void UpdateTimeInterpolation() ;

static inline ::System::Action* getStaticF_OnConnectedEvent() ;

static inline ::System::Action* getStaticF_OnDisconnectedEvent() ;

static inline ::System::Action_2<::Mirror::TransportError,::StringW>* getStaticF_OnErrorEvent() ;

static inline ::Mirror::NetworkConnection* getStaticF__connection_k__BackingField() ;

static inline ::UnityW<::Mirror::NetworkIdentity> getStaticF__localPlayer_k__BackingField() ;

static inline ::UnityW<::Mirror::InterestManagementBase> getStaticF_aoi() ;

static inline ::Mirror::ConnectState getStaticF_connectState() ;

static inline ::Mirror::ExponentialMovingAverage getStaticF_deliveryTimeEma() ;

static inline int32_t getStaticF_deliveryTimeEmaDuration() ;

static inline ::Mirror::ExponentialMovingAverage getStaticF_driftEma() ;

static inline bool getStaticF_dynamicAdjustment() ;

static inline float_t getStaticF_dynamicAdjustmentTolerance() ;

static inline ::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>* getStaticF_handlers() ;

static inline bool getStaticF_isLoadingScene() ;

static inline bool getStaticF_isSpawnFinished() ;

static inline double_t getStaticF_lastSendTime() ;

static inline double_t getStaticF_localTimeline() ;

static inline double_t getStaticF_localTimescale() ;

static inline ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::UnityEngine::GameObject>>* getStaticF_prefabs() ;

static inline bool getStaticF_ready() ;

static inline ::Mirror::SnapshotInterpolationSettings* getStaticF_snapshotSettings() ;

static inline ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>* getStaticF_snapshots() ;

static inline ::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::SpawnHandlerDelegate*>* getStaticF_spawnHandlers() ;

static inline ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>* getStaticF_spawnableObjects() ;

static inline ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>* getStaticF_spawned() ;

static inline ::Mirror::Unbatcher* getStaticF_unbatcher() ;

static inline ::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::UnSpawnDelegate*>* getStaticF_unspawnHandlers() ;

/// @brief Method get_active, addr 0x1815413a0, size 0x40, virtual false, abstract: false, final false
static inline bool get_active() ;

/// @brief Method get_activeHost, addr 0x181541320, size 0x80, virtual false, abstract: false, final false
static inline bool get_activeHost() ;

/// @brief Method get_bufferTime, addr 0x181541430, size 0x70, virtual false, abstract: false, final false
static inline double_t get_bufferTime() ;

/// @brief Method get_bufferTimeMultiplier, addr 0x1815413e0, size 0x50, virtual false, abstract: false, final false
static inline double_t get_bufferTimeMultiplier() ;

/// @brief Method get_catchupNegativeThreshold, addr 0x1815414a0, size 0x50, virtual false, abstract: false, final false
static inline float_t get_catchupNegativeThreshold() ;

/// @brief Method get_catchupPositiveThreshold, addr 0x1815414f0, size 0x50, virtual false, abstract: false, final false
static inline float_t get_catchupPositiveThreshold() ;

/// @brief Method get_catchupSpeed, addr 0x181541540, size 0x50, virtual false, abstract: false, final false
static inline double_t get_catchupSpeed() ;

/// @brief Method get_connection, addr 0x1803bcdf0, size 0xbf0, virtual false, abstract: false, final false
static inline ::Mirror::NetworkConnection* get_connection() ;

/// @brief Method get_driftEmaDuration, addr 0x181541590, size 0x50, virtual false, abstract: false, final false
static inline int32_t get_driftEmaDuration() ;

/// @brief Method get_isConnected, addr 0x1815415e0, size 0x40, virtual false, abstract: false, final false
static inline bool get_isConnected() ;

/// @brief Method get_isConnecting, addr 0x181541620, size 0x40, virtual false, abstract: false, final false
static inline bool get_isConnecting() ;

/// @brief Method get_isHostClient, addr 0x181541320, size 0x80, virtual false, abstract: false, final false
static inline bool get_isHostClient() ;

/// @brief Method get_localPlayer, addr 0x181534070, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::NetworkIdentity> get_localPlayer() ;

/// @brief Method get_sendInterval, addr 0x181541660, size 0x70, virtual false, abstract: false, final false
static inline float_t get_sendInterval() ;

/// @brief Method get_sendRate, addr 0x1815416d0, size 0x40, virtual false, abstract: false, final false
static inline int32_t get_sendRate() ;

/// @brief Method get_slowdownSpeed, addr 0x181541710, size 0x50, virtual false, abstract: false, final false
static inline double_t get_slowdownSpeed() ;

static inline void setStaticF_OnConnectedEvent(::System::Action*  value) ;

static inline void setStaticF_OnDisconnectedEvent(::System::Action*  value) ;

static inline void setStaticF_OnErrorEvent(::System::Action_2<::Mirror::TransportError,::StringW>*  value) ;

static inline void setStaticF__connection_k__BackingField(::Mirror::NetworkConnection*  value) ;

static inline void setStaticF__localPlayer_k__BackingField(::UnityW<::Mirror::NetworkIdentity>  value) ;

static inline void setStaticF_aoi(::UnityW<::Mirror::InterestManagementBase>  value) ;

static inline void setStaticF_connectState(::Mirror::ConnectState  value) ;

static inline void setStaticF_deliveryTimeEma(::Mirror::ExponentialMovingAverage  value) ;

static inline void setStaticF_deliveryTimeEmaDuration(int32_t  value) ;

static inline void setStaticF_driftEma(::Mirror::ExponentialMovingAverage  value) ;

static inline void setStaticF_dynamicAdjustment(bool  value) ;

static inline void setStaticF_dynamicAdjustmentTolerance(float_t  value) ;

static inline void setStaticF_handlers(::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*  value) ;

static inline void setStaticF_isLoadingScene(bool  value) ;

static inline void setStaticF_isSpawnFinished(bool  value) ;

static inline void setStaticF_lastSendTime(double_t  value) ;

static inline void setStaticF_localTimeline(double_t  value) ;

static inline void setStaticF_localTimescale(double_t  value) ;

static inline void setStaticF_prefabs(::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF_ready(bool  value) ;

static inline void setStaticF_snapshotSettings(::Mirror::SnapshotInterpolationSettings*  value) ;

static inline void setStaticF_snapshots(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*  value) ;

static inline void setStaticF_spawnHandlers(::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::SpawnHandlerDelegate*>*  value) ;

static inline void setStaticF_spawnableObjects(::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*  value) ;

static inline void setStaticF_spawned(::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*  value) ;

static inline void setStaticF_unbatcher(::Mirror::Unbatcher*  value) ;

static inline void setStaticF_unspawnHandlers(::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::UnSpawnDelegate*>*  value) ;

/// @brief Method set_connection, addr 0x181541760, size 0x60, virtual false, abstract: false, final false
static inline void set_connection(::Mirror::NetworkConnection*  value) ;

/// @brief Method set_localPlayer, addr 0x1815340b0, size 0x17d0, virtual false, abstract: false, final false
static inline void set_localPlayer(::Mirror::NetworkIdentity*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkClient(NetworkClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkClient(NetworkClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18309};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkClient) == 0x10, "Size mismatch!");

} // namespace end def Mirror
