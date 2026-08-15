#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityEventHandlerAsyncEnumerable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityEventHandlerAsyncEnumerable_1)
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
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class UnityEventHandlerAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_1, "Cysharp.Threading.Tasks", "UnityEventHandlerAsyncEnumerable`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator, "Cysharp.Threading.Tasks", "UnityEventHandlerAsyncEnumerable`1/UnityEventHandlerAsyncEnumerator");
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1/UnityEventHandlerAsyncEnumerator<T>
class CORDL_TYPE UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) T  Current;

/// @brief Field <Current>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) T  _Current_k__BackingField;

/// @brief Field cancel1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancel1, put=setStaticF_cancel1)) ::System::Action_1<::System::Object*>*  cancel1;

/// @brief Field cancel2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancel2, put=setStaticF_cancel2)) ::System::Action_1<::System::Object*>*  cancel2;

/// @brief Field cancellationToken1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken1, put=__cordl_internal_set_cancellationToken1)) ::System::Threading::CancellationToken  cancellationToken1;

/// @brief Field cancellationToken2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken2, put=__cordl_internal_set_cancellationToken2)) ::System::Threading::CancellationToken  cancellationToken2;

/// @brief Field isDisposed, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field registration1, offset 0x58, size 0x18 
 __declspec(property(get=__cordl_internal_get_registration1, put=__cordl_internal_set_registration1)) ::System::Threading::CancellationTokenRegistration  registration1;

/// @brief Field registration2, offset 0x70, size 0x18 
 __declspec(property(get=__cordl_internal_get_registration2, put=__cordl_internal_set_registration2)) ::System::Threading::CancellationTokenRegistration  registration2;

/// @brief Field unityAction, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityAction, put=__cordl_internal_set_unityAction)) ::UnityEngine::Events::UnityAction_1<T>*  unityAction;

/// @brief Field unityEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityEvent, put=__cordl_internal_set_unityEvent)) ::UnityEngine::Events::UnityEvent_1<T>*  unityEvent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Invoke(T  value) ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator<T>* New_ctor(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken1, ::System::Threading::CancellationToken  cancellationToken2) ;

/// @brief Method OnCanceled1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnCanceled1(::System::Object*  state) ;

/// @brief Method OnCanceled2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnCanceled2(::System::Object*  state) ;

constexpr T const& __cordl_internal_get__Current_k__BackingField() const;

constexpr T& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken1() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken1() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken2() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken2() ;

constexpr bool const& __cordl_internal_get_isDisposed() const;

constexpr bool& __cordl_internal_get_isDisposed() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_registration1() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_registration1() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_registration2() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_registration2() ;

constexpr ::UnityEngine::Events::UnityAction_1<T>* const& __cordl_internal_get_unityAction() const;

constexpr ::UnityEngine::Events::UnityAction_1<T>*& __cordl_internal_get_unityAction() ;

constexpr ::UnityEngine::Events::UnityEvent_1<T>* const& __cordl_internal_get_unityEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<T>*& __cordl_internal_get_unityEvent() ;

constexpr void __cordl_internal_set__Current_k__BackingField(T  value) ;

constexpr void __cordl_internal_set_cancellationToken1(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationToken2(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_registration1(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_registration2(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_unityAction(::UnityEngine::Events::UnityAction_1<T>*  value) ;

constexpr void __cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken1, ::System::Threading::CancellationToken  cancellationToken2) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancel1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancel2() ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept;

static inline void setStaticF_cancel1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_cancel2(::System::Action_1<::System::Object*>*  value) ;

/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator(UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator(UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14539};

/// @brief Field unityEvent, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<T>*  ___unityEvent;

/// @brief Field cancellationToken1, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken1;

/// @brief Field cancellationToken2, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken2;

/// @brief Field unityAction, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_1<T>*  ___unityAction;

/// @brief Field registration1, offset: 0x58, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___registration1;

/// @brief Field registration2, offset: 0x70, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___registration2;

/// @brief Field isDisposed, offset: 0x88, size: 0x1, def value: None
 bool  ___isDisposed;

/// @brief Field <Current>k__BackingField, offset: 0x90, size: 0x8, def value: None
 T  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<T>
class CORDL_TYPE UnityEventHandlerAsyncEnumerable_1 : public ::System::Object {
public:
// Declarations
using UnityEventHandlerAsyncEnumerator = ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator<T>;

/// @brief Field cancellationToken1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken1, put=__cordl_internal_set_cancellationToken1)) ::System::Threading::CancellationToken  cancellationToken1;

/// @brief Field unityEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityEvent, put=__cordl_internal_set_unityEvent)) ::UnityEngine::Events::UnityEvent_1<T>*  unityEvent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_1<T>* New_ctor(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken1() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken1() ;

constexpr ::UnityEngine::Events::UnityEvent_1<T>* const& __cordl_internal_get_unityEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<T>*& __cordl_internal_get_unityEvent() ;

constexpr void __cordl_internal_set_cancellationToken1(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEventHandlerAsyncEnumerable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEventHandlerAsyncEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEventHandlerAsyncEnumerable_1(UnityEventHandlerAsyncEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventHandlerAsyncEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEventHandlerAsyncEnumerable_1(UnityEventHandlerAsyncEnumerable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14540};

/// @brief Field unityEvent, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<T>*  ___unityEvent;

/// @brief Field cancellationToken1, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
