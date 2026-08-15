#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncCollisionEnterTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncCollisionEnterTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionEnterHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncCollisionEnterTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncCollisionEnterTrigger");
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncCollisionEnterTrigger
class CORDL_TYPE AsyncCollisionEnterTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Collision*> {
public:
// Declarations
/// @brief Method GetOnCollisionEnterAsyncHandler, addr 0x181e75600, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* GetOnCollisionEnterAsyncHandler() ;

/// @brief Method GetOnCollisionEnterAsyncHandler, addr 0x181e75640, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* GetOnCollisionEnterAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x181e75780, size 0x10, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  coll) ;

/// @brief Method OnCollisionEnterAsync, addr 0x181e75720, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionEnterAsync() ;

/// @brief Method OnCollisionEnterAsync, addr 0x181e756a0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> OnCollisionEnterAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncCollisionEnterTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionEnterTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCollisionEnterTrigger(AsyncCollisionEnterTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCollisionEnterTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCollisionEnterTrigger(AsyncCollisionEnterTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14586};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncCollisionEnterTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
