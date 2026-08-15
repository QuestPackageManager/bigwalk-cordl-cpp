#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraTriggerController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CameraTriggerController)
namespace GlobalNamespace {
class CameraTrigger;
}
namespace GlobalNamespace {
class OcclusionCullingBlockerManager;
}
namespace HouseCulling {
class CullingAgent;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CameraTriggerController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CameraTriggerController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraTriggerController*, "", "CameraTriggerController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CameraTriggerController
class CORDL_TYPE CameraTriggerController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CullingAgent, put=set_CullingAgent)) ::UnityW<::HouseCulling::CullingAgent>  CullingAgent;

 __declspec(property(get=get_OcclusionCullingBlockerManager, put=set_OcclusionCullingBlockerManager)) ::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager>  OcclusionCullingBlockerManager;

/// @brief Field <CullingAgent>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__CullingAgent_k__BackingField, put=__cordl_internal_set__CullingAgent_k__BackingField)) ::UnityW<::HouseCulling::CullingAgent>  _CullingAgent_k__BackingField;

/// @brief Field <OcclusionCullingBlockerManager>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__OcclusionCullingBlockerManager_k__BackingField, put=__cordl_internal_set__OcclusionCullingBlockerManager_k__BackingField)) ::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager>  _OcclusionCullingBlockerManager_k__BackingField;

/// @brief Field _triggerDictionary, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerDictionary, put=__cordl_internal_set__triggerDictionary)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CameraTrigger>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*  _triggerDictionary;

/// @brief Method Awake, addr 0x1803e33b0, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::CameraTriggerController* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x1803e3400, size 0x210, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x1803e3610, size 0x120, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method RemoveTrigger, addr 0x1803e3730, size 0xe0, virtual false, abstract: false, final false
inline void RemoveTrigger(::GlobalNamespace::CameraTrigger*  trigger) ;

/// @brief Method TriggerOnRemove, addr 0x1803e3810, size 0x1c0, virtual false, abstract: false, final false
inline void TriggerOnRemove(::GlobalNamespace::CameraTrigger*  trigger) ;

constexpr ::UnityW<::HouseCulling::CullingAgent> const& __cordl_internal_get__CullingAgent_k__BackingField() const;

constexpr ::UnityW<::HouseCulling::CullingAgent>& __cordl_internal_get__CullingAgent_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager> const& __cordl_internal_get__OcclusionCullingBlockerManager_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager>& __cordl_internal_get__OcclusionCullingBlockerManager_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CameraTrigger>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>* const& __cordl_internal_get__triggerDictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CameraTrigger>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*& __cordl_internal_get__triggerDictionary() ;

constexpr void __cordl_internal_set__CullingAgent_k__BackingField(::UnityW<::HouseCulling::CullingAgent>  value) ;

constexpr void __cordl_internal_set__OcclusionCullingBlockerManager_k__BackingField(::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager>  value) ;

constexpr void __cordl_internal_set__triggerDictionary(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CameraTrigger>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*  value) ;

/// @brief Method .ctor, addr 0x1803e39d0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CullingAgent, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::HouseCulling::CullingAgent> get_CullingAgent() ;

/// @brief Method get_OcclusionCullingBlockerManager, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager> get_OcclusionCullingBlockerManager() ;

/// @brief Method set_CullingAgent, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_CullingAgent(::HouseCulling::CullingAgent*  value) ;

/// @brief Method set_OcclusionCullingBlockerManager, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_OcclusionCullingBlockerManager(::GlobalNamespace::OcclusionCullingBlockerManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraTriggerController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraTriggerController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraTriggerController(CameraTriggerController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraTriggerController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraTriggerController(CameraTriggerController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4978};

/// @brief Field <CullingAgent>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::HouseCulling::CullingAgent>  ____CullingAgent_k__BackingField;

/// @brief Field <OcclusionCullingBlockerManager>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager>  ____OcclusionCullingBlockerManager_k__BackingField;

/// @brief Field _triggerDictionary, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CameraTrigger>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*  ____triggerDictionary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraTriggerController, ____CullingAgent_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraTriggerController, ____OcclusionCullingBlockerManager_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraTriggerController, ____triggerDictionary) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraTriggerController) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
