#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncSelectTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncSelectTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnSelectHandler;
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
class ISelectHandler;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncSelectTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncSelectTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncSelectTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncSelectTrigger");
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncSelectTrigger
class CORDL_TYPE AsyncSelectTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::EventSystems::BaseEventData*> {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr operator  ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

/// @brief Method GetOnSelectAsyncHandler, addr 0x181e75340, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler* GetOnSelectAsyncHandler() ;

/// @brief Method GetOnSelectAsyncHandler, addr 0x181e752e0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler* GetOnSelectAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncSelectTrigger* New_ctor() ;

/// @brief Method OnSelectAsync, addr 0x181e79ed0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnSelectAsync() ;

/// @brief Method OnSelectAsync, addr 0x181e79e50, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> OnSelectAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method UnityEngine.EventSystems.ISelectHandler.OnSelect, addr 0x181e75460, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_ISelectHandler_OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncSelectTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncSelectTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncSelectTrigger(AsyncSelectTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncSelectTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncSelectTrigger(AsyncSelectTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14704};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncSelectTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
