#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskCompletionSourceCore_1)
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename TResult>
struct UniTaskCompletionSourceCore_1;
}
// Write type traits
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1);
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1, "Cysharp.Threading.Tasks", "UniTaskCompletionSourceCore`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename TResult>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>
struct CORDL_TYPE UniTaskCompletionSourceCore_1 {
public:
// Declarations
 __declspec(property(get=get_Version)) int16_t  Version;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResult GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MarkHandled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MarkHandled() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method ReportUnhandledError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReportUnhandledError() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method TrySetCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TrySetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetException(::System::Exception*  error) ;

/// @brief Method TrySetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetResult(TResult  result) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

/// @brief Method ValidateToken, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ValidateToken(int16_t  token) ;

/// @brief Method get_Version, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int16_t get_Version() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskCompletionSourceCore_1() ;

// Ctor Parameters [CppParam { name: "result", ty: "TResult", modifiers: "", def_value: None }, CppParam { name: "error", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "hasUnhandledError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "completedCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "continuation", ty: "::System::Action_1<::System::Object*>*", modifiers: "", def_value: None }, CppParam { name: "continuationState", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr UniTaskCompletionSourceCore_1(TResult  result, ::System::Object*  error, int16_t  version, bool  hasUnhandledError, int32_t  completedCount, ::System::Action_1<::System::Object*>*  continuation, ::System::Object*  continuationState) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field result, offset: 0x0, size: 0x8, def value: None
 TResult  result;

/// @brief Field error, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  error;

/// @brief Field version, offset: 0x10, size: 0x2, def value: None
 int16_t  version;

/// @brief Field hasUnhandledError, offset: 0x12, size: 0x1, def value: None
 bool  hasUnhandledError;

/// @brief Field completedCount, offset: 0x14, size: 0x4, def value: None
 int32_t  completedCount;

/// @brief Field continuation, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::System::Object*>*  continuation;

/// @brief Field continuationState, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  continuationState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
