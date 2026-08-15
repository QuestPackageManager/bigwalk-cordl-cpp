#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/VoiceReceiver_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceReceiver_1)
namespace Dissonance::Datastructures {
template<typename T>
class ConcurrentPool_1;
}
namespace Dissonance::Networking::Client {
class EventQueue;
}
namespace Dissonance::Networking::Client {
class ISession;
}
namespace Dissonance::Networking::Client {
class PeerVoiceReceiver;
}
namespace Dissonance::Networking {
template<typename TPeer>
class IClientCollection_1;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
struct RemoteChannel;
}
namespace Dissonance {
class Rooms;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
template<typename TPeer>
class VoiceReceiver_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Client::VoiceReceiver_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Client::VoiceReceiver_1, "Dissonance.Networking.Client", "VoiceReceiver`1");
// Dependencies System.Object, System.TimeSpan
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Client.VoiceReceiver`1<TPeer>
class CORDL_TYPE VoiceReceiver_1 : public ::System::Object {
public:
// Declarations
/// @brief Field ActiveTimeout, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ActiveTimeout, put=setStaticF_ActiveTimeout)) ::System::TimeSpan  ActiveTimeout;

/// @brief Field InactiveTimeout, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InactiveTimeout, put=setStaticF_InactiveTimeout)) ::System::TimeSpan  InactiveTimeout;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _channelListPool, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__channelListPool, put=__cordl_internal_set__channelListPool)) ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  _channelListPool;

/// @brief Field _clients, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__clients, put=__cordl_internal_set__clients)) ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  _clients;

/// @brief Field _events, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Dissonance::Networking::Client::EventQueue*  _events;

/// @brief Field _receivers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__receivers, put=__cordl_internal_set__receivers)) ::System::Collections::Generic::List_1<::Dissonance::Networking::Client::PeerVoiceReceiver*>*  _receivers;

/// @brief Field _rooms, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rooms, put=__cordl_internal_set__rooms)) ::Dissonance::Rooms*  _rooms;

/// @brief Field _session, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__session, put=__cordl_internal_set__session)) ::Dissonance::Networking::Client::ISession*  _session;

/// @brief Method CheckTimeouts, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckTimeouts(::System::DateTime  utcNow) ;

static inline ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>* New_ctor(::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  clients, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::Rooms*  rooms, ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelListPool) ;

/// @brief Method OnPlayerLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnPlayerLeft(::StringW  name) ;

/// @brief Method ReceiveVoiceData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReceiveVoiceData(::by_ref<::Dissonance::Networking::PacketReader>  reader, ::System::Nullable_1<::System::DateTime>  utcNow) ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Update(::System::DateTime  utcNow) ;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* const& __cordl_internal_get__channelListPool() const;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*& __cordl_internal_get__channelListPool() ;

constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>* const& __cordl_internal_get__clients() const;

constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*& __cordl_internal_get__clients() ;

constexpr ::Dissonance::Networking::Client::EventQueue* const& __cordl_internal_get__events() const;

constexpr ::Dissonance::Networking::Client::EventQueue*& __cordl_internal_get__events() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::Client::PeerVoiceReceiver*>* const& __cordl_internal_get__receivers() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::Client::PeerVoiceReceiver*>*& __cordl_internal_get__receivers() ;

constexpr ::Dissonance::Rooms* const& __cordl_internal_get__rooms() const;

constexpr ::Dissonance::Rooms*& __cordl_internal_get__rooms() ;

constexpr ::Dissonance::Networking::Client::ISession* const& __cordl_internal_get__session() const;

constexpr ::Dissonance::Networking::Client::ISession*& __cordl_internal_get__session() ;

constexpr void __cordl_internal_set__channelListPool(::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value) ;

constexpr void __cordl_internal_set__clients(::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  value) ;

constexpr void __cordl_internal_set__events(::Dissonance::Networking::Client::EventQueue*  value) ;

constexpr void __cordl_internal_set__receivers(::System::Collections::Generic::List_1<::Dissonance::Networking::Client::PeerVoiceReceiver*>*  value) ;

constexpr void __cordl_internal_set__rooms(::Dissonance::Rooms*  value) ;

constexpr void __cordl_internal_set__session(::Dissonance::Networking::Client::ISession*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  clients, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::Rooms*  rooms, ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelListPool) ;

static inline ::System::TimeSpan getStaticF_ActiveTimeout() ;

static inline ::System::TimeSpan getStaticF_InactiveTimeout() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline void setStaticF_ActiveTimeout(::System::TimeSpan  value) ;

static inline void setStaticF_InactiveTimeout(::System::TimeSpan  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceReceiver_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceReceiver_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceReceiver_1(VoiceReceiver_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceReceiver_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceReceiver_1(VoiceReceiver_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16925};

/// @brief Field _session, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Networking::Client::ISession*  ____session;

/// @brief Field _clients, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  ____clients;

/// @brief Field _events, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Networking::Client::EventQueue*  ____events;

/// @brief Field _rooms, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Rooms*  ____rooms;

/// @brief Field _channelListPool, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  ____channelListPool;

/// @brief Field _receivers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::Networking::Client::PeerVoiceReceiver*>*  ____receivers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
