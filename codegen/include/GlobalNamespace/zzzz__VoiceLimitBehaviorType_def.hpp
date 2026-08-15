#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLimitBehaviorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceLimitBehaviorType)
// Forward declare root types
namespace GlobalNamespace {
struct VoiceLimitBehaviorType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoiceLimitBehaviorType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceLimitBehaviorType, "", "VoiceLimitBehaviorType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VoiceLimitBehaviorType
struct CORDL_TYPE VoiceLimitBehaviorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VoiceLimitBehaviorType_Unwrapped
enum struct __VoiceLimitBehaviorType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_RejectNew = static_cast<int32_t>(0x0),
__E_StopMostAttenuated = static_cast<int32_t>(0x1),
__E_StopOldest = static_cast<int32_t>(0x2),
__E_VirtualizeMostAttenuated = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoiceLimitBehaviorType_Unwrapped () const noexcept {
return static_cast<__VoiceLimitBehaviorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VoiceLimitBehaviorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VoiceLimitBehaviorType(int32_t  value__) noexcept;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::VoiceLimitBehaviorType const None;

/// @brief Field RejectNew value: I32(0)
static ::GlobalNamespace::VoiceLimitBehaviorType const RejectNew;

/// @brief Field StopMostAttenuated value: I32(1)
static ::GlobalNamespace::VoiceLimitBehaviorType const StopMostAttenuated;

/// @brief Field StopOldest value: I32(2)
static ::GlobalNamespace::VoiceLimitBehaviorType const StopOldest;

/// @brief Field VirtualizeMostAttenuated value: I32(3)
static ::GlobalNamespace::VoiceLimitBehaviorType const VirtualizeMostAttenuated;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17505};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceLimitBehaviorType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceLimitBehaviorType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
