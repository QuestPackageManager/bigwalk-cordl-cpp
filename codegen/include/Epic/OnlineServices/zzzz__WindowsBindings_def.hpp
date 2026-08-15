#pragma once
// IWYU pragma private; include "Epic/OnlineServices/WindowsBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WindowsBindings)
namespace Epic::OnlineServices::IntegratedPlatform {
struct WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal;
}
namespace Epic::OnlineServices::Platform {
struct WindowsOptionsInternal;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices {
class WindowsBindings;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::WindowsBindings*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::WindowsBindings*, "Epic.OnlineServices", "WindowsBindings");
// Dependencies System.Object
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.WindowsBindings
class CORDL_TYPE WindowsBindings : public ::System::Object {
public:
// Declarations
/// @brief Method EOS_IntegratedPlatformOptionsContainer_Add_WindowsSteam, addr 0x1804e6590, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result EOS_IntegratedPlatformOptionsContainer_Add_WindowsSteam(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal>  inOptions) ;

/// @brief Method EOS_Platform_Create_Windows, addr 0x1804e6620, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_Platform_Create_Windows(::by_ref<::Epic::OnlineServices::Platform::WindowsOptionsInternal>  options) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsBindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsBindings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsBindings(WindowsBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsBindings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsBindings(WindowsBindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7455};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::WindowsBindings) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices
