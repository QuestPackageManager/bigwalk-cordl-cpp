#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/WhenEachEnumerable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__WhenEachState_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WhenEachEnumerable_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class Channel_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct Enumerator_WhenEachEnumerable_1__DisposeAsync_d__12;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct Enumerator_WhenEachEnumerable_1__RunWhenEachTask_d__11;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
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
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class WhenEachEnumerable_1_Enumerator;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct WhenEachResult_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class WhenEachEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class WhenEachEnumerable_1_Enumerator;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct Enumerator_WhenEachEnumerable_1__DisposeAsync_d__12;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct Enumerator_WhenEachEnumerable_1__RunWhenEachTask_d__11;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenEachEnumerable_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::Enumerator_WhenEachEnumerable_1__DisposeAsync_d__12);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::Enumerator_WhenEachEnumerable_1__RunWhenEachTask_d__11);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenEachEnumerable_1, "Cysharp.Threading.Tasks", "WhenEachEnumerable`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator, "Cysharp.Threading.Tasks", "WhenEachEnumerable`1/Enumerator");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::Enumerator_WhenEachEnumerable_1__DisposeAsync_d__12, "Cysharp.Threading.Tasks", "WhenEachEnumerable`1/Enumerator/<DisposeAsync>d__12");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::Enumerator_WhenEachEnumerable_1__RunWhenEachTask_d__11, "Cysharp.Threading.Tasks", "WhenEachEnumerable`1/Enumerator/<RunWhenEachTask>d__11");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.WhenEachEnumerable`1/Enumerator/<DisposeAsync>d__12<T>
struct CORDL_TYPE Enumerator_WhenEachEnumerable_1__DisposeAsync_d__12 {
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
constexpr Enumerator_WhenEachEnumerable_1__DisposeAsync_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr Enumerator_WhenEachEnumerable_1__DisposeAsync_d__12(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14426};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>*  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, Cysharp.Threading.Tasks.UniTask`1<T>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.WhenEachEnumerable`1/Enumerator/<RunWhenEachTask>d__11<T>
struct CORDL_TYPE Enumerator_WhenEachEnumerable_1__RunWhenEachTask_d__11 {
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
constexpr Enumerator_WhenEachEnumerable_1__RunWhenEachTask_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: None }, CppParam { name: "self", ty: "::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>*", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>", modifiers: "", def_value: None }]
constexpr Enumerator_WhenEachEnumerable_1__RunWhenEachTask_d__11(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>*  self, int32_t  length, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14427};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x10, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  task;

/// @brief Field self, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>*  self;

/// @brief Field length, offset: 0x30, size: 0x4, def value: None
 int32_t  length;

/// @brief Field <>u__1, offset: 0x38, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.WhenEachState, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.WhenEachEnumerable`1/Enumerator<T>
class CORDL_TYPE WhenEachEnumerable_1_Enumerator : public ::System::Object {
public:
// Declarations
using _DisposeAsync_d__12 = ::Cysharp::Threading::Tasks::Enumerator_WhenEachEnumerable_1__DisposeAsync_d__12<T>;

using _RunWhenEachTask_d__11 = ::Cysharp::Threading::Tasks::Enumerator_WhenEachEnumerable_1__RunWhenEachTask_d__11<T>;

 __declspec(property(get=get_Current)) ::Cysharp::Threading::Tasks::WhenEachResult_1<T>  Current;

/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field channel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) ::Cysharp::Threading::Tasks::Channel_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>*  channel;

/// @brief Field channelEnumerator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_channelEnumerator, put=__cordl_internal_set_channelEnumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>*  channelEnumerator;

/// @brief Field completeCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_completeCount, put=__cordl_internal_set_completeCount)) int32_t  completeCount;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  source;

/// @brief Field state, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::Cysharp::Threading::Tasks::WhenEachState  state;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>*() noexcept;

/// @brief Method ConsumeAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void ConsumeAll(::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>*  self, ::ArrayW<::Cysharp::Threading::Tasks::UniTask_1<T>>  array, int32_t  length) ;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method RunWhenEachTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid RunWhenEachTask(::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>*  self, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, int32_t  length) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::Channel_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>* const& __cordl_internal_get_channel() const;

constexpr ::Cysharp::Threading::Tasks::Channel_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>*& __cordl_internal_get_channel() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>* const& __cordl_internal_get_channelEnumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>*& __cordl_internal_get_channelEnumerator() ;

constexpr int32_t const& __cordl_internal_get_completeCount() const;

constexpr int32_t& __cordl_internal_get_completeCount() ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>* const& __cordl_internal_get_source() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*& __cordl_internal_get_source() ;

constexpr ::Cysharp::Threading::Tasks::WhenEachState const& __cordl_internal_get_state() const;

constexpr ::Cysharp::Threading::Tasks::WhenEachState& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_channel(::Cysharp::Threading::Tasks::Channel_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>*  value) ;

constexpr void __cordl_internal_set_channelEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>*  value) ;

constexpr void __cordl_internal_set_completeCount(int32_t  value) ;

constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  value) ;

constexpr void __cordl_internal_set_state(::Cysharp::Threading::Tasks::WhenEachState  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::WhenEachResult_1<T> get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___Cysharp__Threading__Tasks__WhenEachResult_1_T__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenEachEnumerable_1_Enumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenEachEnumerable_1_Enumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenEachEnumerable_1_Enumerator(WhenEachEnumerable_1_Enumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenEachEnumerable_1_Enumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenEachEnumerable_1_Enumerator(WhenEachEnumerable_1_Enumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14428};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  ___source;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field channel, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Channel_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>*  ___channel;

/// @brief Field channelEnumerator, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>*  ___channelEnumerator;

/// @brief Field completeCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___completeCount;

/// @brief Field state, offset: 0x34, size: 0x1, def value: None
 ::Cysharp::Threading::Tasks::WhenEachState  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.WhenEachEnumerable`1<T>
class CORDL_TYPE WhenEachEnumerable_1 : public ::System::Object {
public:
// Declarations
using Enumerator = ::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::WhenEachEnumerable_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  source) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>* const& __cordl_internal_get_source() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::WhenEachResult_1<T>>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___Cysharp__Threading__Tasks__WhenEachResult_1_T__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenEachEnumerable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenEachEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenEachEnumerable_1(WhenEachEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenEachEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenEachEnumerable_1(WhenEachEnumerable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14429};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
