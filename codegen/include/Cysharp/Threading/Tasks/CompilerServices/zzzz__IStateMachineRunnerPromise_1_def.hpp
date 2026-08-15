#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/IStateMachineRunnerPromise_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStateMachineRunnerPromise_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskSource_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading::Tasks::Sources {
template<typename TResult>
class IValueTaskSource_1;
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
template<typename T>
class IStateMachineRunnerPromise_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1, "Cysharp.Threading.Tasks.CompilerServices", "IStateMachineRunnerPromise`1");
// Dependencies 
namespace Cysharp::Threading::Tasks::CompilerServices {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T>
class CORDL_TYPE IStateMachineRunnerPromise_1 {
public:
// Declarations
 __declspec(property(get=get_MoveNext)) ::System::Action*  MoveNext;

 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask_1<T>  Task;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept;

/// @brief Method SetException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SetResult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetResult(T  result) ;

/// @brief Method get_MoveNext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action* get_MoveNext() ;

/// @brief Method get_Task, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> get_Task() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IStateMachineRunnerPromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IStateMachineRunnerPromise_1(IStateMachineRunnerPromise_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14764};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::CompilerServices
