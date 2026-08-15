#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCancellationExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UniTaskCancellationExtensions)
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UniTaskCancellationExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskCancellationExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskCancellationExtensions*, "Cysharp.Threading.Tasks", "UniTaskCancellationExtensions");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskCancellationExtensions
class CORDL_TYPE UniTaskCancellationExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method GetCancellationTokenOnDestroy, addr 0x181e69630, size 0x60, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationToken GetCancellationTokenOnDestroy(::UnityEngine::Component*  component) ;

/// @brief Method GetCancellationTokenOnDestroy, addr 0x181e69690, size 0x30, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationToken GetCancellationTokenOnDestroy(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetCancellationTokenOnDestroy, addr 0x181e69610, size 0x20, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationToken GetCancellationTokenOnDestroy(::UnityEngine::MonoBehaviour*  monoBehaviour) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskCancellationExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskCancellationExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskCancellationExtensions(UniTaskCancellationExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskCancellationExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskCancellationExtensions(UniTaskCancellationExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14271};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskCancellationExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
