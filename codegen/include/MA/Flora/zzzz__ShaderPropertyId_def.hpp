#pragma once
// IWYU pragma private; include "MA/Flora/ShaderPropertyId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderPropertyId)
namespace MA::Flora {
struct PropertyArray_ShaderPropertyId_PropertyData;
}
namespace MA::Flora {
class PropertyArray_ShaderPropertyId_StaticIdentifier;
}
namespace MA::Flora {
class PropertyArray_ShaderPropertyId___c;
}
namespace MA::Flora {
struct ShaderPropertyId_PropertyArray;
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
class PropertyArray_ShaderPropertyId_StaticIdentifier;
}
namespace MA::Flora {
class PropertyArray_ShaderPropertyId___c;
}
namespace MA::Flora {
class ShaderPropertyId;
}
namespace MA::Flora {
struct PropertyArray_ShaderPropertyId_PropertyData;
}
namespace MA::Flora {
struct ShaderPropertyId_PropertyArray;
}
// Write type traits
MARK_REF_T(::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier*);
MARK_REF_T(::MA::Flora::PropertyArray_ShaderPropertyId___c*);
MARK_REF_T(::MA::Flora::ShaderPropertyId*);
MARK_VAL_T(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData);
MARK_VAL_T(::MA::Flora::ShaderPropertyId_PropertyArray);
DEFINE_IL2CPP_CLASS(::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier*, "MA.Flora", "ShaderPropertyId/PropertyArray/StaticIdentifier");
DEFINE_IL2CPP_CLASS(::MA::Flora::PropertyArray_ShaderPropertyId___c*, "MA.Flora", "ShaderPropertyId/PropertyArray/<>c");
DEFINE_IL2CPP_CLASS(::MA::Flora::ShaderPropertyId*, "MA.Flora", "ShaderPropertyId");
DEFINE_IL2CPP_CLASS(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, "MA.Flora", "ShaderPropertyId/PropertyArray/PropertyData");
DEFINE_IL2CPP_CLASS(::MA::Flora::ShaderPropertyId_PropertyArray, "MA.Flora", "ShaderPropertyId/PropertyArray");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ShaderPropertyId/PropertyArray/PropertyData
struct CORDL_TYPE PropertyArray_ShaderPropertyId_PropertyData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropertyArray_ShaderPropertyId_PropertyData() ;

// Ctor Parameters [CppParam { name: "unity_BaseColor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_SpecCube0_HDR", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_DOTSInstanceData", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_SHCoefficients", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_EntityId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_ObjectToWorld", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_WorldToObject", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_MatrixPreviousM", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_MatrixPreviousMI", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_LightmapST", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_WorldBoundingSphere", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_RendererBounds_Min", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unity_RendererBounds_Max", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flora_RandomID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flora_VariationColor", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropertyArray_ShaderPropertyId_PropertyData(int32_t  unity_BaseColor, int32_t  unity_SpecCube0_HDR, int32_t  unity_DOTSInstanceData, int32_t  unity_SHCoefficients, int32_t  unity_EntityId, int32_t  unity_ObjectToWorld, int32_t  unity_WorldToObject, int32_t  unity_MatrixPreviousM, int32_t  unity_MatrixPreviousMI, int32_t  unity_LightmapST, int32_t  unity_WorldBoundingSphere, int32_t  unity_RendererBounds_Min, int32_t  unity_RendererBounds_Max, int32_t  flora_RandomID, int32_t  flora_VariationColor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13238};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3c};

/// @brief Field unity_BaseColor, offset: 0x0, size: 0x4, def value: None
 int32_t  unity_BaseColor;

/// @brief Field unity_SpecCube0_HDR, offset: 0x4, size: 0x4, def value: None
 int32_t  unity_SpecCube0_HDR;

/// @brief Field unity_DOTSInstanceData, offset: 0x8, size: 0x4, def value: None
 int32_t  unity_DOTSInstanceData;

/// @brief Field unity_SHCoefficients, offset: 0xc, size: 0x4, def value: None
 int32_t  unity_SHCoefficients;

/// @brief Field unity_EntityId, offset: 0x10, size: 0x4, def value: None
 int32_t  unity_EntityId;

/// @brief Field unity_ObjectToWorld, offset: 0x14, size: 0x4, def value: None
 int32_t  unity_ObjectToWorld;

/// @brief Field unity_WorldToObject, offset: 0x18, size: 0x4, def value: None
 int32_t  unity_WorldToObject;

/// @brief Field unity_MatrixPreviousM, offset: 0x1c, size: 0x4, def value: None
 int32_t  unity_MatrixPreviousM;

/// @brief Field unity_MatrixPreviousMI, offset: 0x20, size: 0x4, def value: None
 int32_t  unity_MatrixPreviousMI;

/// @brief Field unity_LightmapST, offset: 0x24, size: 0x4, def value: None
 int32_t  unity_LightmapST;

/// @brief Field unity_WorldBoundingSphere, offset: 0x28, size: 0x4, def value: None
 int32_t  unity_WorldBoundingSphere;

/// @brief Field unity_RendererBounds_Min, offset: 0x2c, size: 0x4, def value: None
 int32_t  unity_RendererBounds_Min;

/// @brief Field unity_RendererBounds_Max, offset: 0x30, size: 0x4, def value: None
 int32_t  unity_RendererBounds_Max;

/// @brief Field flora_RandomID, offset: 0x34, size: 0x4, def value: None
 int32_t  flora_RandomID;

/// @brief Field flora_VariationColor, offset: 0x38, size: 0x4, def value: None
 int32_t  flora_VariationColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_BaseColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_SpecCube0_HDR) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_DOTSInstanceData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_SHCoefficients) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_EntityId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_ObjectToWorld) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_WorldToObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_MatrixPreviousM) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_MatrixPreviousMI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_LightmapST) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_WorldBoundingSphere) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_RendererBounds_Min) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, unity_RendererBounds_Max) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, flora_RandomID) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData, flora_VariationColor) == 0x38, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData) == 0x3c, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ShaderPropertyId/PropertyArray
struct CORDL_TYPE ShaderPropertyId_PropertyArray {
public:
// Declarations
using PropertyData = ::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData;

using StaticIdentifier = ::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier;

using __c = ::MA::Flora::PropertyArray_ShaderPropertyId___c;

/// @brief Method Initialize, addr 0x1814d3a50, size 0x300, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method <Initialize>g__Shutdown|2_0, addr 0x1814d3d50, size 0x50, virtual false, abstract: false, final false
static inline void _Initialize_g__Shutdown_2_0() ;

/// @brief Method get_Ref, addr 0x1814d3da0, size 0x30, virtual false, abstract: false, final false
static inline ::by_ref<::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData> get_Ref() ;

// Ctor Parameters []
// @brief default ctor
constexpr ShaderPropertyId_PropertyArray() ;

// Ctor Parameters [CppParam { name: "m_PropertyData", ty: "::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData*", modifiers: "", def_value: None }]
constexpr ShaderPropertyId_PropertyArray(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData*  m_PropertyData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13241};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_PropertyData, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData*  m_PropertyData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ShaderPropertyId_PropertyArray, m_PropertyData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ShaderPropertyId_PropertyArray) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ShaderPropertyId::PropertyArray, System.Object, Unity.Burst.SharedStatic`1<T>
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ShaderPropertyId/PropertyArray/StaticIdentifier
class CORDL_TYPE PropertyArray_ShaderPropertyId_StaticIdentifier : public ::System::Object {
public:
// Declarations
/// @brief Field Ref, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Ref, put=setStaticF_Ref)) ::Unity::Burst::SharedStatic_1<::MA::Flora::ShaderPropertyId_PropertyArray>  Ref;

static inline ::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Burst::SharedStatic_1<::MA::Flora::ShaderPropertyId_PropertyArray> getStaticF_Ref() ;

static inline void setStaticF_Ref(::Unity::Burst::SharedStatic_1<::MA::Flora::ShaderPropertyId_PropertyArray>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyArray_ShaderPropertyId_StaticIdentifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyArray_ShaderPropertyId_StaticIdentifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyArray_ShaderPropertyId_StaticIdentifier(PropertyArray_ShaderPropertyId_StaticIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyArray_ShaderPropertyId_StaticIdentifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyArray_ShaderPropertyId_StaticIdentifier(PropertyArray_ShaderPropertyId_StaticIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ShaderPropertyId/PropertyArray/<>c
class CORDL_TYPE PropertyArray_ShaderPropertyId___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::MA::Flora::PropertyArray_ShaderPropertyId___c*  __9;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::EventHandler*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::EventHandler*  __9__2_2;

static inline ::MA::Flora::PropertyArray_ShaderPropertyId___c* New_ctor() ;

/// @brief Method <Initialize>b__2_1, addr 0x1814d3d50, size 0x50, virtual false, abstract: false, final false
inline void _Initialize_b__2_1(::System::Object*  _, ::System::EventArgs*  __param_1) ;

/// @brief Method <Initialize>b__2_2, addr 0x1814d3d50, size 0x50, virtual false, abstract: false, final false
inline void _Initialize_b__2_2(::System::Object*  _, ::System::EventArgs*  __param_1) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::MA::Flora::PropertyArray_ShaderPropertyId___c* getStaticF___9() ;

static inline ::System::EventHandler* getStaticF___9__2_1() ;

static inline ::System::EventHandler* getStaticF___9__2_2() ;

static inline void setStaticF___9(::MA::Flora::PropertyArray_ShaderPropertyId___c*  value) ;

static inline void setStaticF___9__2_1(::System::EventHandler*  value) ;

static inline void setStaticF___9__2_2(::System::EventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyArray_ShaderPropertyId___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyArray_ShaderPropertyId___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyArray_ShaderPropertyId___c(PropertyArray_ShaderPropertyId___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyArray_ShaderPropertyId___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyArray_ShaderPropertyId___c(PropertyArray_ShaderPropertyId___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13240};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::PropertyArray_ShaderPropertyId___c) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ShaderPropertyId
class CORDL_TYPE ShaderPropertyId : public ::System::Object {
public:
// Declarations
using PropertyArray = ::MA::Flora::ShaderPropertyId_PropertyArray;

/// @brief Method get_flora_RandomID, addr 0x1814d7580, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_flora_RandomID() ;

/// @brief Method get_flora_VariationColor, addr 0x1814d75b0, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_flora_VariationColor() ;

/// @brief Method get_unity_BaseColor, addr 0x1814d75e0, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_BaseColor() ;

/// @brief Method get_unity_DOTSInstanceData, addr 0x1814d7610, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_DOTSInstanceData() ;

/// @brief Method get_unity_EntityId, addr 0x1814d7640, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_EntityId() ;

/// @brief Method get_unity_LightmapST, addr 0x1814d7670, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_LightmapST() ;

/// @brief Method get_unity_MatrixPreviousM, addr 0x1814d76d0, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_MatrixPreviousM() ;

/// @brief Method get_unity_MatrixPreviousMI, addr 0x1814d76a0, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_MatrixPreviousMI() ;

/// @brief Method get_unity_ObjectToWorld, addr 0x1814d7700, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_ObjectToWorld() ;

/// @brief Method get_unity_RendererBounds_Max, addr 0x1814d7730, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_RendererBounds_Max() ;

/// @brief Method get_unity_RendererBounds_Min, addr 0x1814d7760, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_RendererBounds_Min() ;

/// @brief Method get_unity_SHCoefficients, addr 0x1814d7790, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_SHCoefficients() ;

/// @brief Method get_unity_SpecCube0_HDR, addr 0x1814d77c0, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_SpecCube0_HDR() ;

/// @brief Method get_unity_WorldBoundingSphere, addr 0x1814d77f0, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_WorldBoundingSphere() ;

/// @brief Method get_unity_WorldToObject, addr 0x1814d7820, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_unity_WorldToObject() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderPropertyId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderPropertyId(ShaderPropertyId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderPropertyId(ShaderPropertyId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13242};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ShaderPropertyId) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
