#pragma once
// IWYU pragma private; include "Animancer/DefaultFadeValueAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__DefaultValueAttribute_def.hpp"
CORDL_MODULE_EXPORT(DefaultFadeValueAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer {
class DefaultFadeValueAttribute;
}
// Write type traits
MARK_REF_T(::Animancer::DefaultFadeValueAttribute*);
DEFINE_IL2CPP_CLASS(::Animancer::DefaultFadeValueAttribute*, "Animancer", "DefaultFadeValueAttribute");
// Dependencies Animancer.DefaultValueAttribute
namespace Animancer {
// Is value type: false
// CS Name: Animancer.DefaultFadeValueAttribute
class CORDL_TYPE DefaultFadeValueAttribute : public ::Animancer::DefaultValueAttribute {
public:
// Declarations
 __declspec(property(get=get_Primary)) ::System::Object*  Primary;

static inline ::Animancer::DefaultFadeValueAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x180308410, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Primary, addr 0x180308460, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* get_Primary() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultFadeValueAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultFadeValueAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultFadeValueAttribute(DefaultFadeValueAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultFadeValueAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultFadeValueAttribute(DefaultFadeValueAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18118};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::DefaultFadeValueAttribute) == 0x20, "Size mismatch!");

} // namespace end def Animancer
