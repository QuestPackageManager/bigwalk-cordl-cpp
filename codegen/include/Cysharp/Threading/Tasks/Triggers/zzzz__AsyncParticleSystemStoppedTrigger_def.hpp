#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncParticleSystemStoppedTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncParticleSystemStoppedTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnParticleSystemStoppedHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncParticleSystemStoppedTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncParticleSystemStoppedTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncParticleSystemStoppedTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncParticleSystemStoppedTrigger");
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncParticleSystemStoppedTrigger
class CORDL_TYPE AsyncParticleSystemStoppedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnParticleSystemStoppedAsyncHandler, addr 0x181e746e0, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler* GetOnParticleSystemStoppedAsyncHandler() ;

/// @brief Method GetOnParticleSystemStoppedAsyncHandler, addr 0x181e74720, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler* GetOnParticleSystemStoppedAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncParticleSystemStoppedTrigger* New_ctor() ;

/// @brief Method OnParticleSystemStopped, addr 0x181e74860, size 0x20, virtual false, abstract: false, final false
inline void OnParticleSystemStopped() ;

/// @brief Method OnParticleSystemStoppedAsync, addr 0x181e78d10, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnParticleSystemStoppedAsync() ;

/// @brief Method OnParticleSystemStoppedAsync, addr 0x181e78d70, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnParticleSystemStoppedAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncParticleSystemStoppedTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleSystemStoppedTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncParticleSystemStoppedTrigger(AsyncParticleSystemStoppedTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleSystemStoppedTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncParticleSystemStoppedTrigger(AsyncParticleSystemStoppedTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14630};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncParticleSystemStoppedTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
