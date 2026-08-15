#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/MirrorIgnoranceCommsNetwork.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorConn_def.hpp"
#include "Dissonance/Networking/zzzz__BaseCommsNetwork_5_def.hpp"
#include "Dissonance/zzzz__Unit_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorIgnoranceCommsNetwork)
namespace Dissonance::Datastructures {
template<typename T>
class ConcurrentPool_1;
}
namespace Dissonance::Integrations::MirrorIgnorance {
struct DissonanceNetworkMessage;
}
namespace Dissonance::Integrations::MirrorIgnorance {
struct MirrorConn;
}
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceClient;
}
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceCommsNetwork___c;
}
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceServer;
}
namespace Dissonance {
struct Unit;
}
namespace Mirror {
class NetworkConnection;
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
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceCommsNetwork;
}
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceCommsNetwork___c;
}
// Write type traits
MARK_REF_T(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*);
MARK_REF_T(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*);
DEFINE_IL2CPP_CLASS(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*, "Dissonance.Integrations.MirrorIgnorance", "MirrorIgnoranceCommsNetwork");
DEFINE_IL2CPP_CLASS(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*, "Dissonance.Integrations.MirrorIgnorance", "MirrorIgnoranceCommsNetwork/<>c");
// Dependencies System.Object
namespace Dissonance::Integrations::MirrorIgnorance {
// Is value type: false
// CS Name: Dissonance.Integrations.MirrorIgnorance.MirrorIgnoranceCommsNetwork/<>c
class CORDL_TYPE MirrorIgnoranceCommsNetwork___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Func_1<::ArrayW<uint8_t>>*  __9__11_0;

static inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c* New_ctor() ;

/// @brief Method <.ctor>b__11_0, addr 0x1803d15d0, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> __ctor_b__11_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c* getStaticF___9() ;

static inline ::System::Func_1<::ArrayW<uint8_t>>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*  value) ;

static inline void setStaticF___9__11_0(::System::Func_1<::ArrayW<uint8_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MirrorIgnoranceCommsNetwork___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnoranceCommsNetwork___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorIgnoranceCommsNetwork___c(MirrorIgnoranceCommsNetwork___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnoranceCommsNetwork___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorIgnoranceCommsNetwork___c(MirrorIgnoranceCommsNetwork___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Integrations::MirrorIgnorance
// Dependencies Dissonance.Integrations.MirrorIgnorance.MirrorConn, Dissonance.Networking.BaseCommsNetwork`5<TServer, TClient, TPeer, TClientParam, TServerParam>, Dissonance.Unit
namespace Dissonance::Integrations::MirrorIgnorance {
// Is value type: false
// CS Name: Dissonance.Integrations.MirrorIgnorance.MirrorIgnoranceCommsNetwork
class CORDL_TYPE MirrorIgnoranceCommsNetwork : public ::Dissonance::Networking::BaseCommsNetwork_5<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*,::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*,::Dissonance::Integrations::MirrorIgnorance::MirrorConn,::Dissonance::Unit,::Dissonance::Unit> {
public:
// Declarations
using __c = ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c;

/// @brief Field _loopbackBuffers, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopbackBuffers, put=__cordl_internal_set__loopbackBuffers)) ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  _loopbackBuffers;

/// @brief Field _loopbackQueue, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopbackQueue, put=__cordl_internal_set__loopbackQueue)) ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  _loopbackQueue;

/// @brief Method CreateClient, addr 0x1803cddd0, size 0x80, virtual true, abstract: false, final false
inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient* CreateClient(::Dissonance::Unit  details) ;

/// @brief Method CreateServer, addr 0x1803cde50, size 0xb0, virtual true, abstract: false, final false
inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer* CreateServer(::Dissonance::Unit  details) ;

/// @brief Method Initialize, addr 0x1803cdf00, size 0x40, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork* New_ctor() ;

/// @brief Method NullMessageReceivedHandler, addr 0x1803cdf40, size 0x40, virtual false, abstract: false, final false
static inline void NullMessageReceivedHandler(::Mirror::NetworkConnection*  source, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage  msg) ;

/// @brief Method PreprocessPacketToClient, addr 0x1803cdf80, size 0x1a0, virtual false, abstract: false, final false
inline bool PreprocessPacketToClient(::System::ArraySegment_1<uint8_t>  packet, ::Dissonance::Integrations::MirrorIgnorance::MirrorConn  destination) ;

/// @brief Method PreprocessPacketToServer, addr 0x1803ce120, size 0xf0, virtual false, abstract: false, final false
inline bool PreprocessPacketToServer(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method Update, addr 0x1803ce210, size 0x330, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>* const& __cordl_internal_get__loopbackBuffers() const;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*& __cordl_internal_get__loopbackBuffers() ;

constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get__loopbackQueue() const;

constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get__loopbackQueue() ;

constexpr void __cordl_internal_set__loopbackBuffers(::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set__loopbackQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  value) ;

/// @brief Method .ctor, addr 0x1803ce540, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MirrorIgnoranceCommsNetwork() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnoranceCommsNetwork", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorIgnoranceCommsNetwork(MirrorIgnoranceCommsNetwork && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnoranceCommsNetwork", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorIgnoranceCommsNetwork(MirrorIgnoranceCommsNetwork const& ) = delete;

/// @brief Field ReliableSequencedChannel offset 0xffffffff size 0x1
static constexpr uint8_t  ReliableSequencedChannel{static_cast<uint8_t>(0x0u)};

/// @brief Field UnreliableChannel offset 0xffffffff size 0x1
static constexpr uint8_t  UnreliableChannel{static_cast<uint8_t>(0x1u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5819};

/// @brief Field _loopbackBuffers, offset: 0xd0, size: 0x8, def value: None
 ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  ____loopbackBuffers;

/// @brief Field _loopbackQueue, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  ____loopbackQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork, ____loopbackBuffers) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork, ____loopbackQueue) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork) == 0xe0, "Size mismatch!");

} // namespace end def Dissonance::Integrations::MirrorIgnorance
