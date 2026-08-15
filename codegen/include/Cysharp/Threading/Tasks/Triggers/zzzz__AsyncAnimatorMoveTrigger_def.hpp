#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncAnimatorMoveTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncAnimatorMoveTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnAnimatorMoveHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncAnimatorMoveTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncAnimatorMoveTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncAnimatorMoveTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncAnimatorMoveTrigger");
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncAnimatorMoveTrigger
class CORDL_TYPE AsyncAnimatorMoveTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnAnimatorMoveAsyncHandler, addr 0x181e746e0, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler* GetOnAnimatorMoveAsyncHandler() ;

/// @brief Method GetOnAnimatorMoveAsyncHandler, addr 0x181e74720, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler* GetOnAnimatorMoveAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncAnimatorMoveTrigger* New_ctor() ;

/// @brief Method OnAnimatorMove, addr 0x181e74860, size 0x20, virtual false, abstract: false, final false
inline void OnAnimatorMove() ;

/// @brief Method OnAnimatorMoveAsync, addr 0x181e74780, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnAnimatorMoveAsync() ;

/// @brief Method OnAnimatorMoveAsync, addr 0x181e747e0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnAnimatorMoveAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncAnimatorMoveTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncAnimatorMoveTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncAnimatorMoveTrigger(AsyncAnimatorMoveTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncAnimatorMoveTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncAnimatorMoveTrigger(AsyncAnimatorMoveTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14568};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncAnimatorMoveTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
