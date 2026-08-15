#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/EnumeratorAsyncExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnumeratorAsyncExtensions)
namespace Cysharp::Threading::Tasks {
class AutoResetUniTaskCompletionSource;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorAsyncExtensions_EnumeratorPromise;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorAsyncExtensions__Core_d__4;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorPromise_EnumeratorAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITaskPoolNode_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
struct UniTask_Awaiter;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class CustomYieldInstruction;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class EnumeratorAsyncExtensions;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorAsyncExtensions_EnumeratorPromise;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorAsyncExtensions__Core_d__4;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21;
}
namespace Cysharp::Threading::Tasks {
class EnumeratorPromise_EnumeratorAsyncExtensions___c;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*);
MARK_REF_T(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*);
MARK_REF_T(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*);
MARK_REF_T(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*);
MARK_REF_T(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*);
MARK_REF_T(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*, "Cysharp.Threading.Tasks", "EnumeratorAsyncExtensions");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*, "Cysharp.Threading.Tasks", "EnumeratorAsyncExtensions/EnumeratorPromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*, "Cysharp.Threading.Tasks", "EnumeratorAsyncExtensions/<Core>d__4");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*, "Cysharp.Threading.Tasks", "EnumeratorAsyncExtensions/EnumeratorPromise/<ConsumeEnumerator>d__19");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*, "Cysharp.Threading.Tasks", "EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*, "Cysharp.Threading.Tasks", "EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*, "Cysharp.Threading.Tasks", "EnumeratorAsyncExtensions/EnumeratorPromise/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<>c
class CORDL_TYPE EnumeratorPromise_EnumeratorAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*  __9;

static inline ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x181e683a0, size 0x40, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumeratorPromise_EnumeratorAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorPromise_EnumeratorAsyncExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumeratorPromise_EnumeratorAsyncExtensions___c(EnumeratorPromise_EnumeratorAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorPromise_EnumeratorAsyncExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumeratorPromise_EnumeratorAsyncExtensions___c(EnumeratorPromise_EnumeratorAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14195};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<ConsumeEnumerator>d__19
class CORDL_TYPE EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <cyi>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cyi_5__2, put=__cordl_internal_set__cyi_5__2)) ::UnityEngine::CustomYieldInstruction*  _cyi_5__2;

/// @brief Field <innerCoroutine>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerCoroutine_5__3, put=__cordl_internal_set__innerCoroutine_5__3)) ::System::Collections::IEnumerator*  _innerCoroutine_5__3;

/// @brief Field enumerator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::System::Collections::IEnumerator*  enumerator;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181e643e0, size 0x460, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::CustomYieldInstruction* const& __cordl_internal_get__cyi_5__2() const;

constexpr ::UnityEngine::CustomYieldInstruction*& __cordl_internal_get__cyi_5__2() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get__innerCoroutine_5__3() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__innerCoroutine_5__3() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_enumerator() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_enumerator() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__cyi_5__2(::UnityEngine::CustomYieldInstruction*  value) ;

constexpr void __cordl_internal_set__innerCoroutine_5__3(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set_enumerator(::System::Collections::IEnumerator*  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19(EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19(EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14196};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field enumerator, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___enumerator;

/// @brief Field <cyi>5__2, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::CustomYieldInstruction*  ____cyi_5__2;

/// @brief Field <innerCoroutine>5__3, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ____innerCoroutine_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19, ___enumerator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19, ____cyi_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19, ____innerCoroutine_5__3) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19) == 0x38, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitAsyncOperation>d__22
class CORDL_TYPE EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field asyncOperation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::AsyncOperation*  asyncOperation;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181e69210, size 0x60, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::AsyncOperation* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get_asyncOperation() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::AsyncOperation*  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22(EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22(EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14197};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field asyncOperation, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AsyncOperation*  ___asyncOperation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22, ___asyncOperation) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22) == 0x28, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise/<UnwrapWaitForSeconds>d__21
class CORDL_TYPE EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <elapsed>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__elapsed_5__3, put=__cordl_internal_set__elapsed_5__3)) float_t  _elapsed_5__3;

/// @brief Field <second>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__second_5__2, put=__cordl_internal_set__second_5__2)) float_t  _second_5__2;

/// @brief Field waitForSeconds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitForSeconds, put=__cordl_internal_set_waitForSeconds)) ::UnityEngine::WaitForSeconds*  waitForSeconds;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181e69270, size 0x110, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr float_t const& __cordl_internal_get__elapsed_5__3() const;

constexpr float_t& __cordl_internal_get__elapsed_5__3() ;

constexpr float_t const& __cordl_internal_get__second_5__2() const;

constexpr float_t& __cordl_internal_get__second_5__2() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get_waitForSeconds() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get_waitForSeconds() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__elapsed_5__3(float_t  value) ;

constexpr void __cordl_internal_set__second_5__2(float_t  value) ;

constexpr void __cordl_internal_set_waitForSeconds(::UnityEngine::WaitForSeconds*  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21(EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21(EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14198};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field waitForSeconds, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ___waitForSeconds;

/// @brief Field <second>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____second_5__2;

/// @brief Field <elapsed>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____elapsed_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21, ___waitForSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21, ____second_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21, ____elapsed_5__3) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21) == 0x30, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/EnumeratorPromise
class CORDL_TYPE EnumeratorAsyncExtensions_EnumeratorPromise : public ::System::Object {
public:
// Declarations
using _ConsumeEnumerator_d__19 = ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19;

using _UnwrapWaitAsyncOperation_d__22 = ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22;

using _UnwrapWaitForSeconds_d__21 = ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21;

using __c = ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*  NextNode;

/// @brief Field calledGetResult, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_calledGetResult, put=__cordl_internal_set_calledGetResult)) bool  calledGetResult;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  core;

/// @brief Field initialFrame, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialFrame, put=__cordl_internal_set_initialFrame)) int32_t  initialFrame;

/// @brief Field innerEnumerator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_innerEnumerator, put=__cordl_internal_set_innerEnumerator)) ::System::Collections::IEnumerator*  innerEnumerator;

/// @brief Field loopRunning, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_loopRunning, put=__cordl_internal_set_loopRunning)) bool  loopRunning;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>  pool;

/// @brief Field waitForSeconds_Seconds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_waitForSeconds_Seconds, put=setStaticF_waitForSeconds_Seconds)) ::System::Reflection::FieldInfo*  waitForSeconds_Seconds;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Method ConsumeEnumerator, addr 0x181e5fe20, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* ConsumeEnumerator(::System::Collections::IEnumerator*  enumerator) ;

/// @brief Method Create, addr 0x181e5fe70, size 0x1b0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Collections::IEnumerator*  innerEnumerator, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0x181e60020, size 0x70, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x180ecf830, size 0xa0, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x181e60090, size 0x170, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0x180ecf8d0, size 0x2d0, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x181e60200, size 0x70, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x180ecfba0, size 0x10f0, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

/// @brief Method UnwrapWaitAsyncOperation, addr 0x181e60270, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* UnwrapWaitAsyncOperation(::UnityEngine::AsyncOperation*  asyncOperation) ;

/// @brief Method UnwrapWaitForSeconds, addr 0x181e602c0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* UnwrapWaitForSeconds(::UnityEngine::WaitForSeconds*  waitForSeconds) ;

constexpr bool const& __cordl_internal_get_calledGetResult() const;

constexpr bool& __cordl_internal_get_calledGetResult() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>& __cordl_internal_get_core() ;

constexpr int32_t const& __cordl_internal_get_initialFrame() const;

constexpr int32_t& __cordl_internal_get_initialFrame() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_innerEnumerator() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_innerEnumerator() ;

constexpr bool const& __cordl_internal_get_loopRunning() const;

constexpr bool& __cordl_internal_get_loopRunning() ;

constexpr ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*& __cordl_internal_get_nextNode() ;

constexpr void __cordl_internal_set_calledGetResult(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  value) ;

constexpr void __cordl_internal_set_initialFrame(int32_t  value) ;

constexpr void __cordl_internal_set_innerEnumerator(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set_loopRunning(bool  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*> getStaticF_pool() ;

static inline ::System::Reflection::FieldInfo* getStaticF_waitForSeconds_Seconds() ;

/// @brief Method get_NextNode, addr 0x1802f4a60, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__EnumeratorAsyncExtensions_EnumeratorPromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>  value) ;

static inline void setStaticF_waitForSeconds_Seconds(::System::Reflection::FieldInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumeratorAsyncExtensions_EnumeratorPromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorAsyncExtensions_EnumeratorPromise", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumeratorAsyncExtensions_EnumeratorPromise(EnumeratorAsyncExtensions_EnumeratorPromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorAsyncExtensions_EnumeratorPromise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumeratorAsyncExtensions_EnumeratorPromise(EnumeratorAsyncExtensions_EnumeratorPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14199};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*  ___nextNode;

/// @brief Field innerEnumerator, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___innerEnumerator;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field initialFrame, offset: 0x28, size: 0x4, def value: None
 int32_t  ___initialFrame;

/// @brief Field loopRunning, offset: 0x2c, size: 0x1, def value: None
 bool  ___loopRunning;

/// @brief Field calledGetResult, offset: 0x2d, size: 0x1, def value: None
 bool  ___calledGetResult;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise, ___innerEnumerator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise, ___cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise, ___initialFrame) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise, ___loopRunning) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise, ___calledGetResult) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions/<Core>d__4
class CORDL_TYPE EnumeratorAsyncExtensions__Core_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field coroutineRunner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutineRunner, put=__cordl_internal_set_coroutineRunner)) ::UnityW<::UnityEngine::MonoBehaviour>  coroutineRunner;

/// @brief Field inner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inner, put=__cordl_internal_set_inner)) ::System::Collections::IEnumerator*  inner;

/// @brief Field source, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  source;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181e64cb0, size 0xa0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_coroutineRunner() const;

constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_coroutineRunner() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_inner() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_inner() ;

constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_coroutineRunner(::UnityW<::UnityEngine::MonoBehaviour>  value) ;

constexpr void __cordl_internal_set_inner(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumeratorAsyncExtensions__Core_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorAsyncExtensions__Core_d__4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumeratorAsyncExtensions__Core_d__4(EnumeratorAsyncExtensions__Core_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorAsyncExtensions__Core_d__4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumeratorAsyncExtensions__Core_d__4(EnumeratorAsyncExtensions__Core_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14200};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field coroutineRunner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MonoBehaviour>  ___coroutineRunner;

/// @brief Field inner, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___inner;

/// @brief Field source, offset: 0x30, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4, ___coroutineRunner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4, ___inner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4, ___source) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4) == 0x38, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions
class CORDL_TYPE EnumeratorAsyncExtensions : public ::System::Object {
public:
// Declarations
using EnumeratorPromise = ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise;

using _Core_d__4 = ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4;

/// @brief Method Core, addr 0x181e5fb70, size 0x80, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* Core(::System::Collections::IEnumerator*  inner, ::UnityEngine::MonoBehaviour*  coroutineRunner, ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  source) ;

/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter(T  enumerator) ;

/// @brief Method ToUniTask, addr 0x181e5fbf0, size 0xf0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask ToUniTask(::System::Collections::IEnumerator*  enumerator, ::UnityEngine::MonoBehaviour*  coroutineRunner) ;

/// @brief Method ToUniTask, addr 0x181e5fce0, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask ToUniTask(::System::Collections::IEnumerator*  enumerator, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithCancellation, addr 0x181e5fd80, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WithCancellation(::System::Collections::IEnumerator*  enumerator, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumeratorAsyncExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorAsyncExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumeratorAsyncExtensions(EnumeratorAsyncExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumeratorAsyncExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumeratorAsyncExtensions(EnumeratorAsyncExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14201};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
