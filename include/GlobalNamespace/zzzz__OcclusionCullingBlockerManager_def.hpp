#pragma once
// IWYU pragma private; include "GlobalNamespace/OcclusionCullingBlockerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OcclusionCullingBlockerManager)
namespace GlobalNamespace {
class OcclusionCullingBlocker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class OcclusionCullingBlockerManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OcclusionCullingBlockerManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OcclusionCullingBlockerManager*, "", "OcclusionCullingBlockerManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OcclusionCullingBlockerManager
class CORDL_TYPE OcclusionCullingBlockerManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _blockers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__blockers, put=__cordl_internal_set__blockers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OcclusionCullingBlocker>>*  _blockers;

/// @brief Field _camera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Method AddBlocker, addr 0x1803edcb0, size 0xe0, virtual false, abstract: false, final false
inline void AddBlocker(::GlobalNamespace::OcclusionCullingBlocker*  blocker) ;

static inline ::GlobalNamespace::OcclusionCullingBlockerManager* New_ctor() ;

/// @brief Method Refresh, addr 0x1803edd90, size 0x40, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method RemoveBlocker, addr 0x1803eddd0, size 0x50, virtual false, abstract: false, final false
inline void RemoveBlocker(::GlobalNamespace::OcclusionCullingBlocker*  blocker) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OcclusionCullingBlocker>>* const& __cordl_internal_get__blockers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OcclusionCullingBlocker>>*& __cordl_internal_get__blockers() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr void __cordl_internal_set__blockers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OcclusionCullingBlocker>>*  value) ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x1803ede20, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionCullingBlockerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingBlockerManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcclusionCullingBlockerManager(OcclusionCullingBlockerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingBlockerManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcclusionCullingBlockerManager(OcclusionCullingBlockerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4974};

/// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

/// @brief Field _blockers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OcclusionCullingBlocker>>*  ____blockers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OcclusionCullingBlockerManager, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OcclusionCullingBlockerManager, ____blockers) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OcclusionCullingBlockerManager) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
