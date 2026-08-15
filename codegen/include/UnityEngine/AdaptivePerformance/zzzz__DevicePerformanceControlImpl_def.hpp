#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/DevicePerformanceControlImpl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceControlMode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DevicePerformanceControlImpl)
namespace UnityEngine::AdaptivePerformance::Provider {
class IDevicePerformanceLevelControl;
}
namespace UnityEngine::AdaptivePerformance {
class IDevicePerformanceControl;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceControlMode;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceLevelChangeEventArgs;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class DevicePerformanceControlImpl;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*, "UnityEngine.AdaptivePerformance", "DevicePerformanceControlImpl");
// Dependencies System.Object, UnityEngine.AdaptivePerformance.PerformanceControlMode
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.DevicePerformanceControlImpl
class CORDL_TYPE DevicePerformanceControlImpl : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CpuLevel, put=set_CpuLevel)) int32_t  CpuLevel;

 __declspec(property(get=get_CpuPerformanceBoost, put=set_CpuPerformanceBoost)) bool  CpuPerformanceBoost;

 __declspec(property(get=get_CurrentCpuLevel, put=set_CurrentCpuLevel)) int32_t  CurrentCpuLevel;

 __declspec(property(get=get_CurrentGpuLevel, put=set_CurrentGpuLevel)) int32_t  CurrentGpuLevel;

 __declspec(property(get=get_GpuLevel, put=set_GpuLevel)) int32_t  GpuLevel;

 __declspec(property(get=get_GpuPerformanceBoost, put=set_GpuPerformanceBoost)) bool  GpuPerformanceBoost;

 __declspec(property(get=get_MaxCpuPerformanceLevel)) int32_t  MaxCpuPerformanceLevel;

 __declspec(property(get=get_MaxGpuPerformanceLevel)) int32_t  MaxGpuPerformanceLevel;

 __declspec(property(get=get_PerformanceControlMode, put=set_PerformanceControlMode)) ::UnityEngine::AdaptivePerformance::PerformanceControlMode  PerformanceControlMode;

/// @brief Field <CpuLevel>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CpuLevel_k__BackingField, put=__cordl_internal_set__CpuLevel_k__BackingField)) int32_t  _CpuLevel_k__BackingField;

/// @brief Field <CpuPerformanceBoost>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__CpuPerformanceBoost_k__BackingField, put=__cordl_internal_set__CpuPerformanceBoost_k__BackingField)) bool  _CpuPerformanceBoost_k__BackingField;

/// @brief Field <CurrentCpuLevel>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentCpuLevel_k__BackingField, put=__cordl_internal_set__CurrentCpuLevel_k__BackingField)) int32_t  _CurrentCpuLevel_k__BackingField;

/// @brief Field <CurrentGpuLevel>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentGpuLevel_k__BackingField, put=__cordl_internal_set__CurrentGpuLevel_k__BackingField)) int32_t  _CurrentGpuLevel_k__BackingField;

/// @brief Field <GpuLevel>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__GpuLevel_k__BackingField, put=__cordl_internal_set__GpuLevel_k__BackingField)) int32_t  _GpuLevel_k__BackingField;

/// @brief Field <GpuPerformanceBoost>k__BackingField, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get__GpuPerformanceBoost_k__BackingField, put=__cordl_internal_set__GpuPerformanceBoost_k__BackingField)) bool  _GpuPerformanceBoost_k__BackingField;

/// @brief Field <PerformanceControlMode>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__PerformanceControlMode_k__BackingField, put=__cordl_internal_set__PerformanceControlMode_k__BackingField)) ::UnityEngine::AdaptivePerformance::PerformanceControlMode  _PerformanceControlMode_k__BackingField;

/// @brief Field m_PerformanceLevelControl, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PerformanceLevelControl, put=__cordl_internal_set_m_PerformanceLevelControl)) ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  m_PerformanceLevelControl;

/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IDevicePerformanceControl"
constexpr operator  ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*() noexcept;

/// @brief Method ComputeDelta, addr 0x182221050, size 0x30, virtual false, abstract: false, final false
inline int32_t ComputeDelta(int32_t  oldLevel, int32_t  newLevel) ;

static inline ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl* New_ctor(::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  performanceLevelControl) ;

/// @brief Method Update, addr 0x182221080, size 0x2a0, virtual false, abstract: false, final false
inline bool Update(::by_ref<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs>  changeArgs) ;

constexpr int32_t const& __cordl_internal_get__CpuLevel_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CpuLevel_k__BackingField() ;

constexpr bool const& __cordl_internal_get__CpuPerformanceBoost_k__BackingField() const;

constexpr bool& __cordl_internal_get__CpuPerformanceBoost_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CurrentCpuLevel_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentCpuLevel_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CurrentGpuLevel_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentGpuLevel_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__GpuLevel_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__GpuLevel_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GpuPerformanceBoost_k__BackingField() const;

constexpr bool& __cordl_internal_get__GpuPerformanceBoost_k__BackingField() ;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceControlMode const& __cordl_internal_get__PerformanceControlMode_k__BackingField() const;

constexpr ::UnityEngine::AdaptivePerformance::PerformanceControlMode& __cordl_internal_get__PerformanceControlMode_k__BackingField() ;

constexpr ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* const& __cordl_internal_get_m_PerformanceLevelControl() const;

constexpr ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*& __cordl_internal_get_m_PerformanceLevelControl() ;

constexpr void __cordl_internal_set__CpuLevel_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CpuPerformanceBoost_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CurrentCpuLevel_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentGpuLevel_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__GpuLevel_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__GpuPerformanceBoost_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PerformanceControlMode_k__BackingField(::UnityEngine::AdaptivePerformance::PerformanceControlMode  value) ;

constexpr void __cordl_internal_set_m_PerformanceLevelControl(::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  value) ;

/// @brief Method .ctor, addr 0x182221320, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  performanceLevelControl) ;

/// @brief Method get_CpuLevel, addr 0x1802f42c0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_CpuLevel() ;

/// @brief Method get_CpuPerformanceBoost, addr 0x18049ec50, size 0x10, virtual true, abstract: false, final true
inline bool get_CpuPerformanceBoost() ;

/// @brief Method get_CurrentCpuLevel, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CurrentCpuLevel() ;

/// @brief Method get_CurrentGpuLevel, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CurrentGpuLevel() ;

/// @brief Method get_GpuLevel, addr 0x180396ee0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_GpuLevel() ;

/// @brief Method get_GpuPerformanceBoost, addr 0x18049ec40, size 0x10, virtual true, abstract: false, final true
inline bool get_GpuPerformanceBoost() ;

/// @brief Method get_MaxCpuPerformanceLevel, addr 0x182221360, size 0x30, virtual true, abstract: false, final true
inline int32_t get_MaxCpuPerformanceLevel() ;

/// @brief Method get_MaxGpuPerformanceLevel, addr 0x182221390, size 0x30, virtual true, abstract: false, final true
inline int32_t get_MaxGpuPerformanceLevel() ;

/// @brief Method get_PerformanceControlMode, addr 0x1802f41a0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::AdaptivePerformance::PerformanceControlMode get_PerformanceControlMode() ;

/// @brief Convert to "::UnityEngine::AdaptivePerformance::IDevicePerformanceControl"
constexpr ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl* i___UnityEngine__AdaptivePerformance__IDevicePerformanceControl() noexcept;

/// @brief Method set_CpuLevel, addr 0x1802f43d0, size 0x10, virtual true, abstract: false, final true
inline void set_CpuLevel(int32_t  value) ;

/// @brief Method set_CpuPerformanceBoost, addr 0x18049ec70, size 0x10, virtual true, abstract: false, final true
inline void set_CpuPerformanceBoost(bool  value) ;

/// @brief Method set_CurrentCpuLevel, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentCpuLevel(int32_t  value) ;

/// @brief Method set_CurrentGpuLevel, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentGpuLevel(int32_t  value) ;

/// @brief Method set_GpuLevel, addr 0x1803164e0, size 0x10, virtual true, abstract: false, final true
inline void set_GpuLevel(int32_t  value) ;

/// @brief Method set_GpuPerformanceBoost, addr 0x18049ec60, size 0x10, virtual true, abstract: false, final true
inline void set_GpuPerformanceBoost(bool  value) ;

/// @brief Method set_PerformanceControlMode, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_PerformanceControlMode(::UnityEngine::AdaptivePerformance::PerformanceControlMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevicePerformanceControlImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevicePerformanceControlImpl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DevicePerformanceControlImpl(DevicePerformanceControlImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevicePerformanceControlImpl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevicePerformanceControlImpl(DevicePerformanceControlImpl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19389};

/// @brief Field m_PerformanceLevelControl, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  ___m_PerformanceLevelControl;

/// @brief Field <PerformanceControlMode>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceControlMode  ____PerformanceControlMode_k__BackingField;

/// @brief Field <CpuLevel>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____CpuLevel_k__BackingField;

/// @brief Field <GpuLevel>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____GpuLevel_k__BackingField;

/// @brief Field <CurrentCpuLevel>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____CurrentCpuLevel_k__BackingField;

/// @brief Field <CurrentGpuLevel>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____CurrentGpuLevel_k__BackingField;

/// @brief Field <CpuPerformanceBoost>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____CpuPerformanceBoost_k__BackingField;

/// @brief Field <GpuPerformanceBoost>k__BackingField, offset: 0x2d, size: 0x1, def value: None
 bool  ____GpuPerformanceBoost_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl, ___m_PerformanceLevelControl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl, ____PerformanceControlMode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl, ____CpuLevel_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl, ____GpuLevel_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl, ____CurrentCpuLevel_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl, ____CurrentGpuLevel_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl, ____CpuPerformanceBoost_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl, ____GpuPerformanceBoost_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
