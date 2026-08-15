#pragma once
// IWYU pragma private; include "Mirror/NetworkConnectionToClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__ExponentialMovingAverage_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkConnectionToClient)
namespace Mirror {
class NetworkIdentity;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
struct RpcMessage;
}
namespace Mirror {
struct TimeSnapshot;
}
namespace Mirror {
class Unbatcher;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Mirror {
class NetworkConnectionToClient;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkConnectionToClient*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkConnectionToClient*, "Mirror", "NetworkConnectionToClient");
// Dependencies Mirror.ExponentialMovingAverage, Mirror.NetworkConnection
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkConnectionToClient
class CORDL_TYPE NetworkConnectionToClient : public ::Mirror::NetworkConnection {
public:
// Declarations
 __declspec(property(get=get_address)) ::StringW  address;

 __declspec(property(get=get_bufferTime)) double_t  bufferTime;

/// @brief Field bufferTimeMultiplier, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferTimeMultiplier, put=__cordl_internal_set_bufferTimeMultiplier)) double_t  bufferTimeMultiplier;

 __declspec(property(get=get_clientOwnedObjects)) ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*  clientOwnedObjects;

/// @brief Field deliveryTimeEma, offset 0x90, size 0x28 
 __declspec(property(get=__cordl_internal_get_deliveryTimeEma, put=__cordl_internal_set_deliveryTimeEma)) ::Mirror::ExponentialMovingAverage  deliveryTimeEma;

/// @brief Field driftEma, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_driftEma, put=__cordl_internal_set_driftEma)) ::Mirror::ExponentialMovingAverage  driftEma;

/// @brief Field observing, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_observing, put=__cordl_internal_set_observing)) ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*  observing;

/// @brief Field reliableRpcs, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_reliableRpcs, put=__cordl_internal_set_reliableRpcs)) ::Mirror::NetworkWriter*  reliableRpcs;

/// @brief Field remoteTimeline, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteTimeline, put=__cordl_internal_set_remoteTimeline)) double_t  remoteTimeline;

/// @brief Field remoteTimescale, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteTimescale, put=__cordl_internal_set_remoteTimescale)) double_t  remoteTimescale;

/// @brief Field snapshotBufferSizeLimit, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_snapshotBufferSizeLimit, put=__cordl_internal_set_snapshotBufferSizeLimit)) int32_t  snapshotBufferSizeLimit;

/// @brief Field snapshots, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapshots, put=__cordl_internal_set_snapshots)) ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*  snapshots;

/// @brief Field unbatcher, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_unbatcher, put=__cordl_internal_set_unbatcher)) ::Mirror::Unbatcher*  unbatcher;

/// @brief Field unreliableRpcs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_unreliableRpcs, put=__cordl_internal_set_unreliableRpcs)) ::Mirror::NetworkWriter*  unreliableRpcs;

/// @brief Method AddOwnedObject, addr 0x1815417c0, size 0x30, virtual false, abstract: false, final false
inline void AddOwnedObject(::Mirror::NetworkIdentity*  obj) ;

/// @brief Method AddToObserving, addr 0x1815417f0, size 0x50, virtual false, abstract: false, final false
inline void AddToObserving(::Mirror::NetworkIdentity*  netIdentity) ;

/// @brief Method BufferRpc, addr 0x181541840, size 0x280, virtual false, abstract: false, final false
inline void BufferRpc(::Mirror::RpcMessage  message, ::Mirror::NetworkWriter*  buffer, int32_t  channelId, int32_t  maxMessageSize) ;

/// @brief Method BufferRpc, addr 0x181541ac0, size 0xa0, virtual false, abstract: false, final false
inline void BufferRpc(::Mirror::RpcMessage  message, int32_t  channelId) ;

/// @brief Method DestroyOwnedObjects, addr 0x181541b60, size 0xf0, virtual false, abstract: false, final false
inline void DestroyOwnedObjects() ;

/// @brief Method Disconnect, addr 0x181541c50, size 0x60, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method FlushRpcs, addr 0x181541cb0, size 0xb0, virtual false, abstract: false, final false
inline void FlushRpcs(::Mirror::NetworkWriter*  buffer, int32_t  channelId) ;

static inline ::Mirror::NetworkConnectionToClient* New_ctor(int32_t  networkConnectionId) ;

/// @brief Method OnTimeSnapshot, addr 0x181541d60, size 0x1b0, virtual false, abstract: false, final false
inline void OnTimeSnapshot(::Mirror::TimeSnapshot  snapshot) ;

/// @brief Method RemoveFromObserving, addr 0x181541f10, size 0x70, virtual false, abstract: false, final false
inline void RemoveFromObserving(::Mirror::NetworkIdentity*  netIdentity, bool  isDestroyed) ;

/// @brief Method RemoveFromObservingsObservers, addr 0x181541f80, size 0xb0, virtual false, abstract: false, final false
inline void RemoveFromObservingsObservers() ;

/// @brief Method RemoveOwnedObject, addr 0x181542030, size 0x30, virtual false, abstract: false, final false
inline void RemoveOwnedObject(::Mirror::NetworkIdentity*  obj) ;

/// @brief Method SendToTransport, addr 0x181542060, size 0x60, virtual true, abstract: false, final false
inline void SendToTransport(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method Update, addr 0x181542150, size 0x130, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateTimeInterpolation, addr 0x1815420c0, size 0x90, virtual false, abstract: false, final false
inline void UpdateTimeInterpolation() ;

constexpr double_t const& __cordl_internal_get_bufferTimeMultiplier() const;

constexpr double_t& __cordl_internal_get_bufferTimeMultiplier() ;

constexpr ::Mirror::ExponentialMovingAverage const& __cordl_internal_get_deliveryTimeEma() const;

constexpr ::Mirror::ExponentialMovingAverage& __cordl_internal_get_deliveryTimeEma() ;

constexpr ::Mirror::ExponentialMovingAverage const& __cordl_internal_get_driftEma() const;

constexpr ::Mirror::ExponentialMovingAverage& __cordl_internal_get_driftEma() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>* const& __cordl_internal_get_observing() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*& __cordl_internal_get_observing() ;

constexpr ::Mirror::NetworkWriter* const& __cordl_internal_get_reliableRpcs() const;

constexpr ::Mirror::NetworkWriter*& __cordl_internal_get_reliableRpcs() ;

constexpr double_t const& __cordl_internal_get_remoteTimeline() const;

constexpr double_t& __cordl_internal_get_remoteTimeline() ;

constexpr double_t const& __cordl_internal_get_remoteTimescale() const;

constexpr double_t& __cordl_internal_get_remoteTimescale() ;

constexpr int32_t const& __cordl_internal_get_snapshotBufferSizeLimit() const;

constexpr int32_t& __cordl_internal_get_snapshotBufferSizeLimit() ;

constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>* const& __cordl_internal_get_snapshots() const;

constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*& __cordl_internal_get_snapshots() ;

constexpr ::Mirror::Unbatcher* const& __cordl_internal_get_unbatcher() const;

constexpr ::Mirror::Unbatcher*& __cordl_internal_get_unbatcher() ;

constexpr ::Mirror::NetworkWriter* const& __cordl_internal_get_unreliableRpcs() const;

constexpr ::Mirror::NetworkWriter*& __cordl_internal_get_unreliableRpcs() ;

constexpr void __cordl_internal_set_bufferTimeMultiplier(double_t  value) ;

constexpr void __cordl_internal_set_deliveryTimeEma(::Mirror::ExponentialMovingAverage  value) ;

constexpr void __cordl_internal_set_driftEma(::Mirror::ExponentialMovingAverage  value) ;

constexpr void __cordl_internal_set_observing(::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*  value) ;

constexpr void __cordl_internal_set_reliableRpcs(::Mirror::NetworkWriter*  value) ;

constexpr void __cordl_internal_set_remoteTimeline(double_t  value) ;

constexpr void __cordl_internal_set_remoteTimescale(double_t  value) ;

constexpr void __cordl_internal_set_snapshotBufferSizeLimit(int32_t  value) ;

constexpr void __cordl_internal_set_snapshots(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*  value) ;

constexpr void __cordl_internal_set_unbatcher(::Mirror::Unbatcher*  value) ;

constexpr void __cordl_internal_set_unreliableRpcs(::Mirror::NetworkWriter*  value) ;

/// @brief Method .ctor, addr 0x181542280, size 0x2a0, virtual false, abstract: false, final false
inline void _ctor(int32_t  networkConnectionId) ;

/// @brief Method get_address, addr 0x181542520, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_address() ;

/// @brief Method get_bufferTime, addr 0x181542560, size 0x30, virtual false, abstract: false, final false
inline double_t get_bufferTime() ;

/// @brief Method get_clientOwnedObjects, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>* get_clientOwnedObjects() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkConnectionToClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkConnectionToClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkConnectionToClient(NetworkConnectionToClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConnectionToClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkConnectionToClient(NetworkConnectionToClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18311};

/// @brief Field reliableRpcs, offset: 0x48, size: 0x8, def value: None
 ::Mirror::NetworkWriter*  ___reliableRpcs;

/// @brief Field unreliableRpcs, offset: 0x50, size: 0x8, def value: None
 ::Mirror::NetworkWriter*  ___unreliableRpcs;

/// @brief Field observing, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*  ___observing;

/// @brief Field unbatcher, offset: 0x60, size: 0x8, def value: None
 ::Mirror::Unbatcher*  ___unbatcher;

/// @brief Field driftEma, offset: 0x68, size: 0x28, def value: None
 ::Mirror::ExponentialMovingAverage  ___driftEma;

/// @brief Field deliveryTimeEma, offset: 0x90, size: 0x28, def value: None
 ::Mirror::ExponentialMovingAverage  ___deliveryTimeEma;

/// @brief Field remoteTimeline, offset: 0xb8, size: 0x8, def value: None
 double_t  ___remoteTimeline;

/// @brief Field remoteTimescale, offset: 0xc0, size: 0x8, def value: None
 double_t  ___remoteTimescale;

/// @brief Field bufferTimeMultiplier, offset: 0xc8, size: 0x8, def value: None
 double_t  ___bufferTimeMultiplier;

/// @brief Field snapshots, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*  ___snapshots;

/// @brief Field snapshotBufferSizeLimit, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___snapshotBufferSizeLimit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___reliableRpcs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___unreliableRpcs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___observing) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___unbatcher) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___driftEma) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___deliveryTimeEma) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___remoteTimeline) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___remoteTimescale) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___bufferTimeMultiplier) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___snapshots) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkConnectionToClient, ___snapshotBufferSizeLimit) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkConnectionToClient) == 0xe0, "Size mismatch!");

} // namespace end def Mirror
