#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnRectTransformDimensionsChangeHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOnRectTransformDimensionsChangeHandler)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnRectTransformDimensionsChangeHandler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler*, "Cysharp.Threading.Tasks.Triggers", "IAsyncOnRectTransformDimensionsChangeHandler");
// Dependencies 
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.IAsyncOnRectTransformDimensionsChangeHandler
class CORDL_TYPE IAsyncOnRectTransformDimensionsChangeHandler {
public:
// Declarations
/// @brief Method OnRectTransformDimensionsChangeAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnRectTransformDimensionsChangeAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncOnRectTransformDimensionsChangeHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncOnRectTransformDimensionsChangeHandler(IAsyncOnRectTransformDimensionsChangeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14641};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
