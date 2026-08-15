#pragma once
// IWYU pragma private; include "Animancer/PolymorphicAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(PolymorphicAttribute)
// Forward declare root types
namespace Animancer {
class PolymorphicAttribute;
}
// Write type traits
MARK_REF_T(::Animancer::PolymorphicAttribute*);
DEFINE_IL2CPP_CLASS(::Animancer::PolymorphicAttribute*, "Animancer", "PolymorphicAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Animancer {
// Is value type: false
// CS Name: Animancer.PolymorphicAttribute
class CORDL_TYPE PolymorphicAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Animancer::PolymorphicAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolymorphicAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolymorphicAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PolymorphicAttribute(PolymorphicAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolymorphicAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolymorphicAttribute(PolymorphicAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18129};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::PolymorphicAttribute) == 0x18, "Size mismatch!");

} // namespace end def Animancer
