#pragma once
// IWYU pragma private; include "GlobalNamespace/NotEditableAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(NotEditableAttribute)
// Forward declare root types
namespace GlobalNamespace {
class NotEditableAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NotEditableAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NotEditableAttribute*, "", "NotEditableAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: NotEditableAttribute
class CORDL_TYPE NotEditableAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::GlobalNamespace::NotEditableAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotEditableAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotEditableAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotEditableAttribute(NotEditableAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotEditableAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotEditableAttribute(NotEditableAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17631};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NotEditableAttribute) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
