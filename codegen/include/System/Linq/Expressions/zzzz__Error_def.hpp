#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Error.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Error)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Error;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Error*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Error*, "System.Linq.Expressions", "Error");
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Error
class CORDL_TYPE Error : public ::System::Object {
public:
// Declarations
/// @brief Method AccessorsCannotHaveByRefArgs, addr 0x181afac50, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW  paramName) ;

/// @brief Method AccessorsCannotHaveByRefArgs, addr 0x181afabd0, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW  paramName, int32_t  index) ;

/// @brief Method AccessorsCannotHaveVarArgs, addr 0x181afaca0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveVarArgs(::StringW  paramName) ;

/// @brief Method AmbiguousJump, addr 0x181afacf0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousJump(::System::Object*  p0) ;

/// @brief Method AmbiguousMatchInExpandoObject, addr 0x181afad40, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object*  p0) ;

/// @brief Method ArgumentCannotBeOfTypeVoid, addr 0x181afad90, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentCannotBeOfTypeVoid(::StringW  paramName) ;

/// @brief Method ArgumentMustBeArray, addr 0x181afae30, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeArray(::StringW  paramName) ;

/// @brief Method ArgumentMustBeArrayIndexType, addr 0x181afade0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeArrayIndexType(::StringW  paramName) ;

/// @brief Method ArgumentMustBeBoolean, addr 0x181afae80, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeBoolean(::StringW  paramName) ;

/// @brief Method ArgumentMustBeInteger, addr 0x181afaed0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeInteger(::StringW  paramName) ;

/// @brief Method ArgumentMustBeInteger, addr 0x181afaf20, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeInteger(::StringW  paramName, int32_t  index) ;

/// @brief Method ArgumentMustBeSingleDimensionalArrayType, addr 0x181afafa0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::StringW  paramName) ;

/// @brief Method ArgumentMustNotHaveValueType, addr 0x181afaff0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustNotHaveValueType(::StringW  paramName) ;

/// @brief Method ArgumentOutOfRange, addr 0x181adef00, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentOutOfRange(::StringW  paramName) ;

/// @brief Method ArgumentTypesMustMatch, addr 0x181afb040, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentTypesMustMatch() ;

/// @brief Method BinaryOperatorNotDefined, addr 0x181afb080, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* BinaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BinderNotCompatibleWithCallSite, addr 0x181afb0e0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* BinderNotCompatibleWithCallSite(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BindingCannotBeNull, addr 0x181afb140, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* BindingCannotBeNull() ;

/// @brief Method BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0x181afb180, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry() ;

/// @brief Method BothAccessorsMustBeStatic, addr 0x181afb1c0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* BothAccessorsMustBeStatic(::StringW  paramName) ;

/// @brief Method BoundsCannotBeLessThanOne, addr 0x181afb210, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* BoundsCannotBeLessThanOne(::StringW  paramName) ;

/// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0x181afb260, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object*  p0) ;

/// @brief Method CoalesceUsedOnNonNullType, addr 0x181afb2b0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CoalesceUsedOnNonNullType() ;

/// @brief Method CoercionOperatorNotDefined, addr 0x181afb2f0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* CoercionOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method CollectionModifiedWhileEnumerating, addr 0x181afb340, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CollectionModifiedWhileEnumerating() ;

/// @brief Method CollectionReadOnly, addr 0x181afb380, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* CollectionReadOnly() ;

/// @brief Method ControlCannotEnterExpression, addr 0x181afb3c0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotEnterExpression() ;

/// @brief Method ControlCannotEnterTry, addr 0x181afb400, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotEnterTry() ;

/// @brief Method ControlCannotLeaveFilterTest, addr 0x181afb440, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotLeaveFilterTest() ;

/// @brief Method ControlCannotLeaveFinally, addr 0x181afb480, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotLeaveFinally() ;

/// @brief Method ConversionIsNotSupportedForArithmeticTypes, addr 0x181afb4c0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ConversionIsNotSupportedForArithmeticTypes() ;

/// @brief Method DuplicateVariable, addr 0x181afb500, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateVariable(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method DuplicateVariable, addr 0x181afb560, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateVariable(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method DynamicBinderResultNotAssignable, addr 0x181afb5f0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicBinderResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method DynamicBindingNeedsRestrictions, addr 0x181afb650, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicBindingNeedsRestrictions(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DynamicObjectResultNotAssignable, addr 0x181afb6a0, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicObjectResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3) ;

/// @brief Method EnumerationIsDone, addr 0x181afb770, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* EnumerationIsDone() ;

/// @brief Method ExpressionMustBeReadable, addr 0x181afb7b0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeReadable(::StringW  paramName) ;

/// @brief Method ExpressionMustBeReadable, addr 0x181afb800, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeReadable(::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionMustBeWriteable, addr 0x181afb880, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeWriteable(::StringW  paramName) ;

/// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0x181afb8d0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0x181afb920, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x181afb970, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x181afb9d0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0x181afba70, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x181afbac0, size 0x70, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x181afbb30, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x181afbc80, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x181afbbe0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0x181afbce0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeNotInvocable, addr 0x181afbd30, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeNotInvocable(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method ExtensionNodeMustOverrideProperty, addr 0x181afbd90, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object*  p0) ;

/// @brief Method FaultCannotHaveCatchOrFinally, addr 0x181afbde0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* FaultCannotHaveCatchOrFinally(::StringW  paramName) ;

/// @brief Method FieldInfoNotDefinedForType, addr 0x181afbe30, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* FieldInfoNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method FirstArgumentMustBeCallSite, addr 0x181afbe90, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* FirstArgumentMustBeCallSite() ;

/// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0x181afbed0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method GetParamName, addr 0x181afbf20, size 0x50, virtual false, abstract: false, final false
static inline ::StringW GetParamName(::StringW  paramName, int32_t  index) ;

/// @brief Method IncorrectNumberOfConstructorArguments, addr 0x181afbf70, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfConstructorArguments() ;

/// @brief Method IncorrectNumberOfIndexes, addr 0x181afbfb0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfIndexes() ;

/// @brief Method IncorrectNumberOfLambdaArguments, addr 0x181afbff0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfLambdaArguments() ;

/// @brief Method IncorrectNumberOfLambdaDeclarationParameters, addr 0x181afc030, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfLambdaDeclarationParameters() ;

/// @brief Method IncorrectNumberOfMethodCallArguments, addr 0x181afc070, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method IncorrectTypeForTypeAs, addr 0x181afc0d0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectTypeForTypeAs(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method IndexesOfSetGetMustMatch, addr 0x181afc130, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* IndexesOfSetGetMustMatch(::StringW  paramName) ;

/// @brief Method InstanceAndMethodTypeMismatch, addr 0x181afc180, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method InstanceFieldNotDefinedForType, addr 0x181afc1e0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InstanceFieldNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InstancePropertyNotDefinedForType, addr 0x181afc230, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* InstancePropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method InvalidArgumentValue, addr 0x181afc290, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidArgumentValue(::StringW  paramName) ;

/// @brief Method InvalidLvalue, addr 0x181afc2e0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType  p0) ;

/// @brief Method InvalidMetaObjectCreated, addr 0x181afc340, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidMetaObjectCreated(::System::Object*  p0) ;

/// @brief Method InvalidNullValue, addr 0x181afc390, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidNullValue(::System::Type*  type, ::StringW  paramName) ;

/// @brief Method InvalidProgram, addr 0x181afc3f0, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidProgram() ;

/// @brief Method InvalidTypeException, addr 0x181afc420, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidTypeException(::System::Object*  value, ::System::Type*  type, ::StringW  paramName) ;

/// @brief Method InvalidUnboxType, addr 0x181afc4a0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidUnboxType(::StringW  paramName) ;

/// @brief Method KeyDoesNotExistInExpando, addr 0x181afc4f0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* KeyDoesNotExistInExpando(::System::Object*  p0) ;

/// @brief Method LabelMustBeVoidOrHaveExpression, addr 0x181afc540, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* LabelMustBeVoidOrHaveExpression(::StringW  paramName) ;

/// @brief Method LabelTargetAlreadyDefined, addr 0x181afc590, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTargetAlreadyDefined(::System::Object*  p0) ;

/// @brief Method LabelTargetUndefined, addr 0x181afc5e0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTargetUndefined(::System::Object*  p0) ;

/// @brief Method LabelTypeMustBeVoid, addr 0x181afc630, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTypeMustBeVoid(::StringW  paramName) ;

/// @brief Method LambdaTypeMustBeDerivedFromSystemDelegate, addr 0x181afc680, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::StringW  paramName) ;

/// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0x181afc6d0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MemberNotFieldOrProperty, addr 0x181afc720, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* MemberNotFieldOrProperty(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodContainsGenericParameters, addr 0x181afc780, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* MethodContainsGenericParameters(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodIsGeneric, addr 0x181afc7e0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* MethodIsGeneric(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodWithArgsDoesNotExistOnType, addr 0x181afc840, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MethodWithMoreThanOneMatch, addr 0x181afc890, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MethodWithMoreThanOneMatch(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MustBeReducible, addr 0x181afc8e0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MustBeReducible() ;

/// @brief Method MustReduceToDifferent, addr 0x181afc920, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MustReduceToDifferent() ;

/// @brief Method MustRewriteChildToSameType, addr 0x181afc960, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteChildToSameType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteToSameNode, addr 0x181afc9c0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteToSameNode(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteWithoutMethod, addr 0x181afca20, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteWithoutMethod(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method NoOrInvalidRuleProduced, addr 0x181afca70, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NoOrInvalidRuleProduced() ;

/// @brief Method NonAbstractConstructorRequired, addr 0x181afcab0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NonAbstractConstructorRequired() ;

/// @brief Method NonLocalJumpWithValue, addr 0x181afcaf0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* NonLocalJumpWithValue(::System::Object*  p0) ;

/// @brief Method NotSupported, addr 0x181726d40, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* NotSupported() ;

/// @brief Method OnlyStaticFieldsHaveNullInstance, addr 0x181afcb40, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticFieldsHaveNullInstance(::StringW  paramName) ;

/// @brief Method OnlyStaticMethodsHaveNullInstance, addr 0x181afcb90, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticMethodsHaveNullInstance() ;

/// @brief Method OnlyStaticPropertiesHaveNullInstance, addr 0x181afcbd0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::StringW  paramName) ;

/// @brief Method OperandTypesDoNotMatchParameters, addr 0x181afcc20, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OutOfRange, addr 0x181afcc70, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* OutOfRange(::StringW  paramName, ::System::Object*  p1) ;

/// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0x181afccd0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ParameterExpressionNotValidAsDelegate, addr 0x181afcd20, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method PropertyCannotHaveRefType, addr 0x181afcd70, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyCannotHaveRefType(::StringW  paramName) ;

/// @brief Method PropertyDoesNotHaveAccessor, addr 0x181afcdc0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method PropertyNotDefinedForType, addr 0x181afce20, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method PropertyTypeCannotBeVoid, addr 0x181afce80, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeCannotBeVoid(::StringW  paramName) ;

/// @brief Method PropertyTypeMustMatchGetter, addr 0x181afced0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeMustMatchGetter(::StringW  paramName) ;

/// @brief Method PropertyTypeMustMatchSetter, addr 0x181afcf20, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeMustMatchSetter(::StringW  paramName) ;

/// @brief Method QuotedExpressionMustBeLambda, addr 0x181afcf70, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* QuotedExpressionMustBeLambda(::StringW  paramName) ;

/// @brief Method ReducedNotCompatible, addr 0x181afcfc0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ReducedNotCompatible() ;

/// @brief Method ReducibleMustOverrideReduce, addr 0x181afd000, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ReducibleMustOverrideReduce() ;

/// @brief Method ReferenceEqualityNotDefined, addr 0x181afd040, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ReferenceEqualityNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method RethrowRequiresCatch, addr 0x181afd090, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RethrowRequiresCatch() ;

/// @brief Method SameKeyExistsInExpando, addr 0x181afd0d0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* SameKeyExistsInExpando(::System::Object*  key) ;

/// @brief Method SetterHasNoParams, addr 0x181afd130, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* SetterHasNoParams(::StringW  paramName) ;

/// @brief Method SetterMustBeVoid, addr 0x181afd180, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* SetterMustBeVoid(::StringW  paramName) ;

/// @brief Method TryMustHaveCatchFinallyOrFault, addr 0x181afd1d0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TryMustHaveCatchFinallyOrFault() ;

/// @brief Method TypeContainsGenericParameters, addr 0x181afd2a0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* TypeContainsGenericParameters(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method TypeContainsGenericParameters, addr 0x181afd210, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* TypeContainsGenericParameters(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method TypeIsGeneric, addr 0x181afd300, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* TypeIsGeneric(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method TypeIsGeneric, addr 0x181afd360, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* TypeIsGeneric(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method TypeMustBeDerivedFromSystemDelegate, addr 0x181afd3f0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method TypeMustNotBeByRef, addr 0x181afd430, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustNotBeByRef(::StringW  paramName) ;

/// @brief Method TypeMustNotBePointer, addr 0x181afd480, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustNotBePointer(::StringW  paramName) ;

/// @brief Method TypeParameterIsNotDelegate, addr 0x181afd4d0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* TypeParameterIsNotDelegate(::System::Object*  p0) ;

/// @brief Method UnaryOperatorNotDefined, addr 0x181afd520, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* UnaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UnhandledBinary, addr 0x181afd570, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UnhandledBinary(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UnhandledUnary, addr 0x181afd5d0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UnhandledUnary(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0x181afd630, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0x181afd680, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOperatorMustBeStatic, addr 0x181afd6d0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0x181afd730, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method VariableMustNotBeByRef, addr 0x181afd830, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method VariableMustNotBeByRef, addr 0x181afd790, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Exception* VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15435};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Error) == 0x10, "Size mismatch!");

} // namespace end def System::Linq::Expressions
