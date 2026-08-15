#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioUpdateType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioUpdateType)
// Forward declare root types
namespace GlobalNamespace {
struct AudioUpdateType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioUpdateType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioUpdateType, "", "AudioUpdateType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioUpdateType
struct CORDL_TYPE AudioUpdateType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioUpdateType_Unwrapped
enum struct __AudioUpdateType_Unwrapped : int32_t {
__E_Update = static_cast<int32_t>(0x0),
__E_FixedUpdate = static_cast<int32_t>(0x1),
__E_LateUpdate = static_cast<int32_t>(0x2),
__E_SlowUpdate = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioUpdateType_Unwrapped () const noexcept {
return static_cast<__AudioUpdateType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioUpdateType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioUpdateType(int32_t  value__) noexcept;

/// @brief Field FixedUpdate value: I32(1)
static ::GlobalNamespace::AudioUpdateType const FixedUpdate;

/// @brief Field LateUpdate value: I32(2)
static ::GlobalNamespace::AudioUpdateType const LateUpdate;

/// @brief Field SlowUpdate value: I32(3)
static ::GlobalNamespace::AudioUpdateType const SlowUpdate;

/// @brief Field Update value: I32(0)
static ::GlobalNamespace::AudioUpdateType const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17495};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioUpdateType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioUpdateType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
