#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventParamType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonEventParamType)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonEventParamType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonEventParamType");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonEventParamType
struct CORDL_TYPE AntiCheatCommonEventParamType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonEventParamType_Unwrapped
enum struct __AntiCheatCommonEventParamType_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_ClientHandle = static_cast<int32_t>(0x1),
__E_String = static_cast<int32_t>(0x2),
__E_UInt32 = static_cast<int32_t>(0x3),
__E_Int32 = static_cast<int32_t>(0x4),
__E_UInt64 = static_cast<int32_t>(0x5),
__E_Int64 = static_cast<int32_t>(0x6),
__E_Vector3f = static_cast<int32_t>(0x7),
__E_Quat = static_cast<int32_t>(0x8),
__E_Float = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonEventParamType_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonEventParamType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonEventParamType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonEventParamType(int32_t  value__) noexcept;

/// @brief Field ClientHandle value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType const ClientHandle;

/// @brief Field Float value: I32(9)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType const Float;

/// @brief Field Int32 value: I32(4)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType const Int32;

/// @brief Field Int64 value: I32(6)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType const Int64;

/// @brief Field Invalid value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType const Invalid;

/// @brief Field Quat value: I32(8)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType const Quat;

/// @brief Field String value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType const String;

/// @brief Field UInt32 value: I32(3)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType const UInt32;

/// @brief Field UInt64 value: I32(5)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType const UInt64;

/// @brief Field Vector3f value: I32(7)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType const Vector3f;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9340};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
