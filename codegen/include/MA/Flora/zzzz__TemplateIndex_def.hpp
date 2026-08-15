#pragma once
// IWYU pragma private; include "MA/Flora/TemplateIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateIndex)
namespace MA::Flora {
struct AABB;
}
namespace MA::Flora {
struct BatchDomainIndex;
}
namespace MA::Flora {
struct TemplateRenderFlags;
}
namespace MA::Flora {
struct TemplateRenderType;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine {
struct LODFadeMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MA::Flora {
struct TemplateIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateIndex, "MA.Flora", "TemplateIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateIndex
struct CORDL_TYPE TemplateIndex {
public:
// Declarations
 __declspec(property(get=get_AffectedByGlobalDensity, put=set_AffectedByGlobalDensity)) bool  AffectedByGlobalDensity;

 __declspec(property(get=get_AffectedByRangeDensity, put=set_AffectedByRangeDensity)) bool  AffectedByRangeDensity;

 __declspec(property(get=get_BatchDomainIndex, put=set_BatchDomainIndex)) ::MA::Flora::BatchDomainIndex  BatchDomainIndex;

 __declspec(property(get=get_Flags, put=set_Flags)) ::MA::Flora::TemplateRenderFlags  Flags;

 __declspec(property(get=get_HasAnimatedCrossFade, put=set_HasAnimatedCrossFade)) bool  HasAnimatedCrossFade;

 __declspec(property(get=get_HasCrossFade)) bool  HasCrossFade;

 __declspec(property(get=get_HasLightProbes)) bool  HasLightProbes;

 __declspec(property(get=get_HasLightmaps)) bool  HasLightmaps;

 __declspec(property(get=get_HasMotionVectors)) bool  HasMotionVectors;

 __declspec(property(get=get_HasRandomID)) bool  HasRandomID;

 __declspec(property(get=get_HasShadowCasters)) bool  HasShadowCasters;

 __declspec(property(get=get_HasVariationColor)) bool  HasVariationColor;

 __declspec(property(get=get_InitialVariationColor, put=set_InitialVariationColor)) ::Unity::Mathematics::float4  InitialVariationColor;

 __declspec(property(get=get_IsBillboard)) bool  IsBillboard;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_IsLodGroup)) bool  IsLodGroup;

 __declspec(property(get=get_IsMeshLod)) bool  IsMeshLod;

 __declspec(property(get=get_LODHeights)) float_t*  LODHeights;

 __declspec(property(get=get_LODTransitionHeights)) float_t*  LODTransitionHeights;

 __declspec(property(get=get_LocalAABB)) ::MA::Flora::AABB  LocalAABB;

 __declspec(property(get=get_LocalAnchorPoint, put=set_LocalAnchorPoint)) ::UnityEngine::Vector3  LocalAnchorPoint;

 __declspec(property(get=get_LocalReferencePoint, put=set_LocalReferencePoint)) ::UnityEngine::Vector3  LocalReferencePoint;

 __declspec(property(get=get_LocalSize, put=set_LocalSize)) float_t  LocalSize;

 __declspec(property(get=get_LodCount, put=set_LodCount)) int32_t  LodCount;

 __declspec(property(get=get_LodFadeMode, put=set_LodFadeMode)) ::UnityEngine::LODFadeMode  LodFadeMode;

 __declspec(property(get=get_MaxRenderDistance, put=set_MaxRenderDistance)) float_t  MaxRenderDistance;

 __declspec(property(get=get_MaxShadowDistance, put=set_MaxShadowDistance)) float_t  MaxShadowDistance;

 __declspec(property(get=get_MinShadowLod, put=set_MinShadowLod)) int32_t  MinShadowLod;

 __declspec(property(get=get_SupportsFadeKeyword, put=set_SupportsFadeKeyword)) bool  SupportsFadeKeyword;

 __declspec(property(get=get_Type, put=set_Type)) ::MA::Flora::TemplateRenderType  Type;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::TemplateIndex>"
constexpr operator  ::System::IComparable_1<::MA::Flora::TemplateIndex>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TemplateIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::TemplateIndex>*() ;

/// @brief Method CompareTo, addr 0x181453a90, size 0x10, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::TemplateIndex  other) ;

/// @brief Method Equals, addr 0x1814a7ee0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::TemplateIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1814a7f50, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

/// @brief Method get_AffectedByGlobalDensity, addr 0x1814a7fa0, size 0x60, virtual false, abstract: false, final false
inline bool get_AffectedByGlobalDensity() ;

/// @brief Method get_AffectedByRangeDensity, addr 0x1814a8000, size 0x60, virtual false, abstract: false, final false
inline bool get_AffectedByRangeDensity() ;

/// @brief Method get_BatchDomainIndex, addr 0x1814a8060, size 0x60, virtual false, abstract: false, final false
inline ::MA::Flora::BatchDomainIndex get_BatchDomainIndex() ;

/// @brief Method get_Flags, addr 0x1814a80c0, size 0x60, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateRenderFlags get_Flags() ;

/// @brief Method get_HasAnimatedCrossFade, addr 0x1814a8120, size 0x60, virtual false, abstract: false, final false
inline bool get_HasAnimatedCrossFade() ;

/// @brief Method get_HasCrossFade, addr 0x1814a8180, size 0xa0, virtual false, abstract: false, final false
inline bool get_HasCrossFade() ;

/// @brief Method get_HasLightProbes, addr 0x1814a8220, size 0x60, virtual false, abstract: false, final false
inline bool get_HasLightProbes() ;

/// @brief Method get_HasLightmaps, addr 0x1814a8280, size 0x60, virtual false, abstract: false, final false
inline bool get_HasLightmaps() ;

/// @brief Method get_HasMotionVectors, addr 0x1814a82e0, size 0x60, virtual false, abstract: false, final false
inline bool get_HasMotionVectors() ;

/// @brief Method get_HasRandomID, addr 0x1814a8340, size 0x60, virtual false, abstract: false, final false
inline bool get_HasRandomID() ;

/// @brief Method get_HasShadowCasters, addr 0x1814a83a0, size 0x60, virtual false, abstract: false, final false
inline bool get_HasShadowCasters() ;

/// @brief Method get_HasVariationColor, addr 0x1814a8400, size 0x60, virtual false, abstract: false, final false
inline bool get_HasVariationColor() ;

/// @brief Method get_InitialVariationColor, addr 0x1814a8460, size 0x90, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_InitialVariationColor() ;

/// @brief Method get_IsBillboard, addr 0x1814a84f0, size 0x60, virtual false, abstract: false, final false
inline bool get_IsBillboard() ;

/// @brief Method get_IsCreated, addr 0x180785420, size 0x60, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_IsLodGroup, addr 0x1814a8550, size 0x60, virtual false, abstract: false, final false
inline bool get_IsLodGroup() ;

/// @brief Method get_IsMeshLod, addr 0x1814a85b0, size 0x60, virtual false, abstract: false, final false
inline bool get_IsMeshLod() ;

/// @brief Method get_LODHeights, addr 0x1814a8610, size 0x60, virtual false, abstract: false, final false
inline float_t* get_LODHeights() ;

/// @brief Method get_LODTransitionHeights, addr 0x1814a8670, size 0x60, virtual false, abstract: false, final false
inline float_t* get_LODTransitionHeights() ;

/// @brief Method get_LocalAABB, addr 0x1814a86d0, size 0x60, virtual false, abstract: false, final false
inline ::by_ref<::MA::Flora::AABB> get_LocalAABB() ;

/// @brief Method get_LocalAnchorPoint, addr 0x1814a8730, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalAnchorPoint() ;

/// @brief Method get_LocalReferencePoint, addr 0x1814a87d0, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalReferencePoint() ;

/// @brief Method get_LocalSize, addr 0x1814a8870, size 0x60, virtual false, abstract: false, final false
inline float_t get_LocalSize() ;

/// @brief Method get_LodCount, addr 0x1814a88d0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_LodCount() ;

/// @brief Method get_LodFadeMode, addr 0x1814a8930, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::LODFadeMode get_LodFadeMode() ;

/// @brief Method get_MaxRenderDistance, addr 0x1814a8990, size 0x60, virtual false, abstract: false, final false
inline float_t get_MaxRenderDistance() ;

/// @brief Method get_MaxShadowDistance, addr 0x1814a89f0, size 0x60, virtual false, abstract: false, final false
inline float_t get_MaxShadowDistance() ;

/// @brief Method get_MinShadowLod, addr 0x1814a8a50, size 0x60, virtual false, abstract: false, final false
inline int32_t get_MinShadowLod() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::TemplateIndex get_None() ;

/// @brief Method get_SupportsFadeKeyword, addr 0x1814a8ab0, size 0x60, virtual false, abstract: false, final false
inline bool get_SupportsFadeKeyword() ;

/// @brief Method get_Type, addr 0x1814a8b10, size 0x60, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateRenderType get_Type() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::TemplateIndex>"
constexpr ::System::IComparable_1<::MA::Flora::TemplateIndex>* i___System__IComparable_1___MA__Flora__TemplateIndex_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TemplateIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::TemplateIndex>* i___System__IEquatable_1___MA__Flora__TemplateIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::TemplateIndex  a, ::MA::Flora::TemplateIndex  b) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::TemplateIndex op_Implicit___MA__Flora__TemplateIndex(int32_t  index) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::TemplateIndex  a, ::MA::Flora::TemplateIndex  b) ;

/// @brief Method set_AffectedByGlobalDensity, addr 0x1814a8b70, size 0x60, virtual false, abstract: false, final false
inline void set_AffectedByGlobalDensity(bool  value) ;

/// @brief Method set_AffectedByRangeDensity, addr 0x1814a8bd0, size 0x60, virtual false, abstract: false, final false
inline void set_AffectedByRangeDensity(bool  value) ;

/// @brief Method set_BatchDomainIndex, addr 0x1814a8c30, size 0x60, virtual false, abstract: false, final false
inline void set_BatchDomainIndex(::MA::Flora::BatchDomainIndex  value) ;

/// @brief Method set_Flags, addr 0x1814a8c90, size 0x60, virtual false, abstract: false, final false
inline void set_Flags(::MA::Flora::TemplateRenderFlags  value) ;

/// @brief Method set_HasAnimatedCrossFade, addr 0x1814a8cf0, size 0x60, virtual false, abstract: false, final false
inline void set_HasAnimatedCrossFade(bool  value) ;

/// @brief Method set_InitialVariationColor, addr 0x1814a8d50, size 0x80, virtual false, abstract: false, final false
inline void set_InitialVariationColor(::Unity::Mathematics::float4  value) ;

/// @brief Method set_LocalAnchorPoint, addr 0x1814a8dd0, size 0x90, virtual false, abstract: false, final false
inline void set_LocalAnchorPoint(::UnityEngine::Vector3  value) ;

/// @brief Method set_LocalReferencePoint, addr 0x1814a8e60, size 0x90, virtual false, abstract: false, final false
inline void set_LocalReferencePoint(::UnityEngine::Vector3  value) ;

/// @brief Method set_LocalSize, addr 0x1814a8ef0, size 0x70, virtual false, abstract: false, final false
inline void set_LocalSize(float_t  value) ;

/// @brief Method set_LodCount, addr 0x1814a8f60, size 0x60, virtual false, abstract: false, final false
inline void set_LodCount(int32_t  value) ;

/// @brief Method set_LodFadeMode, addr 0x1814a8fc0, size 0x60, virtual false, abstract: false, final false
inline void set_LodFadeMode(::UnityEngine::LODFadeMode  value) ;

/// @brief Method set_MaxRenderDistance, addr 0x1814a9020, size 0x70, virtual false, abstract: false, final false
inline void set_MaxRenderDistance(float_t  value) ;

/// @brief Method set_MaxShadowDistance, addr 0x1814a9090, size 0x70, virtual false, abstract: false, final false
inline void set_MaxShadowDistance(float_t  value) ;

/// @brief Method set_MinShadowLod, addr 0x1814a9100, size 0x60, virtual false, abstract: false, final false
inline void set_MinShadowLod(int32_t  value) ;

/// @brief Method set_SupportsFadeKeyword, addr 0x1814a9160, size 0x60, virtual false, abstract: false, final false
inline void set_SupportsFadeKeyword(bool  value) ;

/// @brief Method set_Type, addr 0x1814a91c0, size 0x60, virtual false, abstract: false, final false
inline void set_Type(::MA::Flora::TemplateRenderType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateIndex() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TemplateIndex(int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13062};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateIndex, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
