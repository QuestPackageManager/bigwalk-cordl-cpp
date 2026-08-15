#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NavMeshAgent)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshAgent;
}
// Write type traits
MARK_REF_T(::UnityEngine::AI::NavMeshAgent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshAgent*, "UnityEngine.AI", "NavMeshAgent");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMeshAgent
class CORDL_TYPE NavMeshAgent : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_speed)) float_t  speed;

 __declspec(property(get=get_velocity, put=set_velocity)) ::UnityEngine::Vector3  velocity;

static inline ::UnityEngine::AI::NavMeshAgent* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_speed, addr 0x182224400, size 0x30, virtual false, abstract: false, final false
inline float_t get_speed() ;

/// @brief Method get_speed_Injected, addr 0x1822243f0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_speed_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_velocity, addr 0x182224440, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Method get_velocity_Injected, addr 0x182224430, size 0x10, virtual false, abstract: false, final false
static inline void get_velocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method set_velocity, addr 0x182224490, size 0x30, virtual false, abstract: false, final false
inline void set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method set_velocity_Injected, addr 0x182224480, size 0x10, virtual false, abstract: false, final false
static inline void set_velocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshAgent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshAgent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshAgent(NavMeshAgent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshAgent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshAgent(NavMeshAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21471};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AI::NavMeshAgent) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AI
