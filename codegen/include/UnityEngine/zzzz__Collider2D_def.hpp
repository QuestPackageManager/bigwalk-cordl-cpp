#pragma once
// IWYU pragma private; include "UnityEngine/Collider2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Collider2D)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct ContactPoint2D;
}
// Forward declare root types
namespace UnityEngine {
class Collider2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Collider2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Collider2D*, "UnityEngine", "Collider2D");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Collider2D
class CORDL_TYPE Collider2D : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Method GetContacts, addr 0x1822f09e0, size 0x120, virtual false, abstract: false, final false
inline int32_t GetContacts(::ArrayW<::UnityEngine::ContactPoint2D>  contacts) ;

static inline ::UnityEngine::Collider2D* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bounds, addr 0x1822f0b10, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0x1822f0b00, size 0x10, virtual false, abstract: false, final false
static inline void get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Collider2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Collider2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Collider2D(Collider2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collider2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collider2D(Collider2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19797};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Collider2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
