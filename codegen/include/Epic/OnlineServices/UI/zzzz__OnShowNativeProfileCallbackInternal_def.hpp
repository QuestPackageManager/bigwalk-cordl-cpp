#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnShowNativeProfileCallbackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnShowNativeProfileCallbackInternal)
namespace Epic::OnlineServices::UI {
struct ShowNativeProfileCallbackInfoInternal;
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
namespace Epic::OnlineServices::UI {
class OnShowNativeProfileCallbackInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal*, "Epic.OnlineServices.UI", "OnShowNativeProfileCallbackInternal");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::UI {
// Is value type: false
// CS Name: Epic.OnlineServices.UI.OnShowNativeProfileCallbackInternal
class CORDL_TYPE OnShowNativeProfileCallbackInternal : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804df4e0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileCallbackInfoInternal>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnShowNativeProfileCallbackInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnShowNativeProfileCallbackInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnShowNativeProfileCallbackInternal(OnShowNativeProfileCallbackInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnShowNativeProfileCallbackInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnShowNativeProfileCallbackInternal(OnShowNativeProfileCallbackInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7557};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
