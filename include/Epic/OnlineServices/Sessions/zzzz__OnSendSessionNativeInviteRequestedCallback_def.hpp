#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnSendSessionNativeInviteRequestedCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnSendSessionNativeInviteRequestedCallback)
namespace Epic::OnlineServices::Sessions {
struct SendSessionNativeInviteRequestedCallbackInfo;
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
namespace Epic::OnlineServices::Sessions {
class OnSendSessionNativeInviteRequestedCallback;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallback*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallback*, "Epic.OnlineServices.Sessions", "OnSendSessionNativeInviteRequestedCallback");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnSendSessionNativeInviteRequestedCallback
class CORDL_TYPE OnSendSessionNativeInviteRequestedCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804eb0f0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::Sessions::SendSessionNativeInviteRequestedCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::Sessions::SendSessionNativeInviteRequestedCallbackInfo>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::Sessions::SendSessionNativeInviteRequestedCallbackInfo>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSendSessionNativeInviteRequestedCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSendSessionNativeInviteRequestedCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSendSessionNativeInviteRequestedCallback(OnSendSessionNativeInviteRequestedCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSendSessionNativeInviteRequestedCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSendSessionNativeInviteRequestedCallback(OnSendSessionNativeInviteRequestedCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7753};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallback) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
