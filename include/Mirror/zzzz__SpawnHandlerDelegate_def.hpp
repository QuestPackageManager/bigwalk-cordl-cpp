#pragma once
// IWYU pragma private; include "Mirror/SpawnHandlerDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(SpawnHandlerDelegate)
namespace Mirror {
struct SpawnMessage;
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
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror {
class SpawnHandlerDelegate;
}
// Write type traits
MARK_REF_T(::Mirror::SpawnHandlerDelegate*);
DEFINE_IL2CPP_CLASS(::Mirror::SpawnHandlerDelegate*, "Mirror", "SpawnHandlerDelegate");
// Dependencies System.MulticastDelegate
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SpawnHandlerDelegate
class CORDL_TYPE SpawnHandlerDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1815982a0, size 0x100, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Mirror::SpawnMessage  msg, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180ccc5d0, size 0x2c90, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Invoke(::Mirror::SpawnMessage  msg) ;

static inline ::Mirror::SpawnHandlerDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1815983a0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnHandlerDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnHandlerDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnHandlerDelegate(SpawnHandlerDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnHandlerDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnHandlerDelegate(SpawnHandlerDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SpawnHandlerDelegate) == 0x80, "Size mismatch!");

} // namespace end def Mirror
