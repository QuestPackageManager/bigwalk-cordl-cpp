#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnRejectRequestToJoinCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnRejectRequestToJoinCallback)
namespace Epic::OnlineServices::CustomInvites {
struct RejectRequestToJoinCallbackInfo;
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
namespace Epic::OnlineServices::CustomInvites {
class OnRejectRequestToJoinCallback;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallback*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallback*, "Epic.OnlineServices.CustomInvites", "OnRejectRequestToJoinCallback");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::CustomInvites {
// Is value type: false
// CS Name: Epic.OnlineServices.CustomInvites.OnRejectRequestToJoinCallback
class CORDL_TYPE OnRejectRequestToJoinCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18051c260, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfo>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfo>  data) ;

static inline ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRejectRequestToJoinCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRejectRequestToJoinCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRejectRequestToJoinCallback(OnRejectRequestToJoinCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRejectRequestToJoinCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRejectRequestToJoinCallback(OnRejectRequestToJoinCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9058};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallback) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
