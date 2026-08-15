#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IResolvePromise_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IResolvePromise_1)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class IResolvePromise_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::IResolvePromise_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::IResolvePromise_1, "Cysharp.Threading.Tasks", "IResolvePromise`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IResolvePromise`1<T>
class CORDL_TYPE IResolvePromise_1 {
public:
// Declarations
/// @brief Method TrySetResult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TrySetResult(T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IResolvePromise_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IResolvePromise_1(IResolvePromise_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14436};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
