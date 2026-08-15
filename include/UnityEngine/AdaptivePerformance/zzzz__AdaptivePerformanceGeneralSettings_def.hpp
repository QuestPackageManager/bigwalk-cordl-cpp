#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceGeneralSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AdaptivePerformanceGeneralSettings)
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceManagerSettings;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceGeneralSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceGeneralSettings");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceGeneralSettings
class CORDL_TYPE AdaptivePerformanceGeneralSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_AssignedSettings, put=set_AssignedSettings)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  AssignedSettings;

 __declspec(property(get=get_InitManagerOnStart, put=set_InitManagerOnStart)) bool  InitManagerOnStart;

 __declspec(property(get=get_IsProviderInitialized)) bool  IsProviderInitialized;

 __declspec(property(get=get_IsProviderStarted)) bool  IsProviderStarted;

 __declspec(property(get=get_Manager, put=set_Manager)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  Manager;

/// @brief Field k_SettingsKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_SettingsKey, put=setStaticF_k_SettingsKey)) ::StringW  k_SettingsKey;

/// @brief Field m_AdaptivePerformanceManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdaptivePerformanceManager, put=__cordl_internal_set_m_AdaptivePerformanceManager)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  m_AdaptivePerformanceManager;

/// @brief Field m_InitManagerOnStart, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InitManagerOnStart, put=__cordl_internal_set_m_InitManagerOnStart)) bool  m_InitManagerOnStart;

/// @brief Field m_LastSelectedProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastSelectedProvider, put=__cordl_internal_set_m_LastSelectedProvider)) ::StringW  m_LastSelectedProvider;

/// @brief Field m_LoaderManagerInstance, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoaderManagerInstance, put=__cordl_internal_set_m_LoaderManagerInstance)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  m_LoaderManagerInstance;

/// @brief Field m_ProviderIntialized, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ProviderIntialized, put=__cordl_internal_set_m_ProviderIntialized)) bool  m_ProviderIntialized;

/// @brief Field m_ProviderStarted, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ProviderStarted, put=__cordl_internal_set_m_ProviderStarted)) bool  m_ProviderStarted;

/// @brief Field s_RuntimeSettingsInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RuntimeSettingsInstance, put=setStaticF_s_RuntimeSettingsInstance)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings>  s_RuntimeSettingsInstance;

/// @brief Method AttemptInitializeAdaptivePerformanceGeneralSettingsOnLoad, addr 0x182216900, size 0x50, virtual false, abstract: false, final false
static inline void AttemptInitializeAdaptivePerformanceGeneralSettingsOnLoad() ;

/// @brief Method AttemptStartAdaptivePerformanceGeneralSettingsOnBeforeSplashScreen, addr 0x182216950, size 0x50, virtual false, abstract: false, final false
static inline void AttemptStartAdaptivePerformanceGeneralSettingsOnBeforeSplashScreen() ;

/// @brief Method Awake, addr 0x1822169a0, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeInitAdaptivePerformance, addr 0x182216a20, size 0x60, virtual false, abstract: false, final false
inline void DeInitAdaptivePerformance() ;

/// @brief Method InitAdaptivePerformance, addr 0x182216a80, size 0x200, virtual false, abstract: false, final false
inline void InitAdaptivePerformance() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings* New_ctor() ;

/// @brief Method OnDestroy, addr 0x182216c80, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Quit, addr 0x182216d10, size 0x80, virtual false, abstract: false, final false
static inline void Quit() ;

/// @brief Method StartAdaptivePerformance, addr 0x182216d90, size 0xc0, virtual false, abstract: false, final false
inline void StartAdaptivePerformance() ;

/// @brief Method StopAdaptivePerformance, addr 0x182216e50, size 0xc0, virtual false, abstract: false, final false
inline void StopAdaptivePerformance() ;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings> const& __cordl_internal_get_m_AdaptivePerformanceManager() const;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>& __cordl_internal_get_m_AdaptivePerformanceManager() ;

constexpr bool const& __cordl_internal_get_m_InitManagerOnStart() const;

constexpr bool& __cordl_internal_get_m_InitManagerOnStart() ;

constexpr ::StringW const& __cordl_internal_get_m_LastSelectedProvider() const;

constexpr ::StringW& __cordl_internal_get_m_LastSelectedProvider() ;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings> const& __cordl_internal_get_m_LoaderManagerInstance() const;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>& __cordl_internal_get_m_LoaderManagerInstance() ;

constexpr bool const& __cordl_internal_get_m_ProviderIntialized() const;

constexpr bool& __cordl_internal_get_m_ProviderIntialized() ;

constexpr bool const& __cordl_internal_get_m_ProviderStarted() const;

constexpr bool& __cordl_internal_get_m_ProviderStarted() ;

constexpr void __cordl_internal_set_m_AdaptivePerformanceManager(::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  value) ;

constexpr void __cordl_internal_set_m_InitManagerOnStart(bool  value) ;

constexpr void __cordl_internal_set_m_LastSelectedProvider(::StringW  value) ;

constexpr void __cordl_internal_set_m_LoaderManagerInstance(::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  value) ;

constexpr void __cordl_internal_set_m_ProviderIntialized(bool  value) ;

constexpr void __cordl_internal_set_m_ProviderStarted(bool  value) ;

/// @brief Method .ctor, addr 0x182216f80, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_k_SettingsKey() ;

static inline ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings> getStaticF_s_RuntimeSettingsInstance() ;

/// @brief Method get_AssignedSettings, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings> get_AssignedSettings() ;

/// @brief Method get_InitManagerOnStart, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_InitManagerOnStart() ;

/// @brief Method get_Instance, addr 0x182216ff0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings> get_Instance() ;

/// @brief Method get_IsProviderInitialized, addr 0x1803023c0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsProviderInitialized() ;

/// @brief Method get_IsProviderStarted, addr 0x18049a520, size 0x10, virtual false, abstract: false, final false
inline bool get_IsProviderStarted() ;

/// @brief Method get_Manager, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings> get_Manager() ;

static inline void setStaticF_k_SettingsKey(::StringW  value) ;

static inline void setStaticF_s_RuntimeSettingsInstance(::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings>  value) ;

/// @brief Method set_AssignedSettings, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_AssignedSettings(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings*  value) ;

/// @brief Method set_InitManagerOnStart, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_InitManagerOnStart(bool  value) ;

/// @brief Method set_Instance, addr 0x182217010, size 0x30, virtual false, abstract: false, final false
static inline void set_Instance(::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings*  value) ;

/// @brief Method set_Manager, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_Manager(::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceGeneralSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceGeneralSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceGeneralSettings(AdaptivePerformanceGeneralSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceGeneralSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceGeneralSettings(AdaptivePerformanceGeneralSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19427};

/// @brief Field m_LoaderManagerInstance, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  ___m_LoaderManagerInstance;

/// @brief Field m_InitManagerOnStart, offset: 0x20, size: 0x1, def value: None
 bool  ___m_InitManagerOnStart;

/// @brief Field m_LastSelectedProvider, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___m_LastSelectedProvider;

/// @brief Field m_AdaptivePerformanceManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceManagerSettings>  ___m_AdaptivePerformanceManager;

/// @brief Field m_ProviderIntialized, offset: 0x38, size: 0x1, def value: None
 bool  ___m_ProviderIntialized;

/// @brief Field m_ProviderStarted, offset: 0x39, size: 0x1, def value: None
 bool  ___m_ProviderStarted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings, ___m_LoaderManagerInstance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings, ___m_InitManagerOnStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings, ___m_LastSelectedProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings, ___m_AdaptivePerformanceManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings, ___m_ProviderIntialized) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings, ___m_ProviderStarted) == 0x39, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceGeneralSettings) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
