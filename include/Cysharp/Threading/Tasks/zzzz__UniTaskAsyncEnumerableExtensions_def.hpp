#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskAsyncEnumerableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UniTaskAsyncEnumerableExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTaskCancelableAsyncEnumerable_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UniTaskAsyncEnumerableExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskAsyncEnumerableExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskAsyncEnumerableExtensions*, "Cysharp.Threading.Tasks", "UniTaskAsyncEnumerableExtensions");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskAsyncEnumerableExtensions
class CORDL_TYPE UniTaskAsyncEnumerableExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method WithCancellation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T> WithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskAsyncEnumerableExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskAsyncEnumerableExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskAsyncEnumerableExtensions(UniTaskAsyncEnumerableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskAsyncEnumerableExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskAsyncEnumerableExtensions(UniTaskAsyncEnumerableExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14208};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskAsyncEnumerableExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
