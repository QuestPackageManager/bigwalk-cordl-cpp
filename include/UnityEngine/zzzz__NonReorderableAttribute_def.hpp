#pragma once
// IWYU pragma private; include "UnityEngine/NonReorderableAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(NonReorderableAttribute)
// Forward declare root types
namespace UnityEngine {
class NonReorderableAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::NonReorderableAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::NonReorderableAttribute*, "UnityEngine", "NonReorderableAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.NonReorderableAttribute
class CORDL_TYPE NonReorderableAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::UnityEngine::NonReorderableAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x18159e620, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NonReorderableAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NonReorderableAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NonReorderableAttribute(NonReorderableAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NonReorderableAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NonReorderableAttribute(NonReorderableAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10645};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::NonReorderableAttribute) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
