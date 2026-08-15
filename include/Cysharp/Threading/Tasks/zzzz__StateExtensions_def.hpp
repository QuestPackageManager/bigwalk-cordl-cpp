#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/StateExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StateExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ReadOnlyAsyncReactiveProperty_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class StateExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::StateExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::StateExtensions*, "Cysharp.Threading.Tasks", "StateExtensions");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.StateExtensions
class CORDL_TYPE StateExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method ToReadOnlyAsyncReactiveProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* ToReadOnlyAsyncReactiveProperty(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ToReadOnlyAsyncReactiveProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* ToReadOnlyAsyncReactiveProperty(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, T  initialValue, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateExtensions(StateExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateExtensions(StateExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14175};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::StateExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
