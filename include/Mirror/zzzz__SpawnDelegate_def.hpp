#pragma once
// IWYU pragma private; include "Mirror/SpawnDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnDelegate)
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Mirror {
class SpawnDelegate;
}
// Write type traits
MARK_REF_T(::Mirror::SpawnDelegate*);
DEFINE_IL2CPP_CLASS(::Mirror::SpawnDelegate*, "Mirror", "SpawnDelegate");
// Dependencies System.MulticastDelegate
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SpawnDelegate
class CORDL_TYPE SpawnDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181598080, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3  position, uint32_t  assetId, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1815980f0, size 0x100, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Invoke(::UnityEngine::Vector3  position, uint32_t  assetId) ;

static inline ::Mirror::SpawnDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1815981f0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnDelegate(SpawnDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnDelegate(SpawnDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SpawnDelegate) == 0x80, "Size mismatch!");

} // namespace end def Mirror
