#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineIndexAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SplineIndexAttribute)
// Forward declare root types
namespace UnityEngine::Splines {
class SplineIndexAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineIndexAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineIndexAttribute*, "UnityEngine.Splines", "SplineIndexAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineIndexAttribute
class CORDL_TYPE SplineIndexAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field SplineContainerProperty, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SplineContainerProperty, put=__cordl_internal_set_SplineContainerProperty)) ::StringW  SplineContainerProperty;

static inline ::UnityEngine::Splines::SplineIndexAttribute* New_ctor(::StringW  splineContainerProperty) ;

constexpr ::StringW const& __cordl_internal_get_SplineContainerProperty() const;

constexpr ::StringW& __cordl_internal_get_SplineContainerProperty() ;

constexpr void __cordl_internal_set_SplineContainerProperty(::StringW  value) ;

/// @brief Method .ctor, addr 0x1818382a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  splineContainerProperty) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineIndexAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineIndexAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineIndexAttribute(SplineIndexAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineIndexAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineIndexAttribute(SplineIndexAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18700};

/// @brief Field SplineContainerProperty, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SplineContainerProperty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineIndexAttribute, ___SplineContainerProperty) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineIndexAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Splines
