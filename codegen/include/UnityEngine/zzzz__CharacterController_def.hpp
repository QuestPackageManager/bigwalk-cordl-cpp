#pragma once
// IWYU pragma private; include "UnityEngine/CharacterController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CharacterController)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct CollisionFlags;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class CharacterController;
}
// Write type traits
MARK_REF_T(::UnityEngine::CharacterController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CharacterController*, "UnityEngine", "CharacterController");
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CharacterController
class CORDL_TYPE CharacterController : public ::UnityEngine::Collider {
public:
// Declarations
 __declspec(property(get=get_isGrounded)) bool  isGrounded;

 __declspec(property(put=set_minMoveDistance)) float_t  minMoveDistance;

 __declspec(property(put=set_skinWidth)) float_t  skinWidth;

 __declspec(property(get=get_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method Move, addr 0x1822fba10, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3  motion) ;

/// @brief Method Move_Injected, addr 0x1822fba00, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::CollisionFlags Move_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  motion) ;

static inline ::UnityEngine::CharacterController* New_ctor() ;

/// @brief Method SimpleMove, addr 0x1822fba60, size 0x40, virtual false, abstract: false, final false
inline bool SimpleMove(::UnityEngine::Vector3  speed) ;

/// @brief Method SimpleMove_Injected, addr 0x1822fba50, size 0x10, virtual false, abstract: false, final false
static inline bool SimpleMove_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  speed) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isGrounded, addr 0x1822fbab0, size 0x30, virtual false, abstract: false, final false
inline bool get_isGrounded() ;

/// @brief Method get_isGrounded_Injected, addr 0x1822fbaa0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isGrounded_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_velocity, addr 0x1822fbaf0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Method get_velocity_Injected, addr 0x1822fbae0, size 0x10, virtual false, abstract: false, final false
static inline void get_velocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method set_minMoveDistance, addr 0x1822fbb40, size 0x40, virtual false, abstract: false, final false
inline void set_minMoveDistance(float_t  value) ;

/// @brief Method set_minMoveDistance_Injected, addr 0x1822fbb30, size 0x10, virtual false, abstract: false, final false
static inline void set_minMoveDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_skinWidth, addr 0x1822fbb90, size 0x40, virtual false, abstract: false, final false
inline void set_skinWidth(float_t  value) ;

/// @brief Method set_skinWidth_Injected, addr 0x1822fbb80, size 0x10, virtual false, abstract: false, final false
static inline void set_skinWidth_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterController(CharacterController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterController(CharacterController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20185};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::CharacterController) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
