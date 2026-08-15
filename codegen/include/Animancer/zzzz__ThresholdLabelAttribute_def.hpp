#pragma once
// IWYU pragma private; include "Animancer/ThresholdLabelAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ThresholdLabelAttribute)
// Forward declare root types
namespace Animancer {
class ThresholdLabelAttribute;
}
// Write type traits
MARK_REF_T(::Animancer::ThresholdLabelAttribute*);
DEFINE_IL2CPP_CLASS(::Animancer::ThresholdLabelAttribute*, "Animancer", "ThresholdLabelAttribute");
// Dependencies System.Attribute
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ThresholdLabelAttribute
class CORDL_TYPE ThresholdLabelAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Animancer::ThresholdLabelAttribute* New_ctor(::StringW  label) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  label) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThresholdLabelAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThresholdLabelAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThresholdLabelAttribute(ThresholdLabelAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThresholdLabelAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThresholdLabelAttribute(ThresholdLabelAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ThresholdLabelAttribute) == 0x10, "Size mismatch!");

} // namespace end def Animancer
