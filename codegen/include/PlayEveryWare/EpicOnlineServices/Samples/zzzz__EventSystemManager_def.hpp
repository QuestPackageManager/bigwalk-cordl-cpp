#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Samples/EventSystemManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EventSystemManager)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices::Samples {
class EventSystemManager;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager*, "PlayEveryWare.EpicOnlineServices.Samples", "EventSystemManager");
// Dependencies UnityEngine.MonoBehaviour
namespace PlayEveryWare::EpicOnlineServices::Samples {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Samples.EventSystemManager
class CORDL_TYPE EventSystemManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field inputManagerPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputManagerPrefab, put=__cordl_internal_set_inputManagerPrefab)) ::UnityW<::UnityEngine::GameObject>  inputManagerPrefab;

/// @brief Field inputSystemPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputSystemPrefab, put=__cordl_internal_set_inputSystemPrefab)) ::UnityW<::UnityEngine::GameObject>  inputSystemPrefab;

/// @brief Method Awake, addr 0x18053ee80, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_inputManagerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_inputManagerPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_inputSystemPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_inputSystemPrefab() ;

constexpr void __cordl_internal_set_inputManagerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_inputSystemPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventSystemManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventSystemManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventSystemManager(EventSystemManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventSystemManager(EventSystemManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18932};

/// @brief Field inputSystemPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___inputSystemPrefab;

/// @brief Field inputManagerPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___inputManagerPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager, ___inputSystemPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager, ___inputManagerPrefab) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Samples::EventSystemManager) == 0x30, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Samples
