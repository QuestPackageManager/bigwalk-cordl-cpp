#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnPeerAuthStatusChangedCallbackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnPeerAuthStatusChangedCallbackInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct OnClientAuthStatusChangedCallbackInfoInternal;
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
namespace Epic::OnlineServices::AntiCheatClient {
class OnPeerAuthStatusChangedCallbackInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal*, "Epic.OnlineServices.AntiCheatClient", "OnPeerAuthStatusChangedCallbackInternal");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: false
// CS Name: Epic.OnlineServices.AntiCheatClient.OnPeerAuthStatusChangedCallbackInternal
class CORDL_TYPE OnPeerAuthStatusChangedCallbackInternal : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1805270d0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnPeerAuthStatusChangedCallbackInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnPeerAuthStatusChangedCallbackInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnPeerAuthStatusChangedCallbackInternal(OnPeerAuthStatusChangedCallbackInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnPeerAuthStatusChangedCallbackInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnPeerAuthStatusChangedCallbackInternal(OnPeerAuthStatusChangedCallbackInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9432};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallbackInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
