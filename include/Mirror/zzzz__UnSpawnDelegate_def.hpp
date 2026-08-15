#pragma once
// IWYU pragma private; include "Mirror/UnSpawnDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(UnSpawnDelegate)
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
class UnSpawnDelegate;
}
// Write type traits
MARK_REF_T(::Mirror::UnSpawnDelegate*);
DEFINE_IL2CPP_CLASS(::Mirror::UnSpawnDelegate*, "Mirror", "UnSpawnDelegate");
// Dependencies System.MulticastDelegate
namespace Mirror {
// Is value type: false
// CS Name: Mirror.UnSpawnDelegate
class CORDL_TYPE UnSpawnDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject*  spawned, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::GameObject*  spawned) ;

static inline ::Mirror::UnSpawnDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnSpawnDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnSpawnDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnSpawnDelegate(UnSpawnDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnSpawnDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnSpawnDelegate(UnSpawnDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18386};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::UnSpawnDelegate) == 0x80, "Size mismatch!");

} // namespace end def Mirror
