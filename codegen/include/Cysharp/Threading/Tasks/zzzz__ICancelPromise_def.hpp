#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ICancelPromise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICancelPromise)
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class ICancelPromise;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::ICancelPromise*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ICancelPromise*, "Cysharp.Threading.Tasks", "ICancelPromise");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.ICancelPromise
class CORDL_TYPE ICancelPromise {
public:
// Declarations
/// @brief Method TrySetCanceled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters [CppParam { name: "", ty: "ICancelPromise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICancelPromise(ICancelPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14438};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
