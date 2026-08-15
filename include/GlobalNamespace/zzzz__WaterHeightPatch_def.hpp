#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterHeightPatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterHeightPatch)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class WaterHeightPatch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WaterHeightPatch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WaterHeightPatch*, "", "WaterHeightPatch");
// Dependencies System.Object, UnityEngine.Vector2Int
namespace GlobalNamespace {
// Is value type: false
// CS Name: WaterHeightPatch
class CORDL_TYPE WaterHeightPatch : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Resolution, put=set_Resolution)) float_t  Resolution;

/// @brief Field _resX, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__resX, put=__cordl_internal_set__resX)) int32_t  _resX;

/// @brief Field _resZ, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__resZ, put=__cordl_internal_set__resZ)) int32_t  _resZ;

/// @brief Field _resolution, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__resolution, put=__cordl_internal_set__resolution)) float_t  _resolution;

/// @brief Field isRiver, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRiver, put=__cordl_internal_set_isRiver)) bool  isRiver;

/// @brief Field waterHeights, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterHeights, put=__cordl_internal_set_waterHeights)) ::ArrayW<float_t>  waterHeights;

/// @brief Field worldMax, offset 0x1c, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldMax, put=__cordl_internal_set_worldMax)) ::UnityEngine::Vector2Int  worldMax;

/// @brief Field worldMin, offset 0x14, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldMin, put=__cordl_internal_set_worldMin)) ::UnityEngine::Vector2Int  worldMin;

/// @brief Method CacheResolution, addr 0x1803f6900, size 0x50, virtual false, abstract: false, final false
inline void CacheResolution() ;

/// @brief Method Contains, addr 0x1803f6950, size 0x50, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::Vector3  worldPos) ;

static inline ::GlobalNamespace::WaterHeightPatch* New_ctor() ;

/// @brief Method Sample, addr 0x1803f69a0, size 0x230, virtual false, abstract: false, final false
inline float_t Sample(::UnityEngine::Vector3  worldPos) ;

constexpr int32_t const& __cordl_internal_get__resX() const;

constexpr int32_t& __cordl_internal_get__resX() ;

constexpr int32_t const& __cordl_internal_get__resZ() const;

constexpr int32_t& __cordl_internal_get__resZ() ;

constexpr float_t const& __cordl_internal_get__resolution() const;

constexpr float_t& __cordl_internal_get__resolution() ;

constexpr bool const& __cordl_internal_get_isRiver() const;

constexpr bool& __cordl_internal_get_isRiver() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_waterHeights() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_waterHeights() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_worldMax() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_worldMax() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_worldMin() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_worldMin() ;

constexpr void __cordl_internal_set__resX(int32_t  value) ;

constexpr void __cordl_internal_set__resZ(int32_t  value) ;

constexpr void __cordl_internal_set__resolution(float_t  value) ;

constexpr void __cordl_internal_set_isRiver(bool  value) ;

constexpr void __cordl_internal_set_waterHeights(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_worldMax(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set_worldMin(::UnityEngine::Vector2Int  value) ;

/// @brief Method .ctor, addr 0x1803f6bd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Resolution, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Resolution() ;

/// @brief Method set_Resolution, addr 0x1803f6be0, size 0x20, virtual false, abstract: false, final false
inline void set_Resolution(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterHeightPatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterHeightPatch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterHeightPatch(WaterHeightPatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterHeightPatch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterHeightPatch(WaterHeightPatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4897};

/// @brief Field isRiver, offset: 0x10, size: 0x1, def value: None
 bool  ___isRiver;

/// @brief Field worldMin, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___worldMin;

/// @brief Field worldMax, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___worldMax;

/// @brief Field _resolution, offset: 0x24, size: 0x4, def value: None
 float_t  ____resolution;

/// @brief Field waterHeights, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ___waterHeights;

/// @brief Field _resX, offset: 0x30, size: 0x4, def value: None
 int32_t  ____resX;

/// @brief Field _resZ, offset: 0x34, size: 0x4, def value: None
 int32_t  ____resZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaterHeightPatch, ___isRiver) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterHeightPatch, ___worldMin) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterHeightPatch, ___worldMax) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterHeightPatch, ____resolution) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterHeightPatch, ___waterHeights) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterHeightPatch, ____resX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterHeightPatch, ____resZ) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WaterHeightPatch) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
