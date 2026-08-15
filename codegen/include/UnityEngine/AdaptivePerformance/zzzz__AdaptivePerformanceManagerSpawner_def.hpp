#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceManagerSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AdaptivePerformanceManagerSpawner)
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScalerProfile;
}
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformanceSettings;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceManagerSpawner;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceManagerSpawner");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSpawner
class CORDL_TYPE AdaptivePerformanceManagerSpawner : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_ManagerGameObject)) ::UnityW<::UnityEngine::GameObject>  ManagerGameObject;

/// @brief Field m_ManagerGameObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ManagerGameObject, put=__cordl_internal_set_m_ManagerGameObject)) ::UnityW<::UnityEngine::GameObject>  m_ManagerGameObject;

/// @brief Method Deinitialize, addr 0x182218d90, size 0x50, virtual false, abstract: false, final false
inline void Deinitialize() ;

/// @brief Method Initialize, addr 0x182218de0, size 0x320, virtual false, abstract: false, final false
inline void Initialize(bool  isCheckingProvider) ;

/// @brief Method InstallScalers, addr 0x182219100, size 0x190, virtual false, abstract: false, final false
inline void InstallScalers(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*  profile, ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*  settings) ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner* New_ctor() ;

/// @brief Method OnEnable, addr 0x182219290, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ManagerGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ManagerGameObject() ;

constexpr void __cordl_internal_set_m_ManagerGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ManagerGameObject, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_ManagerGameObject() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceManagerSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceManagerSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceManagerSpawner(AdaptivePerformanceManagerSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceManagerSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceManagerSpawner(AdaptivePerformanceManagerSpawner const& ) = delete;

/// @brief Field AdaptivePerformanceManagerObjectName offset 0xffffffff size 0x8
static constexpr ::ConstString  AdaptivePerformanceManagerObjectName{u"AdaptivePerformanceManager"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19384};

/// @brief Field m_ManagerGameObject, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_ManagerGameObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner, ___m_ManagerGameObject) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSpawner) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
