#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskStatusExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UniTaskStatusExtensions)
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UniTaskStatusExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskStatusExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskStatusExtensions*, "Cysharp.Threading.Tasks", "UniTaskStatusExtensions");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskStatusExtensions
class CORDL_TYPE UniTaskStatusExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method IsCanceled, addr 0x181e6c660, size 0x10, virtual false, abstract: false, final false
static inline bool IsCanceled(::Cysharp::Threading::Tasks::UniTaskStatus  status) ;

/// @brief Method IsCompleted, addr 0x1816a1270, size 0x10, virtual false, abstract: false, final false
static inline bool IsCompleted(::Cysharp::Threading::Tasks::UniTaskStatus  status) ;

/// @brief Method IsCompletedSuccessfully, addr 0x181e6c670, size 0x10, virtual false, abstract: false, final false
static inline bool IsCompletedSuccessfully(::Cysharp::Threading::Tasks::UniTaskStatus  status) ;

/// @brief Method IsFaulted, addr 0x181e6c680, size 0x10, virtual false, abstract: false, final false
static inline bool IsFaulted(::Cysharp::Threading::Tasks::UniTaskStatus  status) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskStatusExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskStatusExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskStatusExtensions(UniTaskStatusExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskStatusExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskStatusExtensions(UniTaskStatusExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14214};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskStatusExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
