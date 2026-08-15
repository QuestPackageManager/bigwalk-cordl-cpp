#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnDisableHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOnDisableHandler)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnDisableHandler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler*, "Cysharp.Threading.Tasks.Triggers", "IAsyncOnDisableHandler");
// Dependencies 
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.IAsyncOnDisableHandler
class CORDL_TYPE IAsyncOnDisableHandler {
public:
// Declarations
/// @brief Method OnDisableAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnDisableAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncOnDisableHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncOnDisableHandler(IAsyncOnDisableHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14599};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
