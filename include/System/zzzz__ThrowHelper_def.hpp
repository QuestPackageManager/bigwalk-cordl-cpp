#pragma once
// IWYU pragma private; include "System/ThrowHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowHelper)
namespace System::Collections::Generic {
class KeyNotFoundException;
}
namespace System {
class ArgumentException;
}
namespace System {
class ArgumentNullException;
}
namespace System {
class ArgumentOutOfRangeException;
}
namespace System {
class Array;
}
namespace System {
struct ExceptionArgument;
}
namespace System {
struct ExceptionResource;
}
namespace System {
class Exception;
}
namespace System {
class InvalidOperationException;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class ThrowHelper;
}
// Write type traits
MARK_REF_T(::System::ThrowHelper*);
DEFINE_IL2CPP_CLASS(::System::ThrowHelper*, "System", "ThrowHelper");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ThrowHelper
class CORDL_TYPE ThrowHelper : public ::System::Object {
public:
// Declarations
/// @brief Method CreateArgumentException_DestinationTooShort, addr 0x181726bf0, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentException_DestinationTooShort() ;

/// @brief Method CreateArgumentNullException, addr 0x181726c20, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method CreateArgumentOutOfRangeException, addr 0x181726c80, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException() ;

/// @brief Method CreateArgumentOutOfRangeException, addr 0x181726cb0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException(::System::ExceptionArgument  argument) ;

/// @brief Method CreateArrayTypeMismatchException, addr 0x18171e120, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArrayTypeMismatchException() ;

/// @brief Method CreateIndexOutOfRangeException, addr 0x181726d10, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* CreateIndexOutOfRangeException() ;

/// @brief Method CreateThrowNotSupportedException, addr 0x181726d40, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* CreateThrowNotSupportedException() ;

/// @brief Method GetAddingDuplicateWithKeyArgumentException, addr 0x181726d70, size 0x50, virtual false, abstract: false, final false
static inline ::System::ArgumentException* GetAddingDuplicateWithKeyArgumentException(::System::Object*  key) ;

/// @brief Method GetArgumentException, addr 0x181726dc0, size 0x60, virtual false, abstract: false, final false
static inline ::System::ArgumentException* GetArgumentException(::System::ExceptionResource  resource) ;

/// @brief Method GetArgumentName, addr 0x181726e20, size 0x160, virtual false, abstract: false, final false
static inline ::StringW GetArgumentName(::System::ExceptionArgument  argument) ;

/// @brief Method GetArgumentNullException, addr 0x181726f80, size 0x40, virtual false, abstract: false, final false
static inline ::System::ArgumentNullException* GetArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method GetArgumentOutOfRangeException, addr 0x181726fc0, size 0x50, virtual false, abstract: false, final false
static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::StringW  resource) ;

/// @brief Method GetArgumentOutOfRangeException, addr 0x181727010, size 0x80, virtual false, abstract: false, final false
static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::System::ExceptionResource  resource) ;

/// @brief Method GetArraySegmentCtorValidationFailedException, addr 0x181727090, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Exception* GetArraySegmentCtorValidationFailedException(::System::Array*  array, int32_t  offset, int32_t  count) ;

/// @brief Method GetInvalidOperationException, addr 0x181727170, size 0x40, virtual false, abstract: false, final false
static inline ::System::InvalidOperationException* GetInvalidOperationException(::StringW  str) ;

/// @brief Method GetKeyNotFoundException, addr 0x18116fec0, size 0xb0c0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::KeyNotFoundException* GetKeyNotFoundException(::System::Object*  key) ;

/// @brief Method GetResourceName, addr 0x1817271b0, size 0x260, virtual false, abstract: false, final false
static inline ::StringW GetResourceName(::System::ExceptionResource  resource) ;

/// @brief Method IfNullAndNullsAreIllegalThenThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void IfNullAndNullsAreIllegalThenThrow(::System::Object*  value, ::System::ExceptionArgument  argName) ;

/// @brief Method ThrowAddingDuplicateWithKeyArgumentException, addr 0x181727410, size 0x20, virtual false, abstract: false, final false
static inline void ThrowAddingDuplicateWithKeyArgumentException(::System::Object*  key) ;

/// @brief Method ThrowArgumentException, addr 0x1817274b0, size 0x30, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowArgumentException, addr 0x181727470, size 0x40, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::System::ExceptionResource  resource, ::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentException_Argument_InvalidArrayType, addr 0x181727430, size 0x20, virtual false, abstract: false, final false
static inline void ThrowArgumentException_Argument_InvalidArrayType() ;

/// @brief Method ThrowArgumentException_DestinationTooShort, addr 0x181727450, size 0x20, virtual false, abstract: false, final false
static inline void ThrowArgumentException_DestinationTooShort() ;

/// @brief Method ThrowArgumentNullException, addr 0x1817274e0, size 0x20, virtual false, abstract: false, final false
static inline void ThrowArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0x1817275a0, size 0x20, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException() ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0x181727580, size 0x20, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0x181727500, size 0x80, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::System::ExceptionResource  resource) ;

/// @brief Method ThrowArgumentOutOfRange_IndexException, addr 0x1817275c0, size 0x30, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRange_IndexException() ;

/// @brief Method ThrowArraySegmentCtorValidationFailedExceptions, addr 0x1817275f0, size 0x20, virtual false, abstract: false, final false
static inline void ThrowArraySegmentCtorValidationFailedExceptions(::System::Array*  array, int32_t  offset, int32_t  count) ;

/// @brief Method ThrowArrayTypeMismatchException, addr 0x181727610, size 0x20, virtual false, abstract: false, final false
static inline void ThrowArrayTypeMismatchException() ;

/// @brief Method ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count, addr 0x181727630, size 0x30, virtual false, abstract: false, final false
static inline void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count() ;

/// @brief Method ThrowIndexArgumentOutOfRange_NeedNonNegNumException, addr 0x181727660, size 0x30, virtual false, abstract: false, final false
static inline void ThrowIndexArgumentOutOfRange_NeedNonNegNumException() ;

/// @brief Method ThrowIndexOutOfRangeException, addr 0x181727690, size 0x20, virtual false, abstract: false, final false
static inline void ThrowIndexOutOfRangeException() ;

/// @brief Method ThrowInvalidOperationException, addr 0x181727780, size 0x30, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowInvalidOperationException_ConcurrentOperationsNotSupported, addr 0x1817276b0, size 0x30, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_ConcurrentOperationsNotSupported() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumEnded, addr 0x1817276e0, size 0x20, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumEnded() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion, addr 0x181727700, size 0x20, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumNotStarted, addr 0x181727720, size 0x20, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumNotStarted() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen, addr 0x181727740, size 0x20, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_NoValue, addr 0x181727760, size 0x20, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_NoValue() ;

/// @brief Method ThrowInvalidTypeWithPointersNotSupported, addr 0x1817277b0, size 0x40, virtual false, abstract: false, final false
static inline void ThrowInvalidTypeWithPointersNotSupported(::System::Type*  targetType) ;

/// @brief Method ThrowKeyNotFoundException, addr 0x18116feb0, size 0x10, virtual false, abstract: false, final false
static inline void ThrowKeyNotFoundException(::System::Object*  key) ;

/// @brief Method ThrowNotSupportedException, addr 0x180994860, size 0x44a0, virtual false, abstract: false, final false
static inline void ThrowNotSupportedException() ;

/// @brief Method ThrowNotSupportedException, addr 0x1817277f0, size 0x30, virtual false, abstract: false, final false
static inline void ThrowNotSupportedException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowSerializationException, addr 0x181727820, size 0x50, virtual false, abstract: false, final false
static inline void ThrowSerializationException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index, addr 0x181727870, size 0x30, virtual false, abstract: false, final false
static inline void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index() ;

/// @brief Method ThrowWrongKeyTypeArgumentException, addr 0x1817278a0, size 0x80, virtual false, abstract: false, final false
static inline void ThrowWrongKeyTypeArgumentException(::System::Object*  key, ::System::Type*  targetType) ;

/// @brief Method ThrowWrongValueTypeArgumentException, addr 0x181727920, size 0x80, virtual false, abstract: false, final false
static inline void ThrowWrongValueTypeArgumentException(::System::Object*  value, ::System::Type*  targetType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowHelper(ThrowHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowHelper(ThrowHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ThrowHelper) == 0x10, "Size mismatch!");

} // namespace end def System
