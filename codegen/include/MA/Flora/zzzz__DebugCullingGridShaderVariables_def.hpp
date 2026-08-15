#pragma once
// IWYU pragma private; include "MA/Flora/DebugCullingGridShaderVariables.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DebugCullingGridShaderVariables)
namespace MA::Flora {
struct DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer;
}
// Forward declare root types
namespace MA::Flora {
struct DebugCullingGridShaderVariables;
}
namespace MA::Flora {
struct DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DebugCullingGridShaderVariables);
MARK_VAL_T(::MA::Flora::DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugCullingGridShaderVariables, "MA.Flora", "DebugCullingGridShaderVariables");
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer, "MA.Flora", "DebugCullingGridShaderVariables/<_FrustumPlanes>e__FixedBuffer");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DebugCullingGridShaderVariables/<_FrustumPlanes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13246};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x60 - 0x4 = 0x5c, packed as 0x5c
 uint8_t  _cordl_size_padding[0x5c];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.DebugCullingGridShaderVariables::<_FrustumPlanes>e__FixedBuffer, UnityEngine.Vector4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DebugCullingGridShaderVariables
struct CORDL_TYPE DebugCullingGridShaderVariables {
public:
// Declarations
using __FrustumPlanes_e__FixedBuffer = ::MA::Flora::DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr DebugCullingGridShaderVariables() ;

// Ctor Parameters [CppParam { name: "_FrustumPlanes", ty: "::MA::Flora::DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "_CameraPositionAndDist", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_CullingSettings", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr DebugCullingGridShaderVariables(::MA::Flora::DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer  _FrustumPlanes, ::UnityEngine::Vector4  _CameraPositionAndDist, ::UnityEngine::Vector4  _CullingSettings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13247};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field _FrustumPlanes, offset: 0x0, size: 0x60, def value: None
 ::MA::Flora::DebugCullingGridShaderVariables___FrustumPlanes_e__FixedBuffer  _FrustumPlanes;

/// @brief Field _CameraPositionAndDist, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Vector4  _CameraPositionAndDist;

/// @brief Field _CullingSettings, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Vector4  _CullingSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugCullingGridShaderVariables, _FrustumPlanes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGridShaderVariables, _CameraPositionAndDist) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGridShaderVariables, _CullingSettings) == 0x70, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugCullingGridShaderVariables) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
