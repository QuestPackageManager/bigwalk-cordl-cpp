#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IResolvePromise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IResolvePromise)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class IResolvePromise;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::IResolvePromise*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::IResolvePromise*, "Cysharp.Threading.Tasks", "IResolvePromise");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IResolvePromise
class CORDL_TYPE IResolvePromise {
public:
// Declarations
/// @brief Method TrySetResult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TrySetResult() ;

// Ctor Parameters [CppParam { name: "", ty: "IResolvePromise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IResolvePromise(IResolvePromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14435};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
