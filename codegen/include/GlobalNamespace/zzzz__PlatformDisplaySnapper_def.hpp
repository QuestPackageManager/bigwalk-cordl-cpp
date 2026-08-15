#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformDisplaySnapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(PlatformDisplaySnapper)
namespace GlobalNamespace {
class PlatformDisplayMap;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformDisplaySnapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlatformDisplaySnapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformDisplaySnapper*, "", "PlatformDisplaySnapper");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformDisplaySnapper
class CORDL_TYPE PlatformDisplaySnapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field direction, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) ::UnityEngine::Vector3  direction;

/// @brief Field layerMask, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field mapOffset, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_mapOffset, put=__cordl_internal_set_mapOffset)) ::UnityEngine::Vector3  mapOffset;

/// @brief Field offset, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Field platformDisplayMap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformDisplayMap, put=__cordl_internal_set_platformDisplayMap)) ::UnityW<::GlobalNamespace::PlatformDisplayMap>  platformDisplayMap;

static inline ::GlobalNamespace::PlatformDisplaySnapper* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_mapOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_mapOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr ::UnityW<::GlobalNamespace::PlatformDisplayMap> const& __cordl_internal_get_platformDisplayMap() const;

constexpr ::UnityW<::GlobalNamespace::PlatformDisplayMap>& __cordl_internal_get_platformDisplayMap() ;

constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_mapOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_platformDisplayMap(::UnityW<::GlobalNamespace::PlatformDisplayMap>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformDisplaySnapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformDisplaySnapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformDisplaySnapper(PlatformDisplaySnapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformDisplaySnapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformDisplaySnapper(PlatformDisplaySnapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5141};

/// @brief Field platformDisplayMap, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlatformDisplayMap>  ___platformDisplayMap;

/// @brief Field direction, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___direction;

/// @brief Field offset, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

/// @brief Field mapOffset, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___mapOffset;

/// @brief Field layerMask, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformDisplaySnapper, ___platformDisplayMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplaySnapper, ___direction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplaySnapper, ___offset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplaySnapper, ___mapOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformDisplaySnapper, ___layerMask) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformDisplaySnapper) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
