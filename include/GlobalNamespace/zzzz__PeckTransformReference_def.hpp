#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckTransformReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckTransformReference)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckTransformReference_ReferenceType;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckTransformReference_ReferenceType;
}
namespace GlobalNamespace {
struct PeckTransformReference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckTransformReference_ReferenceType);
MARK_VAL_T(::GlobalNamespace::PeckTransformReference);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckTransformReference_ReferenceType, "", "PeckTransformReference/ReferenceType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckTransformReference, "", "PeckTransformReference");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckTransformReference/ReferenceType
struct CORDL_TYPE PeckTransformReference_ReferenceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckTransformReference_ReferenceType_Unwrapped
enum struct __PeckTransformReference_ReferenceType_Unwrapped : int32_t {
__E_Local = static_cast<int32_t>(0x0),
__E_Custom = static_cast<int32_t>(0x1),
__E_ContextProp = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckTransformReference_ReferenceType_Unwrapped () const noexcept {
return static_cast<__PeckTransformReference_ReferenceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckTransformReference_ReferenceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckTransformReference_ReferenceType(int32_t  value__) noexcept;

/// @brief Field ContextProp value: I32(2)
static ::GlobalNamespace::PeckTransformReference_ReferenceType const ContextProp;

/// @brief Field Custom value: I32(1)
static ::GlobalNamespace::PeckTransformReference_ReferenceType const Custom;

/// @brief Field Local value: I32(0)
static ::GlobalNamespace::PeckTransformReference_ReferenceType const Local;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5355};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckTransformReference_ReferenceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckTransformReference_ReferenceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckTransformReference::ReferenceType
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckTransformReference
struct CORDL_TYPE PeckTransformReference {
public:
// Declarations
using ReferenceType = ::GlobalNamespace::PeckTransformReference_ReferenceType;

/// @brief Method GetTransform, addr 0x180454280, size 0x160, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetTransform(::GlobalNamespace::PeckContext  peckContext, ::UnityEngine::Transform*  localTransform) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckTransformReference() ;

// Ctor Parameters [CppParam { name: "referenceType", ty: "::GlobalNamespace::PeckTransformReference_ReferenceType", modifiers: "", def_value: None }, CppParam { name: "customTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }]
constexpr PeckTransformReference(::GlobalNamespace::PeckTransformReference_ReferenceType  referenceType, ::UnityW<::UnityEngine::Transform>  customTransform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5356};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field referenceType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PeckTransformReference_ReferenceType  referenceType;

/// @brief Field customTransform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  customTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckTransformReference, referenceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckTransformReference, customTransform) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckTransformReference) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
