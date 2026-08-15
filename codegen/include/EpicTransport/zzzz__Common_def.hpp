#pragma once
// IWYU pragma private; include "EpicTransport/Common.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionInterruptedInfo_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__PacketReliability_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Common)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Epic::OnlineServices::P2P {
class OnIncomingConnectionRequestCallback;
}
namespace Epic::OnlineServices::P2P {
struct OnIncomingConnectionRequestInfo;
}
namespace Epic::OnlineServices::P2P {
struct OnPeerConnectionEstablishedInfo;
}
namespace Epic::OnlineServices::P2P {
struct OnPeerConnectionInterruptedInfo;
}
namespace Epic::OnlineServices::P2P {
class OnRemoteConnectionClosedCallback;
}
namespace Epic::OnlineServices::P2P {
struct OnRemoteConnectionClosedInfo;
}
namespace Epic::OnlineServices::P2P {
class P2PInterface;
}
namespace Epic::OnlineServices::P2P {
struct SocketId;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace EpicTransport {
struct Common_InternalMessages;
}
namespace EpicTransport {
struct Common_PacketKey;
}
namespace EpicTransport {
class Common__DelayedClose_d__35;
}
namespace EpicTransport {
struct Common__RearmP2PNotifications_d__21;
}
namespace EpicTransport {
struct Common__WaitAndForceDisconnect_d__24;
}
namespace EpicTransport {
class EosTransport;
}
namespace EpicTransport {
struct Packet;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace EpicTransport {
struct Common_InternalMessages;
}
namespace EpicTransport {
class Common;
}
namespace EpicTransport {
class Common__DelayedClose_d__35;
}
namespace EpicTransport {
struct Common_PacketKey;
}
namespace EpicTransport {
struct Common__RearmP2PNotifications_d__21;
}
namespace EpicTransport {
struct Common__WaitAndForceDisconnect_d__24;
}
// Write type traits
MARK_VAL_T(::EpicTransport::Common_InternalMessages);
MARK_REF_T(::EpicTransport::Common*);
MARK_REF_T(::EpicTransport::Common__DelayedClose_d__35*);
MARK_VAL_T(::EpicTransport::Common_PacketKey);
MARK_VAL_T(::EpicTransport::Common__RearmP2PNotifications_d__21);
MARK_VAL_T(::EpicTransport::Common__WaitAndForceDisconnect_d__24);
DEFINE_IL2CPP_CLASS(::EpicTransport::Common_InternalMessages, "EpicTransport", "Common/InternalMessages");
DEFINE_IL2CPP_CLASS(::EpicTransport::Common*, "EpicTransport", "Common");
DEFINE_IL2CPP_CLASS(::EpicTransport::Common__DelayedClose_d__35*, "EpicTransport", "Common/<DelayedClose>d__35");
DEFINE_IL2CPP_CLASS(::EpicTransport::Common_PacketKey, "EpicTransport", "Common/PacketKey");
DEFINE_IL2CPP_CLASS(::EpicTransport::Common__RearmP2PNotifications_d__21, "EpicTransport", "Common/<RearmP2PNotifications>d__21");
DEFINE_IL2CPP_CLASS(::EpicTransport::Common__WaitAndForceDisconnect_d__24, "EpicTransport", "Common/<WaitAndForceDisconnect>d__24");
// Dependencies 
namespace EpicTransport {
// Is value type: true
// CS Name: EpicTransport.Common/InternalMessages
struct CORDL_TYPE Common_InternalMessages {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __Common_InternalMessages_Unwrapped
enum struct __Common_InternalMessages_Unwrapped : uint8_t {
__E_CONNECT = static_cast<uint8_t>(0x0u),
__E_ACCEPT_CONNECT = static_cast<uint8_t>(0x1u),
__E_DISCONNECT = static_cast<uint8_t>(0x2u),
__E_SERVER_FULL = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Common_InternalMessages_Unwrapped () const noexcept {
return static_cast<__Common_InternalMessages_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Common_InternalMessages() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Common_InternalMessages(uint8_t  value__) noexcept;

/// @brief Field ACCEPT_CONNECT value: U8(1)
static ::EpicTransport::Common_InternalMessages const ACCEPT_CONNECT;

/// @brief Field CONNECT value: U8(0)
static ::EpicTransport::Common_InternalMessages const CONNECT;

/// @brief Field DISCONNECT value: U8(2)
static ::EpicTransport::Common_InternalMessages const DISCONNECT;

/// @brief Field SERVER_FULL value: U8(3)
static ::EpicTransport::Common_InternalMessages const SERVER_FULL;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Common_InternalMessages, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Common_InternalMessages) == 0x1, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies 
namespace EpicTransport {
// Is value type: true
// CS Name: EpicTransport.Common/PacketKey
struct CORDL_TYPE Common_PacketKey {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Common_PacketKey() ;

// Ctor Parameters [CppParam { name: "productUserId", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Common_PacketKey(::Epic::OnlineServices::ProductUserId*  productUserId, uint8_t  channel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19045};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field productUserId, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  productUserId;

/// @brief Field channel, offset: 0x8, size: 0x1, def value: None
 uint8_t  channel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Common_PacketKey, productUserId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common_PacketKey, channel) == 0x8, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Common_PacketKey) == 0x10, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies Epic.OnlineServices.P2P.SocketId, System.Object
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.Common/<DelayedClose>d__35
class CORDL_TYPE Common__DelayedClose_d__35 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::EpicTransport::Common*  __4__this;

/// @brief Field clientUserID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientUserID, put=__cordl_internal_set_clientUserID)) ::Epic::OnlineServices::ProductUserId*  clientUserID;

/// @brief Field socketId, offset 0x30, size 0x20 
 __declspec(property(get=__cordl_internal_get_socketId, put=__cordl_internal_set_socketId)) ::Epic::OnlineServices::P2P::SocketId  socketId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18158d930, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::EpicTransport::Common__DelayedClose_d__35* New_ctor(int32_t  __1__state) ;

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

constexpr ::EpicTransport::Common* const& __cordl_internal_get___4__this() const;

constexpr ::EpicTransport::Common*& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::ProductUserId* const& __cordl_internal_get_clientUserID() const;

constexpr ::Epic::OnlineServices::ProductUserId*& __cordl_internal_get_clientUserID() ;

constexpr ::Epic::OnlineServices::P2P::SocketId const& __cordl_internal_get_socketId() const;

constexpr ::Epic::OnlineServices::P2P::SocketId& __cordl_internal_get_socketId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::EpicTransport::Common*  value) ;

constexpr void __cordl_internal_set_clientUserID(::Epic::OnlineServices::ProductUserId*  value) ;

constexpr void __cordl_internal_set_socketId(::Epic::OnlineServices::P2P::SocketId  value) ;

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
constexpr Common__DelayedClose_d__35() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Common__DelayedClose_d__35", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Common__DelayedClose_d__35(Common__DelayedClose_d__35 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Common__DelayedClose_d__35", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Common__DelayedClose_d__35(Common__DelayedClose_d__35 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19046};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::EpicTransport::Common*  _____4__this;

/// @brief Field clientUserID, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  ___clientUserID;

/// @brief Field socketId, offset: 0x30, size: 0x20, def value: None
 ::Epic::OnlineServices::P2P::SocketId  ___socketId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Common__DelayedClose_d__35, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__DelayedClose_d__35, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__DelayedClose_d__35, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__DelayedClose_d__35, ___clientUserID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__DelayedClose_d__35, ___socketId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Common__DelayedClose_d__35) == 0x50, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace EpicTransport {
// Is value type: true
// CS Name: EpicTransport.Common/<RearmP2PNotifications>d__21
struct CORDL_TYPE Common__RearmP2PNotifications_d__21 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18158e250, size 0x5e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Common__RearmP2PNotifications_d__21() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::EpicTransport::Common*", modifiers: "", def_value: None }, CppParam { name: "_deadline_5__2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr Common__RearmP2PNotifications_d__21(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::EpicTransport::Common*  __4__this, float_t  _deadline_5__2, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::EpicTransport::Common*  __4__this;

/// @brief Field <deadline>5__2, offset: 0x18, size: 0x4, def value: None
 float_t  _deadline_5__2;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Common__RearmP2PNotifications_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__RearmP2PNotifications_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__RearmP2PNotifications_d__21, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__RearmP2PNotifications_d__21, _deadline_5__2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__RearmP2PNotifications_d__21, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Common__RearmP2PNotifications_d__21) == 0x30, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Epic.OnlineServices.P2P.OnPeerConnectionInterruptedInfo, System.Threading.CancellationToken
namespace EpicTransport {
// Is value type: true
// CS Name: EpicTransport.Common/<WaitAndForceDisconnect>d__24
struct CORDL_TYPE Common__WaitAndForceDisconnect_d__24 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18158eef0, size 0x930, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Common__WaitAndForceDisconnect_d__24() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr Common__WaitAndForceDisconnect_d__24(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, float_t  delay, ::System::Threading::CancellationToken  token, ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo  data, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field delay, offset: 0x10, size: 0x4, def value: None
 float_t  delay;

/// @brief Field token, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field data, offset: 0x20, size: 0x40, def value: None
 ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo  data;

/// @brief Field <>u__1, offset: 0x60, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Common__WaitAndForceDisconnect_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__WaitAndForceDisconnect_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__WaitAndForceDisconnect_d__24, delay) == 0x10, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__WaitAndForceDisconnect_d__24, token) == 0x18, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__WaitAndForceDisconnect_d__24, data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common__WaitAndForceDisconnect_d__24, __u__1) == 0x60, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Common__WaitAndForceDisconnect_d__24) == 0x70, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies Epic.OnlineServices.P2P.PacketReliability, System.Object
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.Common
class CORDL_TYPE Common : public ::System::Object {
public:
// Declarations
using InternalMessages = ::EpicTransport::Common_InternalMessages;

using PacketKey = ::EpicTransport::Common_PacketKey;

using _DelayedClose_d__35 = ::EpicTransport::Common__DelayedClose_d__35;

using _RearmP2PNotifications_d__21 = ::EpicTransport::Common__RearmP2PNotifications_d__21;

using _WaitAndForceDisconnect_d__24 = ::EpicTransport::Common__WaitAndForceDisconnect_d__24;

 __declspec(property(get=get_HadEstablishedSession)) bool  HadEstablishedSession;

/// @brief Field OnIncomingConnectionRequest, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnIncomingConnectionRequest, put=__cordl_internal_set_OnIncomingConnectionRequest)) ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*  OnIncomingConnectionRequest;

/// @brief Field OnRemoteConnectionClosed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRemoteConnectionClosed, put=__cordl_internal_set_OnRemoteConnectionClosed)) ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*  OnRemoteConnectionClosed;

/// @brief Field RECONNECT_TIMER, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_RECONNECT_TIMER, put=setStaticF_RECONNECT_TIMER)) float_t  RECONNECT_TIMER;

/// @brief Field cancellationTokenSource, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationTokenSource, put=__cordl_internal_set_cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  cancellationTokenSource;

/// @brief Field channels, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) ::ArrayW<::Epic::OnlineServices::P2P::PacketReliability>  channels;

/// @brief Field deadSockets, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_deadSockets, put=__cordl_internal_set_deadSockets)) ::System::Collections::Generic::List_1<::StringW>*  deadSockets;

/// @brief Field ignoreAllMessages, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreAllMessages, put=__cordl_internal_set_ignoreAllMessages)) bool  ignoreAllMessages;

/// @brief Field incomingNotificationId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_incomingNotificationId, put=__cordl_internal_set_incomingNotificationId)) uint64_t  incomingNotificationId;

/// @brief Field incomingPackets, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_incomingPackets, put=__cordl_internal_set_incomingPackets)) ::System::Collections::Generic::Dictionary_2<::EpicTransport::Common_PacketKey,::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EpicTransport::Packet>*>*>*  incomingPackets;

/// @brief Field internalReceiveBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_internalReceiveBuffer, put=__cordl_internal_set_internalReceiveBuffer)) ::ArrayW<uint8_t>  internalReceiveBuffer;

 __declspec(property(get=get_internal_ch)) int32_t  internal_ch;

/// @brief Field outgoingNotificationId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_outgoingNotificationId, put=__cordl_internal_set_outgoingNotificationId)) uint64_t  outgoingNotificationId;

/// @brief Field p2pInterface, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_p2pInterface, put=__cordl_internal_set_p2pInterface)) ::Epic::OnlineServices::P2P::P2PInterface*  p2pInterface;

/// @brief Field peerConnectionEstablishNotificationId, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_peerConnectionEstablishNotificationId, put=__cordl_internal_set_peerConnectionEstablishNotificationId)) uint64_t  peerConnectionEstablishNotificationId;

/// @brief Field peerConnectionInterruptNotificationId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_peerConnectionInterruptNotificationId, put=__cordl_internal_set_peerConnectionInterruptNotificationId)) uint64_t  peerConnectionInterruptNotificationId;

/// @brief Field transport, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::UnityW<::EpicTransport::EosTransport>  transport;

/// @brief Method ArmEOSNotifications, addr 0x1815814a0, size 0x310, virtual false, abstract: false, final false
inline void ArmEOSNotifications() ;

/// @brief Method CloseP2PSessionWithUser, addr 0x1815817b0, size 0x180, virtual true, abstract: false, final false
inline void CloseP2PSessionWithUser(::Epic::OnlineServices::ProductUserId*  clientUserID, ::Epic::OnlineServices::P2P::SocketId  socketId) ;

/// @brief Method DelayedClose, addr 0x181581930, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedClose(::Epic::OnlineServices::ProductUserId*  clientUserID, ::Epic::OnlineServices::P2P::SocketId  socketId) ;

/// @brief Method Dispose, addr 0x1815819c0, size 0x90, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::EpicTransport::Common* New_ctor(::EpicTransport::EosTransport*  transport) ;

/// @brief Method OnConnectFail, addr 0x181581a50, size 0x2c0, virtual false, abstract: false, final false
inline void OnConnectFail(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>  result) ;

/// @brief Method OnConnectionEstablish, addr 0x181581d10, size 0x40, virtual false, abstract: false, final false
inline void OnConnectionEstablish(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>  data) ;

/// @brief Method OnConnectionFailed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnConnectionFailed(::Epic::OnlineServices::ProductUserId*  remoteId) ;

/// @brief Method OnInterrupt, addr 0x181581d50, size 0x220, virtual false, abstract: false, final false
inline void OnInterrupt(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo>  data) ;

/// @brief Method OnNewConnection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnNewConnection(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>  result) ;

/// @brief Method OnReceiveData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnReceiveData(::ArrayW<uint8_t>  data, ::Epic::OnlineServices::ProductUserId*  clientUserID, int32_t  channel) ;

/// @brief Method OnReceiveInternalData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnReceiveInternalData(::EpicTransport::Common_InternalMessages  type, ::Epic::OnlineServices::ProductUserId*  clientUserID, ::Epic::OnlineServices::P2P::SocketId  socketId) ;

/// @brief Method RearmP2PNotifications, addr 0x181581f70, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid RearmP2PNotifications() ;

/// @brief Method Receive, addr 0x181582af0, size 0x1e0, virtual false, abstract: false, final false
inline bool Receive(::by_ref<::Epic::OnlineServices::ProductUserId*>  clientProductUserId, ::by_ref<::Epic::OnlineServices::P2P::SocketId>  socketId, ::by_ref<::System::ArraySegment_1<uint8_t>>  receiveBuffer, uint8_t  channel) ;

/// @brief Method ReceiveData, addr 0x181581fe0, size 0xb10, virtual false, abstract: false, final false
inline void ReceiveData() ;

/// @brief Method Send, addr 0x181582ec0, size 0x220, virtual false, abstract: false, final false
inline void Send(::Epic::OnlineServices::ProductUserId*  host, ::Epic::OnlineServices::P2P::SocketId  socketId, ::ArrayW<uint8_t>  msgBuffer, uint8_t  channel) ;

/// @brief Method SendInternal, addr 0x181582cd0, size 0x1f0, virtual false, abstract: false, final false
inline void SendInternal(::Epic::OnlineServices::ProductUserId*  target, ::Epic::OnlineServices::P2P::SocketId  socketId, ::EpicTransport::Common_InternalMessages  type) ;

/// @brief Method WaitAndForceDisconnect, addr 0x1815830e0, size 0xd0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid WaitAndForceDisconnect(::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfo  data, float_t  delay, ::System::Threading::CancellationToken  token) ;

/// @brief Method WaitForClose, addr 0x1815831b0, size 0xb0, virtual false, abstract: false, final false
inline void WaitForClose(::Epic::OnlineServices::ProductUserId*  clientUserID, ::Epic::OnlineServices::P2P::SocketId  socketId) ;

constexpr ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback* const& __cordl_internal_get_OnIncomingConnectionRequest() const;

constexpr ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*& __cordl_internal_get_OnIncomingConnectionRequest() ;

constexpr ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback* const& __cordl_internal_get_OnRemoteConnectionClosed() const;

constexpr ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*& __cordl_internal_get_OnRemoteConnectionClosed() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cancellationTokenSource() ;

constexpr ::ArrayW<::Epic::OnlineServices::P2P::PacketReliability> const& __cordl_internal_get_channels() const;

constexpr ::ArrayW<::Epic::OnlineServices::P2P::PacketReliability>& __cordl_internal_get_channels() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_deadSockets() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_deadSockets() ;

constexpr bool const& __cordl_internal_get_ignoreAllMessages() const;

constexpr bool& __cordl_internal_get_ignoreAllMessages() ;

constexpr uint64_t const& __cordl_internal_get_incomingNotificationId() const;

constexpr uint64_t& __cordl_internal_get_incomingNotificationId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::EpicTransport::Common_PacketKey,::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EpicTransport::Packet>*>*>* const& __cordl_internal_get_incomingPackets() const;

constexpr ::System::Collections::Generic::Dictionary_2<::EpicTransport::Common_PacketKey,::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EpicTransport::Packet>*>*>*& __cordl_internal_get_incomingPackets() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_internalReceiveBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_internalReceiveBuffer() ;

constexpr uint64_t const& __cordl_internal_get_outgoingNotificationId() const;

constexpr uint64_t& __cordl_internal_get_outgoingNotificationId() ;

constexpr ::Epic::OnlineServices::P2P::P2PInterface* const& __cordl_internal_get_p2pInterface() const;

constexpr ::Epic::OnlineServices::P2P::P2PInterface*& __cordl_internal_get_p2pInterface() ;

constexpr uint64_t const& __cordl_internal_get_peerConnectionEstablishNotificationId() const;

constexpr uint64_t& __cordl_internal_get_peerConnectionEstablishNotificationId() ;

constexpr uint64_t const& __cordl_internal_get_peerConnectionInterruptNotificationId() const;

constexpr uint64_t& __cordl_internal_get_peerConnectionInterruptNotificationId() ;

constexpr ::UnityW<::EpicTransport::EosTransport> const& __cordl_internal_get_transport() const;

constexpr ::UnityW<::EpicTransport::EosTransport>& __cordl_internal_get_transport() ;

constexpr void __cordl_internal_set_OnIncomingConnectionRequest(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*  value) ;

constexpr void __cordl_internal_set_OnRemoteConnectionClosed(::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*  value) ;

constexpr void __cordl_internal_set_cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_channels(::ArrayW<::Epic::OnlineServices::P2P::PacketReliability>  value) ;

constexpr void __cordl_internal_set_deadSockets(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_ignoreAllMessages(bool  value) ;

constexpr void __cordl_internal_set_incomingNotificationId(uint64_t  value) ;

constexpr void __cordl_internal_set_incomingPackets(::System::Collections::Generic::Dictionary_2<::EpicTransport::Common_PacketKey,::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EpicTransport::Packet>*>*>*  value) ;

constexpr void __cordl_internal_set_internalReceiveBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_outgoingNotificationId(uint64_t  value) ;

constexpr void __cordl_internal_set_p2pInterface(::Epic::OnlineServices::P2P::P2PInterface*  value) ;

constexpr void __cordl_internal_set_peerConnectionEstablishNotificationId(uint64_t  value) ;

constexpr void __cordl_internal_set_peerConnectionInterruptNotificationId(uint64_t  value) ;

constexpr void __cordl_internal_set_transport(::UnityW<::EpicTransport::EosTransport>  value) ;

/// @brief Method .ctor, addr 0x181583290, size 0x270, virtual false, abstract: false, final false
inline void _ctor(::EpicTransport::EosTransport*  transport) ;

static inline float_t getStaticF_RECONNECT_TIMER() ;

/// @brief Method get_HadEstablishedSession, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_HadEstablishedSession() ;

/// @brief Method get_internal_ch, addr 0x1802f4180, size 0x20, virtual false, abstract: false, final false
inline int32_t get_internal_ch() ;

static inline void setStaticF_RECONNECT_TIMER(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Common() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Common(Common && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Common(Common const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19049};

/// @brief Field channels, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::P2P::PacketReliability>  ___channels;

/// @brief Field internalReceiveBuffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___internalReceiveBuffer;

/// @brief Field OnIncomingConnectionRequest, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*  ___OnIncomingConnectionRequest;

/// @brief Field incomingNotificationId, offset: 0x28, size: 0x8, def value: None
 uint64_t  ___incomingNotificationId;

/// @brief Field OnRemoteConnectionClosed, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*  ___OnRemoteConnectionClosed;

/// @brief Field outgoingNotificationId, offset: 0x38, size: 0x8, def value: None
 uint64_t  ___outgoingNotificationId;

/// @brief Field cancellationTokenSource, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___cancellationTokenSource;

/// @brief Field peerConnectionInterruptNotificationId, offset: 0x48, size: 0x8, def value: None
 uint64_t  ___peerConnectionInterruptNotificationId;

/// @brief Field peerConnectionEstablishNotificationId, offset: 0x50, size: 0x8, def value: None
 uint64_t  ___peerConnectionEstablishNotificationId;

/// @brief Field transport, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::EpicTransport::EosTransport>  ___transport;

/// @brief Field deadSockets, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___deadSockets;

/// @brief Field ignoreAllMessages, offset: 0x68, size: 0x1, def value: None
 bool  ___ignoreAllMessages;

/// @brief Field p2pInterface, offset: 0x70, size: 0x8, def value: None
 ::Epic::OnlineServices::P2P::P2PInterface*  ___p2pInterface;

/// @brief Field incomingPackets, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::EpicTransport::Common_PacketKey,::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EpicTransport::Packet>*>*>*  ___incomingPackets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::Common, ___channels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___internalReceiveBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___OnIncomingConnectionRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___incomingNotificationId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___OnRemoteConnectionClosed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___outgoingNotificationId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___cancellationTokenSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___peerConnectionInterruptNotificationId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___peerConnectionEstablishNotificationId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___transport) == 0x58, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___deadSockets) == 0x60, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___ignoreAllMessages) == 0x68, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___p2pInterface) == 0x70, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::Common, ___incomingPackets) == 0x78, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::Common) == 0x80, "Size mismatch!");

} // namespace end def EpicTransport
