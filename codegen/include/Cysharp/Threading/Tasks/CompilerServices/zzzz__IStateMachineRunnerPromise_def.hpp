#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/IStateMachineRunnerPromise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStateMachineRunnerPromise)
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::CompilerServices {
class IStateMachineRunnerPromise;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*, "Cysharp.Threading.Tasks.CompilerServices", "IStateMachineRunnerPromise");
// Dependencies 
namespace Cysharp::Threading::Tasks::CompilerServices {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
class CORDL_TYPE IStateMachineRunnerPromise {
public:
// Declarations
 __declspec(property(get=get_MoveNext)) ::System::Action*  MoveNext;

 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask  Task;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Method SetException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SetResult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetResult() ;

/// @brief Method get_MoveNext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action* get_MoveNext() ;

/// @brief Method get_Task, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask get_Task() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IStateMachineRunnerPromise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IStateMachineRunnerPromise(IStateMachineRunnerPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14763};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::CompilerServices
