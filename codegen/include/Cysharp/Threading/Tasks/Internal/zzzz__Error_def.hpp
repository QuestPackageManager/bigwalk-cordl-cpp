#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/Error.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Error)
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class Error;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::Error*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::Error*, "Cysharp.Threading.Tasks.Internal", "Error");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.Error
class CORDL_TYPE Error : public ::System::Object {
public:
// Declarations
/// @brief Method ArgumentOutOfRange, addr 0x181adef00, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentOutOfRange(::StringW  paramName) ;

/// @brief Method MoreThanOneElement, addr 0x181e7e920, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* MoreThanOneElement() ;

/// @brief Method NoElements, addr 0x181e7e950, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* NoElements() ;

/// @brief Method ThrowArgumentException, addr 0x181e7e980, size 0x10, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::StringW  message) ;

/// @brief Method ThrowArgumentNullException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ThrowArgumentNullException(T  value, ::StringW  paramName) ;

/// @brief Method ThrowArgumentNullExceptionCore, addr 0x1815e81c0, size 0x10, virtual false, abstract: false, final false
static inline void ThrowArgumentNullExceptionCore(::StringW  paramName) ;

/// @brief Method ThrowInvalidOperationExceptionCore, addr 0x181e7e990, size 0x10, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationExceptionCore(::StringW  message) ;

/// @brief Method ThrowNotYetCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ThrowNotYetCompleted() ;

/// @brief Method ThrowNotYetCompleted, addr 0x180762100, size 0x7170, virtual false, abstract: false, final false
static inline void ThrowNotYetCompleted() ;

/// @brief Method ThrowOperationCanceledException, addr 0x181e7e9a0, size 0x40, virtual false, abstract: false, final false
static inline void ThrowOperationCanceledException() ;

/// @brief Method ThrowWhenContinuationIsAlreadyRegistered, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ThrowWhenContinuationIsAlreadyRegistered(T  continuationField) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Error() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Error(Error && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Error(Error const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14716};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::Error) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
