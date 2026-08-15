#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/CustomCalculation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/Classes/zzzz__SerializedMethod_def.hpp"
CORDL_MODULE_EXPORT(CustomCalculation)
// Forward declare root types
namespace Rewired::Data::Mapping {
class CustomCalculation;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::CustomCalculation*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::CustomCalculation*, "Rewired.Data.Mapping", "CustomCalculation");
// Dependencies Rewired.Utils.Classes.SerializedMethod
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.CustomCalculation
class CORDL_TYPE CustomCalculation : public ::Rewired::Utils::Classes::SerializedMethod {
public:
// Declarations
static inline ::Rewired::Data::Mapping::CustomCalculation* New_ctor() ;

/// @brief Method .ctor, addr 0x180445be0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomCalculation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomCalculation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomCalculation(CustomCalculation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomCalculation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomCalculation(CustomCalculation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2432};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Data::Mapping::CustomCalculation) == 0x50, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
