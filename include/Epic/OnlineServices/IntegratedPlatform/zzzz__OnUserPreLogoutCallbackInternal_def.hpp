#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/OnUserPreLogoutCallbackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnUserPreLogoutCallbackInternal)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformPreLogoutAction;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct UserPreLogoutCallbackInfoInternal;
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
class OnUserPreLogoutCallbackInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*, "Epic.OnlineServices.IntegratedPlatform", "OnUserPreLogoutCallbackInternal");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: false
// CS Name: Epic.OnlineServices.IntegratedPlatform.OnUserPreLogoutCallbackInternal
class CORDL_TYPE OnUserPreLogoutCallbackInternal : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18051ce20, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804de840, size 0xa0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction EndInvoke(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction Invoke(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804de8e0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUserPreLogoutCallbackInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUserPreLogoutCallbackInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUserPreLogoutCallbackInternal(OnUserPreLogoutCallbackInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUserPreLogoutCallbackInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUserPreLogoutCallbackInternal(OnUserPreLogoutCallbackInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8815};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
