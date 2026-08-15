#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncParticleUpdateJobScheduledTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__ParticleSystemJobData_def.hpp"
CORDL_MODULE_EXPORT(AsyncParticleUpdateJobScheduledTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnParticleUpdateJobScheduledHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine::ParticleSystemJobs {
struct ParticleSystemJobData;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncParticleUpdateJobScheduledTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncParticleUpdateJobScheduledTrigger");
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>, UnityEngine.ParticleSystemJobs.ParticleSystemJobData
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncParticleUpdateJobScheduledTrigger
class CORDL_TYPE AsyncParticleUpdateJobScheduledTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> {
public:
// Declarations
/// @brief Method GetOnParticleUpdateJobScheduledAsyncHandler, addr 0x181e78ed0, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* GetOnParticleUpdateJobScheduledAsyncHandler() ;

/// @brief Method GetOnParticleUpdateJobScheduledAsyncHandler, addr 0x181e78f10, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* GetOnParticleUpdateJobScheduledAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger* New_ctor() ;

/// @brief Method OnParticleUpdateJobScheduled, addr 0x181e79050, size 0xd0, virtual false, abstract: false, final false
inline void OnParticleUpdateJobScheduled(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData  particles) ;

/// @brief Method OnParticleUpdateJobScheduledAsync, addr 0x181e78ff0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> OnParticleUpdateJobScheduledAsync() ;

/// @brief Method OnParticleUpdateJobScheduledAsync, addr 0x181e78f70, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> OnParticleUpdateJobScheduledAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncParticleUpdateJobScheduledTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleUpdateJobScheduledTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncParticleUpdateJobScheduledTrigger(AsyncParticleUpdateJobScheduledTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleUpdateJobScheduledTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncParticleUpdateJobScheduledTrigger(AsyncParticleUpdateJobScheduledTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14634};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
