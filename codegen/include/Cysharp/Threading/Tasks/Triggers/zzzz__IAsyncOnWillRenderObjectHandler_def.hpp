#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnWillRenderObjectHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOnWillRenderObjectHandler)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnWillRenderObjectHandler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler*, "Cysharp.Threading.Tasks.Triggers", "IAsyncOnWillRenderObjectHandler");
// Dependencies 
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.IAsyncOnWillRenderObjectHandler
class CORDL_TYPE IAsyncOnWillRenderObjectHandler {
public:
// Declarations
/// @brief Method OnWillRenderObjectAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnWillRenderObjectAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncOnWillRenderObjectHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncOnWillRenderObjectHandler(IAsyncOnWillRenderObjectHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14669};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
