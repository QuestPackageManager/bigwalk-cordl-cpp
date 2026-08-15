#pragma once
// IWYU pragma private; include "GlobalNamespace/NotEditableAltAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(NotEditableAltAttribute)
// Forward declare root types
namespace GlobalNamespace {
class NotEditableAltAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NotEditableAltAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NotEditableAltAttribute*, "", "NotEditableAltAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: NotEditableAltAttribute
class CORDL_TYPE NotEditableAltAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::GlobalNamespace::NotEditableAltAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotEditableAltAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotEditableAltAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotEditableAltAttribute(NotEditableAltAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotEditableAltAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotEditableAltAttribute(NotEditableAltAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17632};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NotEditableAltAttribute) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
