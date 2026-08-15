#pragma once
// IWYU pragma private; include "Telepathy/Client.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Telepathy/zzzz__Common_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Client)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace Telepathy {
class ClientConnectionState;
}
namespace Telepathy {
class Client___c__DisplayClass13_0;
}
namespace Telepathy {
class Client___c__DisplayClass14_0;
}
// Forward declare root types
namespace Telepathy {
class Client;
}
namespace Telepathy {
class Client___c__DisplayClass13_0;
}
namespace Telepathy {
class Client___c__DisplayClass14_0;
}
// Write type traits
MARK_REF_T(::Telepathy::Client*);
MARK_REF_T(::Telepathy::Client___c__DisplayClass13_0*);
MARK_REF_T(::Telepathy::Client___c__DisplayClass14_0*);
DEFINE_IL2CPP_CLASS(::Telepathy::Client*, "Telepathy", "Client");
DEFINE_IL2CPP_CLASS(::Telepathy::Client___c__DisplayClass13_0*, "Telepathy", "Client/<>c__DisplayClass13_0");
DEFINE_IL2CPP_CLASS(::Telepathy::Client___c__DisplayClass14_0*, "Telepathy", "Client/<>c__DisplayClass14_0");
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.Client/<>c__DisplayClass13_0
class CORDL_TYPE Client___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field state, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::Telepathy::ClientConnectionState*  state;

static inline ::Telepathy::Client___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <ReceiveThreadFunction>b__0, addr 0x181e5b150, size 0x40, virtual false, abstract: false, final false
inline void _ReceiveThreadFunction_b__0() ;

constexpr ::Telepathy::ClientConnectionState* const& __cordl_internal_get_state() const;

constexpr ::Telepathy::ClientConnectionState*& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_state(::Telepathy::ClientConnectionState*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Client___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Client___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Client___c__DisplayClass13_0(Client___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Client___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Client___c__DisplayClass13_0(Client___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21313};

/// @brief Field state, offset: 0x10, size: 0x8, def value: None
 ::Telepathy::ClientConnectionState*  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::Client___c__DisplayClass13_0, ___state) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Telepathy::Client___c__DisplayClass13_0) == 0x18, "Size mismatch!");

} // namespace end def Telepathy
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.Client/<>c__DisplayClass14_0
class CORDL_TYPE Client___c__DisplayClass14_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Telepathy::Client*  __4__this;

/// @brief Field ip, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ip, put=__cordl_internal_set_ip)) ::StringW  ip;

/// @brief Field port, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_port, put=__cordl_internal_set_port)) int32_t  port;

static inline ::Telepathy::Client___c__DisplayClass14_0* New_ctor() ;

/// @brief Method <Connect>b__0, addr 0x181e5b190, size 0x70, virtual false, abstract: false, final false
inline void _Connect_b__0() ;

constexpr ::Telepathy::Client* const& __cordl_internal_get___4__this() const;

constexpr ::Telepathy::Client*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_ip() const;

constexpr ::StringW& __cordl_internal_get_ip() ;

constexpr int32_t const& __cordl_internal_get_port() const;

constexpr int32_t& __cordl_internal_get_port() ;

constexpr void __cordl_internal_set___4__this(::Telepathy::Client*  value) ;

constexpr void __cordl_internal_set_ip(::StringW  value) ;

constexpr void __cordl_internal_set_port(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Client___c__DisplayClass14_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Client___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Client___c__DisplayClass14_0(Client___c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Client___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Client___c__DisplayClass14_0(Client___c__DisplayClass14_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21314};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Telepathy::Client*  _____4__this;

/// @brief Field ip, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ip;

/// @brief Field port, offset: 0x20, size: 0x4, def value: None
 int32_t  ___port;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::Client___c__DisplayClass14_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Client___c__DisplayClass14_0, ___ip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Client___c__DisplayClass14_0, ___port) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Telepathy::Client___c__DisplayClass14_0) == 0x28, "Size mismatch!");

} // namespace end def Telepathy
// Dependencies Telepathy.Common
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.Client
class CORDL_TYPE Client : public ::Telepathy::Common {
public:
// Declarations
using __c__DisplayClass13_0 = ::Telepathy::Client___c__DisplayClass13_0;

using __c__DisplayClass14_0 = ::Telepathy::Client___c__DisplayClass14_0;

 __declspec(property(get=get_Connected)) bool  Connected;

 __declspec(property(get=get_Connecting)) bool  Connecting;

/// @brief Field OnConnected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnected, put=__cordl_internal_set_OnConnected)) ::System::Action*  OnConnected;

/// @brief Field OnData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnData, put=__cordl_internal_set_OnData)) ::System::Action_1<::System::ArraySegment_1<uint8_t>>*  OnData;

/// @brief Field OnDisconnected, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action*  OnDisconnected;

 __declspec(property(get=get_ReceivePipeCount)) int32_t  ReceivePipeCount;

/// @brief Field ReceiveQueueLimit, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReceiveQueueLimit, put=__cordl_internal_set_ReceiveQueueLimit)) int32_t  ReceiveQueueLimit;

/// @brief Field SendQueueLimit, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_SendQueueLimit, put=__cordl_internal_set_SendQueueLimit)) int32_t  SendQueueLimit;

/// @brief Field state, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::Telepathy::ClientConnectionState*  state;

/// @brief Method Connect, addr 0x181e57920, size 0x250, virtual false, abstract: false, final false
inline void Connect(::StringW  ip, int32_t  port) ;

/// @brief Method Disconnect, addr 0x181e57b70, size 0xb0, virtual false, abstract: false, final false
inline void Disconnect() ;

static inline ::Telepathy::Client* New_ctor(int32_t  MaxMessageSize) ;

/// @brief Method ReceiveThreadFunction, addr 0x181e57c20, size 0x410, virtual false, abstract: false, final false
static inline void ReceiveThreadFunction(::Telepathy::ClientConnectionState*  state, ::StringW  ip, int32_t  port, int32_t  MaxMessageSize, bool  NoDelay, int32_t  SendTimeout, int32_t  ReceiveTimeout, int32_t  ReceiveQueueLimit) ;

/// @brief Method Send, addr 0x181e58030, size 0x290, virtual false, abstract: false, final false
inline bool Send(::System::ArraySegment_1<uint8_t>  message) ;

/// @brief Method Tick, addr 0x181e582c0, size 0x160, virtual false, abstract: false, final false
inline int32_t Tick(int32_t  processLimit, ::System::Func_1<bool>*  checkEnabled) ;

constexpr ::System::Action* const& __cordl_internal_get_OnConnected() const;

constexpr ::System::Action*& __cordl_internal_get_OnConnected() ;

constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get_OnData() const;

constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get_OnData() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDisconnected() const;

constexpr ::System::Action*& __cordl_internal_get_OnDisconnected() ;

constexpr int32_t const& __cordl_internal_get_ReceiveQueueLimit() const;

constexpr int32_t& __cordl_internal_get_ReceiveQueueLimit() ;

constexpr int32_t const& __cordl_internal_get_SendQueueLimit() const;

constexpr int32_t& __cordl_internal_get_SendQueueLimit() ;

constexpr ::Telepathy::ClientConnectionState* const& __cordl_internal_get_state() const;

constexpr ::Telepathy::ClientConnectionState*& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_OnConnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnData(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action*  value) ;

constexpr void __cordl_internal_set_ReceiveQueueLimit(int32_t  value) ;

constexpr void __cordl_internal_set_SendQueueLimit(int32_t  value) ;

constexpr void __cordl_internal_set_state(::Telepathy::ClientConnectionState*  value) ;

/// @brief Method .ctor, addr 0x181e58420, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  MaxMessageSize) ;

/// @brief Method get_Connected, addr 0x181e58440, size 0x30, virtual false, abstract: false, final false
inline bool get_Connected() ;

/// @brief Method get_Connecting, addr 0x181e58470, size 0x20, virtual false, abstract: false, final false
inline bool get_Connecting() ;

/// @brief Method get_ReceivePipeCount, addr 0x181e58490, size 0x30, virtual false, abstract: false, final false
inline int32_t get_ReceivePipeCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Client() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Client", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Client(Client && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Client", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Client(Client const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21315};

/// @brief Field OnConnected, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnConnected;

/// @brief Field OnData, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::ArraySegment_1<uint8_t>>*  ___OnData;

/// @brief Field OnDisconnected, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnDisconnected;

/// @brief Field SendQueueLimit, offset: 0x38, size: 0x4, def value: None
 int32_t  ___SendQueueLimit;

/// @brief Field ReceiveQueueLimit, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___ReceiveQueueLimit;

/// @brief Field state, offset: 0x40, size: 0x8, def value: None
 ::Telepathy::ClientConnectionState*  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::Client, ___OnConnected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Client, ___OnData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Client, ___OnDisconnected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Client, ___SendQueueLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Client, ___ReceiveQueueLimit) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Client, ___state) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Telepathy::Client) == 0x48, "Size mismatch!");

} // namespace end def Telepathy
