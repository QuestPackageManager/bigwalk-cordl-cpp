#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/JoinRoomFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinRoomFlags)
// Forward declare root types
namespace Epic::OnlineServices::RTC {
struct JoinRoomFlags;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTC::JoinRoomFlags);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::JoinRoomFlags, "Epic.OnlineServices.RTC", "JoinRoomFlags");
// Dependencies 
namespace Epic::OnlineServices::RTC {
// Is value type: true
// CS Name: Epic.OnlineServices.RTC.JoinRoomFlags
struct CORDL_TYPE JoinRoomFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __JoinRoomFlags_Unwrapped
enum struct __JoinRoomFlags_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_EnableEcho = static_cast<uint32_t>(0x1u),
__E_EnableDatachannel = static_cast<uint32_t>(0x4u),
__E_ReservedVoiceFeature = static_cast<uint32_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JoinRoomFlags_Unwrapped () const noexcept {
return static_cast<__JoinRoomFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JoinRoomFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr JoinRoomFlags(uint32_t  value__) noexcept;

/// @brief Field EnableDatachannel value: U32(4)
static ::Epic::OnlineServices::RTC::JoinRoomFlags const EnableDatachannel;

/// @brief Field EnableEcho value: U32(1)
static ::Epic::OnlineServices::RTC::JoinRoomFlags const EnableEcho;

/// @brief Field None value: U32(0)
static ::Epic::OnlineServices::RTC::JoinRoomFlags const None;

/// @brief Field ReservedVoiceFeature value: U32(8)
static ::Epic::OnlineServices::RTC::JoinRoomFlags const ReservedVoiceFeature;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8138};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTC::JoinRoomFlags) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
