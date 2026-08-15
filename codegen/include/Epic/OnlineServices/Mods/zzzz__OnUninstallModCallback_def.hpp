#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/OnUninstallModCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnUninstallModCallback)
namespace Epic::OnlineServices::Mods {
struct UninstallModCallbackInfo;
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
namespace Epic::OnlineServices::Mods {
class OnUninstallModCallback;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Mods::OnUninstallModCallback*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::OnUninstallModCallback*, "Epic.OnlineServices.Mods", "OnUninstallModCallback");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::Mods {
// Is value type: false
// CS Name: Epic.OnlineServices.Mods.OnUninstallModCallback
class CORDL_TYPE OnUninstallModCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180510b70, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::Mods::UninstallModCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::Mods::UninstallModCallbackInfo>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::Mods::UninstallModCallbackInfo>  data) ;

static inline ::Epic::OnlineServices::Mods::OnUninstallModCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUninstallModCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUninstallModCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUninstallModCallback(OnUninstallModCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUninstallModCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUninstallModCallback(OnUninstallModCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Mods::OnUninstallModCallback) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
