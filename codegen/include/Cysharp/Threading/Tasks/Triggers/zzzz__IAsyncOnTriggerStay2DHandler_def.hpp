#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnTriggerStay2DHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOnTriggerStay2DHandler)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace UnityEngine {
class Collider2D;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerStay2DHandler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*, "Cysharp.Threading.Tasks.Triggers", "IAsyncOnTriggerStay2DHandler");
// Dependencies 
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.IAsyncOnTriggerStay2DHandler
class CORDL_TYPE IAsyncOnTriggerStay2DHandler {
public:
// Declarations
/// @brief Method OnTriggerStay2DAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider2D>> OnTriggerStay2DAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncOnTriggerStay2DHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncOnTriggerStay2DHandler(IAsyncOnTriggerStay2DHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14665};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
