#pragma once
// IWYU pragma private; include "Mirror/NetworkTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__ExponentialMovingAverage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkTime)
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
struct NetworkPingMessage;
}
namespace Mirror {
struct NetworkPongMessage;
}
// Forward declare root types
namespace Mirror {
class NetworkTime;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkTime*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkTime*, "Mirror", "NetworkTime");
// Dependencies Mirror.ExponentialMovingAverage, System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkTime
class CORDL_TYPE NetworkTime : public ::System::Object {
public:
// Declarations
/// @brief Field PingFrequency, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PingFrequency, put=setStaticF_PingFrequency)) float_t  PingFrequency;

/// @brief Field PingWindowSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PingWindowSize, put=setStaticF_PingWindowSize)) int32_t  PingWindowSize;

/// @brief Field _rtt, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF__rtt, put=setStaticF__rtt)) ::Mirror::ExponentialMovingAverage  _rtt;

/// @brief Field lastPingTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lastPingTime, put=setStaticF_lastPingTime)) double_t  lastPingTime;

/// @brief Method OnClientPong, addr 0x181594950, size 0xe0, virtual false, abstract: false, final false
static inline void OnClientPong(::Mirror::NetworkPongMessage  message) ;

/// @brief Method OnServerPing, addr 0x181594a30, size 0x30, virtual false, abstract: false, final false
static inline void OnServerPing(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::NetworkPingMessage  message) ;

/// @brief Method ResetStatics, addr 0x181594a60, size 0xc0, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// @brief Method UpdateClient, addr 0x181594b20, size 0x80, virtual false, abstract: false, final false
static inline void UpdateClient() ;

static inline float_t getStaticF_PingFrequency() ;

static inline int32_t getStaticF_PingWindowSize() ;

static inline ::Mirror::ExponentialMovingAverage getStaticF__rtt() ;

static inline double_t getStaticF_lastPingTime() ;

/// @brief Method get_localTime, addr 0x181594c30, size 0x10, virtual false, abstract: false, final false
static inline double_t get_localTime() ;

/// @brief Method get_offset, addr 0x181594c40, size 0xa0, virtual false, abstract: false, final false
static inline double_t get_offset() ;

/// @brief Method get_rtt, addr 0x181594ce0, size 0x40, virtual false, abstract: false, final false
static inline double_t get_rtt() ;

/// @brief Method get_time, addr 0x180316400, size 0x70, virtual false, abstract: false, final false
static inline double_t get_time() ;

static inline void setStaticF_PingFrequency(float_t  value) ;

static inline void setStaticF_PingWindowSize(int32_t  value) ;

static inline void setStaticF__rtt(::Mirror::ExponentialMovingAverage  value) ;

static inline void setStaticF_lastPingTime(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkTime(NetworkTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkTime(NetworkTime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18343};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkTime) == 0x10, "Size mismatch!");

} // namespace end def Mirror
