#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SkyManager)
namespace GlobalNamespace {
class SkyGradientSet;
}
namespace GlobalNamespace {
struct SkyManager_ClockPeriod;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct SkyManager_ClockPeriod;
}
namespace GlobalNamespace {
class SkyManager;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SkyManager_ClockPeriod);
MARK_REF_T(::GlobalNamespace::SkyManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyManager_ClockPeriod, "", "SkyManager/ClockPeriod");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyManager*, "", "SkyManager");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SkyManager/ClockPeriod
struct CORDL_TYPE SkyManager_ClockPeriod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SkyManager_ClockPeriod_Unwrapped
enum struct __SkyManager_ClockPeriod_Unwrapped : int32_t {
__E_Am = static_cast<int32_t>(0x0),
__E_Pm = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SkyManager_ClockPeriod_Unwrapped () const noexcept {
return static_cast<__SkyManager_ClockPeriod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SkyManager_ClockPeriod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SkyManager_ClockPeriod(int32_t  value__) noexcept;

/// @brief Field Am value: I32(0)
static ::GlobalNamespace::SkyManager_ClockPeriod const Am;

/// @brief Field Pm value: I32(1)
static ::GlobalNamespace::SkyManager_ClockPeriod const Pm;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyManager_ClockPeriod, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyManager_ClockPeriod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies SkyManager::ClockPeriod, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkyManager
class CORDL_TYPE SkyManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ClockPeriod = ::GlobalNamespace::SkyManager_ClockPeriod;

/// @brief Field OnEnviroInstanceFound, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnEnviroInstanceFound, put=setStaticF_OnEnviroInstanceFound)) ::System::Action*  OnEnviroInstanceFound;

/// @brief Field SkyGradientSet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SkyGradientSet, put=__cordl_internal_set_SkyGradientSet)) ::UnityW<::GlobalNamespace::SkyGradientSet>  SkyGradientSet;

/// @brief Field clockPeriod, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_clockPeriod, put=__cordl_internal_set_clockPeriod)) ::GlobalNamespace::SkyManager_ClockPeriod  clockPeriod;

/// @brief Field cloudAmplitude, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudAmplitude, put=__cordl_internal_set_cloudAmplitude)) float_t  cloudAmplitude;

/// @brief Field cloudMiddle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudMiddle, put=__cordl_internal_set_cloudMiddle)) float_t  cloudMiddle;

/// @brief Field cloudSyncBroken, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_cloudSyncBroken, put=setStaticF_cloudSyncBroken)) bool  cloudSyncBroken;

/// @brief Field cloudWavelength, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudWavelength, put=__cordl_internal_set_cloudWavelength)) float_t  cloudWavelength;

/// @brief Field defaultCloudsSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultCloudsSpeed, put=setStaticF_defaultCloudsSpeed)) float_t  defaultCloudsSpeed;

/// @brief Field defaultFlatCloudsSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultFlatCloudsSpeed, put=setStaticF_defaultFlatCloudsSpeed)) float_t  defaultFlatCloudsSpeed;

/// @brief Field flatCloudAmplitude, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudAmplitude, put=__cordl_internal_set_flatCloudAmplitude)) float_t  flatCloudAmplitude;

/// @brief Field flatCloudMiddle, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudMiddle, put=__cordl_internal_set_flatCloudMiddle)) float_t  flatCloudMiddle;

/// @brief Field initalized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_initalized, put=setStaticF_initalized)) bool  initalized;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::SkyManager>  instance;

/// @brief Field lockCloudSin, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_lockCloudSin, put=__cordl_internal_set_lockCloudSin)) bool  lockCloudSin;

/// @brief Field lockedCloudSin, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_lockedCloudSin, put=__cordl_internal_set_lockedCloudSin)) float_t  lockedCloudSin;

/// @brief Field logVerbose, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field useCustomCloudCoverage, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomCloudCoverage, put=__cordl_internal_set_useCustomCloudCoverage)) bool  useCustomCloudCoverage;

/// @brief Field useTimePeriodSettings, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTimePeriodSettings, put=__cordl_internal_set_useTimePeriodSettings)) bool  useTimePeriodSettings;

/// @brief Method Awake, addr 0x1804292d0, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearFixedTime, addr 0x180429400, size 0x40, virtual false, abstract: false, final false
static inline void ClearFixedTime() ;

/// @brief Method GetCurrentTime, addr 0x180429440, size 0x50, virtual false, abstract: false, final false
static inline float_t GetCurrentTime() ;

static inline ::GlobalNamespace::SkyManager* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x180429490, size 0xb0, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  isFocused) ;

/// @brief Method OnDestroy, addr 0x180429540, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetClockPeriod, addr 0x180429560, size 0x50, virtual false, abstract: false, final false
inline void SetClockPeriod(::GlobalNamespace::SkyManager_ClockPeriod  newClockPeriod) ;

/// @brief Method SetCloudSpeed, addr 0x1804295b0, size 0x1a0, virtual false, abstract: false, final false
static inline void SetCloudSpeed(float_t  speed) ;

/// @brief Method SetFixedTime, addr 0x180429750, size 0x40, virtual false, abstract: false, final false
static inline void SetFixedTime() ;

/// @brief Method SetFixedTime, addr 0x180429790, size 0x90, virtual false, abstract: false, final false
static inline void SetFixedTime(float_t  time) ;

/// @brief Method SyncCloudsBasedOnNetworkTime, addr 0x180429820, size 0x2f0, virtual false, abstract: false, final false
static inline void SyncCloudsBasedOnNetworkTime(double_t  networkTime) ;

/// @brief Method Update, addr 0x180429b10, size 0x1e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::SkyGradientSet> const& __cordl_internal_get_SkyGradientSet() const;

constexpr ::UnityW<::GlobalNamespace::SkyGradientSet>& __cordl_internal_get_SkyGradientSet() ;

constexpr ::GlobalNamespace::SkyManager_ClockPeriod const& __cordl_internal_get_clockPeriod() const;

constexpr ::GlobalNamespace::SkyManager_ClockPeriod& __cordl_internal_get_clockPeriod() ;

constexpr float_t const& __cordl_internal_get_cloudAmplitude() const;

constexpr float_t& __cordl_internal_get_cloudAmplitude() ;

constexpr float_t const& __cordl_internal_get_cloudMiddle() const;

constexpr float_t& __cordl_internal_get_cloudMiddle() ;

constexpr float_t const& __cordl_internal_get_cloudWavelength() const;

constexpr float_t& __cordl_internal_get_cloudWavelength() ;

constexpr float_t const& __cordl_internal_get_flatCloudAmplitude() const;

constexpr float_t& __cordl_internal_get_flatCloudAmplitude() ;

constexpr float_t const& __cordl_internal_get_flatCloudMiddle() const;

constexpr float_t& __cordl_internal_get_flatCloudMiddle() ;

constexpr bool const& __cordl_internal_get_lockCloudSin() const;

constexpr bool& __cordl_internal_get_lockCloudSin() ;

constexpr float_t const& __cordl_internal_get_lockedCloudSin() const;

constexpr float_t& __cordl_internal_get_lockedCloudSin() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr bool const& __cordl_internal_get_useCustomCloudCoverage() const;

constexpr bool& __cordl_internal_get_useCustomCloudCoverage() ;

constexpr bool const& __cordl_internal_get_useTimePeriodSettings() const;

constexpr bool& __cordl_internal_get_useTimePeriodSettings() ;

constexpr void __cordl_internal_set_SkyGradientSet(::UnityW<::GlobalNamespace::SkyGradientSet>  value) ;

constexpr void __cordl_internal_set_clockPeriod(::GlobalNamespace::SkyManager_ClockPeriod  value) ;

constexpr void __cordl_internal_set_cloudAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_cloudMiddle(float_t  value) ;

constexpr void __cordl_internal_set_cloudWavelength(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudMiddle(float_t  value) ;

constexpr void __cordl_internal_set_lockCloudSin(bool  value) ;

constexpr void __cordl_internal_set_lockedCloudSin(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_useCustomCloudCoverage(bool  value) ;

constexpr void __cordl_internal_set_useTimePeriodSettings(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnEnviroInstanceFound, addr 0x180429cf0, size 0x90, virtual false, abstract: false, final false
static inline void add_OnEnviroInstanceFound(::System::Action*  value) ;

static inline ::System::Action* getStaticF_OnEnviroInstanceFound() ;

static inline bool getStaticF_cloudSyncBroken() ;

static inline float_t getStaticF_defaultCloudsSpeed() ;

static inline float_t getStaticF_defaultFlatCloudsSpeed() ;

static inline bool getStaticF_initalized() ;

static inline ::UnityW<::GlobalNamespace::SkyManager> getStaticF_instance() ;

/// @brief Method remove_OnEnviroInstanceFound, addr 0x180429d80, size 0x90, virtual false, abstract: false, final false
static inline void remove_OnEnviroInstanceFound(::System::Action*  value) ;

static inline void setStaticF_OnEnviroInstanceFound(::System::Action*  value) ;

static inline void setStaticF_cloudSyncBroken(bool  value) ;

static inline void setStaticF_defaultCloudsSpeed(float_t  value) ;

static inline void setStaticF_defaultFlatCloudsSpeed(float_t  value) ;

static inline void setStaticF_initalized(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::SkyManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkyManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkyManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkyManager(SkyManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkyManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkyManager(SkyManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5198};

/// @brief Field SkyGradientSet, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SkyGradientSet>  ___SkyGradientSet;

/// @brief Field useTimePeriodSettings, offset: 0x28, size: 0x1, def value: None
 bool  ___useTimePeriodSettings;

/// @brief Field useCustomCloudCoverage, offset: 0x29, size: 0x1, def value: None
 bool  ___useCustomCloudCoverage;

/// @brief Field cloudWavelength, offset: 0x2c, size: 0x4, def value: None
 float_t  ___cloudWavelength;

/// @brief Field cloudMiddle, offset: 0x30, size: 0x4, def value: None
 float_t  ___cloudMiddle;

/// @brief Field cloudAmplitude, offset: 0x34, size: 0x4, def value: None
 float_t  ___cloudAmplitude;

/// @brief Field flatCloudAmplitude, offset: 0x38, size: 0x4, def value: None
 float_t  ___flatCloudAmplitude;

/// @brief Field flatCloudMiddle, offset: 0x3c, size: 0x4, def value: None
 float_t  ___flatCloudMiddle;

/// @brief Field logVerbose, offset: 0x40, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field lockCloudSin, offset: 0x41, size: 0x1, def value: None
 bool  ___lockCloudSin;

/// @brief Field lockedCloudSin, offset: 0x44, size: 0x4, def value: None
 float_t  ___lockedCloudSin;

/// @brief Field clockPeriod, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::SkyManager_ClockPeriod  ___clockPeriod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyManager, ___SkyGradientSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___useTimePeriodSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___useCustomCloudCoverage) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___cloudWavelength) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___cloudMiddle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___cloudAmplitude) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___flatCloudAmplitude) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___flatCloudMiddle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___logVerbose) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___lockCloudSin) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___lockedCloudSin) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyManager, ___clockPeriod) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyManager) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
