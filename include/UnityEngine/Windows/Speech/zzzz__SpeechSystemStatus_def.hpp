#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/SpeechSystemStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpeechSystemStatus)
// Forward declare root types
namespace UnityEngine::Windows::Speech {
struct SpeechSystemStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Windows::Speech::SpeechSystemStatus);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::SpeechSystemStatus, "UnityEngine.Windows.Speech", "SpeechSystemStatus");
// Dependencies 
namespace UnityEngine::Windows::Speech {
// Is value type: true
// CS Name: UnityEngine.Windows.Speech.SpeechSystemStatus
struct CORDL_TYPE SpeechSystemStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SpeechSystemStatus_Unwrapped
enum struct __SpeechSystemStatus_Unwrapped : int32_t {
__E_Stopped = static_cast<int32_t>(0x0),
__E_Running = static_cast<int32_t>(0x1),
__E_Failed = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpeechSystemStatus_Unwrapped () const noexcept {
return static_cast<__SpeechSystemStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SpeechSystemStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpeechSystemStatus(int32_t  value__) noexcept;

/// @brief Field Failed value: I32(2)
static ::UnityEngine::Windows::Speech::SpeechSystemStatus const Failed;

/// @brief Field Running value: I32(1)
static ::UnityEngine::Windows::Speech::SpeechSystemStatus const Running;

/// @brief Field Stopped value: I32(0)
static ::UnityEngine::Windows::Speech::SpeechSystemStatus const Stopped;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10806};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::Speech::SpeechSystemStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::Speech::SpeechSystemStatus) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
