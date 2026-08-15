#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IUniTaskOrderedAsyncEnumerable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUniTaskOrderedAsyncEnumerable_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename TElement>
class IUniTaskOrderedAsyncEnumerable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1, "Cysharp.Threading.Tasks", "IUniTaskOrderedAsyncEnumerable`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename TElement>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IUniTaskOrderedAsyncEnumerable`1<TElement>
class CORDL_TYPE IUniTaskOrderedAsyncEnumerable_1 {
public:
// Declarations
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*() noexcept;

/// @brief Method CreateOrderedEnumerable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* CreateOrderedEnumerable(::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

/// @brief Method CreateOrderedEnumerable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* CreateOrderedEnumerable(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

/// @brief Method CreateOrderedEnumerable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* CreateOrderedEnumerable(::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TElement_() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IUniTaskOrderedAsyncEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUniTaskOrderedAsyncEnumerable_1(IUniTaskOrderedAsyncEnumerable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14206};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
