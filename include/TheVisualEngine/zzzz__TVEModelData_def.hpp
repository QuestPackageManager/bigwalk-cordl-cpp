#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEModelData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TVEModelData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEModelData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEModelData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEModelData*, "TheVisualEngine", "TVEModelData");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEModelData
class CORDL_TYPE TVEModelData : public ::System::Object {
public:
// Declarations
/// @brief Field detailCoord, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailCoord, put=__cordl_internal_set_detailCoord)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  detailCoord;

/// @brief Field detailMask, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailMask, put=__cordl_internal_set_detailMask)) ::System::Collections::Generic::List_1<float_t>*  detailMask;

/// @brief Field height, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field heightMask, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightMask, put=__cordl_internal_set_heightMask)) ::System::Collections::Generic::List_1<float_t>*  heightMask;

/// @brief Field mesh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field motion2Mask, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_motion2Mask, put=__cordl_internal_set_motion2Mask)) ::System::Collections::Generic::List_1<float_t>*  motion2Mask;

/// @brief Field motion3Mask, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_motion3Mask, put=__cordl_internal_set_motion3Mask)) ::System::Collections::Generic::List_1<float_t>*  motion3Mask;

/// @brief Field occlusionMask, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_occlusionMask, put=__cordl_internal_set_occlusionMask)) ::System::Collections::Generic::List_1<float_t>*  occlusionMask;

/// @brief Field pivotPositions, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_pivotPositions, put=__cordl_internal_set_pivotPositions)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  pivotPositions;

/// @brief Field radius, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field variationMask, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_variationMask, put=__cordl_internal_set_variationMask)) ::System::Collections::Generic::List_1<float_t>*  variationMask;

static inline ::TheVisualEngine::TVEModelData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get_detailCoord() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get_detailCoord() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_detailMask() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_detailMask() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_heightMask() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_heightMask() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_motion2Mask() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_motion2Mask() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_motion3Mask() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_motion3Mask() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_occlusionMask() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_occlusionMask() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_pivotPositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_pivotPositions() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_variationMask() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_variationMask() ;

constexpr void __cordl_internal_set_detailCoord(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_detailMask(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_heightMask(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_motion2Mask(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_motion3Mask(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_occlusionMask(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_pivotPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_variationMask(::System::Collections::Generic::List_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEModelData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEModelData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEModelData(TVEModelData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEModelData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEModelData(TVEModelData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19608};

/// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

/// @brief Field height, offset: 0x18, size: 0x4, def value: None
 float_t  ___height;

/// @brief Field radius, offset: 0x1c, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field variationMask, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___variationMask;

/// @brief Field occlusionMask, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___occlusionMask;

/// @brief Field detailMask, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___detailMask;

/// @brief Field heightMask, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___heightMask;

/// @brief Field detailCoord, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  ___detailCoord;

/// @brief Field motion2Mask, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___motion2Mask;

/// @brief Field motion3Mask, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___motion3Mask;

/// @brief Field pivotPositions, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___pivotPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEModelData, ___mesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEModelData, ___height) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEModelData, ___radius) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEModelData, ___variationMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEModelData, ___occlusionMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEModelData, ___detailMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEModelData, ___heightMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEModelData, ___detailCoord) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEModelData, ___motion2Mask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEModelData, ___motion3Mask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEModelData, ___pivotPositions) == 0x58, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEModelData) == 0x60, "Size mismatch!");

} // namespace end def TheVisualEngine
