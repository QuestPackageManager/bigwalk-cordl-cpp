#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityBindingExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityBindingExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
template<typename TSource,typename TObject>
struct UnityBindingExtensions__BindToCore_d__12_2;
}
namespace Cysharp::Threading::Tasks {
struct UnityBindingExtensions__BindToCore_d__2;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UnityBindingExtensions__BindToCore_d__6_1;
}
namespace Cysharp::Threading::Tasks {
struct UnityBindingExtensions__BindToCore_d__9;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UnityBindingExtensions;
}
namespace Cysharp::Threading::Tasks {
template<typename TSource,typename TObject>
struct UnityBindingExtensions__BindToCore_d__12_2;
}
namespace Cysharp::Threading::Tasks {
struct UnityBindingExtensions__BindToCore_d__2;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UnityBindingExtensions__BindToCore_d__6_1;
}
namespace Cysharp::Threading::Tasks {
struct UnityBindingExtensions__BindToCore_d__9;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UnityBindingExtensions*);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2);
MARK_VAL_T(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1);
MARK_VAL_T(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityBindingExtensions*, "Cysharp.Threading.Tasks", "UnityBindingExtensions");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2, "Cysharp.Threading.Tasks", "UnityBindingExtensions/<BindToCore>d__12`2");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, "Cysharp.Threading.Tasks", "UnityBindingExtensions/<BindToCore>d__2");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1, "Cysharp.Threading.Tasks", "UnityBindingExtensions/<BindToCore>d__6`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, "Cysharp.Threading.Tasks", "UnityBindingExtensions/<BindToCore>d__9");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename TSource,typename TObject>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__12`2<TSource,TObject>
struct CORDL_TYPE UnityBindingExtensions__BindToCore_d__12_2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityBindingExtensions__BindToCore_d__12_2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bindAction", ty: "::System::Action_2<TObject,TSource>*", modifiers: "", def_value: None }, CppParam { name: "bindTarget", ty: "TObject", modifiers: "", def_value: None }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr UnityBindingExtensions__BindToCore_d__12_2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::System::Action_2<TObject,TSource>*  bindAction, TObject  bindTarget, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14544};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field rebindOnError, offset: 0x20, size: 0x1, def value: None
 bool  rebindOnError;

/// @brief Field bindAction, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<TObject,TSource>*  bindAction;

/// @brief Field bindTarget, offset: 0x30, size: 0x8, def value: None
 TObject  bindTarget;

/// @brief Field <repeat>5__2, offset: 0x38, size: 0x1, def value: None
 bool  _repeat_5__2;

/// @brief Field <e>5__3, offset: 0x40, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  _e_5__3;

/// @brief Field <>7__wrap3, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x50, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x68, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__2
struct CORDL_TYPE UnityBindingExtensions__BindToCore_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181e806f0, size 0xa20, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityBindingExtensions__BindToCore_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::UnityW<::UnityEngine::UI::Text>", modifiers: "", def_value: None }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr UnityBindingExtensions__BindToCore_d__2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::UnityW<::UnityEngine::UI::Text>  text, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::StringW>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field rebindOnError, offset: 0x20, size: 0x1, def value: None
 bool  rebindOnError;

/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  text;

/// @brief Field <repeat>5__2, offset: 0x30, size: 0x1, def value: None
 bool  _repeat_5__2;

/// @brief Field <e>5__3, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::StringW>*  _e_5__3;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, cancellationToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, rebindOnError) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, _repeat_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, _e_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, __7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2) == 0x70, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1<T>
struct CORDL_TYPE UnityBindingExtensions__BindToCore_d__6_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityBindingExtensions__BindToCore_d__6_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::UnityW<::UnityEngine::UI::Text>", modifiers: "", def_value: None }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr UnityBindingExtensions__BindToCore_d__6_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::UnityW<::UnityEngine::UI::Text>  text, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14546};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field rebindOnError, offset: 0x20, size: 0x1, def value: None
 bool  rebindOnError;

/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  text;

/// @brief Field <repeat>5__2, offset: 0x30, size: 0x1, def value: None
 bool  _repeat_5__2;

/// @brief Field <e>5__3, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  _e_5__3;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__9
struct CORDL_TYPE UnityBindingExtensions__BindToCore_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181e81110, size 0xa10, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityBindingExtensions__BindToCore_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "rebindOnError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "selectable", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: None }, CppParam { name: "_repeat_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_e_5__3", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr UnityBindingExtensions__BindToCore_d__9(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError, ::UnityW<::UnityEngine::UI::Selectable>  selectable, bool  _repeat_5__2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<bool>*  _e_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14547};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field rebindOnError, offset: 0x20, size: 0x1, def value: None
 bool  rebindOnError;

/// @brief Field selectable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  selectable;

/// @brief Field <repeat>5__2, offset: 0x30, size: 0x1, def value: None
 bool  _repeat_5__2;

/// @brief Field <e>5__3, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<bool>*  _e_5__3;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, cancellationToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, rebindOnError) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, selectable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, _repeat_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, _e_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, __7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9) == 0x70, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityBindingExtensions
class CORDL_TYPE UnityBindingExtensions : public ::System::Object {
public:
// Declarations
template<typename TSource,typename TObject>
using _BindToCore_d__12_2 = ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__12_2<TSource, TObject>;

using _BindToCore_d__2 = ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__2;

template<typename T>
using _BindToCore_d__6_1 = ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__6_1<T>;

using _BindToCore_d__9 = ::Cysharp::Threading::Tasks::UnityBindingExtensions__BindToCore_d__9;

/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  source, ::UnityEngine::UI::Text*  text, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x181e87260, size 0x10, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x181e87270, size 0x50, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::UnityEngine::UI::Text*  text, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::UnityEngine::UI::Text*  text, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TObject>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TObject  bindTarget, ::System::Action_2<TObject,TSource>*  bindAction, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TObject>
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TObject  monoBehaviour, ::System::Action_2<TObject,TSource>*  bindAction, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x181e87250, size 0x10, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::UnityEngine::UI::Selectable*  selectable, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method BindTo, addr 0x181e87200, size 0x50, virtual false, abstract: false, final false
static inline void BindTo(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::UnityEngine::UI::Selectable*  selectable, bool  rebindOnError) ;

/// @brief Method BindToCore, addr 0x181e87080, size 0xc0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method BindToCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::UnityEngine::UI::Text*  text, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method BindToCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TObject>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TObject  bindTarget, ::System::Action_2<TObject,TSource>*  bindAction, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

/// @brief Method BindToCore, addr 0x181e87140, size 0xc0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid BindToCore(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*  source, ::UnityEngine::UI::Selectable*  selectable, ::System::Threading::CancellationToken  cancellationToken, bool  rebindOnError) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityBindingExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityBindingExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityBindingExtensions(UnityBindingExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityBindingExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityBindingExtensions(UnityBindingExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14548};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UnityBindingExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
