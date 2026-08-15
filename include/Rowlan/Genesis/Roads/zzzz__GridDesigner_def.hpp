#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Roads/GridDesigner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GridDesigner)
namespace Rowlan::Genesis::Roads {
class GridDesigner_JitterSettings;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Rowlan::Genesis::Roads {
class GridDesigner;
}
namespace Rowlan::Genesis::Roads {
class GridDesigner_JitterSettings;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::Roads::GridDesigner*);
MARK_REF_T(::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Roads::GridDesigner*, "Rowlan.Genesis.Roads", "GridDesigner");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*, "Rowlan.Genesis.Roads", "GridDesigner/JitterSettings");
// Dependencies System.Object, UnityEngine.Vector2
namespace Rowlan::Genesis::Roads {
// Is value type: false
// CS Name: Rowlan.Genesis.Roads.GridDesigner/JitterSettings
class CORDL_TYPE GridDesigner_JitterSettings : public ::System::Object {
public:
// Declarations
/// @brief Field heightOffset, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightOffset, put=__cordl_internal_set_heightOffset)) ::UnityEngine::Vector2  heightOffset;

/// @brief Field positionOffset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionOffset, put=__cordl_internal_set_positionOffset)) ::UnityEngine::Vector2  positionOffset;

/// @brief Field rotationOffset, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotationOffset, put=__cordl_internal_set_rotationOffset)) ::UnityEngine::Vector2  rotationOffset;

static inline ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_heightOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_heightOffset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_positionOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_positionOffset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_rotationOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_rotationOffset() ;

constexpr void __cordl_internal_set_heightOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_positionOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_rotationOffset(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x181abead0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridDesigner_JitterSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridDesigner_JitterSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GridDesigner_JitterSettings(GridDesigner_JitterSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridDesigner_JitterSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridDesigner_JitterSettings(GridDesigner_JitterSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20403};

/// @brief Field rotationOffset, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___rotationOffset;

/// @brief Field heightOffset, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___heightOffset;

/// @brief Field positionOffset, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___positionOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner_JitterSettings, ___rotationOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner_JitterSettings, ___heightOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner_JitterSettings, ___positionOffset) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Roads::GridDesigner_JitterSettings) == 0x28, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Roads
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace Rowlan::Genesis::Roads {
// Is value type: false
// CS Name: Rowlan.Genesis.Roads.GridDesigner
class CORDL_TYPE GridDesigner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using JitterSettings = ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings;

/// @brief Field countX, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_countX, put=__cordl_internal_set_countX)) int32_t  countX;

/// @brief Field countZ, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_countZ, put=__cordl_internal_set_countZ)) int32_t  countZ;

/// @brief Field distanceX, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceX, put=__cordl_internal_set_distanceX)) float_t  distanceX;

/// @brief Field distanceZ, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceZ, put=__cordl_internal_set_distanceZ)) float_t  distanceZ;

/// @brief Field intersectionCross, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_intersectionCross, put=__cordl_internal_set_intersectionCross)) ::UnityW<::UnityEngine::GameObject>  intersectionCross;

/// @brief Field intersectionT, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_intersectionT, put=__cordl_internal_set_intersectionT)) ::UnityW<::UnityEngine::GameObject>  intersectionT;

/// @brief Field jitterSettings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_jitterSettings, put=__cordl_internal_set_jitterSettings)) ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*  jitterSettings;

/// @brief Field layer, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) ::UnityEngine::LayerMask  layer;

/// @brief Field positionOffsetY, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionOffsetY, put=__cordl_internal_set_positionOffsetY)) float_t  positionOffsetY;

static inline ::Rowlan::Genesis::Roads::GridDesigner* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_countX() const;

constexpr int32_t& __cordl_internal_get_countX() ;

constexpr int32_t const& __cordl_internal_get_countZ() const;

constexpr int32_t& __cordl_internal_get_countZ() ;

constexpr float_t const& __cordl_internal_get_distanceX() const;

constexpr float_t& __cordl_internal_get_distanceX() ;

constexpr float_t const& __cordl_internal_get_distanceZ() const;

constexpr float_t& __cordl_internal_get_distanceZ() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_intersectionCross() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_intersectionCross() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_intersectionT() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_intersectionT() ;

constexpr ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings* const& __cordl_internal_get_jitterSettings() const;

constexpr ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*& __cordl_internal_get_jitterSettings() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layer() ;

constexpr float_t const& __cordl_internal_get_positionOffsetY() const;

constexpr float_t& __cordl_internal_get_positionOffsetY() ;

constexpr void __cordl_internal_set_countX(int32_t  value) ;

constexpr void __cordl_internal_set_countZ(int32_t  value) ;

constexpr void __cordl_internal_set_distanceX(float_t  value) ;

constexpr void __cordl_internal_set_distanceZ(float_t  value) ;

constexpr void __cordl_internal_set_intersectionCross(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_intersectionT(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_jitterSettings(::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*  value) ;

constexpr void __cordl_internal_set_layer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_positionOffsetY(float_t  value) ;

/// @brief Method .ctor, addr 0x181abe890, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridDesigner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridDesigner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GridDesigner(GridDesigner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridDesigner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridDesigner(GridDesigner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20404};

/// @brief Field countX, offset: 0x20, size: 0x4, def value: None
 int32_t  ___countX;

/// @brief Field countZ, offset: 0x24, size: 0x4, def value: None
 int32_t  ___countZ;

/// @brief Field distanceX, offset: 0x28, size: 0x4, def value: None
 float_t  ___distanceX;

/// @brief Field distanceZ, offset: 0x2c, size: 0x4, def value: None
 float_t  ___distanceZ;

/// @brief Field intersectionCross, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___intersectionCross;

/// @brief Field intersectionT, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___intersectionT;

/// @brief Field layer, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layer;

/// @brief Field positionOffsetY, offset: 0x44, size: 0x4, def value: None
 float_t  ___positionOffsetY;

/// @brief Field jitterSettings, offset: 0x48, size: 0x8, def value: None
 ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*  ___jitterSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner, ___countX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner, ___countZ) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner, ___distanceX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner, ___distanceZ) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner, ___intersectionCross) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner, ___intersectionT) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner, ___layer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner, ___positionOffsetY) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::GridDesigner, ___jitterSettings) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Roads::GridDesigner) == 0x50, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Roads
