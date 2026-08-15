#pragma once
// IWYU pragma private; include "Mirror/SceneInterestManagement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__InterestManagement_def.hpp"
CORDL_MODULE_EXPORT(SceneInterestManagement)
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkIdentity;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace Mirror {
class SceneInterestManagement;
}
// Write type traits
MARK_REF_T(::Mirror::SceneInterestManagement*);
DEFINE_IL2CPP_CLASS(::Mirror::SceneInterestManagement*, "Mirror", "SceneInterestManagement");
// Dependencies Mirror.InterestManagement
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SceneInterestManagement
class CORDL_TYPE SceneInterestManagement : public ::Mirror::InterestManagement {
public:
// Declarations
/// @brief Field dirtyScenes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirtyScenes, put=__cordl_internal_set_dirtyScenes)) ::System::Collections::Generic::HashSet_1<::UnityEngine::SceneManagement::Scene>*  dirtyScenes;

/// @brief Field lastObjectScene, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastObjectScene, put=__cordl_internal_set_lastObjectScene)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityEngine::SceneManagement::Scene>*  lastObjectScene;

/// @brief Field sceneObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneObjects, put=__cordl_internal_set_sceneObjects)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  sceneObjects;

static inline ::Mirror::SceneInterestManagement* New_ctor() ;

/// @brief Method OnCheckObserver, addr 0x18152e1b0, size 0x70, virtual true, abstract: false, final false
inline bool OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver) ;

/// @brief Method OnDestroyed, addr 0x18152e220, size 0x100, virtual true, abstract: false, final false
inline void OnDestroyed(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method OnRebuildObservers, addr 0x18152e320, size 0x120, virtual true, abstract: false, final false
inline void OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers) ;

/// @brief Method OnSpawned, addr 0x18152e440, size 0x130, virtual true, abstract: false, final false
inline void OnSpawned(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method RebuildSceneObservers, addr 0x18152e570, size 0xc0, virtual false, abstract: false, final false
inline void RebuildSceneObservers(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method Update, addr 0x18152e630, size 0x3b0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::SceneManagement::Scene>* const& __cordl_internal_get_dirtyScenes() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::SceneManagement::Scene>*& __cordl_internal_get_dirtyScenes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityEngine::SceneManagement::Scene>* const& __cordl_internal_get_lastObjectScene() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityEngine::SceneManagement::Scene>*& __cordl_internal_get_lastObjectScene() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>* const& __cordl_internal_get_sceneObjects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*& __cordl_internal_get_sceneObjects() ;

constexpr void __cordl_internal_set_dirtyScenes(::System::Collections::Generic::HashSet_1<::UnityEngine::SceneManagement::Scene>*  value) ;

constexpr void __cordl_internal_set_lastObjectScene(::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityEngine::SceneManagement::Scene>*  value) ;

constexpr void __cordl_internal_set_sceneObjects(::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  value) ;

/// @brief Method .ctor, addr 0x18152e9e0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneInterestManagement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneInterestManagement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneInterestManagement(SceneInterestManagement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneInterestManagement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneInterestManagement(SceneInterestManagement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19229};

/// @brief Field sceneObjects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  ___sceneObjects;

/// @brief Field lastObjectScene, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityEngine::SceneManagement::Scene>*  ___lastObjectScene;

/// @brief Field dirtyScenes, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::SceneManagement::Scene>*  ___dirtyScenes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SceneInterestManagement, ___sceneObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::SceneInterestManagement, ___lastObjectScene) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::SceneInterestManagement, ___dirtyScenes) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::SceneInterestManagement) == 0x40, "Size mismatch!");

} // namespace end def Mirror
