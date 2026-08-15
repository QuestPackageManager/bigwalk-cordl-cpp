#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/SetPresenceCompleteCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(SetPresenceCompleteCallback)
namespace Epic::OnlineServices::Presence {
struct SetPresenceCallbackInfo;
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
namespace Epic::OnlineServices::Presence {
class SetPresenceCompleteCallback;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*, "Epic.OnlineServices.Presence", "SetPresenceCompleteCallback");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::Presence {
// Is value type: false
// CS Name: Epic.OnlineServices.Presence.SetPresenceCompleteCallback
class CORDL_TYPE SetPresenceCompleteCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180502c10, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfo>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfo>  data) ;

static inline ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetPresenceCompleteCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetPresenceCompleteCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetPresenceCompleteCallback(SetPresenceCompleteCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetPresenceCompleteCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetPresenceCompleteCallback(SetPresenceCompleteCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8259};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Presence::SetPresenceCompleteCallback) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
