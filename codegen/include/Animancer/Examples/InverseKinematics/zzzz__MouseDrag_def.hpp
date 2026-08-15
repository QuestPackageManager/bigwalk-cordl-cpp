#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/MouseDrag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MouseDrag)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer::Examples::InverseKinematics {
class MouseDrag;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::InverseKinematics::MouseDrag*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::InverseKinematics::MouseDrag*, "Animancer.Examples.InverseKinematics", "MouseDrag");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::InverseKinematics {
// Is value type: false
// CS Name: Animancer.Examples.InverseKinematics.MouseDrag
class CORDL_TYPE MouseDrag : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Distance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Distance, put=__cordl_internal_set__Distance)) float_t  _Distance;

/// @brief Field _Dragging, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Dragging, put=__cordl_internal_set__Dragging)) ::UnityW<::UnityEngine::Transform>  _Dragging;

static inline ::Animancer::Examples::InverseKinematics::MouseDrag* New_ctor() ;

/// @brief Method Update, addr 0x1802fea90, size 0x440, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__Distance() const;

constexpr float_t& __cordl_internal_get__Distance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Dragging() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Dragging() ;

constexpr void __cordl_internal_set__Distance(float_t  value) ;

constexpr void __cordl_internal_set__Dragging(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseDrag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseDrag", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseDrag(MouseDrag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseDrag", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseDrag(MouseDrag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19984};

/// @brief Field _Dragging, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Dragging;

/// @brief Field _Distance, offset: 0x28, size: 0x4, def value: None
 float_t  ____Distance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::InverseKinematics::MouseDrag, ____Dragging) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::MouseDrag, ____Distance) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::InverseKinematics::MouseDrag) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::InverseKinematics
