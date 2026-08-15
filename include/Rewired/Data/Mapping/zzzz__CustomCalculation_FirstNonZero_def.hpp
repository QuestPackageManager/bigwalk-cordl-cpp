#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/CustomCalculation_FirstNonZero.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomCalculation_FirstNonZero)
namespace Rewired::Utils::Classes::Data {
struct TypeWrapper_DataType;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
class CustomCalculation_FirstNonZero;
}
// Write type traits
MARK_REF_T(::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::CustomCalculation_FirstNonZero*, "Rewired.Data.Mapping", "CustomCalculation_FirstNonZero");
// Dependencies Rewired.Data.Mapping.CustomCalculation, Rewired.Utils.Classes.Data.TypeWrapper::DataType
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.CustomCalculation_FirstNonZero
class CORDL_TYPE CustomCalculation_FirstNonZero : public ::Rewired::Data::Mapping::CustomCalculation {
public:
// Declarations
 __declspec(property(get=get_ResultType)) ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  ResultType;

/// @brief Method KIGdNfaYuhVBaHSPevmQCvBJQeeb, addr 0x1818a2b90, size 0xf0, virtual false, abstract: false, final false
inline float_t KIGdNfaYuhVBaHSPevmQCvBJQeeb() ;

static inline ::Rewired::Data::Mapping::CustomCalculation_FirstNonZero* New_ctor() ;

/// @brief Method .ctor, addr 0x180445be0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ResultType, addr 0x180908a80, size 0x70, virtual true, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::TypeWrapper_DataType get_ResultType() ;

/// @brief Method lNfYfSatehiNHlLXdExWeyBcUaDtA, addr 0x1818a2c80, size 0x130, virtual true, abstract: false, final false
inline bool lNfYfSatehiNHlLXdExWeyBcUaDtA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomCalculation_FirstNonZero() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomCalculation_FirstNonZero", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomCalculation_FirstNonZero(CustomCalculation_FirstNonZero && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomCalculation_FirstNonZero", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomCalculation_FirstNonZero(CustomCalculation_FirstNonZero const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2439};

/// @brief Field resultType value: I32(10)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const resultType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Data::Mapping::CustomCalculation_FirstNonZero) == 0x50, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
