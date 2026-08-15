#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IPlatformSpecifics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPlatformSpecifics)
namespace PlayEveryWare::EpicOnlineServices {
class EOSCreateOptions;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSInitializeOptions;
}
namespace PlayEveryWare::EpicOnlineServices {
class IEOSCoroutineOwner;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class IPlatformSpecifics;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::IPlatformSpecifics*, "PlayEveryWare.EpicOnlineServices", "IPlatformSpecifics");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.IPlatformSpecifics
class CORDL_TYPE IPlatformSpecifics {
public:
// Declarations
/// @brief Method AddPluginSearchPaths, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AddPluginSearchPaths(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  pluginPaths) ;

/// @brief Method CanShowExitButton, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool CanShowExitButton() ;

/// @brief Method ConfigureSystemInitOptions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ConfigureSystemInitOptions(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*>  initializeOptions) ;

/// @brief Method ConfigureSystemPlatformCreateOptions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ConfigureSystemPlatformCreateOptions(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSCreateOptions*>  createOptions) ;

/// @brief Method GetDynamicLibraryExtension, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetDynamicLibraryExtension() ;

/// @brief Method GetTempDir, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetTempDir() ;

/// @brief Method InitializeNetworkChecks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeNetworkChecks(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  owner) ;

/// @brief Method InitializeOverlay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeOverlay(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  owner) ;

/// @brief Method IsApplicationConstrainedWhenOutOfFocus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsApplicationConstrainedWhenOutOfFocus() ;

/// @brief Method IsReadyForNetworkActivity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t IsReadyForNetworkActivity() ;

/// @brief Method LoadDelegatesWithEOSBindingAPI, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadDelegatesWithEOSBindingAPI() ;

/// @brief Method RegisterForPlatformNotifications, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RegisterForPlatformNotifications() ;

/// @brief Method SetDefaultAudioSession, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetDefaultAudioSession() ;

/// @brief Method UpdateNetworkStatus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateNetworkStatus() ;

// Ctor Parameters [CppParam { name: "", ty: "IPlatformSpecifics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlatformSpecifics(IPlatformSpecifics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18902};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
