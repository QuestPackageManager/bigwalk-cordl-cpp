#pragma once
// IWYU pragma private; include "Mirror/LatencySimulation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__Transport_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LatencySimulation)
namespace Mirror {
struct QueuedMessage;
}
namespace Mirror {
class Transport;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Random;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Mirror {
class LatencySimulation;
}
// Write type traits
MARK_REF_T(::Mirror::LatencySimulation*);
DEFINE_IL2CPP_CLASS(::Mirror::LatencySimulation*, "Mirror", "LatencySimulation");
// Dependencies Mirror.Transport
namespace Mirror {
// Is value type: false
// CS Name: Mirror.LatencySimulation
class CORDL_TYPE LatencySimulation : public ::Mirror::Transport {
public:
// Declarations
/// @brief Field jitter, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_jitter, put=__cordl_internal_set_jitter)) float_t  jitter;

/// @brief Field jitterSpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_jitterSpeed, put=__cordl_internal_set_jitterSpeed)) float_t  jitterSpeed;

/// @brief Field random, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_random, put=__cordl_internal_set_random)) ::System::Random*  random;

/// @brief Field reliableClientToServer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_reliableClientToServer, put=__cordl_internal_set_reliableClientToServer)) ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  reliableClientToServer;

/// @brief Field reliableLatency, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_reliableLatency, put=__cordl_internal_set_reliableLatency)) float_t  reliableLatency;

/// @brief Field reliableServerToClient, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_reliableServerToClient, put=__cordl_internal_set_reliableServerToClient)) ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  reliableServerToClient;

/// @brief Field unreliableClientToServer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unreliableClientToServer, put=__cordl_internal_set_unreliableClientToServer)) ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  unreliableClientToServer;

/// @brief Field unreliableLatency, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_unreliableLatency, put=__cordl_internal_set_unreliableLatency)) float_t  unreliableLatency;

/// @brief Field unreliableLoss, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_unreliableLoss, put=__cordl_internal_set_unreliableLoss)) float_t  unreliableLoss;

/// @brief Field unreliableScramble, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_unreliableScramble, put=__cordl_internal_set_unreliableScramble)) float_t  unreliableScramble;

/// @brief Field unreliableServerToClient, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unreliableServerToClient, put=__cordl_internal_set_unreliableServerToClient)) ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  unreliableServerToClient;

/// @brief Field wrap, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_wrap, put=__cordl_internal_set_wrap)) ::UnityW<::Mirror::Transport>  wrap;

/// @brief Method Available, addr 0x181574960, size 0x30, virtual true, abstract: false, final false
inline bool Available() ;

/// @brief Method Awake, addr 0x181574990, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClientConnect, addr 0x1815749c0, size 0xb0, virtual true, abstract: false, final false
inline void ClientConnect(::StringW  address) ;

/// @brief Method ClientConnect, addr 0x181574a70, size 0xb0, virtual true, abstract: false, final false
inline void ClientConnect(::System::Uri*  uri) ;

/// @brief Method ClientConnected, addr 0x181574b20, size 0x30, virtual true, abstract: false, final false
inline bool ClientConnected() ;

/// @brief Method ClientDisconnect, addr 0x181574b50, size 0x90, virtual true, abstract: false, final false
inline void ClientDisconnect() ;

/// @brief Method ClientEarlyUpdate, addr 0x181574be0, size 0x30, virtual true, abstract: false, final false
inline void ClientEarlyUpdate() ;

/// @brief Method ClientLateUpdate, addr 0x181574c10, size 0x240, virtual true, abstract: false, final false
inline void ClientLateUpdate() ;

/// @brief Method ClientSend, addr 0x181574e50, size 0x80, virtual true, abstract: false, final false
inline void ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method GetBatchThreshold, addr 0x181574ed0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetBatchThreshold(int32_t  channelId) ;

/// @brief Method GetMaxPacketSize, addr 0x181574f00, size 0x30, virtual true, abstract: false, final false
inline int32_t GetMaxPacketSize(int32_t  channelId) ;

static inline ::Mirror::LatencySimulation* New_ctor() ;

/// @brief Method Noise, addr 0x181574f30, size 0x10, virtual true, abstract: false, final false
inline float_t Noise(float_t  time) ;

/// @brief Method OnDisable, addr 0x181574f40, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181574f70, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ServerActive, addr 0x181574fa0, size 0x30, virtual true, abstract: false, final false
inline bool ServerActive() ;

/// @brief Method ServerDisconnect, addr 0x181574fd0, size 0x30, virtual true, abstract: false, final false
inline void ServerDisconnect(int32_t  connectionId) ;

/// @brief Method ServerEarlyUpdate, addr 0x181575000, size 0x30, virtual true, abstract: false, final false
inline void ServerEarlyUpdate() ;

/// @brief Method ServerGetClientAddress, addr 0x181575030, size 0x30, virtual true, abstract: false, final false
inline ::StringW ServerGetClientAddress(int32_t  connectionId) ;

/// @brief Method ServerLateUpdate, addr 0x181575060, size 0x260, virtual true, abstract: false, final false
inline void ServerLateUpdate() ;

/// @brief Method ServerSend, addr 0x1815752c0, size 0x80, virtual true, abstract: false, final false
inline void ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method ServerStart, addr 0x181575340, size 0xa0, virtual true, abstract: false, final false
inline void ServerStart() ;

/// @brief Method ServerStop, addr 0x1815753e0, size 0x90, virtual true, abstract: false, final false
inline void ServerStop() ;

/// @brief Method ServerUri, addr 0x181575470, size 0x30, virtual true, abstract: false, final false
inline ::System::Uri* ServerUri() ;

/// @brief Method Shutdown, addr 0x1815754a0, size 0x30, virtual true, abstract: false, final false
inline void Shutdown() ;

/// @brief Method SimulateLatency, addr 0x1815754d0, size 0xa0, virtual false, abstract: false, final false
inline float_t SimulateLatency(int32_t  channeldId) ;

/// @brief Method SimulateSend, addr 0x181575570, size 0x2f0, virtual false, abstract: false, final false
inline void SimulateSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId, float_t  latency, ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  reliableQueue, ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  unreliableQueue) ;

/// @brief Method ToString, addr 0x181575860, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr float_t const& __cordl_internal_get_jitter() const;

constexpr float_t& __cordl_internal_get_jitter() ;

constexpr float_t const& __cordl_internal_get_jitterSpeed() const;

constexpr float_t& __cordl_internal_get_jitterSpeed() ;

constexpr ::System::Random* const& __cordl_internal_get_random() const;

constexpr ::System::Random*& __cordl_internal_get_random() ;

constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>* const& __cordl_internal_get_reliableClientToServer() const;

constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*& __cordl_internal_get_reliableClientToServer() ;

constexpr float_t const& __cordl_internal_get_reliableLatency() const;

constexpr float_t& __cordl_internal_get_reliableLatency() ;

constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>* const& __cordl_internal_get_reliableServerToClient() const;

constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*& __cordl_internal_get_reliableServerToClient() ;

constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>* const& __cordl_internal_get_unreliableClientToServer() const;

constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*& __cordl_internal_get_unreliableClientToServer() ;

constexpr float_t const& __cordl_internal_get_unreliableLatency() const;

constexpr float_t& __cordl_internal_get_unreliableLatency() ;

constexpr float_t const& __cordl_internal_get_unreliableLoss() const;

constexpr float_t& __cordl_internal_get_unreliableLoss() ;

constexpr float_t const& __cordl_internal_get_unreliableScramble() const;

constexpr float_t& __cordl_internal_get_unreliableScramble() ;

constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>* const& __cordl_internal_get_unreliableServerToClient() const;

constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*& __cordl_internal_get_unreliableServerToClient() ;

constexpr ::UnityW<::Mirror::Transport> const& __cordl_internal_get_wrap() const;

constexpr ::UnityW<::Mirror::Transport>& __cordl_internal_get_wrap() ;

constexpr void __cordl_internal_set_jitter(float_t  value) ;

constexpr void __cordl_internal_set_jitterSpeed(float_t  value) ;

constexpr void __cordl_internal_set_random(::System::Random*  value) ;

constexpr void __cordl_internal_set_reliableClientToServer(::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  value) ;

constexpr void __cordl_internal_set_reliableLatency(float_t  value) ;

constexpr void __cordl_internal_set_reliableServerToClient(::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  value) ;

constexpr void __cordl_internal_set_unreliableClientToServer(::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  value) ;

constexpr void __cordl_internal_set_unreliableLatency(float_t  value) ;

constexpr void __cordl_internal_set_unreliableLoss(float_t  value) ;

constexpr void __cordl_internal_set_unreliableScramble(float_t  value) ;

constexpr void __cordl_internal_set_unreliableServerToClient(::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  value) ;

constexpr void __cordl_internal_set_wrap(::UnityW<::Mirror::Transport>  value) ;

/// @brief Method .ctor, addr 0x181575880, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LatencySimulation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LatencySimulation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LatencySimulation(LatencySimulation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LatencySimulation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LatencySimulation(LatencySimulation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19030};

/// @brief Field wrap, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Mirror::Transport>  ___wrap;

/// @brief Field jitter, offset: 0x78, size: 0x4, def value: None
 float_t  ___jitter;

/// @brief Field jitterSpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ___jitterSpeed;

/// @brief Field reliableLatency, offset: 0x80, size: 0x4, def value: None
 float_t  ___reliableLatency;

/// @brief Field unreliableLoss, offset: 0x84, size: 0x4, def value: None
 float_t  ___unreliableLoss;

/// @brief Field unreliableLatency, offset: 0x88, size: 0x4, def value: None
 float_t  ___unreliableLatency;

/// @brief Field unreliableScramble, offset: 0x8c, size: 0x4, def value: None
 float_t  ___unreliableScramble;

/// @brief Field reliableClientToServer, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  ___reliableClientToServer;

/// @brief Field reliableServerToClient, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  ___reliableServerToClient;

/// @brief Field unreliableClientToServer, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  ___unreliableClientToServer;

/// @brief Field unreliableServerToClient, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  ___unreliableServerToClient;

/// @brief Field random, offset: 0xb0, size: 0x8, def value: None
 ::System::Random*  ___random;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::LatencySimulation, ___wrap) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___jitter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___jitterSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___reliableLatency) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___unreliableLoss) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___unreliableLatency) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___unreliableScramble) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___reliableClientToServer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___reliableServerToClient) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___unreliableClientToServer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___unreliableServerToClient) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::LatencySimulation, ___random) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Mirror::LatencySimulation) == 0xb8, "Size mismatch!");

} // namespace end def Mirror
