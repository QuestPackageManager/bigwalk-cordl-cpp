#pragma once
// IWYU pragma private; include "UnityEngine/Collider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(Collider)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Collider;
}
// Write type traits
MARK_REF_T(::UnityEngine::Collider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Collider*, "UnityEngine", "Collider");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Collider
class CORDL_TYPE Collider : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_attachedRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  attachedRigidbody;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(put=set_hasModifiableContacts)) bool  hasModifiableContacts;

 __declspec(property(get=get_isTrigger, put=set_isTrigger)) bool  isTrigger;

 __declspec(property(get=get_sharedMaterial, put=set_sharedMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  sharedMaterial;

/// @brief Method ClosestPoint, addr 0x1822fbbe0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ClosestPoint_Injected, addr 0x1822fbbd0, size 0x10, virtual false, abstract: false, final false
static inline void ClosestPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  ret) ;

static inline ::UnityEngine::Collider* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_attachedRigidbody, addr 0x1822fbc40, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_attachedRigidbody() ;

/// @brief Method get_attachedRigidbody_Injected, addr 0x1822fbc30, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_attachedRigidbody_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enabled, addr 0x1822fbc90, size 0x30, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_enabled_Injected, addr 0x1822fbc80, size 0x10, virtual false, abstract: false, final false
static inline bool get_enabled_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isTrigger, addr 0x1822fbcd0, size 0x30, virtual false, abstract: false, final false
inline bool get_isTrigger() ;

/// @brief Method get_isTrigger_Injected, addr 0x1822fbcc0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isTrigger_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sharedMaterial, addr 0x1822fbd10, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::PhysicsMaterial> get_sharedMaterial() ;

/// @brief Method get_sharedMaterial_Injected, addr 0x1822fbd00, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_sharedMaterial_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_enabled, addr 0x1822fbd60, size 0x30, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_enabled_Injected, addr 0x1822fbd50, size 0x10, virtual false, abstract: false, final false
static inline void set_enabled_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_hasModifiableContacts, addr 0x1822fbda0, size 0x30, virtual false, abstract: false, final false
inline void set_hasModifiableContacts(bool  value) ;

/// @brief Method set_hasModifiableContacts_Injected, addr 0x1822fbd90, size 0x10, virtual false, abstract: false, final false
static inline void set_hasModifiableContacts_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_isTrigger, addr 0x1822fbde0, size 0x30, virtual false, abstract: false, final false
inline void set_isTrigger(bool  value) ;

/// @brief Method set_isTrigger_Injected, addr 0x1822fbdd0, size 0x10, virtual false, abstract: false, final false
static inline void set_isTrigger_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_sharedMaterial, addr 0x1822fbe20, size 0x50, virtual false, abstract: false, final false
inline void set_sharedMaterial(::UnityEngine::PhysicsMaterial*  value) ;

/// @brief Method set_sharedMaterial_Injected, addr 0x1822fbe10, size 0x10, virtual false, abstract: false, final false
static inline void set_sharedMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Collider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Collider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Collider(Collider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collider(Collider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20186};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Collider) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
