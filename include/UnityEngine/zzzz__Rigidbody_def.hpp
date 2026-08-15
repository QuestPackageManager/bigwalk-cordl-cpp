#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rigidbody)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct CollisionDetectionMode;
}
namespace UnityEngine {
struct ForceMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RigidbodyConstraints;
}
namespace UnityEngine {
struct RigidbodyInterpolation;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Rigidbody;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rigidbody*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Rigidbody
class CORDL_TYPE Rigidbody : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_angularDamping, put=set_angularDamping)) float_t  angularDamping;

 __declspec(property(get=get_angularVelocity, put=set_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

 __declspec(property(put=set_automaticCenterOfMass)) bool  automaticCenterOfMass;

 __declspec(property(put=set_automaticInertiaTensor)) bool  automaticInertiaTensor;

 __declspec(property(get=get_centerOfMass, put=set_centerOfMass)) ::UnityEngine::Vector3  centerOfMass;

 __declspec(property(put=set_collisionDetectionMode)) ::UnityEngine::CollisionDetectionMode  collisionDetectionMode;

 __declspec(property(put=set_constraints)) ::UnityEngine::RigidbodyConstraints  constraints;

 __declspec(property(put=set_detectCollisions)) bool  detectCollisions;

 __declspec(property(put=set_interpolation)) ::UnityEngine::RigidbodyInterpolation  interpolation;

 __declspec(property(get=get_isKinematic, put=set_isKinematic)) bool  isKinematic;

 __declspec(property(get=get_linearDamping, put=set_linearDamping)) float_t  linearDamping;

 __declspec(property(get=get_linearVelocity, put=set_linearVelocity)) ::UnityEngine::Vector3  linearVelocity;

 __declspec(property(get=get_mass)) float_t  mass;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::Quaternion  rotation;

 __declspec(property(get=get_useGravity, put=set_useGravity)) bool  useGravity;

 __declspec(property(get=get_worldCenterOfMass)) ::UnityEngine::Vector3  worldCenterOfMass;

/// @brief Method AddForce, addr 0x182302fd0, size 0x40, virtual false, abstract: false, final false
inline void AddForce(::UnityEngine::Vector3  force) ;

/// @brief Method AddForce, addr 0x182303010, size 0x40, virtual false, abstract: false, final false
inline void AddForce(::UnityEngine::Vector3  force, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddForceAtPosition, addr 0x182302f60, size 0x60, virtual false, abstract: false, final false
inline void AddForceAtPosition(::UnityEngine::Vector3  force, ::UnityEngine::Vector3  position) ;

/// @brief Method AddForceAtPosition, addr 0x182302f10, size 0x50, virtual false, abstract: false, final false
inline void AddForceAtPosition(::UnityEngine::Vector3  force, ::UnityEngine::Vector3  position, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddForceAtPosition_Injected, addr 0x182302f00, size 0x10, virtual false, abstract: false, final false
static inline void AddForceAtPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  force, ::by_ref<::UnityEngine::Vector3>  position, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddForce_Injected, addr 0x182302fc0, size 0x10, virtual false, abstract: false, final false
static inline void AddForce_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  force, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddRelativeTorque, addr 0x182303060, size 0x40, virtual false, abstract: false, final false
inline void AddRelativeTorque(::UnityEngine::Vector3  torque, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddRelativeTorque_Injected, addr 0x182303050, size 0x10, virtual false, abstract: false, final false
static inline void AddRelativeTorque_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  torque, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddTorque, addr 0x1823030b0, size 0x40, virtual false, abstract: false, final false
inline void AddTorque(::UnityEngine::Vector3  torque) ;

/// @brief Method AddTorque, addr 0x1823030f0, size 0x40, virtual false, abstract: false, final false
inline void AddTorque(::UnityEngine::Vector3  torque, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddTorque_Injected, addr 0x1823030a0, size 0x10, virtual false, abstract: false, final false
static inline void AddTorque_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  torque, ::UnityEngine::ForceMode  mode) ;

/// @brief Method IsSleeping, addr 0x182303140, size 0x30, virtual false, abstract: false, final false
inline bool IsSleeping() ;

/// @brief Method IsSleeping_Injected, addr 0x182303130, size 0x10, virtual false, abstract: false, final false
static inline bool IsSleeping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Move, addr 0x182303200, size 0x40, virtual false, abstract: false, final false
inline void Move(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method MovePosition, addr 0x182303180, size 0x30, virtual false, abstract: false, final false
inline void MovePosition(::UnityEngine::Vector3  position) ;

/// @brief Method MovePosition_Injected, addr 0x182303170, size 0x10, virtual false, abstract: false, final false
static inline void MovePosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method MoveRotation, addr 0x1823031c0, size 0x30, virtual false, abstract: false, final false
inline void MoveRotation(::UnityEngine::Quaternion  rotation) ;

/// @brief Method MoveRotation_Injected, addr 0x1823031b0, size 0x10, virtual false, abstract: false, final false
static inline void MoveRotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method Move_Injected, addr 0x1823031f0, size 0x10, virtual false, abstract: false, final false
static inline void Move_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

static inline ::UnityEngine::Rigidbody* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_angularDamping, addr 0x182303250, size 0x30, virtual false, abstract: false, final false
inline float_t get_angularDamping() ;

/// @brief Method get_angularDamping_Injected, addr 0x182303240, size 0x10, virtual false, abstract: false, final false
static inline float_t get_angularDamping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_angularVelocity, addr 0x182303290, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_angularVelocity() ;

/// @brief Method get_angularVelocity_Injected, addr 0x182303280, size 0x10, virtual false, abstract: false, final false
static inline void get_angularVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_centerOfMass, addr 0x1823032e0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_centerOfMass() ;

/// @brief Method get_centerOfMass_Injected, addr 0x1823032d0, size 0x10, virtual false, abstract: false, final false
static inline void get_centerOfMass_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_isKinematic, addr 0x182303330, size 0x30, virtual false, abstract: false, final false
inline bool get_isKinematic() ;

/// @brief Method get_isKinematic_Injected, addr 0x182303320, size 0x10, virtual false, abstract: false, final false
static inline bool get_isKinematic_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_linearDamping, addr 0x182303370, size 0x30, virtual false, abstract: false, final false
inline float_t get_linearDamping() ;

/// @brief Method get_linearDamping_Injected, addr 0x182303360, size 0x10, virtual false, abstract: false, final false
static inline float_t get_linearDamping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_linearVelocity, addr 0x1823033b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_linearVelocity() ;

/// @brief Method get_linearVelocity_Injected, addr 0x1823033a0, size 0x10, virtual false, abstract: false, final false
static inline void get_linearVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_mass, addr 0x182303400, size 0x30, virtual false, abstract: false, final false
inline float_t get_mass() ;

/// @brief Method get_mass_Injected, addr 0x1823033f0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_mass_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_position, addr 0x182303440, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_position_Injected, addr 0x182303430, size 0x10, virtual false, abstract: false, final false
static inline void get_position_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_rotation, addr 0x182303490, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_rotation_Injected, addr 0x182303480, size 0x10, virtual false, abstract: false, final false
static inline void get_rotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_useGravity, addr 0x1823034e0, size 0x30, virtual false, abstract: false, final false
inline bool get_useGravity() ;

/// @brief Method get_useGravity_Injected, addr 0x1823034d0, size 0x10, virtual false, abstract: false, final false
static inline bool get_useGravity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_worldCenterOfMass, addr 0x182303520, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_worldCenterOfMass() ;

/// @brief Method get_worldCenterOfMass_Injected, addr 0x182303510, size 0x10, virtual false, abstract: false, final false
static inline void get_worldCenterOfMass_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method set_angularDamping, addr 0x182303570, size 0x40, virtual false, abstract: false, final false
inline void set_angularDamping(float_t  value) ;

/// @brief Method set_angularDamping_Injected, addr 0x182303560, size 0x10, virtual false, abstract: false, final false
static inline void set_angularDamping_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_angularVelocity, addr 0x1823035c0, size 0x30, virtual false, abstract: false, final false
inline void set_angularVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method set_angularVelocity_Injected, addr 0x1823035b0, size 0x10, virtual false, abstract: false, final false
static inline void set_angularVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_automaticCenterOfMass, addr 0x182303600, size 0x30, virtual false, abstract: false, final false
inline void set_automaticCenterOfMass(bool  value) ;

/// @brief Method set_automaticCenterOfMass_Injected, addr 0x1823035f0, size 0x10, virtual false, abstract: false, final false
static inline void set_automaticCenterOfMass_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_automaticInertiaTensor, addr 0x182303640, size 0x30, virtual false, abstract: false, final false
inline void set_automaticInertiaTensor(bool  value) ;

/// @brief Method set_automaticInertiaTensor_Injected, addr 0x182303630, size 0x10, virtual false, abstract: false, final false
static inline void set_automaticInertiaTensor_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_centerOfMass, addr 0x182303680, size 0x30, virtual false, abstract: false, final false
inline void set_centerOfMass(::UnityEngine::Vector3  value) ;

/// @brief Method set_centerOfMass_Injected, addr 0x182303670, size 0x10, virtual false, abstract: false, final false
static inline void set_centerOfMass_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_collisionDetectionMode, addr 0x1823036c0, size 0x30, virtual false, abstract: false, final false
inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode  value) ;

/// @brief Method set_collisionDetectionMode_Injected, addr 0x1823036b0, size 0x10, virtual false, abstract: false, final false
static inline void set_collisionDetectionMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CollisionDetectionMode  value) ;

/// @brief Method set_constraints, addr 0x182303700, size 0x30, virtual false, abstract: false, final false
inline void set_constraints(::UnityEngine::RigidbodyConstraints  value) ;

/// @brief Method set_constraints_Injected, addr 0x1823036f0, size 0x10, virtual false, abstract: false, final false
static inline void set_constraints_Injected(::System::IntPtr  _unity_self, ::UnityEngine::RigidbodyConstraints  value) ;

/// @brief Method set_detectCollisions, addr 0x182303740, size 0x30, virtual false, abstract: false, final false
inline void set_detectCollisions(bool  value) ;

/// @brief Method set_detectCollisions_Injected, addr 0x182303730, size 0x10, virtual false, abstract: false, final false
static inline void set_detectCollisions_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_interpolation, addr 0x182303780, size 0x30, virtual false, abstract: false, final false
inline void set_interpolation(::UnityEngine::RigidbodyInterpolation  value) ;

/// @brief Method set_interpolation_Injected, addr 0x182303770, size 0x10, virtual false, abstract: false, final false
static inline void set_interpolation_Injected(::System::IntPtr  _unity_self, ::UnityEngine::RigidbodyInterpolation  value) ;

/// @brief Method set_isKinematic, addr 0x1823037c0, size 0x30, virtual false, abstract: false, final false
inline void set_isKinematic(bool  value) ;

/// @brief Method set_isKinematic_Injected, addr 0x1823037b0, size 0x10, virtual false, abstract: false, final false
static inline void set_isKinematic_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_linearDamping, addr 0x182303800, size 0x40, virtual false, abstract: false, final false
inline void set_linearDamping(float_t  value) ;

/// @brief Method set_linearDamping_Injected, addr 0x1823037f0, size 0x10, virtual false, abstract: false, final false
static inline void set_linearDamping_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_linearVelocity, addr 0x182303850, size 0x30, virtual false, abstract: false, final false
inline void set_linearVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method set_linearVelocity_Injected, addr 0x182303840, size 0x10, virtual false, abstract: false, final false
static inline void set_linearVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_position, addr 0x182303890, size 0x30, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_position_Injected, addr 0x182303880, size 0x10, virtual false, abstract: false, final false
static inline void set_position_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_rotation, addr 0x1823038d0, size 0x30, virtual false, abstract: false, final false
inline void set_rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_rotation_Injected, addr 0x1823038c0, size 0x10, virtual false, abstract: false, final false
static inline void set_rotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  value) ;

/// @brief Method set_useGravity, addr 0x182303910, size 0x30, virtual false, abstract: false, final false
inline void set_useGravity(bool  value) ;

/// @brief Method set_useGravity_Injected, addr 0x182303900, size 0x10, virtual false, abstract: false, final false
static inline void set_useGravity_Injected(::System::IntPtr  _unity_self, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Rigidbody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rigidbody(Rigidbody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rigidbody(Rigidbody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20214};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rigidbody) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
