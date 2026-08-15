#pragma once
// IWYU pragma private; include "Steamworks/FSteamNetworkingSocketsDebugOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(FSteamNetworkingSocketsDebugOutput)
namespace Steamworks {
struct ESteamNetworkingSocketsDebugOutputType;
}
namespace System::Text {
class StringBuilder;
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
namespace Steamworks {
class FSteamNetworkingSocketsDebugOutput;
}
// Write type traits
MARK_REF_T(::Steamworks::FSteamNetworkingSocketsDebugOutput*);
DEFINE_IL2CPP_CLASS(::Steamworks::FSteamNetworkingSocketsDebugOutput*, "Steamworks", "FSteamNetworkingSocketsDebugOutput");
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.FSteamNetworkingSocketsDebugOutput
class CORDL_TYPE FSteamNetworkingSocketsDebugOutput : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1805a9b20, size 0x100, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Steamworks::ESteamNetworkingSocketsDebugOutputType  nType, ::System::Text::StringBuilder*  pszMsg, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::Steamworks::ESteamNetworkingSocketsDebugOutputType  nType, ::System::Text::StringBuilder*  pszMsg) ;

static inline ::Steamworks::FSteamNetworkingSocketsDebugOutput* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805a9c20, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FSteamNetworkingSocketsDebugOutput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FSteamNetworkingSocketsDebugOutput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FSteamNetworkingSocketsDebugOutput(FSteamNetworkingSocketsDebugOutput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FSteamNetworkingSocketsDebugOutput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FSteamNetworkingSocketsDebugOutput(FSteamNetworkingSocketsDebugOutput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::FSteamNetworkingSocketsDebugOutput) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
