#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/CustomCalculation_CompareElementValues.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomCalculation_CompareElementValues)
namespace Rewired::Data::Mapping {
struct CustomCalculation_CompareElementValues_ComparisonType;
}
namespace Rewired::Utils::Classes::Data {
struct TypeWrapper_DataType;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
struct CustomCalculation_CompareElementValues_ComparisonType;
}
namespace Rewired::Data::Mapping {
class CustomCalculation_CompareElementValues;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType);
MARK_REF_T(::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType, "Rewired.Data.Mapping", "CustomCalculation_CompareElementValues/ComparisonType");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::CustomCalculation_CompareElementValues*, "Rewired.Data.Mapping", "CustomCalculation_CompareElementValues");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.CustomCalculation_CompareElementValues/ComparisonType
struct CORDL_TYPE CustomCalculation_CompareElementValues_ComparisonType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomCalculation_CompareElementValues_ComparisonType_Unwrapped
enum struct __CustomCalculation_CompareElementValues_ComparisonType_Unwrapped : int32_t {
__E_Min = static_cast<int32_t>(0x0),
__E_Max = static_cast<int32_t>(0x1),
__E_MinAbs = static_cast<int32_t>(0x2),
__E_MaxAbs = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomCalculation_CompareElementValues_ComparisonType_Unwrapped () const noexcept {
return static_cast<__CustomCalculation_CompareElementValues_ComparisonType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomCalculation_CompareElementValues_ComparisonType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomCalculation_CompareElementValues_ComparisonType(int32_t  value__) noexcept;

/// @brief Field Max value: I32(1)
static ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType const Max;

/// @brief Field MaxAbs value: I32(3)
static ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType const MaxAbs;

/// @brief Field Min value: I32(0)
static ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType const Min;

/// @brief Field MinAbs value: I32(2)
static ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType const MinAbs;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2437};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
// Dependencies Rewired.Data.Mapping.CustomCalculation, Rewired.Data.Mapping.CustomCalculation_CompareElementValues::ComparisonType, Rewired.Utils.Classes.Data.TypeWrapper::DataType
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.CustomCalculation_CompareElementValues
class CORDL_TYPE CustomCalculation_CompareElementValues : public ::Rewired::Data::Mapping::CustomCalculation {
public:
// Declarations
using ComparisonType = ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType;

 __declspec(property(get=get_ResultType)) ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  ResultType;

/// @brief Field _comparisonType, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__comparisonType, put=__cordl_internal_set__comparisonType)) ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType  _comparisonType;

static inline ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues* New_ctor() ;

/// @brief Method OoCDbYOSuMFeCJEGYrLzEfNPOdCB, addr 0x1818a2850, size 0x1d0, virtual true, abstract: false, final false
inline bool OoCDbYOSuMFeCJEGYrLzEfNPOdCB() ;

constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType const& __cordl_internal_get__comparisonType() const;

constexpr ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType& __cordl_internal_get__comparisonType() ;

constexpr void __cordl_internal_set__comparisonType(::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType  value) ;

/// @brief Method .ctor, addr 0x180445be0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ResultType, addr 0x180908a80, size 0x70, virtual true, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::TypeWrapper_DataType get_ResultType() ;

/// @brief Method sAuCfwnpEzbTvpMSzaYTPRMaFpAA, addr 0x1818a2a20, size 0x170, virtual false, abstract: false, final false
inline float_t sAuCfwnpEzbTvpMSzaYTPRMaFpAA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomCalculation_CompareElementValues() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomCalculation_CompareElementValues", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomCalculation_CompareElementValues(CustomCalculation_CompareElementValues && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomCalculation_CompareElementValues", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomCalculation_CompareElementValues(CustomCalculation_CompareElementValues const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2438};

/// @brief Field resultType value: I32(10)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const resultType;

/// @brief Field _comparisonType, offset: 0x4c, size: 0x4, def value: None
 ::Rewired::Data::Mapping::CustomCalculation_CompareElementValues_ComparisonType  ____comparisonType;

/// @brief Size padding 0x58 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::CustomCalculation_CompareElementValues, ____comparisonType) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::CustomCalculation_CompareElementValues) == 0x58, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
