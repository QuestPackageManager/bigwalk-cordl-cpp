#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rigidbody2D)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct RigidbodyType2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Rigidbody2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rigidbody2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rigidbody2D*, "UnityEngine", "Rigidbody2D");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Rigidbody2D
class CORDL_TYPE Rigidbody2D : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_angularDamping, put=set_angularDamping)) float_t  angularDamping;

 __declspec(property(get=get_angularVelocity, put=set_angularVelocity)) float_t  angularVelocity;

 __declspec(property(get=get_bodyType, put=set_bodyType)) ::UnityEngine::RigidbodyType2D  bodyType;

 __declspec(property(get=get_gravityScale, put=set_gravityScale)) float_t  gravityScale;

 __declspec(property(get=get_isKinematic, put=set_isKinematic)) bool  isKinematic;

 __declspec(property(get=get_linearDamping, put=set_linearDamping)) float_t  linearDamping;

 __declspec(property(get=get_linearVelocity, put=set_linearVelocity)) ::UnityEngine::Vector2  linearVelocity;

 __declspec(property(put=set_simulated)) bool  simulated;

static inline ::UnityEngine::Rigidbody2D* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_angularDamping, addr 0x1822fa6f0, size 0x30, virtual false, abstract: false, final false
inline float_t get_angularDamping() ;

/// @brief Method get_angularDamping_Injected, addr 0x1822fa6e0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_angularDamping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_angularVelocity, addr 0x1822fa730, size 0x30, virtual false, abstract: false, final false
inline float_t get_angularVelocity() ;

/// @brief Method get_angularVelocity_Injected, addr 0x1822fa720, size 0x10, virtual false, abstract: false, final false
static inline float_t get_angularVelocity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bodyType, addr 0x1822fa770, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RigidbodyType2D get_bodyType() ;

/// @brief Method get_bodyType_Injected, addr 0x1822fa760, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::RigidbodyType2D get_bodyType_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_gravityScale, addr 0x1822fa7b0, size 0x30, virtual false, abstract: false, final false
inline float_t get_gravityScale() ;

/// @brief Method get_gravityScale_Injected, addr 0x1822fa7a0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_gravityScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isKinematic, addr 0x1822fa7e0, size 0x30, virtual false, abstract: false, final false
inline bool get_isKinematic() ;

/// @brief Method get_linearDamping, addr 0x1822fa820, size 0x30, virtual false, abstract: false, final false
inline float_t get_linearDamping() ;

/// @brief Method get_linearDamping_Injected, addr 0x1822fa810, size 0x10, virtual false, abstract: false, final false
static inline float_t get_linearDamping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_linearVelocity, addr 0x1822fa860, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_linearVelocity() ;

/// @brief Method get_linearVelocity_Injected, addr 0x1822fa850, size 0x10, virtual false, abstract: false, final false
static inline void get_linearVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method set_angularDamping, addr 0x1822fa8b0, size 0x40, virtual false, abstract: false, final false
inline void set_angularDamping(float_t  value) ;

/// @brief Method set_angularDamping_Injected, addr 0x1822fa8a0, size 0x10, virtual false, abstract: false, final false
static inline void set_angularDamping_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_angularVelocity, addr 0x1822fa900, size 0x40, virtual false, abstract: false, final false
inline void set_angularVelocity(float_t  value) ;

/// @brief Method set_angularVelocity_Injected, addr 0x1822fa8f0, size 0x10, virtual false, abstract: false, final false
static inline void set_angularVelocity_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_bodyType, addr 0x1822fa950, size 0x30, virtual false, abstract: false, final false
inline void set_bodyType(::UnityEngine::RigidbodyType2D  value) ;

/// @brief Method set_bodyType_Injected, addr 0x1822fa940, size 0x10, virtual false, abstract: false, final false
static inline void set_bodyType_Injected(::System::IntPtr  _unity_self, ::UnityEngine::RigidbodyType2D  value) ;

/// @brief Method set_gravityScale, addr 0x1822fa990, size 0x40, virtual false, abstract: false, final false
inline void set_gravityScale(float_t  value) ;

/// @brief Method set_gravityScale_Injected, addr 0x1822fa980, size 0x10, virtual false, abstract: false, final false
static inline void set_gravityScale_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_isKinematic, addr 0x1822fa9d0, size 0x30, virtual false, abstract: false, final false
inline void set_isKinematic(bool  value) ;

/// @brief Method set_linearDamping, addr 0x1822faa10, size 0x40, virtual false, abstract: false, final false
inline void set_linearDamping(float_t  value) ;

/// @brief Method set_linearDamping_Injected, addr 0x1822faa00, size 0x10, virtual false, abstract: false, final false
static inline void set_linearDamping_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_linearVelocity, addr 0x1822faa60, size 0x40, virtual false, abstract: false, final false
inline void set_linearVelocity(::UnityEngine::Vector2  value) ;

/// @brief Method set_linearVelocity_Injected, addr 0x1822faa50, size 0x10, virtual false, abstract: false, final false
static inline void set_linearVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_simulated, addr 0x1822faab0, size 0x30, virtual false, abstract: false, final false
inline void set_simulated(bool  value) ;

/// @brief Method set_simulated_Injected, addr 0x1822faaa0, size 0x10, virtual false, abstract: false, final false
static inline void set_simulated_Injected(::System::IntPtr  _unity_self, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Rigidbody2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rigidbody2D(Rigidbody2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rigidbody2D(Rigidbody2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19796};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rigidbody2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
