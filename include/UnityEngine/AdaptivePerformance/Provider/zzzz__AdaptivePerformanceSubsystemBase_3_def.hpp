#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/AdaptivePerformanceSubsystemBase_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemWithProvider_3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AdaptivePerformanceSubsystemBase_3)
namespace System {
class Version;
}
namespace UnityEngine::AdaptivePerformance::Provider {
struct Feature;
}
namespace UnityEngine::AdaptivePerformance::Provider {
class IApplicationLifecycle;
}
namespace UnityEngine::AdaptivePerformance::Provider {
class IDevicePerformanceLevelControl;
}
namespace UnityEngine::AdaptivePerformance::Provider {
struct PerformanceDataRecord;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance::Provider {
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
class AdaptivePerformanceSubsystemBase_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3, "UnityEngine.AdaptivePerformance.Provider", "AdaptivePerformanceSubsystemBase`3");
// Dependencies UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<TSubsystem, TSubsystemDescriptor, TProvider>
namespace UnityEngine::AdaptivePerformance::Provider {
// cpp template
template<typename TSubsystem,typename TSubsystemDescriptor,typename TProvider>
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemBase`3<TSubsystem,TSubsystemDescriptor,TProvider>
class CORDL_TYPE AdaptivePerformanceSubsystemBase_3 : public ::UnityEngine::SubsystemsImplementation::SubsystemWithProvider_3<TSubsystem,TSubsystemDescriptor,TProvider> {
public:
// Declarations
 __declspec(property(get=get_ApplicationLifecycle)) ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*  ApplicationLifecycle;

 __declspec(property(get=get_Capabilities)) ::UnityEngine::AdaptivePerformance::Provider::Feature  Capabilities;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_PerformanceLevelControl)) ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  PerformanceLevelControl;

 __declspec(property(get=get_Stats)) ::StringW  Stats;

 __declspec(property(get=get_Version)) ::System::Version*  Version;

static inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<TSubsystem,TSubsystemDescriptor,TProvider>* New_ctor() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord Update() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ApplicationLifecycle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* get_ApplicationLifecycle() ;

/// @brief Method get_Capabilities, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::Feature get_Capabilities() ;

/// @brief Method get_Initialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_PerformanceLevelControl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* get_PerformanceLevelControl() ;

/// @brief Method get_Stats, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Stats() ;

/// @brief Method get_Version, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Version* get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceSubsystemBase_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceSubsystemBase_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceSubsystemBase_3(AdaptivePerformanceSubsystemBase_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceSubsystemBase_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceSubsystemBase_3(AdaptivePerformanceSubsystemBase_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AdaptivePerformance::Provider
