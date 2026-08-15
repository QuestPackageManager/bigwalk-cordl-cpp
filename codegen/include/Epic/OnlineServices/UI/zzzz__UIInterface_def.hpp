#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/UIInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIInterface)
namespace Epic::OnlineServices::UI {
struct AcknowledgeEventIdOptions;
}
namespace Epic::OnlineServices::UI {
struct AddNotifyDisplaySettingsUpdatedOptions;
}
namespace Epic::OnlineServices::UI {
struct AddNotifyMemoryMonitorOptions;
}
namespace Epic::OnlineServices::UI {
struct AddNotifyOnScreenKeyboardRequestedOptions;
}
namespace Epic::OnlineServices::UI {
struct ConfigureOnScreenKeyboardOptions;
}
namespace Epic::OnlineServices::UI {
struct GetFriendsExclusiveInputOptions;
}
namespace Epic::OnlineServices::UI {
struct GetFriendsVisibleOptions;
}
namespace Epic::OnlineServices::UI {
struct GetToggleFriendsButtonOptions;
}
namespace Epic::OnlineServices::UI {
struct GetToggleFriendsKeyOptions;
}
namespace Epic::OnlineServices::UI {
struct HideFriendsOptions;
}
namespace Epic::OnlineServices::UI {
struct InputStateButtonFlags;
}
namespace Epic::OnlineServices::UI {
struct IsSocialOverlayPausedOptions;
}
namespace Epic::OnlineServices::UI {
struct KeyCombination;
}
namespace Epic::OnlineServices::UI {
struct NotificationLocation;
}
namespace Epic::OnlineServices::UI {
class OnDisplaySettingsUpdatedCallback;
}
namespace Epic::OnlineServices::UI {
class OnHideFriendsCallback;
}
namespace Epic::OnlineServices::UI {
class OnMemoryMonitorCallback;
}
namespace Epic::OnlineServices::UI {
class OnScreenKeyboardRequestedCallback;
}
namespace Epic::OnlineServices::UI {
class OnShowBlockPlayerCallback;
}
namespace Epic::OnlineServices::UI {
class OnShowFriendsCallback;
}
namespace Epic::OnlineServices::UI {
class OnShowNativeProfileCallback;
}
namespace Epic::OnlineServices::UI {
class OnShowReportPlayerCallback;
}
namespace Epic::OnlineServices::UI {
struct PauseSocialOverlayOptions;
}
namespace Epic::OnlineServices::UI {
struct PrePresentOptions;
}
namespace Epic::OnlineServices::UI {
struct ReportInputStateOptions;
}
namespace Epic::OnlineServices::UI {
struct SetDisplayPreferenceOptions;
}
namespace Epic::OnlineServices::UI {
struct SetToggleFriendsButtonOptions;
}
namespace Epic::OnlineServices::UI {
struct SetToggleFriendsKeyOptions;
}
namespace Epic::OnlineServices::UI {
struct ShowBlockPlayerOptions;
}
namespace Epic::OnlineServices::UI {
struct ShowFriendsOptions;
}
namespace Epic::OnlineServices::UI {
struct ShowNativeProfileOptions;
}
namespace Epic::OnlineServices::UI {
struct ShowReportPlayerOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
class UIInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::UI::UIInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::UIInterface*, "Epic.OnlineServices.UI", "UIInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::UI {
// Is value type: false
// CS Name: Epic.OnlineServices.UI.UIInterface
class CORDL_TYPE UIInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AcknowledgeEventId, addr 0x1804e28b0, size 0xb0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result AcknowledgeEventId(::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>  options) ;

/// @brief Method AddNotifyDisplaySettingsUpdated, addr 0x1804e2960, size 0x260, virtual false, abstract: false, final false
inline uint64_t AddNotifyDisplaySettingsUpdated(::by_ref<::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*  notificationFn) ;

/// @brief Method AddNotifyMemoryMonitor, addr 0x1804e2bc0, size 0x260, virtual false, abstract: false, final false
inline uint64_t AddNotifyMemoryMonitor(::by_ref<::Epic::OnlineServices::UI::AddNotifyMemoryMonitorOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnMemoryMonitorCallback*  notificationFn) ;

/// @brief Method AddNotifyOnScreenKeyboardRequested, addr 0x1804e2e20, size 0x260, virtual false, abstract: false, final false
inline uint64_t AddNotifyOnScreenKeyboardRequested(::by_ref<::Epic::OnlineServices::UI::AddNotifyOnScreenKeyboardRequestedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*  notificationFn) ;

/// @brief Method ConfigureOnScreenKeyboard, addr 0x1804e3080, size 0xb0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ConfigureOnScreenKeyboard(::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>  options) ;

/// @brief Method GetFriendsExclusiveInput, addr 0x1804e3130, size 0xf0, virtual false, abstract: false, final false
inline bool GetFriendsExclusiveInput(::by_ref<::Epic::OnlineServices::UI::GetFriendsExclusiveInputOptions>  options) ;

/// @brief Method GetFriendsVisible, addr 0x1804e3220, size 0xf0, virtual false, abstract: false, final false
inline bool GetFriendsVisible(::by_ref<::Epic::OnlineServices::UI::GetFriendsVisibleOptions>  options) ;

/// @brief Method GetNotificationLocationPreference, addr 0x1804e3310, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::NotificationLocation GetNotificationLocationPreference() ;

/// @brief Method GetToggleFriendsButton, addr 0x1804e3390, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::InputStateButtonFlags GetToggleFriendsButton(::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsButtonOptions>  options) ;

/// @brief Method GetToggleFriendsKey, addr 0x1804e3430, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::KeyCombination GetToggleFriendsKey(::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions>  options) ;

/// @brief Method HideFriends, addr 0x1804e34d0, size 0x290, virtual false, abstract: false, final false
inline void HideFriends(::by_ref<::Epic::OnlineServices::UI::HideFriendsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnHideFriendsCallback*  completionDelegate) ;

/// @brief Method IsSocialOverlayPaused, addr 0x1804e3760, size 0xa0, virtual false, abstract: false, final false
inline bool IsSocialOverlayPaused(::by_ref<::Epic::OnlineServices::UI::IsSocialOverlayPausedOptions>  options) ;

/// @brief Method IsValidButtonCombination, addr 0x1804e3800, size 0x90, virtual false, abstract: false, final false
inline bool IsValidButtonCombination(::Epic::OnlineServices::UI::InputStateButtonFlags  buttonCombination) ;

/// @brief Method IsValidKeyCombination, addr 0x1804e3890, size 0x90, virtual false, abstract: false, final false
inline bool IsValidKeyCombination(::Epic::OnlineServices::UI::KeyCombination  keyCombination) ;

static inline ::Epic::OnlineServices::UI::UIInterface* New_ctor() ;

static inline ::Epic::OnlineServices::UI::UIInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method PauseSocialOverlay, addr 0x1804e3920, size 0xb0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result PauseSocialOverlay(::by_ref<::Epic::OnlineServices::UI::PauseSocialOverlayOptions>  options) ;

/// @brief Method PrePresent, addr 0x1804e39d0, size 0xd0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result PrePresent(::by_ref<::Epic::OnlineServices::UI::PrePresentOptions>  options) ;

/// @brief Method RemoveNotifyDisplaySettingsUpdated, addr 0x1804e3aa0, size 0xa0, virtual false, abstract: false, final false
inline void RemoveNotifyDisplaySettingsUpdated(uint64_t  id) ;

/// @brief Method RemoveNotifyMemoryMonitor, addr 0x1804e3b40, size 0xa0, virtual false, abstract: false, final false
inline void RemoveNotifyMemoryMonitor(uint64_t  id) ;

/// @brief Method RemoveNotifyOnScreenKeyboardRequested, addr 0x1804e3be0, size 0xa0, virtual false, abstract: false, final false
inline void RemoveNotifyOnScreenKeyboardRequested(uint64_t  id) ;

/// @brief Method ReportInputState, addr 0x1804e3c80, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ReportInputState(::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptions>  options) ;

/// @brief Method SetDisplayPreference, addr 0x1804e3d70, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetDisplayPreference(::by_ref<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>  options) ;

/// @brief Method SetToggleFriendsButton, addr 0x1804e3e10, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetToggleFriendsButton(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>  options) ;

/// @brief Method SetToggleFriendsKey, addr 0x1804e3eb0, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetToggleFriendsKey(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>  options) ;

/// @brief Method ShowBlockPlayer, addr 0x1804e3f50, size 0x2b0, virtual false, abstract: false, final false
inline void ShowBlockPlayer(::by_ref<::Epic::OnlineServices::UI::ShowBlockPlayerOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnShowBlockPlayerCallback*  completionDelegate) ;

/// @brief Method ShowFriends, addr 0x1804e4200, size 0x290, virtual false, abstract: false, final false
inline void ShowFriends(::by_ref<::Epic::OnlineServices::UI::ShowFriendsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnShowFriendsCallback*  completionDelegate) ;

/// @brief Method ShowNativeProfile, addr 0x1804e4490, size 0x2a0, virtual false, abstract: false, final false
inline void ShowNativeProfile(::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnShowNativeProfileCallback*  completionDelegate) ;

/// @brief Method ShowReportPlayer, addr 0x1804e4730, size 0x2b0, virtual false, abstract: false, final false
inline void ShowReportPlayer(::by_ref<::Epic::OnlineServices::UI::ShowReportPlayerOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnShowReportPlayerCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInterface(UIInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInterface(UIInterface const& ) = delete;

/// @brief Field ACKNOWLEDGECORRELATIONID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ACKNOWLEDGECORRELATIONID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ACKNOWLEDGEEVENTID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ACKNOWLEDGEEVENTID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYDISPLAYSETTINGSUPDATED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYDISPLAYSETTINGSUPDATED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYMEMORYMONITOROPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYMEMORYMONITOROPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYMEMORYMONITOR_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYMEMORYMONITOR_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYONSCREENKEYBOARDREQUESTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYONSCREENKEYBOARDREQUESTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CONFIGUREONSCREENKEYBOARD_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CONFIGUREONSCREENKEYBOARD_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field EVENTID_INVALID offset 0xffffffff size 0x4
static constexpr int32_t  EVENTID_INVALID{static_cast<int32_t>(0x0)};

/// @brief Field GETFRIENDSEXCLUSIVEINPUT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETFRIENDSEXCLUSIVEINPUT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETFRIENDSVISIBLE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETFRIENDSVISIBLE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETTOGGLEFRIENDSBUTTON_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETTOGGLEFRIENDSBUTTON_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETTOGGLEFRIENDSKEY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETTOGGLEFRIENDSKEY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field HIDEFRIENDS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  HIDEFRIENDS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ISSOCIALOVERLAYPAUSED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ISSOCIALOVERLAYPAUSED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PAUSESOCIALOVERLAY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PAUSESOCIALOVERLAY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PREPRESENT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PREPRESENT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field RECT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  RECT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field REPORTINPUTSTATE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REPORTINPUTSTATE_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field SETDISPLAYPREFERENCE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETDISPLAYPREFERENCE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETTOGGLEFRIENDSBUTTON_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETTOGGLEFRIENDSBUTTON_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETTOGGLEFRIENDSKEY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETTOGGLEFRIENDSKEY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SHOWBLOCKPLAYER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SHOWBLOCKPLAYER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SHOWFRIENDS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SHOWFRIENDS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SHOWNATIVEPROFILE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SHOWNATIVEPROFILE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SHOWREPORTPLAYER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SHOWREPORTPLAYER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7590};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::UI::UIInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
