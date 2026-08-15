#pragma once
// IWYU pragma private; include "Steamworks/SteamHTMLSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamHTMLSurface)
namespace Steamworks {
struct EHTMLKeyModifiers;
}
namespace Steamworks {
struct EHTMLMouseButton;
}
namespace Steamworks {
struct HHTMLBrowser;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class SteamHTMLSurface;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamHTMLSurface*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamHTMLSurface*, "Steamworks", "SteamHTMLSurface");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamHTMLSurface
class CORDL_TYPE SteamHTMLSurface : public ::System::Object {
public:
// Declarations
/// @brief Method AddHeader, addr 0x1805aca80, size 0x170, virtual false, abstract: false, final false
static inline void AddHeader(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchKey, ::StringW  pchValue) ;

/// @brief Method AllowStartRequest, addr 0x1805acbf0, size 0x50, virtual false, abstract: false, final false
static inline void AllowStartRequest(::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bAllowed) ;

/// @brief Method CopyToClipboard, addr 0x1805acc40, size 0x40, virtual false, abstract: false, final false
static inline void CopyToClipboard(::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method CreateBrowser, addr 0x1805acc80, size 0x180, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t CreateBrowser(::StringW  pchUserAgent, ::StringW  pchUserCSS) ;

/// @brief Method ExecuteJavascript, addr 0x1805ace00, size 0xd0, virtual false, abstract: false, final false
static inline void ExecuteJavascript(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchScript) ;

/// @brief Method FileLoadDialogResponse, addr 0x1805aced0, size 0x50, virtual false, abstract: false, final false
static inline void FileLoadDialogResponse(::Steamworks::HHTMLBrowser  unBrowserHandle, ::System::IntPtr  pchSelectedFiles) ;

/// @brief Method Find, addr 0x1805acf20, size 0x100, virtual false, abstract: false, final false
static inline void Find(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchSearchStr, bool  bCurrentlyInFind, bool  bReverse) ;

/// @brief Method GetLinkAtPosition, addr 0x1805ad020, size 0x60, virtual false, abstract: false, final false
static inline void GetLinkAtPosition(::Steamworks::HHTMLBrowser  unBrowserHandle, int32_t  x, int32_t  y) ;

/// @brief Method GoBack, addr 0x1805ad080, size 0x40, virtual false, abstract: false, final false
static inline void GoBack(::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method GoForward, addr 0x1805ad0c0, size 0x40, virtual false, abstract: false, final false
static inline void GoForward(::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method Init, addr 0x1805ad100, size 0x30, virtual false, abstract: false, final false
static inline bool Init() ;

/// @brief Method JSDialogResponse, addr 0x1805ad130, size 0x50, virtual false, abstract: false, final false
static inline void JSDialogResponse(::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bResult) ;

/// @brief Method KeyChar, addr 0x1805ad180, size 0x60, virtual false, abstract: false, final false
static inline void KeyChar(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  cUnicodeChar, ::Steamworks::EHTMLKeyModifiers  eHTMLKeyModifiers) ;

/// @brief Method KeyDown, addr 0x1805ad1e0, size 0x70, virtual false, abstract: false, final false
static inline void KeyDown(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nNativeKeyCode, ::Steamworks::EHTMLKeyModifiers  eHTMLKeyModifiers, bool  bIsSystemKey) ;

/// @brief Method KeyUp, addr 0x1805ad250, size 0x60, virtual false, abstract: false, final false
static inline void KeyUp(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nNativeKeyCode, ::Steamworks::EHTMLKeyModifiers  eHTMLKeyModifiers) ;

/// @brief Method LoadURL, addr 0x1805ad2b0, size 0x170, virtual false, abstract: false, final false
static inline void LoadURL(::Steamworks::HHTMLBrowser  unBrowserHandle, ::StringW  pchURL, ::StringW  pchPostData) ;

/// @brief Method MouseDoubleClick, addr 0x1805ad420, size 0x50, virtual false, abstract: false, final false
static inline void MouseDoubleClick(::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::EHTMLMouseButton  eMouseButton) ;

/// @brief Method MouseDown, addr 0x1805ad470, size 0x50, virtual false, abstract: false, final false
static inline void MouseDown(::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::EHTMLMouseButton  eMouseButton) ;

/// @brief Method MouseMove, addr 0x1805ad4c0, size 0x60, virtual false, abstract: false, final false
static inline void MouseMove(::Steamworks::HHTMLBrowser  unBrowserHandle, int32_t  x, int32_t  y) ;

/// @brief Method MouseUp, addr 0x1805ad520, size 0x50, virtual false, abstract: false, final false
static inline void MouseUp(::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::EHTMLMouseButton  eMouseButton) ;

/// @brief Method MouseWheel, addr 0x1805ad570, size 0x50, virtual false, abstract: false, final false
static inline void MouseWheel(::Steamworks::HHTMLBrowser  unBrowserHandle, int32_t  nDelta) ;

/// @brief Method OpenDeveloperTools, addr 0x1805ad5c0, size 0x40, virtual false, abstract: false, final false
static inline void OpenDeveloperTools(::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method PasteFromClipboard, addr 0x1805ad600, size 0x40, virtual false, abstract: false, final false
static inline void PasteFromClipboard(::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method Reload, addr 0x1805ad640, size 0x40, virtual false, abstract: false, final false
static inline void Reload(::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method RemoveBrowser, addr 0x1805ad680, size 0x40, virtual false, abstract: false, final false
static inline void RemoveBrowser(::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method SetBackgroundMode, addr 0x1805ad6c0, size 0x50, virtual false, abstract: false, final false
static inline void SetBackgroundMode(::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bBackgroundMode) ;

/// @brief Method SetCookie, addr 0x1805ad710, size 0x2b0, virtual false, abstract: false, final false
static inline void SetCookie(::StringW  pchHostname, ::StringW  pchKey, ::StringW  pchValue, ::StringW  pchPath, uint32_t  nExpires, bool  bSecure, bool  bHTTPOnly) ;

/// @brief Method SetDPIScalingFactor, addr 0x1805ad9c0, size 0x50, virtual false, abstract: false, final false
static inline void SetDPIScalingFactor(::Steamworks::HHTMLBrowser  unBrowserHandle, float_t  flDPIScaling) ;

/// @brief Method SetHorizontalScroll, addr 0x1805ada10, size 0x50, virtual false, abstract: false, final false
static inline void SetHorizontalScroll(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nAbsolutePixelScroll) ;

/// @brief Method SetKeyFocus, addr 0x1805ada60, size 0x50, virtual false, abstract: false, final false
static inline void SetKeyFocus(::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bHasKeyFocus) ;

/// @brief Method SetPageScaleFactor, addr 0x1805adab0, size 0x70, virtual false, abstract: false, final false
static inline void SetPageScaleFactor(::Steamworks::HHTMLBrowser  unBrowserHandle, float_t  flZoom, int32_t  nPointX, int32_t  nPointY) ;

/// @brief Method SetSize, addr 0x1805adb20, size 0x60, virtual false, abstract: false, final false
static inline void SetSize(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  unWidth, uint32_t  unHeight) ;

/// @brief Method SetVerticalScroll, addr 0x1805adb80, size 0x50, virtual false, abstract: false, final false
static inline void SetVerticalScroll(::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nAbsolutePixelScroll) ;

/// @brief Method Shutdown, addr 0x1805adbd0, size 0x30, virtual false, abstract: false, final false
static inline bool Shutdown() ;

/// @brief Method StopFind, addr 0x1805adc00, size 0x40, virtual false, abstract: false, final false
static inline void StopFind(::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method StopLoad, addr 0x1805adc40, size 0x40, virtual false, abstract: false, final false
static inline void StopLoad(::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ViewSource, addr 0x1805adc80, size 0x40, virtual false, abstract: false, final false
static inline void ViewSource(::Steamworks::HHTMLBrowser  unBrowserHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamHTMLSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamHTMLSurface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamHTMLSurface(SteamHTMLSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamHTMLSurface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamHTMLSurface(SteamHTMLSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16374};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamHTMLSurface) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
