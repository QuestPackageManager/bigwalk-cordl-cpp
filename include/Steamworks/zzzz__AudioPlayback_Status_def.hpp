#pragma once
// IWYU pragma private; include "Steamworks/AudioPlayback_Status.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioPlayback_Status)
// Forward declare root types
namespace Steamworks {
struct AudioPlayback_Status;
}
// Write type traits
MARK_VAL_T(::Steamworks::AudioPlayback_Status);
DEFINE_IL2CPP_CLASS(::Steamworks::AudioPlayback_Status, "Steamworks", "AudioPlayback_Status");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.AudioPlayback_Status
struct CORDL_TYPE AudioPlayback_Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioPlayback_Status_Unwrapped
enum struct __AudioPlayback_Status_Unwrapped : int32_t {
__E_AudioPlayback_Undefined = static_cast<int32_t>(0x0),
__E_AudioPlayback_Playing = static_cast<int32_t>(0x1),
__E_AudioPlayback_Paused = static_cast<int32_t>(0x2),
__E_AudioPlayback_Idle = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioPlayback_Status_Unwrapped () const noexcept {
return static_cast<__AudioPlayback_Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioPlayback_Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioPlayback_Status(int32_t  value__) noexcept;

/// @brief Field AudioPlayback_Idle value: I32(3)
static ::Steamworks::AudioPlayback_Status const AudioPlayback_Idle;

/// @brief Field AudioPlayback_Paused value: I32(2)
static ::Steamworks::AudioPlayback_Status const AudioPlayback_Paused;

/// @brief Field AudioPlayback_Playing value: I32(1)
static ::Steamworks::AudioPlayback_Status const AudioPlayback_Playing;

/// @brief Field AudioPlayback_Undefined value: I32(0)
static ::Steamworks::AudioPlayback_Status const AudioPlayback_Undefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16271};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::AudioPlayback_Status, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::AudioPlayback_Status) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
