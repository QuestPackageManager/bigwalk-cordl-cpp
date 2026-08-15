#pragma once
// IWYU pragma private; include "UnityEngine/CapsuleCollider2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider2D_def.hpp"
CORDL_MODULE_EXPORT(CapsuleCollider2D)
// Forward declare root types
namespace UnityEngine {
class CapsuleCollider2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::CapsuleCollider2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CapsuleCollider2D*, "UnityEngine", "CapsuleCollider2D");
// Dependencies UnityEngine.Collider2D
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CapsuleCollider2D
class CORDL_TYPE CapsuleCollider2D : public ::UnityEngine::Collider2D {
public:
// Declarations
static inline ::UnityEngine::CapsuleCollider2D* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CapsuleCollider2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CapsuleCollider2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CapsuleCollider2D(CapsuleCollider2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CapsuleCollider2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CapsuleCollider2D(CapsuleCollider2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19798};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::CapsuleCollider2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
