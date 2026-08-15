#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncTriggerStayTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncTriggerStayTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerStayHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncTriggerStayTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStayTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStayTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncTriggerStayTrigger");
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTriggerStayTrigger
class CORDL_TYPE AsyncTriggerStayTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityW<::UnityEngine::Collider>> {
public:
// Declarations
/// @brief Method GetOnTriggerStayAsyncHandler, addr 0x181e7a580, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler* GetOnTriggerStayAsyncHandler() ;

/// @brief Method GetOnTriggerStayAsyncHandler, addr 0x181e7a5c0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler* GetOnTriggerStayAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStayTrigger* New_ctor() ;

/// @brief Method OnTriggerStay, addr 0x181e7a700, size 0x10, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStayAsync, addr 0x181e7bea0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider>> OnTriggerStayAsync() ;

/// @brief Method OnTriggerStayAsync, addr 0x181e7bf00, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider>> OnTriggerStayAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncTriggerStayTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerStayTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTriggerStayTrigger(AsyncTriggerStayTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerStayTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTriggerStayTrigger(AsyncTriggerStayTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerStayTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
