#pragma once
// IWYU pragma private; include "Mirror/Examples/SnapshotInterpolationDemo/ServerCube.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ServerCube)
namespace Mirror::Examples::SnapshotInterpolationDemo {
class ClientCube;
}
namespace Mirror::Examples::SnapshotInterpolationDemo {
struct Snapshot3D;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Random;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Mirror::Examples::SnapshotInterpolationDemo {
class ServerCube;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*, "Mirror.Examples.SnapshotInterpolationDemo", "ServerCube");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Mirror::Examples::SnapshotInterpolationDemo {
// Is value type: false
// CS Name: Mirror.Examples.SnapshotInterpolationDemo.ServerCube
class CORDL_TYPE ServerCube : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field client, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube>  client;

/// @brief Field distance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_distance, put=__cordl_internal_set_distance)) float_t  distance;

/// @brief Field jitter, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_jitter, put=__cordl_internal_set_jitter)) float_t  jitter;

/// @brief Field lastSendTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSendTime, put=__cordl_internal_set_lastSendTime)) float_t  lastSendTime;

/// @brief Field latency, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_latency, put=__cordl_internal_set_latency)) float_t  latency;

/// @brief Field loss, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_loss, put=__cordl_internal_set_loss)) float_t  loss;

/// @brief Field queue, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>>*  queue;

/// @brief Field random, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_random, put=__cordl_internal_set_random)) ::System::Random*  random;

/// @brief Field scramble, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_scramble, put=__cordl_internal_set_scramble)) float_t  scramble;

 __declspec(property(get=get_sendInterval)) float_t  sendInterval;

/// @brief Field sendRate, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sendRate, put=__cordl_internal_set_sendRate)) int32_t  sendRate;

/// @brief Field speed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field start, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::UnityEngine::Vector3  start;

/// @brief Method Flush, addr 0x181563720, size 0xf0, virtual false, abstract: false, final false
inline void Flush() ;

static inline ::Mirror::Examples::SnapshotInterpolationDemo::ServerCube* New_ctor() ;

/// @brief Method Send, addr 0x181563810, size 0x1f0, virtual false, abstract: false, final false
inline void Send(::UnityEngine::Vector3  position) ;

/// @brief Method SimulateLatency, addr 0x181563a00, size 0x30, virtual false, abstract: false, final false
inline float_t SimulateLatency() ;

/// @brief Method Start, addr 0x181563a30, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x181563a70, size 0x240, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube> const& __cordl_internal_get_client() const;

constexpr ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube>& __cordl_internal_get_client() ;

constexpr float_t const& __cordl_internal_get_distance() const;

constexpr float_t& __cordl_internal_get_distance() ;

constexpr float_t const& __cordl_internal_get_jitter() const;

constexpr float_t& __cordl_internal_get_jitter() ;

constexpr float_t const& __cordl_internal_get_lastSendTime() const;

constexpr float_t& __cordl_internal_get_lastSendTime() ;

constexpr float_t const& __cordl_internal_get_latency() const;

constexpr float_t& __cordl_internal_get_latency() ;

constexpr float_t const& __cordl_internal_get_loss() const;

constexpr float_t& __cordl_internal_get_loss() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>>* const& __cordl_internal_get_queue() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>>*& __cordl_internal_get_queue() ;

constexpr ::System::Random* const& __cordl_internal_get_random() const;

constexpr ::System::Random*& __cordl_internal_get_random() ;

constexpr float_t const& __cordl_internal_get_scramble() const;

constexpr float_t& __cordl_internal_get_scramble() ;

constexpr int32_t const& __cordl_internal_get_sendRate() const;

constexpr int32_t& __cordl_internal_get_sendRate() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_start() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_start() ;

constexpr void __cordl_internal_set_client(::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube>  value) ;

constexpr void __cordl_internal_set_distance(float_t  value) ;

constexpr void __cordl_internal_set_jitter(float_t  value) ;

constexpr void __cordl_internal_set_lastSendTime(float_t  value) ;

constexpr void __cordl_internal_set_latency(float_t  value) ;

constexpr void __cordl_internal_set_loss(float_t  value) ;

constexpr void __cordl_internal_set_queue(::System::Collections::Generic::List_1<::System::ValueTuple_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>>*  value) ;

constexpr void __cordl_internal_set_random(::System::Random*  value) ;

constexpr void __cordl_internal_set_scramble(float_t  value) ;

constexpr void __cordl_internal_set_sendRate(int32_t  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_start(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x181563cb0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_sendInterval, addr 0x181563d60, size 0x20, virtual false, abstract: false, final false
inline float_t get_sendInterval() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerCube() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerCube", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerCube(ServerCube && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerCube", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerCube(ServerCube const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19278};

/// @brief Field client, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube>  ___client;

/// @brief Field distance, offset: 0x28, size: 0x4, def value: None
 float_t  ___distance;

/// @brief Field speed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field start, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___start;

/// @brief Field sendRate, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___sendRate;

/// @brief Field lastSendTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___lastSendTime;

/// @brief Field latency, offset: 0x44, size: 0x4, def value: None
 float_t  ___latency;

/// @brief Field jitter, offset: 0x48, size: 0x4, def value: None
 float_t  ___jitter;

/// @brief Field loss, offset: 0x4c, size: 0x4, def value: None
 float_t  ___loss;

/// @brief Field scramble, offset: 0x50, size: 0x4, def value: None
 float_t  ___scramble;

/// @brief Field random, offset: 0x58, size: 0x8, def value: None
 ::System::Random*  ___random;

/// @brief Field queue, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>>*  ___queue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___client) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___distance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___speed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___start) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___sendRate) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___lastSendTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___latency) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___jitter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___loss) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___scramble) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___random) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube, ___queue) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::SnapshotInterpolationDemo::ServerCube) == 0x68, "Size mismatch!");

} // namespace end def Mirror::Examples::SnapshotInterpolationDemo
