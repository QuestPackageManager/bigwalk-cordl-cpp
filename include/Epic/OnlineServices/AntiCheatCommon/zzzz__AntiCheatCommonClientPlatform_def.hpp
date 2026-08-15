#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonClientPlatform)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientPlatform;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonClientPlatform");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientPlatform
struct CORDL_TYPE AntiCheatCommonClientPlatform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonClientPlatform_Unwrapped
enum struct __AntiCheatCommonClientPlatform_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Windows = static_cast<int32_t>(0x1),
__E_Mac = static_cast<int32_t>(0x2),
__E_Linux = static_cast<int32_t>(0x3),
__E_Xbox = static_cast<int32_t>(0x4),
__E_PlayStation = static_cast<int32_t>(0x5),
__E_Nintendo = static_cast<int32_t>(0x6),
__E_iOS = static_cast<int32_t>(0x7),
__E_Android = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonClientPlatform_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonClientPlatform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonClientPlatform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonClientPlatform(int32_t  value__) noexcept;

/// @brief Field Android value: I32(8)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform const Android;

/// @brief Field Linux value: I32(3)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform const Linux;

/// @brief Field Mac value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform const Mac;

/// @brief Field Nintendo value: I32(6)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform const Nintendo;

/// @brief Field PlayStation value: I32(5)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform const PlayStation;

/// @brief Field Unknown value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform const Unknown;

/// @brief Field Windows value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform const Windows;

/// @brief Field Xbox value: I32(4)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform const Xbox;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9338};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field iOS value: I32(7)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform const iOS;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
