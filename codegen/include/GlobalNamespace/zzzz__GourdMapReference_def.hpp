#pragma once
// IWYU pragma private; include "GlobalNamespace/GourdMapReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaveablePropName_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GourdMapReference)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GourdMapReference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GourdMapReference);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GourdMapReference, "", "GourdMapReference");
// Dependencies SaveablePropName
namespace GlobalNamespace {
// Is value type: true
// CS Name: GourdMapReference
struct CORDL_TYPE GourdMapReference {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GourdMapReference() ;

// Ctor Parameters [CppParam { name: "saveablePropName", ty: "::GlobalNamespace::SaveablePropName", modifiers: "", def_value: None }, CppParam { name: "landmark", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "flagAnchor", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }]
constexpr GourdMapReference(::GlobalNamespace::SaveablePropName  saveablePropName, ::UnityW<::UnityEngine::Transform>  landmark, ::UnityW<::UnityEngine::Transform>  flagAnchor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5064};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field saveablePropName, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::SaveablePropName  saveablePropName;

/// @brief Field landmark, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  landmark;

/// @brief Field flagAnchor, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  flagAnchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GourdMapReference, saveablePropName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMapReference, landmark) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GourdMapReference, flagAnchor) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GourdMapReference) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
