#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Basic/BasicAdaptivePerformanceSubsystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__AdaptivePerformanceSubsystem_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__Feature_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__PerformanceDataRecord_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicAdaptivePerformanceSubsystem)
namespace System {
class Version;
}
namespace UnityEngine::AdaptivePerformance::Basic {
class BasicAdaptivePerformanceSubsystem_BasicProvider;
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
namespace UnityEngine::AdaptivePerformance::Basic {
class BasicAdaptivePerformanceSubsystem;
}
namespace UnityEngine::AdaptivePerformance::Basic {
class BasicAdaptivePerformanceSubsystem_BasicProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem*);
MARK_REF_T(::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem*, "UnityEngine.AdaptivePerformance.Basic", "BasicAdaptivePerformanceSubsystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*, "UnityEngine.AdaptivePerformance.Basic", "BasicAdaptivePerformanceSubsystem/BasicProvider");
// Dependencies UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem::APProvider, UnityEngine.AdaptivePerformance.Provider.Feature, UnityEngine.AdaptivePerformance.Provider.PerformanceDataRecord
namespace UnityEngine::AdaptivePerformance::Basic {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.Basic.BasicAdaptivePerformanceSubsystem/BasicProvider
class CORDL_TYPE BasicAdaptivePerformanceSubsystem_BasicProvider : public ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem_APProvider {
public:
// Declarations
 __declspec(property(get=get_ApplicationLifecycle)) ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*  ApplicationLifecycle;

 __declspec(property(get=get_Capabilities, put=set_Capabilities)) ::UnityEngine::AdaptivePerformance::Provider::Feature  Capabilities;

 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

 __declspec(property(get=get_MaxCpuPerformanceLevel)) int32_t  MaxCpuPerformanceLevel;

 __declspec(property(get=get_MaxGpuPerformanceLevel)) int32_t  MaxGpuPerformanceLevel;

 __declspec(property(get=get_PerformanceLevelControl)) ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  PerformanceLevelControl;

 __declspec(property(get=get_Stats)) ::StringW  Stats;

 __declspec(property(get=get_Version)) ::System::Version*  Version;

/// @brief Field <Capabilities>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__Capabilities_k__BackingField, put=__cordl_internal_set__Capabilities_k__BackingField)) ::UnityEngine::AdaptivePerformance::Provider::Feature  _Capabilities_k__BackingField;

/// @brief Field <Initialized>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field m_UpdatedPerfRecord, offset 0x14, size 0x3c 
 __declspec(property(get=__cordl_internal_get_m_UpdatedPerfRecord, put=__cordl_internal_set_m_UpdatedPerfRecord)) ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord  m_UpdatedPerfRecord;

/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle"
constexpr operator  ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*() noexcept;

/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl"
constexpr operator  ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*() noexcept;

/// @brief Method ApplicationPause, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ApplicationPause() ;

/// @brief Method ApplicationResume, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ApplicationResume() ;

/// @brief Method Destroy, addr 0x181e1d0c0, size 0x20, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method EnableCpuBoost, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool EnableCpuBoost() ;

/// @brief Method EnableGpuBoost, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool EnableGpuBoost() ;

static inline ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider* New_ctor() ;

/// @brief Method SetPerformanceLevel, addr 0x182224180, size 0x20, virtual true, abstract: false, final true
inline bool SetPerformanceLevel(::by_ref<int32_t>  cpuLevel, ::by_ref<int32_t>  gpuLevel) ;

/// @brief Method Stop, addr 0x1818762d0, size 0x10, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x1822241a0, size 0x90, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord Update() ;

constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature const& __cordl_internal_get__Capabilities_k__BackingField() const;

constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature& __cordl_internal_get__Capabilities_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord const& __cordl_internal_get_m_UpdatedPerfRecord() const;

constexpr ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord& __cordl_internal_get_m_UpdatedPerfRecord() ;

constexpr void __cordl_internal_set__Capabilities_k__BackingField(::UnityEngine::AdaptivePerformance::Provider::Feature  value) ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_UpdatedPerfRecord(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord  value) ;

/// @brief Method .ctor, addr 0x182224230, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ApplicationLifecycle, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* get_ApplicationLifecycle() ;

/// @brief Method get_Capabilities, addr 0x18039fc60, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::Feature get_Capabilities() ;

/// @brief Method get_Initialized, addr 0x1802e09d0, size 0x10, virtual true, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_MaxCpuPerformanceLevel, addr 0x180393450, size 0x10, virtual true, abstract: false, final true
inline int32_t get_MaxCpuPerformanceLevel() ;

/// @brief Method get_MaxGpuPerformanceLevel, addr 0x180393450, size 0x10, virtual true, abstract: false, final true
inline int32_t get_MaxGpuPerformanceLevel() ;

/// @brief Method get_PerformanceLevelControl, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* get_PerformanceLevelControl() ;

/// @brief Method get_Stats, addr 0x182224270, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Stats() ;

/// @brief Method get_Version, addr 0x182224280, size 0x170, virtual true, abstract: false, final false
inline ::System::Version* get_Version() ;

/// @brief Convert to "::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle"
constexpr ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* i___UnityEngine__AdaptivePerformance__Provider__IApplicationLifecycle() noexcept;

/// @brief Convert to "::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl"
constexpr ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* i___UnityEngine__AdaptivePerformance__Provider__IDevicePerformanceLevelControl() noexcept;

/// @brief Method set_Capabilities, addr 0x1804f67b0, size 0x10, virtual true, abstract: false, final false
inline void set_Capabilities(::UnityEngine::AdaptivePerformance::Provider::Feature  value) ;

/// @brief Method set_Initialized, addr 0x18051e980, size 0x10, virtual true, abstract: false, final false
inline void set_Initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicAdaptivePerformanceSubsystem_BasicProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicAdaptivePerformanceSubsystem_BasicProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicAdaptivePerformanceSubsystem_BasicProvider(BasicAdaptivePerformanceSubsystem_BasicProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicAdaptivePerformanceSubsystem_BasicProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicAdaptivePerformanceSubsystem_BasicProvider(BasicAdaptivePerformanceSubsystem_BasicProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19468};

/// @brief Field m_UpdatedPerfRecord, offset: 0x14, size: 0x3c, def value: None
 ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord  ___m_UpdatedPerfRecord;

/// @brief Field <Initialized>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

/// @brief Field <Capabilities>k__BackingField, offset: 0x54, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::Provider::Feature  ____Capabilities_k__BackingField;

/// @brief Size padding 0x68 - 0x58 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider, ___m_UpdatedPerfRecord) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider, ____Initialized_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider, ____Capabilities_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance::Basic
// Dependencies UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystem
namespace UnityEngine::AdaptivePerformance::Basic {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.Basic.BasicAdaptivePerformanceSubsystem
class CORDL_TYPE BasicAdaptivePerformanceSubsystem : public ::UnityEngine::AdaptivePerformance::Provider::AdaptivePerformanceSubsystem {
public:
// Declarations
using BasicProvider = ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider;

static inline ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicAdaptivePerformanceSubsystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicAdaptivePerformanceSubsystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicAdaptivePerformanceSubsystem(BasicAdaptivePerformanceSubsystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicAdaptivePerformanceSubsystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicAdaptivePerformanceSubsystem(BasicAdaptivePerformanceSubsystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19469};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance::Basic
