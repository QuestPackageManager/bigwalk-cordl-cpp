#pragma once
// IWYU pragma private; include "UnityEngine/Splines/EmbeddedSplineDataFieldsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__EmbeddedSplineDataField_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(EmbeddedSplineDataFieldsAttribute)
namespace UnityEngine::Splines {
struct EmbeddedSplineDataField;
}
// Forward declare root types
namespace UnityEngine::Splines {
class EmbeddedSplineDataFieldsAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute*, "UnityEngine.Splines", "EmbeddedSplineDataFieldsAttribute");
// Dependencies UnityEngine.PropertyAttribute, UnityEngine.Splines.EmbeddedSplineDataField
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.EmbeddedSplineDataFieldsAttribute
class CORDL_TYPE EmbeddedSplineDataFieldsAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field Fields, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Fields, put=__cordl_internal_set_Fields)) ::UnityEngine::Splines::EmbeddedSplineDataField  Fields;

static inline ::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute* New_ctor(::UnityEngine::Splines::EmbeddedSplineDataField  fields) ;

constexpr ::UnityEngine::Splines::EmbeddedSplineDataField const& __cordl_internal_get_Fields() const;

constexpr ::UnityEngine::Splines::EmbeddedSplineDataField& __cordl_internal_get_Fields() ;

constexpr void __cordl_internal_set_Fields(::UnityEngine::Splines::EmbeddedSplineDataField  value) ;

/// @brief Method .ctor, addr 0x1804bd4f0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::EmbeddedSplineDataField  fields) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmbeddedSplineDataFieldsAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmbeddedSplineDataFieldsAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmbeddedSplineDataFieldsAttribute(EmbeddedSplineDataFieldsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmbeddedSplineDataFieldsAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmbeddedSplineDataFieldsAttribute(EmbeddedSplineDataFieldsAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18702};

/// @brief Field Fields, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::Splines::EmbeddedSplineDataField  ___Fields;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute, ___Fields) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Splines
