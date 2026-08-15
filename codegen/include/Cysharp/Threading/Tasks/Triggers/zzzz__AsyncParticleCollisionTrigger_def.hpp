#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncParticleCollisionTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncParticleCollisionTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnParticleCollisionHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncParticleCollisionTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncParticleCollisionTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncParticleCollisionTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncParticleCollisionTrigger");
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncParticleCollisionTrigger
class CORDL_TYPE AsyncParticleCollisionTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityW<::UnityEngine::GameObject>> {
public:
// Declarations
/// @brief Method GetOnParticleCollisionAsyncHandler, addr 0x181e78b80, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler* GetOnParticleCollisionAsyncHandler() ;

/// @brief Method GetOnParticleCollisionAsyncHandler, addr 0x181e78bc0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler* GetOnParticleCollisionAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncParticleCollisionTrigger* New_ctor() ;

/// @brief Method OnParticleCollision, addr 0x181e78d00, size 0x10, virtual false, abstract: false, final false
inline void OnParticleCollision(::UnityEngine::GameObject*  other) ;

/// @brief Method OnParticleCollisionAsync, addr 0x181e78c20, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::GameObject>> OnParticleCollisionAsync() ;

/// @brief Method OnParticleCollisionAsync, addr 0x181e78c80, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::GameObject>> OnParticleCollisionAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncParticleCollisionTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleCollisionTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncParticleCollisionTrigger(AsyncParticleCollisionTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleCollisionTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncParticleCollisionTrigger(AsyncParticleCollisionTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14628};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncParticleCollisionTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
