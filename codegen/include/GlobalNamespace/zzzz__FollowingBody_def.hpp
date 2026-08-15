#pragma once
// IWYU pragma private; include "GlobalNamespace/FollowingBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FollowingBody)
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FollowingBody;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FollowingBody*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FollowingBody*, "", "FollowingBody");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FollowingBody
class CORDL_TYPE FollowingBody : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field rb, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Method FixedUpdate, addr 0x1803fdcc0, size 0xd0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::FollowingBody* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FollowingBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FollowingBody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FollowingBody(FollowingBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FollowingBody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FollowingBody(FollowingBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5055};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field rb, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FollowingBody, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FollowingBody, ___rb) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FollowingBody) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
