#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/OnInstallModCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnInstallModCallback)
namespace Epic::OnlineServices::Mods {
struct InstallModCallbackInfo;
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
class OnInstallModCallback;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Mods::OnInstallModCallback*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::OnInstallModCallback*, "Epic.OnlineServices.Mods", "OnInstallModCallback");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::Mods {
// Is value type: false
// CS Name: Epic.OnlineServices.Mods.OnInstallModCallback
class CORDL_TYPE OnInstallModCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18050db30, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::Mods::InstallModCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::Mods::InstallModCallbackInfo>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::Mods::InstallModCallbackInfo>  data) ;

static inline ::Epic::OnlineServices::Mods::OnInstallModCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnInstallModCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnInstallModCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnInstallModCallback(OnInstallModCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnInstallModCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnInstallModCallback(OnInstallModCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8389};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Mods::OnInstallModCallback) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
