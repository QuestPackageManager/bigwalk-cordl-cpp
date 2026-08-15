#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncDestroyTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AsyncDestroyTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncDestroyTrigger_AwakeMonitor;
}
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncDestroyTrigger___c;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
class CancellationTokenSource;
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
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncDestroyTrigger;
}
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncDestroyTrigger_AwakeMonitor;
}
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncDestroyTrigger___c;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*);
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor*);
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncDestroyTrigger");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor*, "Cysharp.Threading.Tasks.Triggers", "AsyncDestroyTrigger/AwakeMonitor");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*, "Cysharp.Threading.Tasks.Triggers", "AsyncDestroyTrigger/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncDestroyTrigger/AwakeMonitor
class CORDL_TYPE AsyncDestroyTrigger_AwakeMonitor : public ::System::Object {
public:
// Declarations
/// @brief Field trigger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_trigger, put=__cordl_internal_set_trigger)) ::UnityW<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger>  trigger;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Method MoveNext, addr 0x181e7c720, size 0x80, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor* New_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*  trigger) ;

constexpr ::UnityW<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger> const& __cordl_internal_get_trigger() const;

constexpr ::UnityW<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger>& __cordl_internal_get_trigger() ;

constexpr void __cordl_internal_set_trigger(::UnityW<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*  trigger) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncDestroyTrigger_AwakeMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncDestroyTrigger_AwakeMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncDestroyTrigger_AwakeMonitor(AsyncDestroyTrigger_AwakeMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncDestroyTrigger_AwakeMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncDestroyTrigger_AwakeMonitor(AsyncDestroyTrigger_AwakeMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14552};

/// @brief Field trigger, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger>  ___trigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor, ___trigger) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncDestroyTrigger/<>c
class CORDL_TYPE AsyncDestroyTrigger___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Action_1<::System::Object*>*  __9__7_0;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c* New_ctor() ;

/// @brief Method <OnDestroyAsync>b__7_0, addr 0x181e821a0, size 0x80, virtual false, abstract: false, final false
inline void _OnDestroyAsync_b__7_0(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*  value) ;

static inline void setStaticF___9__7_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncDestroyTrigger___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncDestroyTrigger___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncDestroyTrigger___c(AsyncDestroyTrigger___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncDestroyTrigger___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncDestroyTrigger___c(AsyncDestroyTrigger___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14553};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
// Dependencies UnityEngine.MonoBehaviour
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncDestroyTrigger
class CORDL_TYPE AsyncDestroyTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AwakeMonitor = ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor;

using __c = ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c;

 __declspec(property(get=get_CancellationToken)) ::System::Threading::CancellationToken  CancellationToken;

/// @brief Field awakeCalled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_awakeCalled, put=__cordl_internal_set_awakeCalled)) bool  awakeCalled;

/// @brief Field called, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_called, put=__cordl_internal_set_called)) bool  called;

/// @brief Field cancellationTokenSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationTokenSource, put=__cordl_internal_set_cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  cancellationTokenSource;

/// @brief Method Awake, addr 0x1812fa9d0, size 0x3350, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181e75f50, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDestroyAsync, addr 0x181e75d80, size 0x1d0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnDestroyAsync() ;

constexpr bool const& __cordl_internal_get_awakeCalled() const;

constexpr bool& __cordl_internal_get_awakeCalled() ;

constexpr bool const& __cordl_internal_get_called() const;

constexpr bool& __cordl_internal_get_called() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cancellationTokenSource() ;

constexpr void __cordl_internal_set_awakeCalled(bool  value) ;

constexpr void __cordl_internal_set_called(bool  value) ;

constexpr void __cordl_internal_set_cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CancellationToken, addr 0x181e75f90, size 0xa0, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken get_CancellationToken() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncDestroyTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncDestroyTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncDestroyTrigger(AsyncDestroyTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncDestroyTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncDestroyTrigger(AsyncDestroyTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14554};

/// @brief Field awakeCalled, offset: 0x20, size: 0x1, def value: None
 bool  ___awakeCalled;

/// @brief Field called, offset: 0x21, size: 0x1, def value: None
 bool  ___called;

/// @brief Field cancellationTokenSource, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___cancellationTokenSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger, ___awakeCalled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger, ___called) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger, ___cancellationTokenSource) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger) == 0x30, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
