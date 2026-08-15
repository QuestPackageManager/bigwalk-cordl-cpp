#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/AdaptivePerformanceSubsystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__AdaptivePerformanceSubsystemBase_3_def.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemProvider_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AdaptivePerformanceSubsystem)
namespace System {
class Version;
}
namespace UnityEngine::AdaptivePerformance::Provider {
class AdaptivePerformanceSubsystemDescriptor;
}
namespace UnityEngine::AdaptivePerformance::Provider {
class AdaptivePerformanceSubsystem_APProvider;
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
class AdaptivePerformanceSubsystem;
}
namespace UnityEngine::AdaptivePerformance::Provider {
class AdaptivePerformanceSubsystem_APProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*);
MARK_REF_T(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem_APProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*, "UnityEngine.AdaptivePerformance.Provider", "AdaptivePerformanceSubsystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem_APProvider*, "UnityEngine.AdaptivePerformance.Provider", "AdaptivePerformanceSubsystem/APProvider");
// Dependencies UnityEngine.SubsystemsImplementation.SubsystemProvider`1<TSubsystem>
namespace UnityEngine::AdaptivePerformance::Provider {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem/APProvider
class CORDL_TYPE AdaptivePerformanceSubsystem_APProvider : public ::UnityEngine::SubsystemsImplementation::SubsystemProvider_1<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*> {
public:
// Declarations
 __declspec(property(get=get_ApplicationLifecycle)) ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*  ApplicationLifecycle;

 __declspec(property(get=get_Capabilities, put=set_Capabilities)) ::UnityEngine::AdaptivePerformance::Provider::Feature  Capabilities;

 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

 __declspec(property(get=get_PerformanceLevelControl)) ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  PerformanceLevelControl;

 __declspec(property(get=get_Stats)) ::StringW  Stats;

 __declspec(property(get=get_Version)) ::System::Version*  Version;

/// @brief Field m_Running, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Running, put=__cordl_internal_set_m_Running)) bool  m_Running;

static inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem_APProvider* New_ctor() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord Update() ;

constexpr bool const& __cordl_internal_get_m_Running() const;

constexpr bool& __cordl_internal_get_m_Running() ;

constexpr void __cordl_internal_set_m_Running(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ApplicationLifecycle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* get_ApplicationLifecycle() ;

/// @brief Method get_Capabilities, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::Feature get_Capabilities() ;

/// @brief Method get_Initialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_PerformanceLevelControl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* get_PerformanceLevelControl() ;

/// @brief Method get_Stats, addr 0x18146d2d0, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_Stats() ;

/// @brief Method get_Version, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Version* get_Version() ;

/// @brief Method set_Capabilities, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Capabilities(::UnityEngine::AdaptivePerformance::Provider::Feature  value) ;

/// @brief Method set_Initialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceSubsystem_APProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceSubsystem_APProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceSubsystem_APProvider(AdaptivePerformanceSubsystem_APProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceSubsystem_APProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceSubsystem_APProvider(AdaptivePerformanceSubsystem_APProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19462};

/// @brief Field m_Running, offset: 0x11, size: 0x1, def value: None
 bool  ___m_Running;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem_APProvider, ___m_Running) == 0x11, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem_APProvider) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance::Provider
// Dependencies UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemBase`3<TSubsystem, TSubsystemDescriptor, TProvider>
namespace UnityEngine::AdaptivePerformance::Provider {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem
class CORDL_TYPE AdaptivePerformanceSubsystem : public ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemBase_3<::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem*,::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystemDescriptor*,::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem_APProvider*> {
public:
// Declarations
using APProvider = ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem_APProvider;

 __declspec(property(get=get_ApplicationLifecycle)) ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*  ApplicationLifecycle;

 __declspec(property(get=get_Capabilities)) ::UnityEngine::AdaptivePerformance::Provider::Feature  Capabilities;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_PerformanceLevelControl)) ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  PerformanceLevelControl;

 __declspec(property(get=get_Stats)) ::StringW  Stats;

 __declspec(property(get=get_Version)) ::System::Version*  Version;

static inline ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem* New_ctor() ;

/// @brief Method Update, addr 0x1822232b0, size 0x60, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord Update() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ApplicationLifecycle, addr 0x181d38dc0, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* get_ApplicationLifecycle() ;

/// @brief Method get_Capabilities, addr 0x182223310, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::Feature get_Capabilities() ;

/// @brief Method get_Initialized, addr 0x181cdfef0, size 0x20, virtual true, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_PerformanceLevelControl, addr 0x181dadc70, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* get_PerformanceLevelControl() ;

/// @brief Method get_Stats, addr 0x181d38e00, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_Stats() ;

/// @brief Method get_Version, addr 0x181d38de0, size 0x20, virtual true, abstract: false, final false
inline ::System::Version* get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceSubsystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceSubsystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceSubsystem(AdaptivePerformanceSubsystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceSubsystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceSubsystem(AdaptivePerformanceSubsystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance::Provider
