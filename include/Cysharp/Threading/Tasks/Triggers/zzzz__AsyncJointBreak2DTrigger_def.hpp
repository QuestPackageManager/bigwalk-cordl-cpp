#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncJointBreak2DTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncJointBreak2DTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnJointBreak2DHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Joint2D;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncJointBreak2DTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncJointBreak2DTrigger");
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncJointBreak2DTrigger
class CORDL_TYPE AsyncJointBreak2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityW<::UnityEngine::Joint2D>> {
public:
// Declarations
/// @brief Method GetOnJointBreak2DAsyncHandler, addr 0x181e77820, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* GetOnJointBreak2DAsyncHandler() ;

/// @brief Method GetOnJointBreak2DAsyncHandler, addr 0x181e777c0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* GetOnJointBreak2DAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger* New_ctor() ;

/// @brief Method OnJointBreak2D, addr 0x181e77940, size 0x10, virtual false, abstract: false, final false
inline void OnJointBreak2D(::UnityEngine::Joint2D*  brokenJoint) ;

/// @brief Method OnJointBreak2DAsync, addr 0x181e778e0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>> OnJointBreak2DAsync() ;

/// @brief Method OnJointBreak2DAsync, addr 0x181e77860, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>> OnJointBreak2DAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncJointBreak2DTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncJointBreak2DTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncJointBreak2DTrigger(AsyncJointBreak2DTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncJointBreak2DTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncJointBreak2DTrigger(AsyncJointBreak2DTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14612};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
