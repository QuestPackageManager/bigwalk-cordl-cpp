#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnTriggerExit2DHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOnTriggerExit2DHandler)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace UnityEngine {
class Collider2D;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerExit2DHandler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler*, "Cysharp.Threading.Tasks.Triggers", "IAsyncOnTriggerExit2DHandler");
// Dependencies 
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.IAsyncOnTriggerExit2DHandler
class CORDL_TYPE IAsyncOnTriggerExit2DHandler {
public:
// Declarations
/// @brief Method OnTriggerExit2DAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider2D>> OnTriggerExit2DAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncOnTriggerExit2DHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncOnTriggerExit2DHandler(IAsyncOnTriggerExit2DHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14661};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
