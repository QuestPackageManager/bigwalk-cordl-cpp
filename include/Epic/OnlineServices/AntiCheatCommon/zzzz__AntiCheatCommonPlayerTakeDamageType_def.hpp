#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonPlayerTakeDamageType)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonPlayerTakeDamageType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonPlayerTakeDamageType");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerTakeDamageType
struct CORDL_TYPE AntiCheatCommonPlayerTakeDamageType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonPlayerTakeDamageType_Unwrapped
enum struct __AntiCheatCommonPlayerTakeDamageType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PointDamage = static_cast<int32_t>(0x1),
__E_RadialDamage = static_cast<int32_t>(0x2),
__E_DamageOverTime = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonPlayerTakeDamageType_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonPlayerTakeDamageType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonPlayerTakeDamageType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonPlayerTakeDamageType(int32_t  value__) noexcept;

/// @brief Field DamageOverTime value: I32(3)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType const DamageOverTime;

/// @brief Field None value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType const None;

/// @brief Field PointDamage value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType const PointDamage;

/// @brief Field RadialDamage value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType const RadialDamage;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
