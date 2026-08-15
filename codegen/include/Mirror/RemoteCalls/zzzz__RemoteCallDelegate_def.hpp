#pragma once
// IWYU pragma private; include "Mirror/RemoteCalls/RemoteCallDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(RemoteCallDelegate)
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
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
namespace Mirror::RemoteCalls {
class RemoteCallDelegate;
}
// Write type traits
MARK_REF_T(::Mirror::RemoteCalls::RemoteCallDelegate*);
DEFINE_IL2CPP_CLASS(::Mirror::RemoteCalls::RemoteCallDelegate*, "Mirror.RemoteCalls", "RemoteCallDelegate");
// Dependencies System.MulticastDelegate
namespace Mirror::RemoteCalls {
// Is value type: false
// CS Name: Mirror.RemoteCalls.RemoteCallDelegate
class CORDL_TYPE RemoteCallDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180382860, size 0x40, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

static inline ::Mirror::RemoteCalls::RemoteCallDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180382c40, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteCallDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteCallDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteCallDelegate(RemoteCallDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteCallDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteCallDelegate(RemoteCallDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::RemoteCalls::RemoteCallDelegate) == 0x80, "Size mismatch!");

} // namespace end def Mirror::RemoteCalls
