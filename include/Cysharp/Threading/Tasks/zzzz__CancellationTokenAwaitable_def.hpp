#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenAwaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CancellationTokenAwaitable)
namespace Cysharp::Threading::Tasks {
struct CancellationTokenAwaitable_Awaiter;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct CancellationTokenAwaitable;
}
namespace Cysharp::Threading::Tasks {
struct CancellationTokenAwaitable_Awaiter;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::CancellationTokenAwaitable);
MARK_VAL_T(::Cysharp::Threading::Tasks::CancellationTokenAwaitable_Awaiter);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CancellationTokenAwaitable, "Cysharp.Threading.Tasks", "CancellationTokenAwaitable");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CancellationTokenAwaitable_Awaiter, "Cysharp.Threading.Tasks", "CancellationTokenAwaitable/Awaiter");
// Dependencies System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.CancellationTokenAwaitable/Awaiter
struct CORDL_TYPE CancellationTokenAwaitable_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0x181e5d140, size 0x40, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x181e5d140, size 0x40, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x181e5bf90, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_IsCompleted, addr 0x181e5d440, size 0x40, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr CancellationTokenAwaitable_Awaiter() ;

// Ctor Parameters [CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
constexpr CancellationTokenAwaitable_Awaiter(::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field cancellationToken, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::CancellationTokenAwaitable_Awaiter, cancellationToken) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::CancellationTokenAwaitable_Awaiter) == 0x8, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.CancellationTokenAwaitable
struct CORDL_TYPE CancellationTokenAwaitable {
public:
// Declarations
using Awaiter = ::Cysharp::Threading::Tasks::CancellationTokenAwaitable_Awaiter;

/// @brief Method GetAwaiter, addr 0x181e5d6c0, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::CancellationTokenAwaitable_Awaiter GetAwaiter() ;

/// @brief Method .ctor, addr 0x181e5bf90, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters []
// @brief default ctor
constexpr CancellationTokenAwaitable() ;

// Ctor Parameters [CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
constexpr CancellationTokenAwaitable(::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14181};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field cancellationToken, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::CancellationTokenAwaitable, cancellationToken) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::CancellationTokenAwaitable) == 0x8, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
