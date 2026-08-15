#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/CustomCalculation_LogitechGRacingWheelPedals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__CustomCalculation_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomCalculation_LogitechGRacingWheelPedals)
namespace Rewired::Data::Mapping {
struct CustomCalculation_LogitechGRacingWheelPedals_Mode;
}
namespace Rewired::Utils::Classes::Data {
struct TypeWrapper_DataType;
}
// Forward declare root types
namespace Rewired::Data::Mapping {
struct CustomCalculation_LogitechGRacingWheelPedals_Mode;
}
namespace Rewired::Data::Mapping {
class CustomCalculation_LogitechGRacingWheelPedals;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode);
MARK_REF_T(::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode, "Rewired.Data.Mapping", "CustomCalculation_LogitechGRacingWheelPedals/Mode");
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals*, "Rewired.Data.Mapping", "CustomCalculation_LogitechGRacingWheelPedals");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.CustomCalculation_LogitechGRacingWheelPedals/Mode
struct CORDL_TYPE CustomCalculation_LogitechGRacingWheelPedals_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomCalculation_LogitechGRacingWheelPedals_Mode_Unwrapped
enum struct __CustomCalculation_LogitechGRacingWheelPedals_Mode_Unwrapped : int32_t {
__E_SharedAxis = static_cast<int32_t>(0x0),
__E_SeparateAxes = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomCalculation_LogitechGRacingWheelPedals_Mode_Unwrapped () const noexcept {
return static_cast<__CustomCalculation_LogitechGRacingWheelPedals_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomCalculation_LogitechGRacingWheelPedals_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomCalculation_LogitechGRacingWheelPedals_Mode(int32_t  value__) noexcept;

/// @brief Field SeparateAxes value: I32(1)
static ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode const SeparateAxes;

/// @brief Field SharedAxis value: I32(0)
static ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode const SharedAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
// Dependencies Rewired.Data.Mapping.CustomCalculation, Rewired.Data.Mapping.CustomCalculation_LogitechGRacingWheelPedals::Mode, Rewired.Utils.Classes.Data.TypeWrapper::DataType
namespace Rewired::Data::Mapping {
// Is value type: false
// CS Name: Rewired.Data.Mapping.CustomCalculation_LogitechGRacingWheelPedals
class CORDL_TYPE CustomCalculation_LogitechGRacingWheelPedals : public ::Rewired::Data::Mapping::CustomCalculation {
public:
// Declarations
using Mode = ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode;

/// @brief Field PoWfeIjJhHwMZlYneTgaLxIlskyDA, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PoWfeIjJhHwMZlYneTgaLxIlskyDA, put=__cordl_internal_set_PoWfeIjJhHwMZlYneTgaLxIlskyDA)) ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode  PoWfeIjJhHwMZlYneTgaLxIlskyDA;

 __declspec(property(get=get_ResultType)) ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  ResultType;

static inline ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals* New_ctor() ;

/// @brief Method UbcthHBRylGxkqhwywcbrqctFGdG, addr 0x1818a2db0, size 0x80, virtual true, abstract: false, final false
inline bool UbcthHBRylGxkqhwywcbrqctFGdG() ;

constexpr ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode const& __cordl_internal_get_PoWfeIjJhHwMZlYneTgaLxIlskyDA() const;

constexpr ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode& __cordl_internal_get_PoWfeIjJhHwMZlYneTgaLxIlskyDA() ;

constexpr void __cordl_internal_set_PoWfeIjJhHwMZlYneTgaLxIlskyDA(::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode  value) ;

/// @brief Method .ctor, addr 0x180445be0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method fybOBVhzmetqcvhaTyvweQkjFtko, addr 0x1818a2e30, size 0xa0, virtual false, abstract: false, final false
inline void fybOBVhzmetqcvhaTyvweQkjFtko(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_ResultType, addr 0x180908a80, size 0x70, virtual true, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::TypeWrapper_DataType get_ResultType() ;

/// @brief Method huxHicgLHgrJeZLTAHAvataqanuO, addr 0x1818a2ed0, size 0x270, virtual false, abstract: false, final false
inline float_t huxHicgLHgrJeZLTAHAvataqanuO() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomCalculation_LogitechGRacingWheelPedals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomCalculation_LogitechGRacingWheelPedals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomCalculation_LogitechGRacingWheelPedals(CustomCalculation_LogitechGRacingWheelPedals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomCalculation_LogitechGRacingWheelPedals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomCalculation_LogitechGRacingWheelPedals(CustomCalculation_LogitechGRacingWheelPedals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2441};

/// @brief Field dead offset 0xffffffff size 0x4
static constexpr float_t  dead{static_cast<float_t>(0.01f)};

/// @brief Field resultType value: I32(10)
static ::Rewired::Utils::Classes::Data::TypeWrapper_DataType const resultType;

/// @brief Field PoWfeIjJhHwMZlYneTgaLxIlskyDA, offset: 0x4c, size: 0x4, def value: None
 ::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode  ___PoWfeIjJhHwMZlYneTgaLxIlskyDA;

/// @brief Size padding 0x58 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals, ___PoWfeIjJhHwMZlYneTgaLxIlskyDA) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals) == 0x58, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping
