#pragma once
// IWYU pragma private; include "System/Data/ExprException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExprException)
namespace System::Data {
class EvaluateException;
}
namespace System::Data {
class InvalidExpressionException;
}
namespace System::Data {
class OperatorInfo;
}
namespace System::Data {
class SyntaxErrorException;
}
namespace System::Data {
struct Tokens;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class OverflowException;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class ExprException;
}
// Write type traits
MARK_REF_T(::System::Data::ExprException*);
DEFINE_IL2CPP_CLASS(::System::Data::ExprException*, "System.Data", "ExprException");
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ExprException
class CORDL_TYPE ExprException : public ::System::Object {
public:
// Declarations
/// @brief Method AggregateArgument, addr 0x181b9cdf0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* AggregateArgument() ;

/// @brief Method AggregateUnbound, addr 0x181b9ce40, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* AggregateUnbound(::StringW  expr) ;

/// @brief Method AmbiguousBinop, addr 0x181b9cea0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousBinop(int32_t  op, ::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method ArgumentType, addr 0x181b9cfd0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentType(::StringW  function, int32_t  arg, ::System::Type*  type) ;

/// @brief Method ArgumentTypeInteger, addr 0x181b9cf50, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentTypeInteger(::StringW  function, int32_t  arg) ;

/// @brief Method BindFailure, addr 0x181b9d080, size 0x60, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* BindFailure(::StringW  relationName) ;

/// @brief Method ComputeNotAggregate, addr 0x181b9d0e0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* ComputeNotAggregate(::StringW  expr) ;

/// @brief Method DatatypeConvertion, addr 0x181b9d140, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* DatatypeConvertion(::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method DatavalueConvertion, addr 0x181b9d1d0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* DatavalueConvertion(::System::Object*  value, ::System::Type*  type, ::System::Exception*  innerException) ;

/// @brief Method EvalNoContext, addr 0x181b9d260, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* EvalNoContext() ;

/// @brief Method ExpressionTooComplex, addr 0x181b9d2b0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTooComplex() ;

/// @brief Method ExpressionUnbound, addr 0x181b9d300, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionUnbound(::StringW  expr) ;

/// @brief Method FilterConvertion, addr 0x181b9d360, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* FilterConvertion(::StringW  expr) ;

/// @brief Method FunctionArgumentCount, addr 0x181b9d3c0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* FunctionArgumentCount(::StringW  name) ;

/// @brief Method FunctionArgumentOutOfRange, addr 0x181b9d420, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* FunctionArgumentOutOfRange(::StringW  arg, ::StringW  func) ;

/// @brief Method InWithoutList, addr 0x181b9d450, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InWithoutList() ;

/// @brief Method InWithoutParentheses, addr 0x181b9d4a0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InWithoutParentheses() ;

/// @brief Method InvalidDate, addr 0x181b9d4f0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidDate(::StringW  date) ;

/// @brief Method InvalidHoursArgument, addr 0x181b9d550, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidHoursArgument() ;

/// @brief Method InvalidIsSyntax, addr 0x181b9d5a0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidIsSyntax() ;

/// @brief Method InvalidMinutesArgument, addr 0x181b9d5f0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidMinutesArgument() ;

/// @brief Method InvalidName, addr 0x181b9d6a0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidName(::StringW  name) ;

/// @brief Method InvalidNameBracketing, addr 0x181b9d640, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidNameBracketing(::StringW  name) ;

/// @brief Method InvalidPattern, addr 0x181b9d700, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidPattern(::StringW  pat) ;

/// @brief Method InvalidString, addr 0x181b9d760, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidString(::StringW  str) ;

/// @brief Method InvalidTimeZoneRange, addr 0x181b9d7c0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidTimeZoneRange() ;

/// @brief Method InvalidType, addr 0x181b9d810, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidType(::StringW  typeName) ;

/// @brief Method InvokeArgument, addr 0x181b9d870, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* InvokeArgument() ;

/// @brief Method LookupArgument, addr 0x181b9d880, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* LookupArgument() ;

/// @brief Method MismatchKindandTimeSpan, addr 0x181b9d8d0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MismatchKindandTimeSpan() ;

/// @brief Method MissingOperand, addr 0x181b9d980, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperand(::System::Data::OperatorInfo*  before) ;

/// @brief Method MissingOperandBefore, addr 0x181b9d920, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperandBefore(::StringW  op) ;

/// @brief Method MissingOperator, addr 0x181b9d9e0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperator(::StringW  token) ;

/// @brief Method MissingRightParen, addr 0x181b9da40, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MissingRightParen() ;

/// @brief Method NYI, addr 0x181b9da90, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* NYI(::StringW  moreinfo) ;

/// @brief Method NonConstantArgument, addr 0x181b9daf0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* NonConstantArgument() ;

/// @brief Method Overflow, addr 0x181b9db40, size 0x70, virtual false, abstract: false, final false
static inline ::System::Exception* Overflow(::System::Type*  type) ;

/// @brief Method SyntaxError, addr 0x181b9dbb0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* SyntaxError() ;

/// @brief Method TooManyRightParentheses, addr 0x181b9dc00, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* TooManyRightParentheses() ;

/// @brief Method TypeMismatch, addr 0x181b9dd00, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMismatch(::StringW  expr) ;

/// @brief Method TypeMismatchInBinop, addr 0x181b9dc50, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMismatchInBinop(int32_t  op, ::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method UnboundName, addr 0x181b9dd60, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UnboundName(::StringW  name) ;

/// @brief Method UndefinedFunction, addr 0x181b9ddc0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UndefinedFunction(::StringW  name) ;

/// @brief Method UnknownToken, addr 0x181b9de20, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Exception* UnknownToken(::System::Data::Tokens  tokExpected, ::System::Data::Tokens  tokCurr, int32_t  position) ;

/// @brief Method UnknownToken, addr 0x181b9df00, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* UnknownToken(::StringW  token, int32_t  position) ;

/// @brief Method UnresolvedRelation, addr 0x181b9df80, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UnresolvedRelation(::StringW  name, ::StringW  expr) ;

/// @brief Method UnsupportedDataType, addr 0x181b9dfe0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* UnsupportedDataType(::System::Type*  type) ;

/// @brief Method UnsupportedOperator, addr 0x181b9e020, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UnsupportedOperator(int32_t  op) ;

/// @brief Method _Eval, addr 0x181b9e080, size 0x50, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* _Eval(::StringW  error) ;

/// @brief Method _Eval, addr 0x181b9e080, size 0x50, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* _Eval(::StringW  error, ::System::Exception*  innerException) ;

/// @brief Method _Expr, addr 0x181b9e0d0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Data::InvalidExpressionException* _Expr(::StringW  error) ;

/// @brief Method _Overflow, addr 0x181b9e120, size 0x50, virtual false, abstract: false, final false
static inline ::System::OverflowException* _Overflow(::StringW  error) ;

/// @brief Method _Syntax, addr 0x181b9e170, size 0x50, virtual false, abstract: false, final false
static inline ::System::Data::SyntaxErrorException* _Syntax(::StringW  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExprException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExprException(ExprException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExprException(ExprException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14021};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Data::ExprException) == 0x10, "Size mismatch!");

} // namespace end def System::Data
