#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncApplicationPauseTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncApplicationPauseTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnApplicationPauseHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncApplicationPauseTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncApplicationPauseTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncApplicationPauseTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncApplicationPauseTrigger");
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncApplicationPauseTrigger
class CORDL_TYPE AsyncApplicationPauseTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<bool> {
public:
// Declarations
/// @brief Method GetOnApplicationPauseAsyncHandler, addr 0x181e74880, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler* GetOnApplicationPauseAsyncHandler() ;

/// @brief Method GetOnApplicationPauseAsyncHandler, addr 0x181e748c0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler* GetOnApplicationPauseAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationPauseTrigger* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x181e74a00, size 0x10, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pauseStatus) ;

/// @brief Method OnApplicationPauseAsync, addr 0x181e74a90, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> OnApplicationPauseAsync() ;

/// @brief Method OnApplicationPauseAsync, addr 0x181e74a10, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> OnApplicationPauseAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncApplicationPauseTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncApplicationPauseTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncApplicationPauseTrigger(AsyncApplicationPauseTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncApplicationPauseTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncApplicationPauseTrigger(AsyncApplicationPauseTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14572};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncApplicationPauseTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
