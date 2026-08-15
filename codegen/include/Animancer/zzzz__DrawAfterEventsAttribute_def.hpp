#pragma once
// IWYU pragma private; include "Animancer/DrawAfterEventsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DrawAfterEventsAttribute)
// Forward declare root types
namespace Animancer {
class DrawAfterEventsAttribute;
}
// Write type traits
MARK_REF_T(::Animancer::DrawAfterEventsAttribute*);
DEFINE_IL2CPP_CLASS(::Animancer::DrawAfterEventsAttribute*, "Animancer", "DrawAfterEventsAttribute");
// Dependencies System.Attribute
namespace Animancer {
// Is value type: false
// CS Name: Animancer.DrawAfterEventsAttribute
class CORDL_TYPE DrawAfterEventsAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Animancer::DrawAfterEventsAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawAfterEventsAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawAfterEventsAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawAfterEventsAttribute(DrawAfterEventsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawAfterEventsAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawAfterEventsAttribute(DrawAfterEventsAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18120};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::DrawAfterEventsAttribute) == 0x10, "Size mismatch!");

} // namespace end def Animancer
