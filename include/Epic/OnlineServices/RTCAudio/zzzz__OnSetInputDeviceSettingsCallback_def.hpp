#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnSetInputDeviceSettingsCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnSetInputDeviceSettingsCallback)
namespace Epic::OnlineServices::RTCAudio {
struct OnSetInputDeviceSettingsCallbackInfo;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class OnSetInputDeviceSettingsCallback;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*, "Epic.OnlineServices.RTCAudio", "OnSetInputDeviceSettingsCallback");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.OnSetInputDeviceSettingsCallback
class CORDL_TYPE OnSetInputDeviceSettingsCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804eba40, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInfo>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInfo>  data) ;

static inline ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSetInputDeviceSettingsCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSetInputDeviceSettingsCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSetInputDeviceSettingsCallback(OnSetInputDeviceSettingsCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSetInputDeviceSettingsCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSetInputDeviceSettingsCallback(OnSetInputDeviceSettingsCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8014};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
