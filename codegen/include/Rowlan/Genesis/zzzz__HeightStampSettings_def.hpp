#pragma once
// IWYU pragma private; include "Rowlan/Genesis/HeightStampSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HeightStampSettings)
namespace Rowlan::Genesis {
struct HeightStampSettings_FalloffType;
}
namespace Rowlan::Genesis {
class StampSettingsTemplate;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Rowlan::Genesis {
struct HeightStampSettings_FalloffType;
}
namespace Rowlan::Genesis {
struct HeightStampSettings;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::HeightStampSettings_FalloffType);
MARK_VAL_T(::Rowlan::Genesis::HeightStampSettings);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::HeightStampSettings_FalloffType, "Rowlan.Genesis", "HeightStampSettings/FalloffType");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::HeightStampSettings, "Rowlan.Genesis", "HeightStampSettings");
// Dependencies 
namespace Rowlan::Genesis {
// Is value type: true
// CS Name: Rowlan.Genesis.HeightStampSettings/FalloffType
struct CORDL_TYPE HeightStampSettings_FalloffType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HeightStampSettings_FalloffType_Unwrapped
enum struct __HeightStampSettings_FalloffType_Unwrapped : int32_t {
__E_Range = static_cast<int32_t>(0x0),
__E_Box = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HeightStampSettings_FalloffType_Unwrapped () const noexcept {
return static_cast<__HeightStampSettings_FalloffType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HeightStampSettings_FalloffType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HeightStampSettings_FalloffType(int32_t  value__) noexcept;

/// @brief Field Box value: I32(1)
static ::Rowlan::Genesis::HeightStampSettings_FalloffType const Box;

/// @brief Field Range value: I32(0)
static ::Rowlan::Genesis::HeightStampSettings_FalloffType const Range;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20379};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings_FalloffType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::HeightStampSettings_FalloffType) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis
// Dependencies Rowlan.Genesis.HeightStampSettings::FalloffType, UnityEngine.Vector2
namespace Rowlan::Genesis {
// Is value type: true
// CS Name: Rowlan.Genesis.HeightStampSettings
struct CORDL_TYPE HeightStampSettings {
public:
// Declarations
using FalloffType = ::Rowlan::Genesis::HeightStampSettings_FalloffType;

/// @brief Method Apply, addr 0x181abe920, size 0xa0, virtual false, abstract: false, final false
inline void Apply(::Rowlan::Genesis::StampSettingsTemplate*  _cordl_template) ;

/// @brief Method Reset, addr 0x181abe9e0, size 0x80, virtual false, abstract: false, final false
inline void Reset() ;

// Ctor Parameters []
// @brief default ctor
constexpr HeightStampSettings() ;

// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "falloffType", ty: "::Rowlan::Genesis::HeightStampSettings_FalloffType", modifiers: "", def_value: None }, CppParam { name: "positionRangeX", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "positionRangeY", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "positionRangeZ", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "rotationRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "scaleRangeWidth", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "scaleRangeHeight", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr HeightStampSettings(bool  active, float_t  weight, ::UnityW<::UnityEngine::Texture2D>  texture, ::Rowlan::Genesis::HeightStampSettings_FalloffType  falloffType, ::UnityEngine::Vector2  positionRangeX, ::UnityEngine::Vector2  positionRangeY, ::UnityEngine::Vector2  positionRangeZ, ::UnityEngine::Vector2  rotationRange, ::UnityEngine::Vector2  scaleRangeWidth, ::UnityEngine::Vector2  scaleRangeHeight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20380};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field active, offset: 0x0, size: 0x1, def value: None
 bool  active;

/// @brief Field weight, offset: 0x4, size: 0x4, def value: None
 float_t  weight;

/// @brief Field texture, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  texture;

/// @brief Field falloffType, offset: 0x10, size: 0x4, def value: None
 ::Rowlan::Genesis::HeightStampSettings_FalloffType  falloffType;

/// @brief Field positionRangeX, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  positionRangeX;

/// @brief Field positionRangeY, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2  positionRangeY;

/// @brief Field positionRangeZ, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  positionRangeZ;

/// @brief Field rotationRange, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  rotationRange;

/// @brief Field scaleRangeWidth, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  scaleRangeWidth;

/// @brief Field scaleRangeHeight, offset: 0x3c, size: 0x8, def value: None
 ::UnityEngine::Vector2  scaleRangeHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings, active) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings, weight) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings, texture) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings, falloffType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings, positionRangeX) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings, positionRangeY) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings, positionRangeZ) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings, rotationRange) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings, scaleRangeWidth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::HeightStampSettings, scaleRangeHeight) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::HeightStampSettings) == 0x48, "Size mismatch!");

} // namespace end def Rowlan::Genesis
