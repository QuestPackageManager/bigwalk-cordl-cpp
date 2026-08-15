#pragma once
// IWYU pragma private; include "Steamworks/SteamInputActionEventCallbackPointer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(SteamInputActionEventCallbackPointer)
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
namespace Steamworks {
class SteamInputActionEventCallbackPointer;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamInputActionEventCallbackPointer*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInputActionEventCallbackPointer*, "Steamworks", "SteamInputActionEventCallbackPointer");
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamInputActionEventCallbackPointer
class CORDL_TYPE SteamInputActionEventCallbackPointer : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180502370, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  SteamInputActionEvent, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  SteamInputActionEvent) ;

static inline ::Steamworks::SteamInputActionEventCallbackPointer* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805023d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamInputActionEventCallbackPointer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamInputActionEventCallbackPointer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamInputActionEventCallbackPointer(SteamInputActionEventCallbackPointer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamInputActionEventCallbackPointer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamInputActionEventCallbackPointer(SteamInputActionEventCallbackPointer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16418};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamInputActionEventCallbackPointer) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
