#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PlatformConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__Config_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__Deployment_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WrappedPlatformFlags_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformConfig)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformManagementFlags;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSClientCredentials;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class NonOverrideableConfigValues_PlatformConfig___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class OverrideableConfigValues_PlatformConfig___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class PlatformConfig_NonOverrideableConfigValues;
}
namespace PlayEveryWare::EpicOnlineServices {
class PlatformConfig_OverrideableConfigValues;
}
namespace PlayEveryWare::EpicOnlineServices {
struct PlatformManager_Platform;
}
namespace PlayEveryWare::EpicOnlineServices {
class WrappedInitializeThreadAffinity;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class NonOverrideableConfigValues_PlatformConfig___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class OverrideableConfigValues_PlatformConfig___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class PlatformConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class PlatformConfig_NonOverrideableConfigValues;
}
namespace PlayEveryWare::EpicOnlineServices {
class PlatformConfig_OverrideableConfigValues;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::NonOverrideableConfigValues_PlatformConfig___c*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::OverrideableConfigValues_PlatformConfig___c*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::PlatformConfig*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::NonOverrideableConfigValues_PlatformConfig___c*, "PlayEveryWare.EpicOnlineServices", "PlatformConfig/NonOverrideableConfigValues/<>c");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::OverrideableConfigValues_PlatformConfig___c*, "PlayEveryWare.EpicOnlineServices", "PlatformConfig/OverrideableConfigValues/<>c");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PlatformConfig*, "PlayEveryWare.EpicOnlineServices", "PlatformConfig");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues*, "PlayEveryWare.EpicOnlineServices", "PlatformConfig/NonOverrideableConfigValues");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues*, "PlayEveryWare.EpicOnlineServices", "PlatformConfig/OverrideableConfigValues");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PlatformConfig/NonOverrideableConfigValues/<>c
class CORDL_TYPE NonOverrideableConfigValues_PlatformConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::NonOverrideableConfigValues_PlatformConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::NonOverrideableConfigValues_PlatformConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__8_0, addr 0x180548fc0, size 0x40, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues* __cctor_b__8_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::NonOverrideableConfigValues_PlatformConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::NonOverrideableConfigValues_PlatformConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NonOverrideableConfigValues_PlatformConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NonOverrideableConfigValues_PlatformConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NonOverrideableConfigValues_PlatformConfig___c(NonOverrideableConfigValues_PlatformConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NonOverrideableConfigValues_PlatformConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NonOverrideableConfigValues_PlatformConfig___c(NonOverrideableConfigValues_PlatformConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18847};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::NonOverrideableConfigValues_PlatformConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies Epic.OnlineServices.Auth.AuthScopeFlags, Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformManagementFlags, PlayEveryWare.EpicOnlineServices.Config, PlayEveryWare.EpicOnlineServices.WrappedPlatformFlags
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PlatformConfig/NonOverrideableConfigValues
class CORDL_TYPE PlatformConfig_NonOverrideableConfigValues : public ::PlayEveryWare::EpicOnlineServices::Config {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::NonOverrideableConfigValues_PlatformConfig___c;

/// @brief Field alwaysSendInputToOverlay, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysSendInputToOverlay, put=__cordl_internal_set_alwaysSendInputToOverlay)) bool  alwaysSendInputToOverlay;

/// @brief Field authScopeOptionsFlags, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_authScopeOptionsFlags, put=__cordl_internal_set_authScopeOptionsFlags)) ::Epic::OnlineServices::Auth::AuthScopeFlags  authScopeOptionsFlags;

/// @brief Field clientID, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientID, put=__cordl_internal_set_clientID)) ::StringW  clientID;

/// @brief Field deploymentID, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_deploymentID, put=__cordl_internal_set_deploymentID)) ::StringW  deploymentID;

/// @brief Field integratedPlatformManagementFlags, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_integratedPlatformManagementFlags, put=__cordl_internal_set_integratedPlatformManagementFlags)) ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  integratedPlatformManagementFlags;

/// @brief Field platformOptionsFlags, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_platformOptionsFlags, put=__cordl_internal_set_platformOptionsFlags)) ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  platformOptionsFlags;

/// @brief Field taskNetworkTimeoutSeconds, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskNetworkTimeoutSeconds, put=__cordl_internal_set_taskNetworkTimeoutSeconds)) double_t  taskNetworkTimeoutSeconds;

/// @brief Field tickBudgetInMilliseconds, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_tickBudgetInMilliseconds, put=__cordl_internal_set_tickBudgetInMilliseconds)) uint32_t  tickBudgetInMilliseconds;

static inline ::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues* New_ctor() ;

constexpr bool const& __cordl_internal_get_alwaysSendInputToOverlay() const;

constexpr bool& __cordl_internal_get_alwaysSendInputToOverlay() ;

constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags const& __cordl_internal_get_authScopeOptionsFlags() const;

constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags& __cordl_internal_get_authScopeOptionsFlags() ;

constexpr ::StringW const& __cordl_internal_get_clientID() const;

constexpr ::StringW& __cordl_internal_get_clientID() ;

constexpr ::StringW const& __cordl_internal_get_deploymentID() const;

constexpr ::StringW& __cordl_internal_get_deploymentID() ;

constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags const& __cordl_internal_get_integratedPlatformManagementFlags() const;

constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags& __cordl_internal_get_integratedPlatformManagementFlags() ;

constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const& __cordl_internal_get_platformOptionsFlags() const;

constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags& __cordl_internal_get_platformOptionsFlags() ;

constexpr double_t const& __cordl_internal_get_taskNetworkTimeoutSeconds() const;

constexpr double_t& __cordl_internal_get_taskNetworkTimeoutSeconds() ;

constexpr uint32_t const& __cordl_internal_get_tickBudgetInMilliseconds() const;

constexpr uint32_t& __cordl_internal_get_tickBudgetInMilliseconds() ;

constexpr void __cordl_internal_set_alwaysSendInputToOverlay(bool  value) ;

constexpr void __cordl_internal_set_authScopeOptionsFlags(::Epic::OnlineServices::Auth::AuthScopeFlags  value) ;

constexpr void __cordl_internal_set_clientID(::StringW  value) ;

constexpr void __cordl_internal_set_deploymentID(::StringW  value) ;

constexpr void __cordl_internal_set_integratedPlatformManagementFlags(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  value) ;

constexpr void __cordl_internal_set_platformOptionsFlags(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  value) ;

constexpr void __cordl_internal_set_taskNetworkTimeoutSeconds(double_t  value) ;

constexpr void __cordl_internal_set_tickBudgetInMilliseconds(uint32_t  value) ;

/// @brief Method .ctor, addr 0x180541a60, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformConfig_NonOverrideableConfigValues() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformConfig_NonOverrideableConfigValues", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformConfig_NonOverrideableConfigValues(PlatformConfig_NonOverrideableConfigValues && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformConfig_NonOverrideableConfigValues", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformConfig_NonOverrideableConfigValues(PlatformConfig_NonOverrideableConfigValues const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18848};

/// @brief Field deploymentID, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___deploymentID;

/// @brief Field clientID, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___clientID;

/// @brief Field tickBudgetInMilliseconds, offset: 0x48, size: 0x4, def value: None
 uint32_t  ___tickBudgetInMilliseconds;

/// @brief Field taskNetworkTimeoutSeconds, offset: 0x50, size: 0x8, def value: None
 double_t  ___taskNetworkTimeoutSeconds;

/// @brief Field platformOptionsFlags, offset: 0x58, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  ___platformOptionsFlags;

/// @brief Field authScopeOptionsFlags, offset: 0x5c, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::AuthScopeFlags  ___authScopeOptionsFlags;

/// @brief Field integratedPlatformManagementFlags, offset: 0x60, size: 0x4, def value: None
 ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  ___integratedPlatformManagementFlags;

/// @brief Field alwaysSendInputToOverlay, offset: 0x64, size: 0x1, def value: None
 bool  ___alwaysSendInputToOverlay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues, ___deploymentID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues, ___clientID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues, ___tickBudgetInMilliseconds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues, ___taskNetworkTimeoutSeconds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues, ___platformOptionsFlags) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues, ___authScopeOptionsFlags) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues, ___integratedPlatformManagementFlags) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues, ___alwaysSendInputToOverlay) == 0x64, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues) == 0x68, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PlatformConfig/OverrideableConfigValues/<>c
class CORDL_TYPE OverrideableConfigValues_PlatformConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::OverrideableConfigValues_PlatformConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::OverrideableConfigValues_PlatformConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__9_0, addr 0x180549040, size 0x40, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues* __cctor_b__9_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::OverrideableConfigValues_PlatformConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::OverrideableConfigValues_PlatformConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OverrideableConfigValues_PlatformConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OverrideableConfigValues_PlatformConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OverrideableConfigValues_PlatformConfig___c(OverrideableConfigValues_PlatformConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OverrideableConfigValues_PlatformConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OverrideableConfigValues_PlatformConfig___c(OverrideableConfigValues_PlatformConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18849};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::OverrideableConfigValues_PlatformConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.Config, PlayEveryWare.EpicOnlineServices.WrappedPlatformFlags, System.Nullable`1<T>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PlatformConfig/OverrideableConfigValues
class CORDL_TYPE PlatformConfig_OverrideableConfigValues : public ::PlayEveryWare::EpicOnlineServices::Config {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::OverrideableConfigValues_PlatformConfig___c;

/// @brief Field ThreadAffinity_HTTPRequestIO, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_HTTPRequestIO, put=__cordl_internal_set_ThreadAffinity_HTTPRequestIO)) ::System::Nullable_1<uint64_t>  ThreadAffinity_HTTPRequestIO;

/// @brief Field ThreadAffinity_P2PIO, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_P2PIO, put=__cordl_internal_set_ThreadAffinity_P2PIO)) ::System::Nullable_1<uint64_t>  ThreadAffinity_P2PIO;

/// @brief Field ThreadAffinity_RTCIO, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_RTCIO, put=__cordl_internal_set_ThreadAffinity_RTCIO)) ::System::Nullable_1<uint64_t>  ThreadAffinity_RTCIO;

/// @brief Field ThreadAffinity_networkWork, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_networkWork, put=__cordl_internal_set_ThreadAffinity_networkWork)) ::System::Nullable_1<uint64_t>  ThreadAffinity_networkWork;

/// @brief Field ThreadAffinity_storageIO, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_storageIO, put=__cordl_internal_set_ThreadAffinity_storageIO)) ::System::Nullable_1<uint64_t>  ThreadAffinity_storageIO;

/// @brief Field ThreadAffinity_webSocketIO, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_webSocketIO, put=__cordl_internal_set_ThreadAffinity_webSocketIO)) ::System::Nullable_1<uint64_t>  ThreadAffinity_webSocketIO;

/// @brief Field initialButtonDelayForOverlay, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialButtonDelayForOverlay, put=__cordl_internal_set_initialButtonDelayForOverlay)) ::System::Nullable_1<float_t>  initialButtonDelayForOverlay;

/// @brief Field platformOptionsFlags, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_platformOptionsFlags, put=__cordl_internal_set_platformOptionsFlags)) ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  platformOptionsFlags;

/// @brief Field repeatButtonDelayForOverlay, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get_repeatButtonDelayForOverlay, put=__cordl_internal_set_repeatButtonDelayForOverlay)) ::System::Nullable_1<float_t>  repeatButtonDelayForOverlay;

static inline ::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues* New_ctor() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_HTTPRequestIO() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_HTTPRequestIO() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_P2PIO() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_P2PIO() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_RTCIO() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_RTCIO() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_networkWork() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_networkWork() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_storageIO() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_storageIO() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_webSocketIO() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_webSocketIO() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_initialButtonDelayForOverlay() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_initialButtonDelayForOverlay() ;

constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const& __cordl_internal_get_platformOptionsFlags() const;

constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags& __cordl_internal_get_platformOptionsFlags() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_repeatButtonDelayForOverlay() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_repeatButtonDelayForOverlay() ;

constexpr void __cordl_internal_set_ThreadAffinity_HTTPRequestIO(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_P2PIO(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_RTCIO(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_networkWork(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_storageIO(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_webSocketIO(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_initialButtonDelayForOverlay(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_platformOptionsFlags(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  value) ;

constexpr void __cordl_internal_set_repeatButtonDelayForOverlay(::System::Nullable_1<float_t>  value) ;

/// @brief Method .ctor, addr 0x180541a60, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformConfig_OverrideableConfigValues() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformConfig_OverrideableConfigValues", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformConfig_OverrideableConfigValues(PlatformConfig_OverrideableConfigValues && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformConfig_OverrideableConfigValues", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformConfig_OverrideableConfigValues(PlatformConfig_OverrideableConfigValues const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18850};

/// @brief Field platformOptionsFlags, offset: 0x38, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  ___platformOptionsFlags;

/// @brief Field initialButtonDelayForOverlay, offset: 0x3c, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ___initialButtonDelayForOverlay;

/// @brief Field repeatButtonDelayForOverlay, offset: 0x44, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ___repeatButtonDelayForOverlay;

/// @brief Field ThreadAffinity_networkWork, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_networkWork;

/// @brief Field ThreadAffinity_storageIO, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_storageIO;

/// @brief Field ThreadAffinity_webSocketIO, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_webSocketIO;

/// @brief Field ThreadAffinity_P2PIO, offset: 0x80, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_P2PIO;

/// @brief Field ThreadAffinity_HTTPRequestIO, offset: 0x90, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_HTTPRequestIO;

/// @brief Field ThreadAffinity_RTCIO, offset: 0xa0, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_RTCIO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues, ___platformOptionsFlags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues, ___initialButtonDelayForOverlay) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues, ___repeatButtonDelayForOverlay) == 0x44, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues, ___ThreadAffinity_networkWork) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues, ___ThreadAffinity_storageIO) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues, ___ThreadAffinity_webSocketIO) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues, ___ThreadAffinity_P2PIO) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues, ___ThreadAffinity_HTTPRequestIO) == 0x90, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues, ___ThreadAffinity_RTCIO) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues) == 0xb0, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies Epic.OnlineServices.Auth.AuthScopeFlags, Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformManagementFlags, Epic.OnlineServices.UI.InputStateButtonFlags, PlayEveryWare.EpicOnlineServices.Config, PlayEveryWare.EpicOnlineServices.Deployment, PlayEveryWare.EpicOnlineServices.PlatformManager::Platform, PlayEveryWare.EpicOnlineServices.WrappedPlatformFlags
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PlatformConfig
class CORDL_TYPE PlatformConfig : public ::PlayEveryWare::EpicOnlineServices::Config {
public:
// Declarations
using NonOverrideableConfigValues = ::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues;

using OverrideableConfigValues = ::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues;

 __declspec(property(get=get_Platform)) ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  Platform;

/// @brief Field <Platform>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__Platform_k__BackingField, put=__cordl_internal_set__Platform_k__BackingField)) ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  _Platform_k__BackingField;

/// @brief Field alwaysSendInputToOverlay, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysSendInputToOverlay, put=__cordl_internal_set_alwaysSendInputToOverlay)) bool  alwaysSendInputToOverlay;

/// @brief Field authScopeOptionsFlags, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_authScopeOptionsFlags, put=__cordl_internal_set_authScopeOptionsFlags)) ::Epic::OnlineServices::Auth::AuthScopeFlags  authScopeOptionsFlags;

/// @brief Field clientCredentials, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientCredentials, put=__cordl_internal_set_clientCredentials)) ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*  clientCredentials;

/// @brief Field deployment, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_deployment, put=__cordl_internal_set_deployment)) ::PlayEveryWare::EpicOnlineServices::Deployment  deployment;

 __declspec(property(get=get_flags, put=set_flags)) ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  flags;

/// @brief Field initialButtonDelayForOverlay, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialButtonDelayForOverlay, put=__cordl_internal_set_initialButtonDelayForOverlay)) float_t  initialButtonDelayForOverlay;

/// @brief Field integratedPlatformManagementFlags, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_integratedPlatformManagementFlags, put=__cordl_internal_set_integratedPlatformManagementFlags)) ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  integratedPlatformManagementFlags;

/// @brief Field isServer, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isServer, put=__cordl_internal_set_isServer)) bool  isServer;

/// @brief Field overrideValues, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideValues, put=__cordl_internal_set_overrideValues)) ::PlayEveryWare::EpicOnlineServices::EOSConfig*  overrideValues;

/// @brief Field platformOptionsFlags, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_platformOptionsFlags, put=__cordl_internal_set_platformOptionsFlags)) ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  platformOptionsFlags;

/// @brief Field repeatButtonDelayForOverlay, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_repeatButtonDelayForOverlay, put=__cordl_internal_set_repeatButtonDelayForOverlay)) float_t  repeatButtonDelayForOverlay;

/// @brief Field taskNetworkTimeoutSeconds, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskNetworkTimeoutSeconds, put=__cordl_internal_set_taskNetworkTimeoutSeconds)) double_t  taskNetworkTimeoutSeconds;

/// @brief Field threadAffinity, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_threadAffinity, put=__cordl_internal_set_threadAffinity)) ::PlayEveryWare::EpicOnlineServices::WrappedInitializeThreadAffinity*  threadAffinity;

/// @brief Field tickBudgetInMilliseconds, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_tickBudgetInMilliseconds, put=__cordl_internal_set_tickBudgetInMilliseconds)) uint32_t  tickBudgetInMilliseconds;

/// @brief Field toggleFriendsButtonCombination, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_toggleFriendsButtonCombination, put=__cordl_internal_set_toggleFriendsButtonCombination)) ::Epic::OnlineServices::UI::InputStateButtonFlags  toggleFriendsButtonCombination;

/// @brief Method GetDefaultIntegratedPlatformManagementFlags, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags GetDefaultIntegratedPlatformManagementFlags() ;

/// @brief Method MigrateButtonDelays, addr 0x180542560, size 0x80, virtual false, abstract: false, final false
inline void MigrateButtonDelays(::PlayEveryWare::EpicOnlineServices::EOSConfig*  overrideValuesFromFieldMember, ::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues*  mainOverrideableConfig) ;

/// @brief Method MigrateConfig, addr 0x1805425e0, size 0xb0, virtual true, abstract: false, final false
inline void MigrateConfig() ;

/// @brief Method MigrateNonOverrideableConfigValues, addr 0x180542690, size 0x550, virtual true, abstract: false, final false
inline void MigrateNonOverrideableConfigValues(::PlayEveryWare::EpicOnlineServices::EOSConfig*  overrideValuesFromFieldMember, ::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues*  mainNonOverrideableConfig) ;

/// @brief Method MigrateOverrideableConfigValues, addr 0x180542be0, size 0x250, virtual false, abstract: false, final false
inline void MigrateOverrideableConfigValues(::PlayEveryWare::EpicOnlineServices::EOSConfig*  overrideValuesFromFieldMember, ::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues*  mainOverrideableConfig) ;

/// @brief Method MigratePlatformFlags, addr 0x180542e30, size 0x260, virtual true, abstract: false, final false
inline void MigratePlatformFlags(::PlayEveryWare::EpicOnlineServices::EOSConfig*  overrideValuesFromFieldMember, ::PlayEveryWare::EpicOnlineServices::PlatformConfig_NonOverrideableConfigValues*  mainNonOverrideableConfig) ;

/// @brief Method MigrateThreadAffinity, addr 0x180543090, size 0x200, virtual false, abstract: false, final false
inline void MigrateThreadAffinity(::PlayEveryWare::EpicOnlineServices::EOSConfig*  overrideValuesFromFieldMember, ::PlayEveryWare::EpicOnlineServices::PlatformConfig_OverrideableConfigValues*  mainOverrideableConfig) ;

static inline ::PlayEveryWare::EpicOnlineServices::PlatformConfig* New_ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform) ;

/// @brief Method OnReadCompleted, addr 0x180543290, size 0x330, virtual true, abstract: false, final false
inline void OnReadCompleted() ;

/// @brief Method SelectValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TK>
static inline TK SelectValue(TK  overrideValuesFromFieldMember, TK  mainConfigValue) ;

constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const& __cordl_internal_get__Platform_k__BackingField() const;

constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform& __cordl_internal_get__Platform_k__BackingField() ;

constexpr bool const& __cordl_internal_get_alwaysSendInputToOverlay() const;

constexpr bool& __cordl_internal_get_alwaysSendInputToOverlay() ;

constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags const& __cordl_internal_get_authScopeOptionsFlags() const;

constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags& __cordl_internal_get_authScopeOptionsFlags() ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials* const& __cordl_internal_get_clientCredentials() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*& __cordl_internal_get_clientCredentials() ;

constexpr ::PlayEveryWare::EpicOnlineServices::Deployment const& __cordl_internal_get_deployment() const;

constexpr ::PlayEveryWare::EpicOnlineServices::Deployment& __cordl_internal_get_deployment() ;

constexpr float_t const& __cordl_internal_get_initialButtonDelayForOverlay() const;

constexpr float_t& __cordl_internal_get_initialButtonDelayForOverlay() ;

constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags const& __cordl_internal_get_integratedPlatformManagementFlags() const;

constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags& __cordl_internal_get_integratedPlatformManagementFlags() ;

constexpr bool const& __cordl_internal_get_isServer() const;

constexpr bool& __cordl_internal_get_isServer() ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSConfig* const& __cordl_internal_get_overrideValues() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSConfig*& __cordl_internal_get_overrideValues() ;

constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const& __cordl_internal_get_platformOptionsFlags() const;

constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags& __cordl_internal_get_platformOptionsFlags() ;

constexpr float_t const& __cordl_internal_get_repeatButtonDelayForOverlay() const;

constexpr float_t& __cordl_internal_get_repeatButtonDelayForOverlay() ;

constexpr double_t const& __cordl_internal_get_taskNetworkTimeoutSeconds() const;

constexpr double_t& __cordl_internal_get_taskNetworkTimeoutSeconds() ;

constexpr ::PlayEveryWare::EpicOnlineServices::WrappedInitializeThreadAffinity* const& __cordl_internal_get_threadAffinity() const;

constexpr ::PlayEveryWare::EpicOnlineServices::WrappedInitializeThreadAffinity*& __cordl_internal_get_threadAffinity() ;

constexpr uint32_t const& __cordl_internal_get_tickBudgetInMilliseconds() const;

constexpr uint32_t& __cordl_internal_get_tickBudgetInMilliseconds() ;

constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags const& __cordl_internal_get_toggleFriendsButtonCombination() const;

constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags& __cordl_internal_get_toggleFriendsButtonCombination() ;

constexpr void __cordl_internal_set__Platform_k__BackingField(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value) ;

constexpr void __cordl_internal_set_alwaysSendInputToOverlay(bool  value) ;

constexpr void __cordl_internal_set_authScopeOptionsFlags(::Epic::OnlineServices::Auth::AuthScopeFlags  value) ;

constexpr void __cordl_internal_set_clientCredentials(::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*  value) ;

constexpr void __cordl_internal_set_deployment(::PlayEveryWare::EpicOnlineServices::Deployment  value) ;

constexpr void __cordl_internal_set_initialButtonDelayForOverlay(float_t  value) ;

constexpr void __cordl_internal_set_integratedPlatformManagementFlags(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  value) ;

constexpr void __cordl_internal_set_isServer(bool  value) ;

constexpr void __cordl_internal_set_overrideValues(::PlayEveryWare::EpicOnlineServices::EOSConfig*  value) ;

constexpr void __cordl_internal_set_platformOptionsFlags(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  value) ;

constexpr void __cordl_internal_set_repeatButtonDelayForOverlay(float_t  value) ;

constexpr void __cordl_internal_set_taskNetworkTimeoutSeconds(double_t  value) ;

constexpr void __cordl_internal_set_threadAffinity(::PlayEveryWare::EpicOnlineServices::WrappedInitializeThreadAffinity*  value) ;

constexpr void __cordl_internal_set_tickBudgetInMilliseconds(uint32_t  value) ;

constexpr void __cordl_internal_set_toggleFriendsButtonCombination(::Epic::OnlineServices::UI::InputStateButtonFlags  value) ;

/// @brief Method .ctor, addr 0x1805435c0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform) ;

/// @brief Method get_Platform, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform get_Platform() ;

/// @brief Method get_flags, addr 0x18051e7a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags get_flags() ;

/// @brief Method set_flags, addr 0x18051e940, size 0x10, virtual false, abstract: false, final false
inline void set_flags(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformConfig(PlatformConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformConfig(PlatformConfig const& ) = delete;

/// @brief Field OVERLAY_COMPATIBLE_PLATFORMS value: I32(-115)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const OVERLAY_COMPATIBLE_PLATFORMS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18851};

/// @brief Field <Platform>k__BackingField, offset: 0x38, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  ____Platform_k__BackingField;

/// @brief Field overrideValues, offset: 0x40, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSConfig*  ___overrideValues;

/// @brief Field deployment, offset: 0x48, size: 0x18, def value: None
 ::PlayEveryWare::EpicOnlineServices::Deployment  ___deployment;

/// @brief Field clientCredentials, offset: 0x60, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*  ___clientCredentials;

/// @brief Field isServer, offset: 0x68, size: 0x1, def value: None
 bool  ___isServer;

/// @brief Field platformOptionsFlags, offset: 0x6c, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  ___platformOptionsFlags;

/// @brief Field authScopeOptionsFlags, offset: 0x70, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::AuthScopeFlags  ___authScopeOptionsFlags;

/// @brief Field integratedPlatformManagementFlags, offset: 0x74, size: 0x4, def value: None
 ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  ___integratedPlatformManagementFlags;

/// @brief Field tickBudgetInMilliseconds, offset: 0x78, size: 0x4, def value: None
 uint32_t  ___tickBudgetInMilliseconds;

/// @brief Field taskNetworkTimeoutSeconds, offset: 0x80, size: 0x8, def value: None
 double_t  ___taskNetworkTimeoutSeconds;

/// @brief Field threadAffinity, offset: 0x88, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::WrappedInitializeThreadAffinity*  ___threadAffinity;

/// @brief Field alwaysSendInputToOverlay, offset: 0x90, size: 0x1, def value: None
 bool  ___alwaysSendInputToOverlay;

/// @brief Field initialButtonDelayForOverlay, offset: 0x94, size: 0x4, def value: None
 float_t  ___initialButtonDelayForOverlay;

/// @brief Field repeatButtonDelayForOverlay, offset: 0x98, size: 0x4, def value: None
 float_t  ___repeatButtonDelayForOverlay;

/// @brief Field toggleFriendsButtonCombination, offset: 0x9c, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::InputStateButtonFlags  ___toggleFriendsButtonCombination;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ____Platform_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___overrideValues) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___deployment) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___clientCredentials) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___isServer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___platformOptionsFlags) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___authScopeOptionsFlags) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___integratedPlatformManagementFlags) == 0x74, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___tickBudgetInMilliseconds) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___taskNetworkTimeoutSeconds) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___threadAffinity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___alwaysSendInputToOverlay) == 0x90, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___initialButtonDelayForOverlay) == 0x94, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___repeatButtonDelayForOverlay) == 0x98, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformConfig, ___toggleFriendsButtonCombination) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PlatformConfig) == 0xa0, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
