#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/PreserveAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreserveAttribute)
// Forward declare root types
namespace Rewired::Utils::Attributes {
class PreserveAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Attributes::PreserveAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Attributes::PreserveAttribute*, "Rewired.Utils.Attributes", "PreserveAttribute");
// Dependencies System.Attribute
namespace Rewired::Utils::Attributes {
// Is value type: false
// CS Name: Rewired.Utils.Attributes.PreserveAttribute
class CORDL_TYPE PreserveAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Rewired::Utils::Attributes::PreserveAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreserveAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PreserveAttribute(PreserveAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreserveAttribute(PreserveAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3087};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Attributes::PreserveAttribute) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Attributes
