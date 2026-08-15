#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IAsyncEndEditEventHandler_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncEndEditEventHandler_1)
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
class IAsyncEndEditEventHandler_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1, "Cysharp.Threading.Tasks", "IAsyncEndEditEventHandler`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IAsyncEndEditEventHandler`1<T>
class CORDL_TYPE IAsyncEndEditEventHandler_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method OnEndEditAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> OnEndEditAsync() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncEndEditEventHandler_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncEndEditEventHandler_1(IAsyncEndEditEventHandler_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14528};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
