#pragma once
// IWYU pragma private; include "MA/Flora/TemplateStore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderFlags_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/zzzz__LODFadeMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateStore)
namespace MA::Flora {
struct PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer;
}
namespace MA::Flora {
struct PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer;
}
namespace MA::Flora {
struct TemplateIndex;
}
namespace MA::Flora {
struct TemplateStore_PerTemplateData;
}
namespace MA::Flora {
struct TemplateStore_StaticIdentifier;
}
namespace MA::Flora {
class TemplateStore___c;
}
namespace System {
class EventArgs;
}
namespace System {
class EventHandler;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
class TemplateStore___c;
}
namespace MA::Flora {
struct PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer;
}
namespace MA::Flora {
struct PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer;
}
namespace MA::Flora {
struct TemplateStore;
}
namespace MA::Flora {
struct TemplateStore_PerTemplateData;
}
namespace MA::Flora {
struct TemplateStore_StaticIdentifier;
}
// Write type traits
MARK_REF_T(::MA::Flora::TemplateStore___c*);
MARK_VAL_T(::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::TemplateStore);
MARK_VAL_T(::MA::Flora::TemplateStore_PerTemplateData);
MARK_VAL_T(::MA::Flora::TemplateStore_StaticIdentifier);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateStore___c*, "MA.Flora", "TemplateStore/<>c");
DEFINE_IL2CPP_CLASS(::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer, "MA.Flora", "TemplateStore/PerTemplateData/<LODHeights>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer, "MA.Flora", "TemplateStore/PerTemplateData/<LODTransitionHeights>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateStore, "MA.Flora", "TemplateStore");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateStore_PerTemplateData, "MA.Flora", "TemplateStore/PerTemplateData");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateStore_StaticIdentifier, "MA.Flora", "TemplateStore/StaticIdentifier");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateStore
struct CORDL_TYPE TemplateStore {
public:
// Declarations
using PerTemplateData = ::MA::Flora::TemplateStore_PerTemplateData;

using StaticIdentifier = ::MA::Flora::TemplateStore_StaticIdentifier;

using __c = ::MA::Flora::TemplateStore___c;

/// @brief Method Initialize, addr 0x1814aa870, size 0x1d0, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method Reset, addr 0x1814aaa40, size 0x60, virtual false, abstract: false, final false
static inline void Reset(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method <Initialize>g__Shutdown|6_0, addr 0x1814aaaa0, size 0x60, virtual false, abstract: false, final false
static inline void _Initialize_g__Shutdown_6_0() ;

/// @brief Method get_Data, addr 0x1814aab00, size 0x30, virtual false, abstract: false, final false
static inline ::MA::Flora::TemplateStore_PerTemplateData* get_Data() ;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateStore() ;

// Ctor Parameters [CppParam { name: "m_PerTemplateData", ty: "::MA::Flora::TemplateStore_PerTemplateData*", modifiers: "", def_value: None }]
constexpr TemplateStore(::MA::Flora::TemplateStore_PerTemplateData*  m_PerTemplateData) noexcept;

/// @brief Field MaxPossiblePrefabCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxPossiblePrefabCount{static_cast<int32_t>(0x10000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13061};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_PerTemplateData, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::TemplateStore_PerTemplateData*  m_PerTemplateData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateStore, m_PerTemplateData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateStore) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.TemplateStore, Unity.Burst.SharedStatic`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateStore/StaticIdentifier
#pragma pack(push, 0)
struct CORDL_TYPE TemplateStore_StaticIdentifier {
public:
// Declarations
/// @brief Field Ref, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Ref, put=setStaticF_Ref)) ::Unity::Burst::SharedStatic_1<::MA::Flora::TemplateStore>  Ref;

static inline ::Unity::Burst::SharedStatic_1<::MA::Flora::TemplateStore> getStaticF_Ref() ;

static inline void setStaticF_Ref(::Unity::Burst::SharedStatic_1<::MA::Flora::TemplateStore>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateStore_StaticIdentifier() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13056};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::MA::Flora::TemplateStore_StaticIdentifier) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateStore/PerTemplateData/<LODHeights>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13057};

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
static_assert(offsetof(::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateStore/PerTemplateData/<LODTransitionHeights>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13058};

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
static_assert(offsetof(::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.AABB, MA.Flora.BatchDomainIndex, MA.Flora.TemplateRenderFlags, MA.Flora.TemplateRenderType, MA.Flora.TemplateStore::PerTemplateData::<LODHeights>e__FixedBuffer, MA.Flora.TemplateStore::PerTemplateData::<LODTransitionHeights>e__FixedBuffer, Unity.Mathematics.float4, UnityEngine.LODFadeMode, UnityEngine.Vector3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateStore/PerTemplateData
struct CORDL_TYPE TemplateStore_PerTemplateData {
public:
// Declarations
using _LODHeights_e__FixedBuffer = ::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer;

using _LODTransitionHeights_e__FixedBuffer = ::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateStore_PerTemplateData() ;

// Ctor Parameters [CppParam { name: "Layer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::MA::Flora::TemplateRenderType", modifiers: "", def_value: None }, CppParam { name: "Flags", ty: "::MA::Flora::TemplateRenderFlags", modifiers: "", def_value: None }, CppParam { name: "InitialVariationColor", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "MaxRenderDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "MaxShadowDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "AffectedByGlobalDensity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AffectedByRangeDensity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "MinShadowLod", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "LodCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "LodFadeMode", ty: "::UnityEngine::LODFadeMode", modifiers: "", def_value: None }, CppParam { name: "HasAnimatedCrossFade", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "SupportsFadeKeyword", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "LocalAnchorPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "LocalReferencePoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "LocalSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LocalAABB", ty: "::MA::Flora::AABB", modifiers: "", def_value: None }, CppParam { name: "LODHeights", ty: "::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "LODTransitionHeights", ty: "::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr TemplateStore_PerTemplateData(int32_t  Layer, uint64_t  SceneCullingMask, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, ::MA::Flora::TemplateRenderType  Type, ::MA::Flora::TemplateRenderFlags  Flags, ::Unity::Mathematics::float4  InitialVariationColor, float_t  MaxRenderDistance, float_t  MaxShadowDistance, bool  AffectedByGlobalDensity, bool  AffectedByRangeDensity, int32_t  MinShadowLod, uint8_t  LodCount, ::UnityEngine::LODFadeMode  LodFadeMode, bool  HasAnimatedCrossFade, bool  SupportsFadeKeyword, ::UnityEngine::Vector3  LocalAnchorPoint, ::UnityEngine::Vector3  LocalReferencePoint, float_t  LocalSize, ::MA::Flora::AABB  LocalAABB, ::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer  LODHeights, ::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer  LODTransitionHeights) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13059};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc8};

/// @brief Field Layer, offset: 0x0, size: 0x4, def value: None
 int32_t  Layer;

/// @brief Field SceneCullingMask, offset: 0x8, size: 0x8, def value: None
 uint64_t  SceneCullingMask;

/// @brief Field BatchDomainIndex, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::BatchDomainIndex  BatchDomainIndex;

/// @brief Field Type, offset: 0x14, size: 0x4, def value: None
 ::MA::Flora::TemplateRenderType  Type;

/// @brief Field Flags, offset: 0x18, size: 0x1, def value: None
 ::MA::Flora::TemplateRenderFlags  Flags;

/// @brief Field InitialVariationColor, offset: 0x1c, size: 0x10, def value: None
 ::Unity::Mathematics::float4  InitialVariationColor;

/// @brief Field MaxRenderDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  MaxRenderDistance;

/// @brief Field MaxShadowDistance, offset: 0x30, size: 0x4, def value: None
 float_t  MaxShadowDistance;

/// @brief Field AffectedByGlobalDensity, offset: 0x34, size: 0x1, def value: None
 bool  AffectedByGlobalDensity;

/// @brief Field AffectedByRangeDensity, offset: 0x35, size: 0x1, def value: None
 bool  AffectedByRangeDensity;

/// @brief Field MinShadowLod, offset: 0x38, size: 0x4, def value: None
 int32_t  MinShadowLod;

/// @brief Field LodCount, offset: 0x3c, size: 0x1, def value: None
 uint8_t  LodCount;

/// @brief Field LodFadeMode, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LODFadeMode  LodFadeMode;

/// @brief Field HasAnimatedCrossFade, offset: 0x44, size: 0x1, def value: None
 bool  HasAnimatedCrossFade;

/// @brief Field SupportsFadeKeyword, offset: 0x45, size: 0x1, def value: None
 bool  SupportsFadeKeyword;

/// @brief Field LocalAnchorPoint, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  LocalAnchorPoint;

/// @brief Field LocalReferencePoint, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  LocalReferencePoint;

/// @brief Field LocalSize, offset: 0x60, size: 0x4, def value: None
 float_t  LocalSize;

/// @brief Field LocalAABB, offset: 0x64, size: 0x20, def value: None
 ::MA::Flora::AABB  LocalAABB;

/// @brief Field LODHeights, offset: 0x84, size: 0x20, def value: None
 ::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer  LODHeights;

/// @brief Field LODTransitionHeights, offset: 0xa4, size: 0x20, def value: None
 ::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer  LODTransitionHeights;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, Layer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, SceneCullingMask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, BatchDomainIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, Type) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, Flags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, InitialVariationColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, MaxRenderDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, MaxShadowDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, AffectedByGlobalDensity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, AffectedByRangeDensity) == 0x35, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, MinShadowLod) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, LodCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, LodFadeMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, HasAnimatedCrossFade) == 0x44, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, SupportsFadeKeyword) == 0x45, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, LocalAnchorPoint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, LocalReferencePoint) == 0x54, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, LocalSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, LocalAABB) == 0x64, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, LODHeights) == 0x84, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateStore_PerTemplateData, LODTransitionHeights) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateStore_PerTemplateData) == 0xc8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TemplateStore/<>c
class CORDL_TYPE TemplateStore___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::MA::Flora::TemplateStore___c*  __9;

/// @brief Field <>9__6_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_1, put=setStaticF___9__6_1)) ::System::EventHandler*  __9__6_1;

/// @brief Field <>9__6_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_2, put=setStaticF___9__6_2)) ::System::EventHandler*  __9__6_2;

static inline ::MA::Flora::TemplateStore___c* New_ctor() ;

/// @brief Method <Initialize>b__6_1, addr 0x1814aaaa0, size 0x60, virtual false, abstract: false, final false
inline void _Initialize_b__6_1(::System::Object*  _, ::System::EventArgs*  __param_1) ;

/// @brief Method <Initialize>b__6_2, addr 0x1814aaaa0, size 0x60, virtual false, abstract: false, final false
inline void _Initialize_b__6_2(::System::Object*  _, ::System::EventArgs*  __param_1) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::MA::Flora::TemplateStore___c* getStaticF___9() ;

static inline ::System::EventHandler* getStaticF___9__6_1() ;

static inline ::System::EventHandler* getStaticF___9__6_2() ;

static inline void setStaticF___9(::MA::Flora::TemplateStore___c*  value) ;

static inline void setStaticF___9__6_1(::System::EventHandler*  value) ;

static inline void setStaticF___9__6_2(::System::EventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemplateStore___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemplateStore___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TemplateStore___c(TemplateStore___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemplateStore___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemplateStore___c(TemplateStore___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13060};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::TemplateStore___c) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
