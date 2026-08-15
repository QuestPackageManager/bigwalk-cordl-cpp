#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IUniTaskAsyncEnumerator_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUniTaskAsyncEnumerator_1)
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1, "Cysharp.Threading.Tasks", "IUniTaskAsyncEnumerator`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T>
class CORDL_TYPE IUniTaskAsyncEnumerator_1 {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Method MoveNextAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

/// @brief Method get_Current, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IUniTaskAsyncEnumerator_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUniTaskAsyncEnumerator_1(IUniTaskAsyncEnumerator_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14204};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
