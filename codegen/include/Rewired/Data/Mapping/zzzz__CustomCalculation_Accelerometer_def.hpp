#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/CustomCalculation_Accelerometer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomCalculation_Accelerometer)
namespace Rewired::Data::Mapping {
struct CustomCalculation_Accelerometer_CalculationType;
}
namespace Rewired::Data::Mapping {
struct CustomCalculation_Accelerometer_InputType;
}
namespace Rewired::Data::Mapping {
struct CustomCalculation_Accelerometer_OutputType;
}
namespace Rewired::Utils::Classes::Data {
struct TypeWrapper_DataType;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
struct CustomCalculation_Accelerometer_CalculationType;
}
namespace Rewired::Data::Mapping {
struct CustomCalculation_Accelerometer_InputType;
}
namespace Rewired::Data::Mapping {
struct CustomCalculation_Accelerometer_OutputType;
}
namespace Rewired::Data::Mapping {
class CustomCalculation_Accelerometer;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType);
MARK_VAL_T(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType);
MARK_VAL_T(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType);
MARK_REF_T(::Rewired::Data::Mapping::CustomCalculation_Accelerometer*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType, "Rewired.Data.Mapping", "CustomCalculation_Accelerometer/CalculationType");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType, "Rewired.Data.Mapping", "CustomCalculation_Accelerometer/InputType");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType, "Rewired.Data.Mapping", "CustomCalculation_Accelerometer/OutputType");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::CustomCalculation_Accelerometer*, "Rewired.Data.Mapping", "CustomCalculation_Accelerometer");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.CustomCalculation_Accelerometer/CalculationType
struct CORDL_TYPE CustomCalculation_Accelerometer_CalculationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomCalculation_Accelerometer_CalculationType_Unwrapped
enum struct __CustomCalculation_Accelerometer_CalculationType_Unwrapped : int32_t {
__E_Pitch = static_cast<int32_t>(0x0),
__E_Roll = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomCalculation_Accelerometer_CalculationType_Unwrapped () const noexcept {
return static_cast<__CustomCalculation_Accelerometer_CalculationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomCalculation_Accelerometer_CalculationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomCalculation_Accelerometer_CalculationType(int32_t  value__) noexcept;

/// @brief Field Pitch value: I32(0)
static ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType const Pitch;

/// @brief Field Roll value: I32(1)
static ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType const Roll;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2433};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.CustomCalculation_Accelerometer/OutputType
struct CORDL_TYPE CustomCalculation_Accelerometer_OutputType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomCalculation_Accelerometer_OutputType_Unwrapped
enum struct __CustomCalculation_Accelerometer_OutputType_Unwrapped : int32_t {
__E_Axis = static_cast<int32_t>(0x0),
__E_Angle = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomCalculation_Accelerometer_OutputType_Unwrapped () const noexcept {
return static_cast<__CustomCalculation_Accelerometer_OutputType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomCalculation_Accelerometer_OutputType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomCalculation_Accelerometer_OutputType(int32_t  value__) noexcept;

/// @brief Field Angle value: I32(1)
static ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType const Angle;

/// @brief Field Axis value: I32(0)
static ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType const Axis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.CustomCalculation_Accelerometer/InputType
struct CORDL_TYPE CustomCalculation_Accelerometer_InputType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomCalculation_Accelerometer_InputType_Unwrapped
enum struct __CustomCalculation_Accelerometer_InputType_Unwrapped : int32_t {
__E_Acceleration = static_cast<int32_t>(0x0),
__E_UserAcceleration = static_cast<int32_t>(0x1),
__E_Gravity = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomCalculation_Accelerometer_InputType_Unwrapped () const noexcept {
return static_cast<__CustomCalculation_Accelerometer_InputType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomCalculation_Accelerometer_InputType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomCalculation_Accelerometer_InputType(int32_t  value__) noexcept;

/// @brief Field Acceleration value: I32(0)
static ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType const Acceleration;

/// @brief Field Gravity value: I32(2)
static ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType const Gravity;

/// @brief Field UserAcceleration value: I32(1)
static ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType const UserAcceleration;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
// Dependencies Rewired.Data.Mapping.CustomCalculation, Rewired.Data.Mapping.CustomCalculation_Accelerometer::CalculationType, Rewired.Data.Mapping.CustomCalculation_Accelerometer::InputType, Rewired.Data.Mapping.CustomCalculation_Accelerometer::OutputType
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.CustomCalculation_Accelerometer
class CORDL_TYPE CustomCalculation_Accelerometer : public ::Rewired::Data::Mapping::CustomCalculation {
public:
// Declarations
using CalculationType = ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType;

using InputType = ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType;

using OutputType = ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType;

 __declspec(property(get=get_ResultType)) ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  ResultType;

/// @brief Field _calculationType, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__calculationType, put=__cordl_internal_set__calculationType)) ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType  _calculationType;

/// @brief Field _inputType, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__inputType, put=__cordl_internal_set__inputType)) ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType  _inputType;

/// @brief Field _outputType, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__outputType, put=__cordl_internal_set__outputType)) ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType  _outputType;

static inline ::Rewired::Data::Mapping::CustomCalculation_Accelerometer* New_ctor() ;

/// @brief Method OLgitSwKqElsCyiWrtkWpdBDELieA, addr 0x1818a2240, size 0x1e0, virtual false, abstract: false, final false
inline float_t OLgitSwKqElsCyiWrtkWpdBDELieA() ;

/// @brief Method TaGjAgLpPVdpgtDtSGgCBaPwYOxu, addr 0x1818a2420, size 0x50, virtual false, abstract: false, final false
inline float_t TaGjAgLpPVdpgtDtSGgCBaPwYOxu(float_t  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType const& __cordl_internal_get__calculationType() const;

constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType& __cordl_internal_get__calculationType() ;

constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType const& __cordl_internal_get__inputType() const;

constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType& __cordl_internal_get__inputType() ;

constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType const& __cordl_internal_get__outputType() const;

constexpr ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType& __cordl_internal_get__outputType() ;

constexpr void __cordl_internal_set__calculationType(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType  value) ;

constexpr void __cordl_internal_set__inputType(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType  value) ;

constexpr void __cordl_internal_set__outputType(::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType  value) ;

/// @brief Method .ctor, addr 0x180445be0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ResultType, addr 0x180908a80, size 0x70, virtual true, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::TypeWrapper_DataType get_ResultType() ;

/// @brief Method kClVjCXqShcNihdeKQfxTAFiEauO, addr 0x1818a2470, size 0x1b0, virtual false, abstract: false, final false
inline float_t kClVjCXqShcNihdeKQfxTAFiEauO() ;

/// @brief Method vBbbehJMcrjNEfmjWFrvcPdfUuTvB, addr 0x1818a2620, size 0x230, virtual true, abstract: false, final false
inline bool vBbbehJMcrjNEfmjWFrvcPdfUuTvB() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomCalculation_Accelerometer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomCalculation_Accelerometer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomCalculation_Accelerometer(CustomCalculation_Accelerometer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomCalculation_Accelerometer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomCalculation_Accelerometer(CustomCalculation_Accelerometer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2436};

/// @brief Field _calculationType, offset: 0x4c, size: 0x4, def value: None
 ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType  ____calculationType;

/// @brief Field _inputType, offset: 0x50, size: 0x4, def value: None
 ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType  ____inputType;

/// @brief Field _outputType, offset: 0x54, size: 0x4, def value: None
 ::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType  ____outputType;

/// @brief Size padding 0x60 - 0x58 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::CustomCalculation_Accelerometer, ____calculationType) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::CustomCalculation_Accelerometer, ____inputType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::Mapping::CustomCalculation_Accelerometer, ____outputType) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::CustomCalculation_Accelerometer) == 0x60, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
