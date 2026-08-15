#pragma once
// IWYU pragma private; include "Steamworks/EVoiceResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVoiceResult)
// Forward declare root types
namespace Steamworks {
struct EVoiceResult;
}
// Write type traits
MARK_VAL_T(::Steamworks::EVoiceResult);
DEFINE_IL2CPP_CLASS(::Steamworks::EVoiceResult, "Steamworks", "EVoiceResult");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EVoiceResult
struct CORDL_TYPE EVoiceResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVoiceResult_Unwrapped
enum struct __EVoiceResult_Unwrapped : int32_t {
__E_k_EVoiceResultOK = static_cast<int32_t>(0x0),
__E_k_EVoiceResultNotInitialized = static_cast<int32_t>(0x1),
__E_k_EVoiceResultNotRecording = static_cast<int32_t>(0x2),
__E_k_EVoiceResultNoData = static_cast<int32_t>(0x3),
__E_k_EVoiceResultBufferTooSmall = static_cast<int32_t>(0x4),
__E_k_EVoiceResultDataCorrupted = static_cast<int32_t>(0x5),
__E_k_EVoiceResultRestricted = static_cast<int32_t>(0x6),
__E_k_EVoiceResultUnsupportedCodec = static_cast<int32_t>(0x7),
__E_k_EVoiceResultReceiverOutOfDate = static_cast<int32_t>(0x8),
__E_k_EVoiceResultReceiverDidNotAnswer = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVoiceResult_Unwrapped () const noexcept {
return static_cast<__EVoiceResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EVoiceResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVoiceResult(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16311};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EVoiceResultBufferTooSmall value: I32(4)
static ::Steamworks::EVoiceResult const k_EVoiceResultBufferTooSmall;

/// @brief Field k_EVoiceResultDataCorrupted value: I32(5)
static ::Steamworks::EVoiceResult const k_EVoiceResultDataCorrupted;

/// @brief Field k_EVoiceResultNoData value: I32(3)
static ::Steamworks::EVoiceResult const k_EVoiceResultNoData;

/// @brief Field k_EVoiceResultNotInitialized value: I32(1)
static ::Steamworks::EVoiceResult const k_EVoiceResultNotInitialized;

/// @brief Field k_EVoiceResultNotRecording value: I32(2)
static ::Steamworks::EVoiceResult const k_EVoiceResultNotRecording;

/// @brief Field k_EVoiceResultOK value: I32(0)
static ::Steamworks::EVoiceResult const k_EVoiceResultOK;

/// @brief Field k_EVoiceResultReceiverDidNotAnswer value: I32(9)
static ::Steamworks::EVoiceResult const k_EVoiceResultReceiverDidNotAnswer;

/// @brief Field k_EVoiceResultReceiverOutOfDate value: I32(8)
static ::Steamworks::EVoiceResult const k_EVoiceResultReceiverOutOfDate;

/// @brief Field k_EVoiceResultRestricted value: I32(6)
static ::Steamworks::EVoiceResult const k_EVoiceResultRestricted;

/// @brief Field k_EVoiceResultUnsupportedCodec value: I32(7)
static ::Steamworks::EVoiceResult const k_EVoiceResultUnsupportedCodec;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EVoiceResult, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EVoiceResult) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
