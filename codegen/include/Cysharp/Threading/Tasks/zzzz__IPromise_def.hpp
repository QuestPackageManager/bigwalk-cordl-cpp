#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IPromise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPromise)
namespace Cysharp::Threading::Tasks {
class ICancelPromise;
}
namespace Cysharp::Threading::Tasks {
class IRejectPromise;
}
namespace Cysharp::Threading::Tasks {
class IResolvePromise;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class IPromise;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::IPromise*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::IPromise*, "Cysharp.Threading.Tasks", "IPromise");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IPromise
class CORDL_TYPE IPromise {
public:
// Declarations
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr operator  ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr operator  ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr operator  ::Cysharp::Threading::Tasks::IResolvePromise*() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr ::Cysharp::Threading::Tasks::ICancelPromise* i___Cysharp__Threading__Tasks__ICancelPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr ::Cysharp::Threading::Tasks::IRejectPromise* i___Cysharp__Threading__Tasks__IRejectPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr ::Cysharp::Threading::Tasks::IResolvePromise* i___Cysharp__Threading__Tasks__IResolvePromise() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPromise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPromise(IPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14440};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
