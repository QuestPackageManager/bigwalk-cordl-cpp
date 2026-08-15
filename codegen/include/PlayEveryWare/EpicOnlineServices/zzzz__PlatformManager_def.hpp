#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PlatformManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformManager)
namespace PlayEveryWare::EpicOnlineServices {
class PlatformConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
struct PlatformManager_PlatformInfo;
}
namespace PlayEveryWare::EpicOnlineServices {
struct PlatformManager_Platform;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
struct PlatformManager_Platform;
}
namespace PlayEveryWare::EpicOnlineServices {
class PlatformManager;
}
namespace PlayEveryWare::EpicOnlineServices {
struct PlatformManager_PlatformInfo;
}
// Write type traits
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::PlatformManager*);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform, "PlayEveryWare.EpicOnlineServices", "PlatformManager/Platform");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PlatformManager*, "PlayEveryWare.EpicOnlineServices", "PlatformManager");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo, "PlayEveryWare.EpicOnlineServices", "PlatformManager/PlatformInfo");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.PlatformManager/Platform
struct CORDL_TYPE PlatformManager_Platform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlatformManager_Platform_Unwrapped
enum struct __PlatformManager_Platform_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Windows = static_cast<int32_t>(0x1),
__E_Android = static_cast<int32_t>(0x2),
__E_XboxOne = static_cast<int32_t>(0x4),
__E_XboxSeriesX = static_cast<int32_t>(0x8),
__E_iOS = static_cast<int32_t>(0x10),
__E_Linux = static_cast<int32_t>(0x20),
__E_macOS = static_cast<int32_t>(0x40),
__E_PS4 = static_cast<int32_t>(0x80),
__E_PS5 = static_cast<int32_t>(0x100),
__E_Switch = static_cast<int32_t>(0x200),
__E_Steam = static_cast<int32_t>(0x400),
__E_Switch2 = static_cast<int32_t>(0x800),
__E_Console = static_cast<int32_t>(0xb8c),
__E_Any = static_cast<int32_t>(0xfff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlatformManager_Platform_Unwrapped () const noexcept {
return static_cast<__PlatformManager_Platform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlatformManager_Platform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlatformManager_Platform(int32_t  value__) noexcept;

/// @brief Field Android value: I32(2)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const Android;

/// @brief Field Any value: I32(4095)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const Any;

/// @brief Field Console value: I32(2956)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const Console;

/// @brief Field Linux value: I32(32)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const Linux;

/// @brief Field PS4 value: I32(128)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const PS4;

/// @brief Field PS5 value: I32(256)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const PS5;

/// @brief Field Steam value: I32(1024)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const Steam;

/// @brief Field Switch value: I32(512)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const Switch;

/// @brief Field Switch2 value: I32(2048)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const Switch2;

/// @brief Field Unknown value: I32(0)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const Unknown;

/// @brief Field Windows value: I32(1)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const Windows;

/// @brief Field XboxOne value: I32(4)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const XboxOne;

/// @brief Field XboxSeriesX value: I32(8)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const XboxSeriesX;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18906};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field iOS value: I32(16)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const iOS;

/// @brief Field macOS value: I32(64)
static ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const macOS;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform) == 0x4, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.PlatformManager/PlatformInfo
struct CORDL_TYPE PlatformManager_PlatformInfo {
public:
// Declarations
 __declspec(property(get=get_ConfigFileName)) ::StringW  ConfigFileName;

 __declspec(property(get=get_ConfigType)) ::System::Type*  ConfigType;

 __declspec(property(get=get_DynamicLibraryExtension)) ::StringW  DynamicLibraryExtension;

 __declspec(property(get=get_FullName)) ::StringW  FullName;

 __declspec(property(get=get_GetConfigFunction)) ::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*  GetConfigFunction;

 __declspec(property(get=get_PlatformIconLabel)) ::StringW  PlatformIconLabel;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo Create(::StringW  fullName, ::StringW  configFileName, ::StringW  dynamicLibraryExtension, ::StringW  platformIconLabel) ;

/// @brief Method .ctor, addr 0x180543a30, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*  getConfigFunction, ::System::Type*  configType, ::StringW  fullName, ::StringW  configFileName, ::StringW  dynamicLibraryExtension, ::StringW  platformIconLabel) ;

/// @brief Method get_ConfigFileName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_ConfigFileName() ;

/// @brief Method get_ConfigType, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Type* get_ConfigType() ;

/// @brief Method get_DynamicLibraryExtension, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_DynamicLibraryExtension() ;

/// @brief Method get_FullName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_GetConfigFunction, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>* get_GetConfigFunction() ;

/// @brief Method get_PlatformIconLabel, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_PlatformIconLabel() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlatformManager_PlatformInfo() ;

// Ctor Parameters [CppParam { name: "_FullName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_ConfigFileName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_DynamicLibraryExtension_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_PlatformIconLabel_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_GetConfigFunction_k__BackingField", ty: "::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*", modifiers: "", def_value: None }, CppParam { name: "_ConfigType_k__BackingField", ty: "::System::Type*", modifiers: "", def_value: None }]
constexpr PlatformManager_PlatformInfo(::StringW  _FullName_k__BackingField, ::StringW  _ConfigFileName_k__BackingField, ::StringW  _DynamicLibraryExtension_k__BackingField, ::StringW  _PlatformIconLabel_k__BackingField, ::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*  _GetConfigFunction_k__BackingField, ::System::Type*  _ConfigType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18907};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <FullName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _FullName_k__BackingField;

/// @brief Field <ConfigFileName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _ConfigFileName_k__BackingField;

/// @brief Field <DynamicLibraryExtension>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  _DynamicLibraryExtension_k__BackingField;

/// @brief Field <PlatformIconLabel>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  _PlatformIconLabel_k__BackingField;

/// @brief Field <GetConfigFunction>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*  _GetConfigFunction_k__BackingField;

/// @brief Field <ConfigType>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Type*  _ConfigType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo, _FullName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo, _ConfigFileName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo, _DynamicLibraryExtension_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo, _PlatformIconLabel_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo, _GetConfigFunction_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo, _ConfigType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo) == 0x30, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.PlatformManager::Platform, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PlatformManager
class CORDL_TYPE PlatformManager : public ::System::Object {
public:
// Declarations
using Platform = ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform;

using PlatformInfo = ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo;

/// @brief Field PlatformInformation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PlatformInformation, put=setStaticF_PlatformInformation)) ::System::Collections::Generic::IDictionary_2<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform,::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>*  PlatformInformation;

/// @brief Field RuntimeToPlatformsMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RuntimeToPlatformsMap, put=setStaticF_RuntimeToPlatformsMap)) ::System::Collections::Generic::IDictionary_2<::UnityEngine::RuntimePlatform,::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  RuntimeToPlatformsMap;

/// @brief Field s_CurrentPlatform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CurrentPlatform, put=setStaticF_s_CurrentPlatform)) ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  s_CurrentPlatform;

/// @brief Field s_CurrentTargetedPlatform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CurrentTargetedPlatform, put=setStaticF_s_CurrentTargetedPlatform)) ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  s_CurrentTargetedPlatform;

/// @brief Field s_platformConfig, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_platformConfig, put=setStaticF_s_platformConfig)) ::PlayEveryWare::EpicOnlineServices::PlatformConfig*  s_platformConfig;

/// @brief Method GetConfigFileName, addr 0x180543b30, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetConfigFileName(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform) ;

/// @brief Method GetConfigFilePath, addr 0x180543ba0, size 0x50, virtual false, abstract: false, final false
static inline ::StringW GetConfigFilePath() ;

/// @brief Method GetConfigFilePath, addr 0x180543bf0, size 0x100, virtual false, abstract: false, final false
static inline ::StringW GetConfigFilePath(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform) ;

/// @brief Method GetDynamicLibraryExtension, addr 0x180543cf0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetDynamicLibraryExtension(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform) ;

/// @brief Method GetFullName, addr 0x180543d60, size 0x120, virtual false, abstract: false, final false
static inline ::StringW GetFullName(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform) ;

/// @brief Method GetPlatformConfig, addr 0x180543e80, size 0x1e0, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::PlatformConfig* GetPlatformConfig() ;

/// @brief Method InitializePlatformConfigs, addr 0x180544060, size 0x500, virtual false, abstract: false, final false
static inline void InitializePlatformConfigs() ;

/// @brief Method TryGetConfig, addr 0x180544690, size 0x130, virtual false, abstract: false, final false
static inline bool TryGetConfig(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform, ::by_ref<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>  platformConfig) ;

/// @brief Method TryGetConfigFilePath, addr 0x180544560, size 0x130, virtual false, abstract: false, final false
static inline bool TryGetConfigFilePath(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform, ::by_ref<::StringW>  configFilePath) ;

/// @brief Method TryGetPlatform, addr 0x1805447c0, size 0xe0, virtual false, abstract: false, final false
static inline bool TryGetPlatform(::UnityEngine::RuntimePlatform  runtimePlatform, ::by_ref<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>  platform) ;

static inline ::System::Collections::Generic::IDictionary_2<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform,::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>* getStaticF_PlatformInformation() ;

static inline ::System::Collections::Generic::IDictionary_2<::UnityEngine::RuntimePlatform,::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>* getStaticF_RuntimeToPlatformsMap() ;

static inline ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform getStaticF_s_CurrentPlatform() ;

static inline ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform getStaticF_s_CurrentTargetedPlatform() ;

static inline ::PlayEveryWare::EpicOnlineServices::PlatformConfig* getStaticF_s_platformConfig() ;

/// @brief Method get_ConfigurablePlatforms, addr 0x180544c80, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>* get_ConfigurablePlatforms() ;

/// @brief Method get_CurrentPlatform, addr 0x180544cd0, size 0x40, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform get_CurrentPlatform() ;

static inline void setStaticF_PlatformInformation(::System::Collections::Generic::IDictionary_2<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform,::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>*  value) ;

static inline void setStaticF_RuntimeToPlatformsMap(::System::Collections::Generic::IDictionary_2<::UnityEngine::RuntimePlatform,::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  value) ;

static inline void setStaticF_s_CurrentPlatform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value) ;

static inline void setStaticF_s_CurrentTargetedPlatform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value) ;

static inline void setStaticF_s_platformConfig(::PlayEveryWare::EpicOnlineServices::PlatformConfig*  value) ;

/// @brief Method set_CurrentPlatform, addr 0x180544d10, size 0xa0, virtual false, abstract: false, final false
static inline void set_CurrentPlatform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformManager(PlatformManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformManager(PlatformManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18908};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PlatformManager) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
