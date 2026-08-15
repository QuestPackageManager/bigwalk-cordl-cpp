#pragma once
// IWYU pragma private; include "Mirror/SceneAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(SceneAttribute)
// Forward declare root types
namespace Mirror {
class SceneAttribute;
}
// Write type traits
MARK_REF_T(::Mirror::SceneAttribute*);
DEFINE_IL2CPP_CLASS(::Mirror::SceneAttribute*, "Mirror", "SceneAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SceneAttribute
class CORDL_TYPE SceneAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Mirror::SceneAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneAttribute(SceneAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneAttribute(SceneAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SceneAttribute) == 0x18, "Size mismatch!");

} // namespace end def Mirror
