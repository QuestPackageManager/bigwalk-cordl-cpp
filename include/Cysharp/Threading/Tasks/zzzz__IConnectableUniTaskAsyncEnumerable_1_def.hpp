#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IConnectableUniTaskAsyncEnumerable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConnectableUniTaskAsyncEnumerable_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class IConnectableUniTaskAsyncEnumerable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1, "Cysharp.Threading.Tasks", "IConnectableUniTaskAsyncEnumerable`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IConnectableUniTaskAsyncEnumerable`1<T>
class CORDL_TYPE IConnectableUniTaskAsyncEnumerable_1 {
public:
// Declarations
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Method Connect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IDisposable* Connect() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IConnectableUniTaskAsyncEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConnectableUniTaskAsyncEnumerable_1(IConnectableUniTaskAsyncEnumerable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
