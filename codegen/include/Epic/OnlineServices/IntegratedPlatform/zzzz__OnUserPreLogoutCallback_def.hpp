#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/OnUserPreLogoutCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnUserPreLogoutCallback)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformPreLogoutAction;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct UserPreLogoutCallbackInfo;
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
namespace Epic::OnlineServices::IntegratedPlatform {
class OnUserPreLogoutCallback;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallback*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallback*, "Epic.OnlineServices.IntegratedPlatform", "OnUserPreLogoutCallback");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: false
// CS Name: Epic.OnlineServices.IntegratedPlatform.OnUserPreLogoutCallback
class CORDL_TYPE OnUserPreLogoutCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18051ce80, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804de840, size 0xa0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction EndInvoke(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction Invoke(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>  data) ;

static inline ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804de8e0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUserPreLogoutCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUserPreLogoutCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUserPreLogoutCallback(OnUserPreLogoutCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUserPreLogoutCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUserPreLogoutCallback(OnUserPreLogoutCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8814};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallback) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
