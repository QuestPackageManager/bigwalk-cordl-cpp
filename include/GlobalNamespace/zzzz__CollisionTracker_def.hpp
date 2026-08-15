#pragma once
// IWYU pragma private; include "GlobalNamespace/CollisionTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionTracker)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CollisionTracker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CollisionTracker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollisionTracker*, "", "CollisionTracker");
// Dependencies System.Object, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: CollisionTracker
class CORDL_TYPE CollisionTracker : public ::System::Object {
public:
// Declarations
/// @brief Field colliders, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

 __declspec(property(get=get_hasCollision)) bool  hasCollision;

/// @brief Field initialized, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field layerMask, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field logVerbose, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field useCustomLayerMask, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomLayerMask, put=__cordl_internal_set_useCustomLayerMask)) bool  useCustomLayerMask;

/// @brief Method Initialize, addr 0x1803e4980, size 0x60, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsOnRelevantLayer, addr 0x1803e49e0, size 0x60, virtual false, abstract: false, final false
inline bool IsOnRelevantLayer(int32_t  layer) ;

static inline ::GlobalNamespace::CollisionTracker* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x1803e4a40, size 0x160, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collider*  col) ;

/// @brief Method OnCollisionExit, addr 0x1803e4ba0, size 0x120, virtual false, abstract: false, final false
inline void OnCollisionExit(::UnityEngine::Collider*  col) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr bool const& __cordl_internal_get_useCustomLayerMask() const;

constexpr bool& __cordl_internal_get_useCustomLayerMask() ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_useCustomLayerMask(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_hasCollision, addr 0x1803e4cc0, size 0xf0, virtual false, abstract: false, final false
inline bool get_hasCollision() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionTracker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionTracker(CollisionTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionTracker(CollisionTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4939};

/// @brief Field useCustomLayerMask, offset: 0x10, size: 0x1, def value: None
 bool  ___useCustomLayerMask;

/// @brief Field layerMask, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field logVerbose, offset: 0x18, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field colliders, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field initialized, offset: 0x28, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CollisionTracker, ___useCustomLayerMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionTracker, ___layerMask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionTracker, ___logVerbose) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionTracker, ___colliders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionTracker, ___initialized) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CollisionTracker) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
