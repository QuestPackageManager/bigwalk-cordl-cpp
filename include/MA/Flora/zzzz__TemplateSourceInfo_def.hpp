#pragma once
// IWYU pragma private; include "MA/Flora/TemplateSourceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__TemplateLightmapValidationError_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderFlags_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/zzzz__LODFadeMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateSourceInfo)
namespace MA::Flora {
class FloraAdditionalRendererSettings;
}
namespace MA::Flora {
struct TemplateSourceInfo__LODHasShadows_e__FixedBuffer;
}
namespace MA::Flora {
struct TemplateSourceInfo__LODHeights_e__FixedBuffer;
}
namespace MA::Flora {
struct TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer;
}
namespace MA::Flora {
struct TemplateSourceInfo__PercentageFlags_e__FixedBuffer;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace MA::Flora {
struct TemplateSourceInfo;
}
namespace MA::Flora {
struct TemplateSourceInfo__LODHasShadows_e__FixedBuffer;
}
namespace MA::Flora {
struct TemplateSourceInfo__LODHeights_e__FixedBuffer;
}
namespace MA::Flora {
struct TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer;
}
namespace MA::Flora {
struct TemplateSourceInfo__PercentageFlags_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateSourceInfo);
MARK_VAL_T(::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateSourceInfo, "MA.Flora", "TemplateSourceInfo");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer, "MA.Flora", "TemplateSourceInfo/<LODHasShadows>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer, "MA.Flora", "TemplateSourceInfo/<LODHeights>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer, "MA.Flora", "TemplateSourceInfo/<LODTransitionHeights>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer, "MA.Flora", "TemplateSourceInfo/<PercentageFlags>e__FixedBuffer");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateSourceInfo/<LODHasShadows>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TemplateSourceInfo__LODHasShadows_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TemplateSourceInfo__LODHasShadows_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "bool", modifiers: "", def_value: None }]
constexpr TemplateSourceInfo__LODHasShadows_e__FixedBuffer(bool  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13083};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 bool  FixedElementField;

/// @brief Size padding 0x8 - 0x1 = 0x7, packed as 0x7
 uint8_t  _cordl_size_padding[0x7];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateSourceInfo/<LODHeights>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TemplateSourceInfo__LODHeights_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TemplateSourceInfo__LODHeights_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr TemplateSourceInfo__LODHeights_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13084};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x20 - 0x4 = 0x1c, packed as 0x1c
 uint8_t  _cordl_size_padding[0x1c];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateSourceInfo/<LODTransitionHeights>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13085};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x20 - 0x4 = 0x1c, packed as 0x1c
 uint8_t  _cordl_size_padding[0x1c];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateSourceInfo/<PercentageFlags>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TemplateSourceInfo__PercentageFlags_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TemplateSourceInfo__PercentageFlags_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "bool", modifiers: "", def_value: None }]
constexpr TemplateSourceInfo__PercentageFlags_e__FixedBuffer(bool  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13086};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 bool  FixedElementField;

/// @brief Size padding 0x8 - 0x1 = 0x7, packed as 0x7
 uint8_t  _cordl_size_padding[0x7];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AABB, MA.Flora.TemplateLightmapValidationError, MA.Flora.TemplateRenderFlags, MA.Flora.TemplateRenderType, MA.Flora.TemplateSourceInfo::<LODHasShadows>e__FixedBuffer, MA.Flora.TemplateSourceInfo::<LODHeights>e__FixedBuffer, MA.Flora.TemplateSourceInfo::<LODTransitionHeights>e__FixedBuffer, MA.Flora.TemplateSourceInfo::<PercentageFlags>e__FixedBuffer, Unity.Mathematics.float4, UnityEngine.LODFadeMode, UnityEngine.Vector3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateSourceInfo
struct CORDL_TYPE TemplateSourceInfo {
public:
// Declarations
using _LODHasShadows_e__FixedBuffer = ::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer;

using _LODHeights_e__FixedBuffer = ::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer;

using _LODTransitionHeights_e__FixedBuffer = ::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer;

using _PercentageFlags_e__FixedBuffer = ::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer;

 __declspec(property(get=get_HasAnyCrossFade)) bool  HasAnyCrossFade;

/// @brief Method get_HasAnyCrossFade, addr 0x1814aa820, size 0x50, virtual false, abstract: false, final false
inline bool get_HasAnyCrossFade() ;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateSourceInfo() ;

// Ctor Parameters [CppParam { name: "RenderSource", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "AdditionalRendererSettings", ty: "::UnityW<::MA::Flora::FloraAdditionalRendererSettings>", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::MA::Flora::TemplateRenderType", modifiers: "", def_value: None }, CppParam { name: "Flags", ty: "::MA::Flora::TemplateRenderFlags", modifiers: "", def_value: None }, CppParam { name: "LocalAnchorPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "LODGroupID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "LodCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "FadeMode", ty: "::UnityEngine::LODFadeMode", modifiers: "", def_value: None }, CppParam { name: "HasAnimatedCrossFade", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "SupportsFadeKeyword", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "LocalReferencePoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "LocalSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LocalAABB", ty: "::MA::Flora::AABB", modifiers: "", def_value: None }, CppParam { name: "LastLODIsBillboard", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "MeshLodForceLod", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MeshLodSelectionBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "MeshLodBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "MeshLodSlope", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LightmapIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "LightmapScaleOffset", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "LightmapValidationError", ty: "::MA::Flora::TemplateLightmapValidationError", modifiers: "", def_value: None }, CppParam { name: "PercentageFlags", ty: "::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "LODHasShadows", ty: "::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "LODHeights", ty: "::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "LODTransitionHeights", ty: "::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr TemplateSourceInfo(::UnityW<::UnityEngine::GameObject>  RenderSource, ::UnityW<::MA::Flora::FloraAdditionalRendererSettings>  AdditionalRendererSettings, ::MA::Flora::TemplateRenderType  Type, ::MA::Flora::TemplateRenderFlags  Flags, ::UnityEngine::Vector3  LocalAnchorPoint, int32_t  LODGroupID, int32_t  LodCount, ::UnityEngine::LODFadeMode  FadeMode, bool  HasAnimatedCrossFade, bool  SupportsFadeKeyword, ::UnityEngine::Vector3  LocalReferencePoint, float_t  LocalSize, ::MA::Flora::AABB  LocalAABB, bool  LastLODIsBillboard, int32_t  MeshLodForceLod, float_t  MeshLodSelectionBias, float_t  MeshLodBias, float_t  MeshLodSlope, int32_t  LightmapIndex, ::Unity::Mathematics::float4  LightmapScaleOffset, ::MA::Flora::TemplateLightmapValidationError  LightmapValidationError, ::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer  PercentageFlags, ::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer  LODHasShadows, ::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer  LODHeights, ::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer  LODTransitionHeights) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13087};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe0};

/// @brief Field RenderSource, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  RenderSource;

/// @brief Field AdditionalRendererSettings, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::MA::Flora::FloraAdditionalRendererSettings>  AdditionalRendererSettings;

/// @brief Field Type, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::TemplateRenderType  Type;

/// @brief Field Flags, offset: 0x14, size: 0x1, def value: None
 ::MA::Flora::TemplateRenderFlags  Flags;

/// @brief Field LocalAnchorPoint, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  LocalAnchorPoint;

/// @brief Field LODGroupID, offset: 0x24, size: 0x4, def value: None
 int32_t  LODGroupID;

/// @brief Field LodCount, offset: 0x28, size: 0x4, def value: None
 int32_t  LodCount;

/// @brief Field FadeMode, offset: 0x2c, size: 0x4, def value: None
 ::UnityEngine::LODFadeMode  FadeMode;

/// @brief Field HasAnimatedCrossFade, offset: 0x30, size: 0x1, def value: None
 bool  HasAnimatedCrossFade;

/// @brief Field SupportsFadeKeyword, offset: 0x31, size: 0x1, def value: None
 bool  SupportsFadeKeyword;

/// @brief Field LocalReferencePoint, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  LocalReferencePoint;

/// @brief Field LocalSize, offset: 0x40, size: 0x4, def value: None
 float_t  LocalSize;

/// @brief Field LocalAABB, offset: 0x44, size: 0x20, def value: None
 ::MA::Flora::AABB  LocalAABB;

/// @brief Field LastLODIsBillboard, offset: 0x64, size: 0x1, def value: None
 bool  LastLODIsBillboard;

/// @brief Field MeshLodForceLod, offset: 0x68, size: 0x4, def value: None
 int32_t  MeshLodForceLod;

/// @brief Field MeshLodSelectionBias, offset: 0x6c, size: 0x4, def value: None
 float_t  MeshLodSelectionBias;

/// @brief Field MeshLodBias, offset: 0x70, size: 0x4, def value: None
 float_t  MeshLodBias;

/// @brief Field MeshLodSlope, offset: 0x74, size: 0x4, def value: None
 float_t  MeshLodSlope;

/// @brief Field LightmapIndex, offset: 0x78, size: 0x4, def value: None
 int32_t  LightmapIndex;

/// @brief Field LightmapScaleOffset, offset: 0x7c, size: 0x10, def value: None
 ::Unity::Mathematics::float4  LightmapScaleOffset;

/// @brief Field LightmapValidationError, offset: 0x8c, size: 0x1, def value: None
 ::MA::Flora::TemplateLightmapValidationError  LightmapValidationError;

/// @brief Field PercentageFlags, offset: 0x8d, size: 0x8, def value: None
 ::MA::Flora::TemplateSourceInfo__PercentageFlags_e__FixedBuffer  PercentageFlags;

/// @brief Field LODHasShadows, offset: 0x95, size: 0x8, def value: None
 ::MA::Flora::TemplateSourceInfo__LODHasShadows_e__FixedBuffer  LODHasShadows;

/// @brief Field LODHeights, offset: 0xa0, size: 0x20, def value: None
 ::MA::Flora::TemplateSourceInfo__LODHeights_e__FixedBuffer  LODHeights;

/// @brief Field LODTransitionHeights, offset: 0xc0, size: 0x20, def value: None
 ::MA::Flora::TemplateSourceInfo__LODTransitionHeights_e__FixedBuffer  LODTransitionHeights;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateSourceInfo, RenderSource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, AdditionalRendererSettings) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, Flags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LocalAnchorPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LODGroupID) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LodCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, FadeMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, HasAnimatedCrossFade) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, SupportsFadeKeyword) == 0x31, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LocalReferencePoint) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LocalSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LocalAABB) == 0x44, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LastLODIsBillboard) == 0x64, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, MeshLodForceLod) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, MeshLodSelectionBias) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, MeshLodBias) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, MeshLodSlope) == 0x74, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LightmapIndex) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LightmapScaleOffset) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LightmapValidationError) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, PercentageFlags) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LODHasShadows) == 0x95, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LODHeights) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateSourceInfo, LODTransitionHeights) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateSourceInfo) == 0xe0, "Size mismatch!");

} // namespace end def MA::Flora
