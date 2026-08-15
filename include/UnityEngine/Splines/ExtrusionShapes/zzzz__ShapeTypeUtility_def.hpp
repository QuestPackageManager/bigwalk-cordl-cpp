#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/ShapeTypeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShapeTypeUtility)
namespace System {
class Object;
}
namespace UnityEngine::Splines::ExtrusionShapes {
struct ShapeType;
}
namespace UnityEngine::Splines {
class IExtrudeShape;
}
// Forward declare root types
namespace UnityEngine::Splines::ExtrusionShapes {
class ShapeTypeUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility*, "UnityEngine.Splines.ExtrusionShapes", "ShapeTypeUtility");
// Dependencies System.Object
namespace UnityEngine::Splines::ExtrusionShapes {
// Is value type: false
// CS Name: UnityEngine.Splines.ExtrusionShapes.ShapeTypeUtility
class CORDL_TYPE ShapeTypeUtility : public ::System::Object {
public:
// Declarations
/// @brief Method CreateShape, addr 0x18217b340, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::IExtrudeShape* CreateShape(::UnityEngine::Splines::ExtrusionShapes::ShapeType  type) ;

/// @brief Method GetShapeType, addr 0x18217b3c0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::ExtrusionShapes::ShapeType GetShapeType(::System::Object*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeTypeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeTypeUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeTypeUtility(ShapeTypeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeTypeUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeTypeUtility(ShapeTypeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18781};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines::ExtrusionShapes
