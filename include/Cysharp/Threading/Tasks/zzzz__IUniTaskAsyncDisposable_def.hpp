#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IUniTaskAsyncDisposable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUniTaskAsyncDisposable)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*, "Cysharp.Threading.Tasks", "IUniTaskAsyncDisposable");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IUniTaskAsyncDisposable
class CORDL_TYPE IUniTaskAsyncDisposable {
public:
// Declarations
/// @brief Method DisposeAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IUniTaskAsyncDisposable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUniTaskAsyncDisposable(IUniTaskAsyncDisposable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14205};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
