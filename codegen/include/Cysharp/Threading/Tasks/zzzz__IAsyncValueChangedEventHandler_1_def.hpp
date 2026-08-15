#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IAsyncValueChangedEventHandler_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncValueChangedEventHandler_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncValueChangedEventHandler_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1, "Cysharp.Threading.Tasks", "IAsyncValueChangedEventHandler`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IAsyncValueChangedEventHandler`1<T>
class CORDL_TYPE IAsyncValueChangedEventHandler_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method OnValueChangedAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> OnValueChangedAsync() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncValueChangedEventHandler_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncValueChangedEventHandler_1(IAsyncValueChangedEventHandler_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14527};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
