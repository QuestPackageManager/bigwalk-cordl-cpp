#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/DictationCompletionCause.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DictationCompletionCause)
// Forward declare root types
namespace UnityEngine::Windows::Speech {
struct DictationCompletionCause;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Windows::Speech::DictationCompletionCause);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::DictationCompletionCause, "UnityEngine.Windows.Speech", "DictationCompletionCause");
// Dependencies 
namespace UnityEngine::Windows::Speech {
// Is value type: true
// CS Name: UnityEngine.Windows.Speech.DictationCompletionCause
struct CORDL_TYPE DictationCompletionCause {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DictationCompletionCause_Unwrapped
enum struct __DictationCompletionCause_Unwrapped : int32_t {
__E_Complete = static_cast<int32_t>(0x0),
__E_AudioQualityFailure = static_cast<int32_t>(0x1),
__E_Canceled = static_cast<int32_t>(0x2),
__E_TimeoutExceeded = static_cast<int32_t>(0x3),
__E_PauseLimitExceeded = static_cast<int32_t>(0x4),
__E_NetworkFailure = static_cast<int32_t>(0x5),
__E_MicrophoneUnavailable = static_cast<int32_t>(0x6),
__E_UnknownError = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DictationCompletionCause_Unwrapped () const noexcept {
return static_cast<__DictationCompletionCause_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DictationCompletionCause() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DictationCompletionCause(int32_t  value__) noexcept;

/// @brief Field AudioQualityFailure value: I32(1)
static ::UnityEngine::Windows::Speech::DictationCompletionCause const AudioQualityFailure;

/// @brief Field Canceled value: I32(2)
static ::UnityEngine::Windows::Speech::DictationCompletionCause const Canceled;

/// @brief Field Complete value: I32(0)
static ::UnityEngine::Windows::Speech::DictationCompletionCause const Complete;

/// @brief Field MicrophoneUnavailable value: I32(6)
static ::UnityEngine::Windows::Speech::DictationCompletionCause const MicrophoneUnavailable;

/// @brief Field NetworkFailure value: I32(5)
static ::UnityEngine::Windows::Speech::DictationCompletionCause const NetworkFailure;

/// @brief Field PauseLimitExceeded value: I32(4)
static ::UnityEngine::Windows::Speech::DictationCompletionCause const PauseLimitExceeded;

/// @brief Field TimeoutExceeded value: I32(3)
static ::UnityEngine::Windows::Speech::DictationCompletionCause const TimeoutExceeded;

/// @brief Field UnknownError value: I32(7)
static ::UnityEngine::Windows::Speech::DictationCompletionCause const UnknownError;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::Speech::DictationCompletionCause, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::Speech::DictationCompletionCause) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
