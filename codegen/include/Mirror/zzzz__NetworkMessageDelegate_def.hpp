#pragma once
// IWYU pragma private; include "Mirror/NetworkMessageDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkMessageDelegate)
namespace Mirror {
class NetworkConnection;
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
namespace Mirror {
class NetworkMessageDelegate;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkMessageDelegate*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkMessageDelegate*, "Mirror", "NetworkMessageDelegate");
// Dependencies System.MulticastDelegate
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkMessageDelegate
class CORDL_TYPE NetworkMessageDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18147c720, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Mirror::NetworkConnection*  conn, ::Mirror::NetworkReader*  reader, int32_t  channelId, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::Mirror::NetworkConnection*  conn, ::Mirror::NetworkReader*  reader, int32_t  channelId) ;

static inline ::Mirror::NetworkMessageDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1815947e0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkMessageDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkMessageDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkMessageDelegate(NetworkMessageDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkMessageDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkMessageDelegate(NetworkMessageDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18383};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkMessageDelegate) == 0x80, "Size mismatch!");

} // namespace end def Mirror
