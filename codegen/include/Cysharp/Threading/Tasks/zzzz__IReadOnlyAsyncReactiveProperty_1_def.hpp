#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IReadOnlyAsyncReactiveProperty_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReadOnlyAsyncReactiveProperty_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class IReadOnlyAsyncReactiveProperty_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1, "Cysharp.Threading.Tasks", "IReadOnlyAsyncReactiveProperty`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IReadOnlyAsyncReactiveProperty`1<T>
class CORDL_TYPE IReadOnlyAsyncReactiveProperty_1 {
public:
// Declarations
 __declspec(property(get=get_Value)) T  Value;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Method WaitAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> WaitAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithoutCurrent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* WithoutCurrent() ;

/// @brief Method get_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T get_Value() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IReadOnlyAsyncReactiveProperty_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReadOnlyAsyncReactiveProperty_1(IReadOnlyAsyncReactiveProperty_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14162};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
