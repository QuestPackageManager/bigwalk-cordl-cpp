#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PlatformSpecifics_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformSpecifics_1)
namespace PlayEveryWare::EpicOnlineServices {
class EOSCreateOptions;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSInitializeOptions;
}
namespace PlayEveryWare::EpicOnlineServices {
class IEOSCoroutineOwner;
}
namespace PlayEveryWare::EpicOnlineServices {
class IPlatformSpecifics;
}
namespace PlayEveryWare::EpicOnlineServices {
struct PlatformManager_Platform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
template<typename T>
class PlatformSpecifics_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1, "PlayEveryWare.EpicOnlineServices", "PlatformSpecifics`1");
// Dependencies PlayEveryWare.EpicOnlineServices.PlatformManager::Platform, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// cpp template
template<typename T>
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PlatformSpecifics`1<T>
class CORDL_TYPE PlatformSpecifics_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Platform, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Platform, put=__cordl_internal_set_Platform)) ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  Platform;

/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*() noexcept;

/// @brief Method AddPluginSearchPaths, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AddPluginSearchPaths(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  pluginPaths) ;

/// @brief Method CanShowExitButton, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool CanShowExitButton() ;

/// @brief Method ConfigureSystemInitOptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ConfigureSystemInitOptions(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*>  initializeOptionsRef) ;

/// @brief Method ConfigureSystemPlatformCreateOptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ConfigureSystemPlatformCreateOptions(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSCreateOptions*>  createOptions) ;

/// @brief Method GetDynamicLibraryExtension, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW GetDynamicLibraryExtension() ;

/// @brief Method GetTempDir, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetTempDir() ;

/// @brief Method InitializeNetworkChecks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeNetworkChecks(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  owner) ;

/// @brief Method InitializeOverlay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeOverlay(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  owner) ;

/// @brief Method IsApplicationConstrainedWhenOutOfFocus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsApplicationConstrainedWhenOutOfFocus() ;

/// @brief Method IsReadyForNetworkActivity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t IsReadyForNetworkActivity() ;

/// @brief Method LoadDelegatesWithEOSBindingAPI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadDelegatesWithEOSBindingAPI() ;

static inline ::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<T>* New_ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform) ;

/// @brief Method RegisterForPlatformNotifications, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RegisterForPlatformNotifications() ;

/// @brief Method SetDefaultAudioSession, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetDefaultAudioSession() ;

/// @brief Method UpdateNetworkStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateNetworkStatus() ;

constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const& __cordl_internal_get_Platform() const;

constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform& __cordl_internal_get_Platform() ;

constexpr void __cordl_internal_set_Platform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform) ;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics"
constexpr ::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics* i___PlayEveryWare__EpicOnlineServices__IPlatformSpecifics() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformSpecifics_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformSpecifics_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformSpecifics_1(PlatformSpecifics_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformSpecifics_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformSpecifics_1(PlatformSpecifics_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18909};

/// @brief Field Platform, offset: 0x10, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  ___Platform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
