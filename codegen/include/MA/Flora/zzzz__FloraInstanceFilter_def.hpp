#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraInstanceTypeMask_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraInstanceFilter)
namespace MA::Flora {
struct FloraInstanceTypeMask;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace MA::Flora {
struct FloraInstanceFilter;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraInstanceFilter);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceFilter, "MA.Flora", "FloraInstanceFilter");
// Dependencies MA.Flora.FloraInstanceTypeMask, UnityEngine.LayerMask
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraInstanceFilter
struct CORDL_TYPE FloraInstanceFilter {
public:
// Declarations
 __declspec(property(get=get_AuthoringGameObjectID, put=set_AuthoringGameObjectID)) int32_t  AuthoringGameObjectID;

 __declspec(property(get=get_IdentitySourceGameObjectID, put=set_IdentitySourceGameObjectID)) int32_t  IdentitySourceGameObjectID;

/// @brief Method ByDetails, addr 0x1814e40c0, size 0x90, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceFilter ByDetails(::UnityEngine::Terrain*  terrain) ;

/// @brief Method ByIdentitySource, addr 0x1814e4150, size 0x80, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceFilter ByIdentitySource(::UnityEngine::GameObject*  identitySource) ;

/// @brief Method ByLayerMask, addr 0x1814e41d0, size 0x20, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceFilter ByLayerMask(::UnityEngine::LayerMask  layerMask) ;

/// @brief Method ByOwner, addr 0x1814e4290, size 0x80, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceFilter ByOwner(::UnityEngine::GameObject*  owner) ;

/// @brief Method ByOwner, addr 0x1814e41f0, size 0xa0, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceFilter ByOwner(::UnityEngine::Transform*  owner) ;

/// @brief Method ByParent, addr 0x1814e41f0, size 0xa0, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceFilter ByParent(::UnityEngine::Transform*  parent) ;

/// @brief Method ByPrefab, addr 0x1814e4150, size 0x80, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceFilter ByPrefab(::UnityEngine::GameObject*  prefab) ;

/// @brief Method ByRenderSource, addr 0x1814e4310, size 0x70, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceFilter ByRenderSource(::UnityEngine::GameObject*  renderSource) ;

/// @brief Method ByTrees, addr 0x1814e4380, size 0x90, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceFilter ByTrees(::UnityEngine::Terrain*  terrain) ;

/// @brief Method .ctor, addr 0x1814e4410, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::FloraInstanceTypeMask  typeMask, ::UnityEngine::LayerMask  layerMask, int32_t  prefabGameObjectID, int32_t  authoringGameObjectID, int32_t  renderSourceGameObjectID) ;

/// @brief Method get_Any, addr 0x1814e4440, size 0x50, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceFilter get_Any() ;

/// @brief Method get_AuthoringGameObjectID, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_AuthoringGameObjectID() ;

/// @brief Method get_IdentitySourceGameObjectID, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_IdentitySourceGameObjectID() ;

/// @brief Method set_AuthoringGameObjectID, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_AuthoringGameObjectID(int32_t  value) ;

/// @brief Method set_IdentitySourceGameObjectID, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_IdentitySourceGameObjectID(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceFilter() ;

// Ctor Parameters [CppParam { name: "TypeMask", ty: "::MA::Flora::FloraInstanceTypeMask", modifiers: "", def_value: None }, CppParam { name: "LayerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None }, CppParam { name: "PrefabGameObjectID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "RenderSourceGameObjectID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "OwnerGameObjectID", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraInstanceFilter(::MA::Flora::FloraInstanceTypeMask  TypeMask, ::UnityEngine::LayerMask  LayerMask, int32_t  PrefabGameObjectID, int32_t  RenderSourceGameObjectID, int32_t  OwnerGameObjectID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13302};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field TypeMask, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::FloraInstanceTypeMask  TypeMask;

/// @brief Field LayerMask, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::LayerMask  LayerMask;

/// @brief Field PrefabGameObjectID, offset: 0x8, size: 0x4, def value: None
 int32_t  PrefabGameObjectID;

/// @brief Field RenderSourceGameObjectID, offset: 0xc, size: 0x4, def value: None
 int32_t  RenderSourceGameObjectID;

/// @brief Field OwnerGameObjectID, offset: 0x10, size: 0x4, def value: None
 int32_t  OwnerGameObjectID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraInstanceFilter, TypeMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceFilter, LayerMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceFilter, PrefabGameObjectID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceFilter, RenderSourceGameObjectID) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceFilter, OwnerGameObjectID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraInstanceFilter) == 0x14, "Size mismatch!");

} // namespace end def MA::Flora
