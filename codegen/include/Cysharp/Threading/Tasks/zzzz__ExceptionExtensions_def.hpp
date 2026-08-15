#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ExceptionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionExtensions)
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class ExceptionExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::ExceptionExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ExceptionExtensions*, "Cysharp.Threading.Tasks", "ExceptionExtensions");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.ExceptionExtensions
class CORDL_TYPE ExceptionExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method IsOperationCanceledException, addr 0x181e60430, size 0x50, virtual false, abstract: false, final false
static inline bool IsOperationCanceledException(::System::Exception*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExceptionExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExceptionExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionExtensions(ExceptionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionExtensions(ExceptionExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14202};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::ExceptionExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
