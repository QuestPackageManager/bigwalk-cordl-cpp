#pragma once
// IWYU pragma private; include "Animancer/SelfDrawerAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(SelfDrawerAttribute)
// Forward declare root types
namespace Animancer {
class SelfDrawerAttribute;
}
// Write type traits
MARK_REF_T(::Animancer::SelfDrawerAttribute*);
DEFINE_IL2CPP_CLASS(::Animancer::SelfDrawerAttribute*, "Animancer", "SelfDrawerAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Animancer {
// Is value type: false
// CS Name: Animancer.SelfDrawerAttribute
class CORDL_TYPE SelfDrawerAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Animancer::SelfDrawerAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelfDrawerAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelfDrawerAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelfDrawerAttribute(SelfDrawerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelfDrawerAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelfDrawerAttribute(SelfDrawerAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18122};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::SelfDrawerAttribute) == 0x18, "Size mismatch!");

} // namespace end def Animancer
