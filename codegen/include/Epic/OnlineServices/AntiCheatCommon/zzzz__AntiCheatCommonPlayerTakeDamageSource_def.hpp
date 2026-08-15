#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerTakeDamageSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatCommonPlayerTakeDamageSource)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonPlayerTakeDamageSource;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource, "Epic.OnlineServices.AntiCheatCommon", "AntiCheatCommonPlayerTakeDamageSource");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerTakeDamageSource
struct CORDL_TYPE AntiCheatCommonPlayerTakeDamageSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatCommonPlayerTakeDamageSource_Unwrapped
enum struct __AntiCheatCommonPlayerTakeDamageSource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Player = static_cast<int32_t>(0x1),
__E_NonPlayerCharacter = static_cast<int32_t>(0x2),
__E_World = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatCommonPlayerTakeDamageSource_Unwrapped () const noexcept {
return static_cast<__AntiCheatCommonPlayerTakeDamageSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatCommonPlayerTakeDamageSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatCommonPlayerTakeDamageSource(int32_t  value__) noexcept;

/// @brief Field NonPlayerCharacter value: I32(2)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource const NonPlayerCharacter;

/// @brief Field None value: I32(0)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource const None;

/// @brief Field Player value: I32(1)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource const Player;

/// @brief Field World value: I32(3)
static ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9346};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
