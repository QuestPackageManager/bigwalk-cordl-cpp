#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncCollisionStay2DTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncCollisionStay2DTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionStay2DHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Collision2D;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncCollisionStay2DTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionStay2DTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionStay2DTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncCollisionStay2DTrigger");
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncCollisionStay2DTrigger
class CORDL_TYPE AsyncCollisionStay2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision2D*> {
public:
// Declarations
/// @brief Method GetOnCollisionStay2DAsyncHandler, addr 0x181e75470, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler* GetOnCollisionStay2DAsyncHandler() ;

/// @brief Method GetOnCollisionStay2DAsyncHandler, addr 0x181e754b0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler* GetOnCollisionStay2DAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionStay2DTrigger* New_ctor() ;

/// @brief Method OnCollisionStay2D, addr 0x181e755f0, size 0x10, virtual false, abstract: false, final false
inline void OnCollisionStay2D(::UnityEngine::Collision2D*  coll) ;

/// @brief Method OnCollisionStay2DAsync, addr 0x181e759d0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionStay2DAsync() ;

/// @brief Method OnCollisionStay2DAsync, addr 0x181e75950, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionStay2DAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncCollisionStay2DTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionStay2DTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCollisionStay2DTrigger(AsyncCollisionStay2DTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionStay2DTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCollisionStay2DTrigger(AsyncCollisionStay2DTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14596};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionStay2DTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
