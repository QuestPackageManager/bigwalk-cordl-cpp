#pragma once
// IWYU pragma private; include "Mirror/Examples/Tanks/Tank.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Tank)
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace UnityEngine::AI {
class NavMeshAgent;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class TextMesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Mirror::Examples::Tanks {
class Tank;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Tanks::Tank*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Tanks::Tank*, "Mirror.Examples.Tanks", "Tank");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.KeyCode
namespace Mirror::Examples::Tanks {
// Is value type: false
// CS Name: Mirror.Examples.Tanks.Tank
class CORDL_TYPE Tank : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_Networkhealth, put=set_Networkhealth)) int32_t  Networkhealth;

/// @brief Field agent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  agent;

/// @brief Field animator, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field health, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_health, put=__cordl_internal_set_health)) int32_t  health;

/// @brief Field healthBar, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_healthBar, put=__cordl_internal_set_healthBar)) ::UnityW<::UnityEngine::TextMesh>  healthBar;

/// @brief Field projectileMount, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileMount, put=__cordl_internal_set_projectileMount)) ::UnityW<::UnityEngine::Transform>  projectileMount;

/// @brief Field projectilePrefab, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::UnityEngine::GameObject>  projectilePrefab;

/// @brief Field rotationSpeed, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Field shootKey, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shootKey, put=__cordl_internal_set_shootKey)) ::UnityEngine::KeyCode  shootKey;

/// @brief Field turret, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_turret, put=__cordl_internal_set_turret)) ::UnityW<::UnityEngine::Transform>  turret;

/// @brief Method CmdFire, addr 0x1815641b0, size 0xb0, virtual false, abstract: false, final false
inline void CmdFire() ;

/// @brief Method DeserializeSyncVars, addr 0x181564260, size 0x60, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method InvokeUserCode_CmdFire, addr 0x1815642c0, size 0x1d0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdFire(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcOnFire, addr 0x181564490, size 0x90, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcOnFire(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::Tanks::Tank* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x181564520, size 0x110, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method RotateTurret, addr 0x181564630, size 0x1b0, virtual false, abstract: false, final false
inline void RotateTurret() ;

/// @brief Method RpcOnFire, addr 0x1815647e0, size 0xb0, virtual false, abstract: false, final false
inline void RpcOnFire() ;

/// @brief Method SerializeSyncVars, addr 0x181564890, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method Update, addr 0x1815648e0, size 0x450, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UserCode_CmdFire, addr 0x181564d30, size 0x140, virtual false, abstract: false, final false
inline void UserCode_CmdFire() ;

/// @brief Method UserCode_RpcOnFire, addr 0x181564e70, size 0x30, virtual false, abstract: false, final false
inline void UserCode_RpcOnFire() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_agent() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr int32_t const& __cordl_internal_get_health() const;

constexpr int32_t& __cordl_internal_get_health() ;

constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get_healthBar() const;

constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get_healthBar() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_projectileMount() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_projectileMount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectilePrefab() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_shootKey() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_shootKey() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_turret() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_turret() ;

constexpr void __cordl_internal_set_agent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_health(int32_t  value) ;

constexpr void __cordl_internal_set_healthBar(::UnityW<::UnityEngine::TextMesh>  value) ;

constexpr void __cordl_internal_set_projectileMount(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_shootKey(::UnityEngine::KeyCode  value) ;

constexpr void __cordl_internal_set_turret(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x181564f60, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Networkhealth, addr 0x180408b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Networkhealth() ;

/// @brief Method set_Networkhealth, addr 0x181564f90, size 0x80, virtual false, abstract: false, final false
inline void set_Networkhealth(::ByRefConst<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tank() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tank", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tank(Tank && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tank", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tank(Tank const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19275};

/// @brief Field agent, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___agent;

/// @brief Field animator, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field healthBar, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextMesh>  ___healthBar;

/// @brief Field turret, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___turret;

/// @brief Field rotationSpeed, offset: 0x88, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// @brief Field shootKey, offset: 0x8c, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___shootKey;

/// @brief Field projectilePrefab, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectilePrefab;

/// @brief Field projectileMount, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___projectileMount;

/// @brief Field health, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___health;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Tanks::Tank, ___agent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Tanks::Tank, ___animator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Tanks::Tank, ___healthBar) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Tanks::Tank, ___turret) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Tanks::Tank, ___rotationSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Tanks::Tank, ___shootKey) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Tanks::Tank, ___projectilePrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Tanks::Tank, ___projectileMount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Tanks::Tank, ___health) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Tanks::Tank) == 0xa8, "Size mismatch!");

} // namespace end def Mirror::Examples::Tanks
