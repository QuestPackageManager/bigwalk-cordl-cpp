#pragma once
// IWYU pragma private; include "Mirror/NetworkStatistics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStatistics)
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Mirror {
class NetworkStatistics;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkStatistics*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkStatistics*, "Mirror", "NetworkStatistics");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkStatistics
class CORDL_TYPE NetworkStatistics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field clientIntervalReceivedBytes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientIntervalReceivedBytes, put=__cordl_internal_set_clientIntervalReceivedBytes)) int64_t  clientIntervalReceivedBytes;

/// @brief Field clientIntervalReceivedPackets, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientIntervalReceivedPackets, put=__cordl_internal_set_clientIntervalReceivedPackets)) int32_t  clientIntervalReceivedPackets;

/// @brief Field clientIntervalSentBytes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientIntervalSentBytes, put=__cordl_internal_set_clientIntervalSentBytes)) int64_t  clientIntervalSentBytes;

/// @brief Field clientIntervalSentPackets, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientIntervalSentPackets, put=__cordl_internal_set_clientIntervalSentPackets)) int32_t  clientIntervalSentPackets;

/// @brief Field clientReceivedBytesPerSecond, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientReceivedBytesPerSecond, put=__cordl_internal_set_clientReceivedBytesPerSecond)) int64_t  clientReceivedBytesPerSecond;

/// @brief Field clientReceivedPacketsPerSecond, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientReceivedPacketsPerSecond, put=__cordl_internal_set_clientReceivedPacketsPerSecond)) int32_t  clientReceivedPacketsPerSecond;

/// @brief Field clientSentBytesPerSecond, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientSentBytesPerSecond, put=__cordl_internal_set_clientSentBytesPerSecond)) int64_t  clientSentBytesPerSecond;

/// @brief Field clientSentPacketsPerSecond, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientSentPacketsPerSecond, put=__cordl_internal_set_clientSentPacketsPerSecond)) int32_t  clientSentPacketsPerSecond;

/// @brief Field intervalStartTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_intervalStartTime, put=__cordl_internal_set_intervalStartTime)) double_t  intervalStartTime;

/// @brief Field serverIntervalReceivedBytes, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverIntervalReceivedBytes, put=__cordl_internal_set_serverIntervalReceivedBytes)) int64_t  serverIntervalReceivedBytes;

/// @brief Field serverIntervalReceivedPackets, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverIntervalReceivedPackets, put=__cordl_internal_set_serverIntervalReceivedPackets)) int32_t  serverIntervalReceivedPackets;

/// @brief Field serverIntervalSentBytes, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverIntervalSentBytes, put=__cordl_internal_set_serverIntervalSentBytes)) int64_t  serverIntervalSentBytes;

/// @brief Field serverIntervalSentPackets, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverIntervalSentPackets, put=__cordl_internal_set_serverIntervalSentPackets)) int32_t  serverIntervalSentPackets;

/// @brief Field serverReceivedBytesPerSecond, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverReceivedBytesPerSecond, put=__cordl_internal_set_serverReceivedBytesPerSecond)) int64_t  serverReceivedBytesPerSecond;

/// @brief Field serverReceivedPacketsPerSecond, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverReceivedPacketsPerSecond, put=__cordl_internal_set_serverReceivedPacketsPerSecond)) int32_t  serverReceivedPacketsPerSecond;

/// @brief Field serverSentBytesPerSecond, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverSentBytesPerSecond, put=__cordl_internal_set_serverSentBytesPerSecond)) int64_t  serverSentBytesPerSecond;

/// @brief Field serverSentPacketsPerSecond, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverSentPacketsPerSecond, put=__cordl_internal_set_serverSentPacketsPerSecond)) int32_t  serverSentPacketsPerSecond;

static inline ::Mirror::NetworkStatistics* New_ctor() ;

/// @brief Method OnClientGUI, addr 0x181525d70, size 0x230, virtual false, abstract: false, final false
inline void OnClientGUI() ;

/// @brief Method OnClientReceive, addr 0x181525fa0, size 0x10, virtual false, abstract: false, final false
inline void OnClientReceive(::System::ArraySegment_1<uint8_t>  data, int32_t  channelId) ;

/// @brief Method OnClientSend, addr 0x181525fb0, size 0x10, virtual false, abstract: false, final false
inline void OnClientSend(::System::ArraySegment_1<uint8_t>  data, int32_t  channelId) ;

/// @brief Method OnDestroy, addr 0x181525fc0, size 0x2f0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGUI, addr 0x1815262b0, size 0xc0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnServerGUI, addr 0x181526370, size 0x240, virtual false, abstract: false, final false
inline void OnServerGUI() ;

/// @brief Method OnServerReceive, addr 0x1815265b0, size 0x10, virtual false, abstract: false, final false
inline void OnServerReceive(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  data, int32_t  channelId) ;

/// @brief Method OnServerSend, addr 0x1815265c0, size 0x10, virtual false, abstract: false, final false
inline void OnServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  data, int32_t  channelId) ;

/// @brief Method Start, addr 0x1815265d0, size 0x330, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x181526970, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateClient, addr 0x181526900, size 0x30, virtual false, abstract: false, final false
inline void UpdateClient() ;

/// @brief Method UpdateServer, addr 0x181526930, size 0x40, virtual false, abstract: false, final false
inline void UpdateServer() ;

constexpr int64_t const& __cordl_internal_get_clientIntervalReceivedBytes() const;

constexpr int64_t& __cordl_internal_get_clientIntervalReceivedBytes() ;

constexpr int32_t const& __cordl_internal_get_clientIntervalReceivedPackets() const;

constexpr int32_t& __cordl_internal_get_clientIntervalReceivedPackets() ;

constexpr int64_t const& __cordl_internal_get_clientIntervalSentBytes() const;

constexpr int64_t& __cordl_internal_get_clientIntervalSentBytes() ;

constexpr int32_t const& __cordl_internal_get_clientIntervalSentPackets() const;

constexpr int32_t& __cordl_internal_get_clientIntervalSentPackets() ;

constexpr int64_t const& __cordl_internal_get_clientReceivedBytesPerSecond() const;

constexpr int64_t& __cordl_internal_get_clientReceivedBytesPerSecond() ;

constexpr int32_t const& __cordl_internal_get_clientReceivedPacketsPerSecond() const;

constexpr int32_t& __cordl_internal_get_clientReceivedPacketsPerSecond() ;

constexpr int64_t const& __cordl_internal_get_clientSentBytesPerSecond() const;

constexpr int64_t& __cordl_internal_get_clientSentBytesPerSecond() ;

constexpr int32_t const& __cordl_internal_get_clientSentPacketsPerSecond() const;

constexpr int32_t& __cordl_internal_get_clientSentPacketsPerSecond() ;

constexpr double_t const& __cordl_internal_get_intervalStartTime() const;

constexpr double_t& __cordl_internal_get_intervalStartTime() ;

constexpr int64_t const& __cordl_internal_get_serverIntervalReceivedBytes() const;

constexpr int64_t& __cordl_internal_get_serverIntervalReceivedBytes() ;

constexpr int32_t const& __cordl_internal_get_serverIntervalReceivedPackets() const;

constexpr int32_t& __cordl_internal_get_serverIntervalReceivedPackets() ;

constexpr int64_t const& __cordl_internal_get_serverIntervalSentBytes() const;

constexpr int64_t& __cordl_internal_get_serverIntervalSentBytes() ;

constexpr int32_t const& __cordl_internal_get_serverIntervalSentPackets() const;

constexpr int32_t& __cordl_internal_get_serverIntervalSentPackets() ;

constexpr int64_t const& __cordl_internal_get_serverReceivedBytesPerSecond() const;

constexpr int64_t& __cordl_internal_get_serverReceivedBytesPerSecond() ;

constexpr int32_t const& __cordl_internal_get_serverReceivedPacketsPerSecond() const;

constexpr int32_t& __cordl_internal_get_serverReceivedPacketsPerSecond() ;

constexpr int64_t const& __cordl_internal_get_serverSentBytesPerSecond() const;

constexpr int64_t& __cordl_internal_get_serverSentBytesPerSecond() ;

constexpr int32_t const& __cordl_internal_get_serverSentPacketsPerSecond() const;

constexpr int32_t& __cordl_internal_get_serverSentPacketsPerSecond() ;

constexpr void __cordl_internal_set_clientIntervalReceivedBytes(int64_t  value) ;

constexpr void __cordl_internal_set_clientIntervalReceivedPackets(int32_t  value) ;

constexpr void __cordl_internal_set_clientIntervalSentBytes(int64_t  value) ;

constexpr void __cordl_internal_set_clientIntervalSentPackets(int32_t  value) ;

constexpr void __cordl_internal_set_clientReceivedBytesPerSecond(int64_t  value) ;

constexpr void __cordl_internal_set_clientReceivedPacketsPerSecond(int32_t  value) ;

constexpr void __cordl_internal_set_clientSentBytesPerSecond(int64_t  value) ;

constexpr void __cordl_internal_set_clientSentPacketsPerSecond(int32_t  value) ;

constexpr void __cordl_internal_set_intervalStartTime(double_t  value) ;

constexpr void __cordl_internal_set_serverIntervalReceivedBytes(int64_t  value) ;

constexpr void __cordl_internal_set_serverIntervalReceivedPackets(int32_t  value) ;

constexpr void __cordl_internal_set_serverIntervalSentBytes(int64_t  value) ;

constexpr void __cordl_internal_set_serverIntervalSentPackets(int32_t  value) ;

constexpr void __cordl_internal_set_serverReceivedBytesPerSecond(int64_t  value) ;

constexpr void __cordl_internal_set_serverReceivedPacketsPerSecond(int32_t  value) ;

constexpr void __cordl_internal_set_serverSentBytesPerSecond(int64_t  value) ;

constexpr void __cordl_internal_set_serverSentPacketsPerSecond(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkStatistics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkStatistics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkStatistics(NetworkStatistics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkStatistics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkStatistics(NetworkStatistics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19243};

/// @brief Field intervalStartTime, offset: 0x20, size: 0x8, def value: None
 double_t  ___intervalStartTime;

/// @brief Field clientIntervalReceivedPackets, offset: 0x28, size: 0x4, def value: None
 int32_t  ___clientIntervalReceivedPackets;

/// @brief Field clientIntervalReceivedBytes, offset: 0x30, size: 0x8, def value: None
 int64_t  ___clientIntervalReceivedBytes;

/// @brief Field clientIntervalSentPackets, offset: 0x38, size: 0x4, def value: None
 int32_t  ___clientIntervalSentPackets;

/// @brief Field clientIntervalSentBytes, offset: 0x40, size: 0x8, def value: None
 int64_t  ___clientIntervalSentBytes;

/// @brief Field clientReceivedPacketsPerSecond, offset: 0x48, size: 0x4, def value: None
 int32_t  ___clientReceivedPacketsPerSecond;

/// @brief Field clientReceivedBytesPerSecond, offset: 0x50, size: 0x8, def value: None
 int64_t  ___clientReceivedBytesPerSecond;

/// @brief Field clientSentPacketsPerSecond, offset: 0x58, size: 0x4, def value: None
 int32_t  ___clientSentPacketsPerSecond;

/// @brief Field clientSentBytesPerSecond, offset: 0x60, size: 0x8, def value: None
 int64_t  ___clientSentBytesPerSecond;

/// @brief Field serverIntervalReceivedPackets, offset: 0x68, size: 0x4, def value: None
 int32_t  ___serverIntervalReceivedPackets;

/// @brief Field serverIntervalReceivedBytes, offset: 0x70, size: 0x8, def value: None
 int64_t  ___serverIntervalReceivedBytes;

/// @brief Field serverIntervalSentPackets, offset: 0x78, size: 0x4, def value: None
 int32_t  ___serverIntervalSentPackets;

/// @brief Field serverIntervalSentBytes, offset: 0x80, size: 0x8, def value: None
 int64_t  ___serverIntervalSentBytes;

/// @brief Field serverReceivedPacketsPerSecond, offset: 0x88, size: 0x4, def value: None
 int32_t  ___serverReceivedPacketsPerSecond;

/// @brief Field serverReceivedBytesPerSecond, offset: 0x90, size: 0x8, def value: None
 int64_t  ___serverReceivedBytesPerSecond;

/// @brief Field serverSentPacketsPerSecond, offset: 0x98, size: 0x4, def value: None
 int32_t  ___serverSentPacketsPerSecond;

/// @brief Field serverSentBytesPerSecond, offset: 0xa0, size: 0x8, def value: None
 int64_t  ___serverSentBytesPerSecond;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkStatistics, ___intervalStartTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___clientIntervalReceivedPackets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___clientIntervalReceivedBytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___clientIntervalSentPackets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___clientIntervalSentBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___clientReceivedPacketsPerSecond) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___clientReceivedBytesPerSecond) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___clientSentPacketsPerSecond) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___clientSentBytesPerSecond) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___serverIntervalReceivedPackets) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___serverIntervalReceivedBytes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___serverIntervalSentPackets) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___serverIntervalSentBytes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___serverReceivedPacketsPerSecond) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___serverReceivedBytesPerSecond) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___serverSentPacketsPerSecond) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkStatistics, ___serverSentBytesPerSecond) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkStatistics) == 0xa8, "Size mismatch!");

} // namespace end def Mirror
