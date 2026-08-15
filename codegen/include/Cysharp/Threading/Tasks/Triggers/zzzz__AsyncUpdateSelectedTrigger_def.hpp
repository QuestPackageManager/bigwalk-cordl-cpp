#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncUpdateSelectedTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncUpdateSelectedTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnUpdateSelectedHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncUpdateSelectedTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncUpdateSelectedTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncUpdateSelectedTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncUpdateSelectedTrigger");
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncUpdateSelectedTrigger
class CORDL_TYPE AsyncUpdateSelectedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::BaseEventData*> {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
constexpr operator  ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept;

/// @brief Method GetOnUpdateSelectedAsyncHandler, addr 0x181e75340, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler* GetOnUpdateSelectedAsyncHandler() ;

/// @brief Method GetOnUpdateSelectedAsyncHandler, addr 0x181e752e0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler* GetOnUpdateSelectedAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncUpdateSelectedTrigger* New_ctor() ;

/// @brief Method OnUpdateSelectedAsync, addr 0x181e7c420, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnUpdateSelectedAsync() ;

/// @brief Method OnUpdateSelectedAsync, addr 0x181e7c3a0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnUpdateSelectedAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UnityEngine.EventSystems.IUpdateSelectedHandler.OnUpdateSelected, addr 0x181e75460, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IUpdateSelectedHandler_OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
constexpr ::UnityEngine::EventSystems::IUpdateSelectedHandler* i___UnityEngine__EventSystems__IUpdateSelectedHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncUpdateSelectedTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncUpdateSelectedTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncUpdateSelectedTrigger(AsyncUpdateSelectedTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncUpdateSelectedTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncUpdateSelectedTrigger(AsyncUpdateSelectedTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14708};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncUpdateSelectedTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
