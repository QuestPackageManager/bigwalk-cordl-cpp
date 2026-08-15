#pragma once
// IWYU pragma private; include "Animancer/Examples/Locomotion/ScreenBoundsTeleporter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScreenBoundsTeleporter)
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Animancer::Examples::Locomotion {
class ScreenBoundsTeleporter;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Locomotion::ScreenBoundsTeleporter*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Locomotion::ScreenBoundsTeleporter*, "Animancer.Examples.Locomotion", "ScreenBoundsTeleporter");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Locomotion {
// Is value type: false
// CS Name: Animancer.Examples.Locomotion.ScreenBoundsTeleporter
class CORDL_TYPE ScreenBoundsTeleporter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Collider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Collider, put=__cordl_internal_set__Collider)) ::UnityW<::UnityEngine::BoxCollider>  _Collider;

static inline ::Animancer::Examples::Locomotion::ScreenBoundsTeleporter* New_ctor() ;

/// @brief Method OnTriggerExit, addr 0x180301060, size 0xd0, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  collider) ;

/// @brief Method Update, addr 0x180301130, size 0x150, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get__Collider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get__Collider() ;

constexpr void __cordl_internal_set__Collider(::UnityW<::UnityEngine::BoxCollider>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenBoundsTeleporter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenBoundsTeleporter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenBoundsTeleporter(ScreenBoundsTeleporter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenBoundsTeleporter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenBoundsTeleporter(ScreenBoundsTeleporter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20020};

/// @brief Field _Collider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ____Collider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Locomotion::ScreenBoundsTeleporter, ____Collider) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Locomotion::ScreenBoundsTeleporter) == 0x28, "Size mismatch!");

} // namespace end def Animancer::Examples::Locomotion
