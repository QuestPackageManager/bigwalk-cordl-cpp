#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/ConfidenceLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfidenceLevel)
// Forward declare root types
namespace UnityEngine::Windows::Speech {
struct ConfidenceLevel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Windows::Speech::ConfidenceLevel);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::ConfidenceLevel, "UnityEngine.Windows.Speech", "ConfidenceLevel");
// Dependencies 
namespace UnityEngine::Windows::Speech {
// Is value type: true
// CS Name: UnityEngine.Windows.Speech.ConfidenceLevel
struct CORDL_TYPE ConfidenceLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConfidenceLevel_Unwrapped
enum struct __ConfidenceLevel_Unwrapped : int32_t {
__E_High = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_Low = static_cast<int32_t>(0x2),
__E_Rejected = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConfidenceLevel_Unwrapped () const noexcept {
return static_cast<__ConfidenceLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConfidenceLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConfidenceLevel(int32_t  value__) noexcept;

/// @brief Field High value: I32(0)
static ::UnityEngine::Windows::Speech::ConfidenceLevel const High;

/// @brief Field Low value: I32(2)
static ::UnityEngine::Windows::Speech::ConfidenceLevel const Low;

/// @brief Field Medium value: I32(1)
static ::UnityEngine::Windows::Speech::ConfidenceLevel const Medium;

/// @brief Field Rejected value: I32(3)
static ::UnityEngine::Windows::Speech::ConfidenceLevel const Rejected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10805};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::Speech::ConfidenceLevel, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::Speech::ConfidenceLevel) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
