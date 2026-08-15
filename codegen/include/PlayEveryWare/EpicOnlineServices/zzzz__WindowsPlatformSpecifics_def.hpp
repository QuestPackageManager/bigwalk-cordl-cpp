#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/WindowsPlatformSpecifics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformSpecifics_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WindowsPlatformSpecifics)
namespace PlayEveryWare::EpicOnlineServices {
class EOSCreateOptions;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSInitializeOptions;
}
namespace PlayEveryWare::EpicOnlineServices {
class WindowsConfig;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class WindowsPlatformSpecifics;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics*, "PlayEveryWare.EpicOnlineServices", "WindowsPlatformSpecifics");
// Dependencies PlayEveryWare.EpicOnlineServices.PlatformSpecifics`1<T>, System.Runtime.InteropServices.GCHandle
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.WindowsPlatformSpecifics
class CORDL_TYPE WindowsPlatformSpecifics : public ::PlayEveryWare::EpicOnlineServices::PlatformSpecifics_1<::PlayEveryWare::EpicOnlineServices::WindowsConfig*> {
public:
// Declarations
/// @brief Field SteamConfigPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SteamConfigPath, put=setStaticF_SteamConfigPath)) ::StringW  SteamConfigPath;

/// @brief Field SteamOptionsGCHandle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SteamOptionsGCHandle, put=setStaticF_SteamOptionsGCHandle)) ::System::Runtime::InteropServices::GCHandle  SteamOptionsGCHandle;

/// @brief Field Xaudio2DllName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Xaudio2DllName, put=setStaticF_Xaudio2DllName)) ::StringW  Xaudio2DllName;

/// @brief Method ConfigureSystemInitOptions, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ConfigureSystemInitOptions(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSInitializeOptions*>  initializeOptions) ;

/// @brief Method ConfigureSystemPlatformCreateOptions, addr 0x18054a790, size 0x2b0, virtual true, abstract: false, final false
inline void ConfigureSystemPlatformCreateOptions(::by_ref<::PlayEveryWare::EpicOnlineServices::EOSCreateOptions*>  createOptions) ;

/// @brief Method LoadDelegatesWithEOSBindingAPI, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void LoadDelegatesWithEOSBindingAPI() ;

static inline ::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics* New_ctor() ;

/// @brief Method Register, addr 0x18054aa40, size 0x110, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0x18054abd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_SteamConfigPath() ;

static inline ::System::Runtime::InteropServices::GCHandle getStaticF_SteamOptionsGCHandle() ;

static inline ::StringW getStaticF_Xaudio2DllName() ;

static inline void setStaticF_SteamConfigPath(::StringW  value) ;

static inline void setStaticF_SteamOptionsGCHandle(::System::Runtime::InteropServices::GCHandle  value) ;

static inline void setStaticF_Xaudio2DllName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsPlatformSpecifics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsPlatformSpecifics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsPlatformSpecifics(WindowsPlatformSpecifics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsPlatformSpecifics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsPlatformSpecifics(WindowsPlatformSpecifics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18923};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::WindowsPlatformSpecifics) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
