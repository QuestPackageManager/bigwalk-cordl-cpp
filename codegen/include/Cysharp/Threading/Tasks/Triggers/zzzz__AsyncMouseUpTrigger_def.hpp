#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncMouseUpTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncMouseUpTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnMouseUpHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncMouseUpTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncMouseUpTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncMouseUpTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncMouseUpTrigger");
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncMouseUpTrigger
class CORDL_TYPE AsyncMouseUpTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnMouseUpAsyncHandler, addr 0x181e746e0, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler* GetOnMouseUpAsyncHandler() ;

/// @brief Method GetOnMouseUpAsyncHandler, addr 0x181e74720, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler* GetOnMouseUpAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncMouseUpTrigger* New_ctor() ;

/// @brief Method OnMouseUp, addr 0x181e74860, size 0x20, virtual false, abstract: false, final false
inline void OnMouseUp() ;

/// @brief Method OnMouseUpAsync, addr 0x181e78180, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnMouseUpAsync() ;

/// @brief Method OnMouseUpAsync, addr 0x181e78100, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnMouseUpAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncMouseUpTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncMouseUpTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncMouseUpTrigger(AsyncMouseUpTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncMouseUpTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncMouseUpTrigger(AsyncMouseUpTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14624};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncMouseUpTrigger) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
