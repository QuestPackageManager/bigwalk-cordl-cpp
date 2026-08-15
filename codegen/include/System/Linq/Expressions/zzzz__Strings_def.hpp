#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Strings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Strings)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Strings;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Strings*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Strings*, "System.Linq.Expressions", "Strings");
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Strings
class CORDL_TYPE Strings : public ::System::Object {
public:
// Declarations
/// @brief Method AmbiguousJump, addr 0x181b03a30, size 0x20, virtual false, abstract: false, final false
static inline ::StringW AmbiguousJump(::System::Object*  p0) ;

/// @brief Method AmbiguousMatchInExpandoObject, addr 0x181b03a50, size 0x20, virtual false, abstract: false, final false
static inline ::StringW AmbiguousMatchInExpandoObject(::System::Object*  p0) ;

/// @brief Method BinaryOperatorNotDefined, addr 0x181b03a70, size 0x30, virtual false, abstract: false, final false
static inline ::StringW BinaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BinderNotCompatibleWithCallSite, addr 0x181b03aa0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW BinderNotCompatibleWithCallSite(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0x181b03ad0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object*  p0) ;

/// @brief Method CoercionOperatorNotDefined, addr 0x181b03af0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW CoercionOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DuplicateVariable, addr 0x181b03b10, size 0x20, virtual false, abstract: false, final false
static inline ::StringW DuplicateVariable(::System::Object*  p0) ;

/// @brief Method DynamicBinderResultNotAssignable, addr 0x181b03b30, size 0x30, virtual false, abstract: false, final false
static inline ::StringW DynamicBinderResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method DynamicBindingNeedsRestrictions, addr 0x181b03b60, size 0x20, virtual false, abstract: false, final false
static inline ::StringW DynamicBindingNeedsRestrictions(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DynamicObjectResultNotAssignable, addr 0x181b03b80, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW DynamicObjectResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3) ;

/// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0x181b03c30, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeCannotInitializeArrayType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0x181b03c50, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchAssignment(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x181b03c70, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0x181b03c90, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchLabel(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x181b03cb0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x181b03ce0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0x181b03d00, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchReturn(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeNotInvocable, addr 0x181b03d20, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeNotInvocable(::System::Object*  p0) ;

/// @brief Method ExtensionNodeMustOverrideProperty, addr 0x181b03d40, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ExtensionNodeMustOverrideProperty(::System::Object*  p0) ;

/// @brief Method FieldInfoNotDefinedForType, addr 0x181b03d60, size 0x30, virtual false, abstract: false, final false
static inline ::StringW FieldInfoNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0x181b03d90, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GenericMethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method IncorrectNumberOfMethodCallArguments, addr 0x181b03db0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW IncorrectNumberOfMethodCallArguments(::System::Object*  p0) ;

/// @brief Method IncorrectTypeForTypeAs, addr 0x181b03dd0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW IncorrectTypeForTypeAs(::System::Object*  p0) ;

/// @brief Method InstanceAndMethodTypeMismatch, addr 0x181b03df0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW InstanceAndMethodTypeMismatch(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method InstanceFieldNotDefinedForType, addr 0x181b03e20, size 0x20, virtual false, abstract: false, final false
static inline ::StringW InstanceFieldNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InstancePropertyNotDefinedForType, addr 0x181b03e40, size 0x20, virtual false, abstract: false, final false
static inline ::StringW InstancePropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InvalidLvalue, addr 0x181b03e60, size 0x20, virtual false, abstract: false, final false
static inline ::StringW InvalidLvalue(::System::Object*  p0) ;

/// @brief Method InvalidMetaObjectCreated, addr 0x181b03e80, size 0x20, virtual false, abstract: false, final false
static inline ::StringW InvalidMetaObjectCreated(::System::Object*  p0) ;

/// @brief Method InvalidNullValue, addr 0x181b03ea0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW InvalidNullValue(::System::Object*  p0) ;

/// @brief Method InvalidObjectType, addr 0x181b03ec0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW InvalidObjectType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method KeyDoesNotExistInExpando, addr 0x181b03ee0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW KeyDoesNotExistInExpando(::System::Object*  p0) ;

/// @brief Method LabelTargetAlreadyDefined, addr 0x181b03f00, size 0x20, virtual false, abstract: false, final false
static inline ::StringW LabelTargetAlreadyDefined(::System::Object*  p0) ;

/// @brief Method LabelTargetUndefined, addr 0x181b03f20, size 0x20, virtual false, abstract: false, final false
static inline ::StringW LabelTargetUndefined(::System::Object*  p0) ;

/// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0x181b03f40, size 0x20, virtual false, abstract: false, final false
static inline ::StringW LogicalOperatorMustHaveBooleanOperators(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MemberNotFieldOrProperty, addr 0x181b03f60, size 0x20, virtual false, abstract: false, final false
static inline ::StringW MemberNotFieldOrProperty(::System::Object*  p0) ;

/// @brief Method MethodContainsGenericParameters, addr 0x181b03f80, size 0x20, virtual false, abstract: false, final false
static inline ::StringW MethodContainsGenericParameters(::System::Object*  p0) ;

/// @brief Method MethodIsGeneric, addr 0x181b03fa0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW MethodIsGeneric(::System::Object*  p0) ;

/// @brief Method MethodWithArgsDoesNotExistOnType, addr 0x181b03fc0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW MethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MethodWithMoreThanOneMatch, addr 0x181b03fe0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW MethodWithMoreThanOneMatch(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MustRewriteChildToSameType, addr 0x181b04000, size 0x30, virtual false, abstract: false, final false
static inline ::StringW MustRewriteChildToSameType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteToSameNode, addr 0x181b04030, size 0x30, virtual false, abstract: false, final false
static inline ::StringW MustRewriteToSameNode(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteWithoutMethod, addr 0x181b04060, size 0x20, virtual false, abstract: false, final false
static inline ::StringW MustRewriteWithoutMethod(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method NonLocalJumpWithValue, addr 0x181b04080, size 0x20, virtual false, abstract: false, final false
static inline ::StringW NonLocalJumpWithValue(::System::Object*  p0) ;

/// @brief Method OperandTypesDoNotMatchParameters, addr 0x181b040a0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW OperandTypesDoNotMatchParameters(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OutOfRange, addr 0x181b040c0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW OutOfRange(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0x181b040e0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW OverloadOperatorTypeDoesNotMatchConversionType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ParameterExpressionNotValidAsDelegate, addr 0x181b04100, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ParameterExpressionNotValidAsDelegate(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method PropertyDoesNotHaveAccessor, addr 0x181b04120, size 0x20, virtual false, abstract: false, final false
static inline ::StringW PropertyDoesNotHaveAccessor(::System::Object*  p0) ;

/// @brief Method PropertyNotDefinedForType, addr 0x181b04140, size 0x20, virtual false, abstract: false, final false
static inline ::StringW PropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ReferenceEqualityNotDefined, addr 0x181b04160, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ReferenceEqualityNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method SameKeyExistsInExpando, addr 0x181b04180, size 0x20, virtual false, abstract: false, final false
static inline ::StringW SameKeyExistsInExpando(::System::Object*  p0) ;

/// @brief Method TypeContainsGenericParameters, addr 0x181b041a0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW TypeContainsGenericParameters(::System::Object*  p0) ;

/// @brief Method TypeIsGeneric, addr 0x181b041c0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW TypeIsGeneric(::System::Object*  p0) ;

/// @brief Method TypeParameterIsNotDelegate, addr 0x181b041e0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW TypeParameterIsNotDelegate(::System::Object*  p0) ;

/// @brief Method UnaryOperatorNotDefined, addr 0x181b04200, size 0x20, virtual false, abstract: false, final false
static inline ::StringW UnaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UnhandledBinary, addr 0x181b04220, size 0x20, virtual false, abstract: false, final false
static inline ::StringW UnhandledBinary(::System::Object*  p0) ;

/// @brief Method UnhandledUnary, addr 0x181b04240, size 0x20, virtual false, abstract: false, final false
static inline ::StringW UnhandledUnary(::System::Object*  p0) ;

/// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0x181b04260, size 0x20, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOpMustHaveConsistentTypes(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0x181b04280, size 0x20, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOpMustHaveValidReturnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOperatorMustBeStatic, addr 0x181b042a0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOperatorMustBeStatic(::System::Object*  p0) ;

/// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0x181b042c0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOperatorMustNotBeVoid(::System::Object*  p0) ;

/// @brief Method VariableMustNotBeByRef, addr 0x181b042e0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method get_AccessorsCannotHaveByRefArgs, addr 0x181b04300, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_AccessorsCannotHaveByRefArgs() ;

/// @brief Method get_AccessorsCannotHaveVarArgs, addr 0x181b04310, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_AccessorsCannotHaveVarArgs() ;

/// @brief Method get_ArgumentCannotBeOfTypeVoid, addr 0x181b04320, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentCannotBeOfTypeVoid() ;

/// @brief Method get_ArgumentMustBeArray, addr 0x181b04340, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeArray() ;

/// @brief Method get_ArgumentMustBeArrayIndexType, addr 0x181b04330, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeArrayIndexType() ;

/// @brief Method get_ArgumentMustBeBoolean, addr 0x181b04350, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeBoolean() ;

/// @brief Method get_ArgumentMustBeInteger, addr 0x181b04360, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeInteger() ;

/// @brief Method get_ArgumentMustBeSingleDimensionalArrayType, addr 0x181b04370, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeSingleDimensionalArrayType() ;

/// @brief Method get_ArgumentMustNotHaveValueType, addr 0x181b04380, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustNotHaveValueType() ;

/// @brief Method get_ArgumentTypesMustMatch, addr 0x181b04390, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentTypesMustMatch() ;

/// @brief Method get_BindingCannotBeNull, addr 0x181b043a0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_BindingCannotBeNull() ;

/// @brief Method get_BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0x181b043b0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_BodyOfCatchMustHaveSameTypeAsBodyOfTry() ;

/// @brief Method get_BothAccessorsMustBeStatic, addr 0x181b043c0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_BothAccessorsMustBeStatic() ;

/// @brief Method get_BoundsCannotBeLessThanOne, addr 0x181b043d0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_BoundsCannotBeLessThanOne() ;

/// @brief Method get_CoalesceUsedOnNonNullType, addr 0x181b043e0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_CoalesceUsedOnNonNullType() ;

/// @brief Method get_CollectionModifiedWhileEnumerating, addr 0x181b043f0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_CollectionModifiedWhileEnumerating() ;

/// @brief Method get_CollectionReadOnly, addr 0x181b04400, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_CollectionReadOnly() ;

/// @brief Method get_ControlCannotEnterExpression, addr 0x181b04410, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotEnterExpression() ;

/// @brief Method get_ControlCannotEnterTry, addr 0x181b04420, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotEnterTry() ;

/// @brief Method get_ControlCannotLeaveFilterTest, addr 0x181b04430, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotLeaveFilterTest() ;

/// @brief Method get_ControlCannotLeaveFinally, addr 0x181b04440, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotLeaveFinally() ;

/// @brief Method get_ConversionIsNotSupportedForArithmeticTypes, addr 0x181b04450, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ConversionIsNotSupportedForArithmeticTypes() ;

/// @brief Method get_EnumerationIsDone, addr 0x181b04460, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_EnumerationIsDone() ;

/// @brief Method get_ExpressionMustBeReadable, addr 0x181b04470, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ExpressionMustBeReadable() ;

/// @brief Method get_ExpressionMustBeWriteable, addr 0x181b04480, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ExpressionMustBeWriteable() ;

/// @brief Method get_FaultCannotHaveCatchOrFinally, addr 0x181b04490, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_FaultCannotHaveCatchOrFinally() ;

/// @brief Method get_FirstArgumentMustBeCallSite, addr 0x181b044a0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_FirstArgumentMustBeCallSite() ;

/// @brief Method get_IncorrectNumberOfConstructorArguments, addr 0x181b044b0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfConstructorArguments() ;

/// @brief Method get_IncorrectNumberOfIndexes, addr 0x181b044c0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfIndexes() ;

/// @brief Method get_IncorrectNumberOfLambdaArguments, addr 0x181b044d0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfLambdaArguments() ;

/// @brief Method get_IncorrectNumberOfLambdaDeclarationParameters, addr 0x181b044e0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfLambdaDeclarationParameters() ;

/// @brief Method get_IndexesOfSetGetMustMatch, addr 0x181b044f0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_IndexesOfSetGetMustMatch() ;

/// @brief Method get_InvalidArgumentValue, addr 0x181b04500, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_InvalidArgumentValue() ;

/// @brief Method get_InvalidUnboxType, addr 0x181b04510, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_InvalidUnboxType() ;

/// @brief Method get_LabelMustBeVoidOrHaveExpression, addr 0x181b04520, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_LabelMustBeVoidOrHaveExpression() ;

/// @brief Method get_LabelTypeMustBeVoid, addr 0x181b04530, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_LabelTypeMustBeVoid() ;

/// @brief Method get_LambdaTypeMustBeDerivedFromSystemDelegate, addr 0x181b04540, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_LambdaTypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method get_MustBeReducible, addr 0x181b04550, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_MustBeReducible() ;

/// @brief Method get_MustReduceToDifferent, addr 0x181b04560, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_MustReduceToDifferent() ;

/// @brief Method get_NoOrInvalidRuleProduced, addr 0x181b04570, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_NoOrInvalidRuleProduced() ;

/// @brief Method get_NonAbstractConstructorRequired, addr 0x181b04580, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_NonAbstractConstructorRequired() ;

/// @brief Method get_OnlyStaticFieldsHaveNullInstance, addr 0x181b04590, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticFieldsHaveNullInstance() ;

/// @brief Method get_OnlyStaticMethodsHaveNullInstance, addr 0x181b045a0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticMethodsHaveNullInstance() ;

/// @brief Method get_OnlyStaticPropertiesHaveNullInstance, addr 0x181b045b0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticPropertiesHaveNullInstance() ;

/// @brief Method get_PropertyCannotHaveRefType, addr 0x181b045c0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_PropertyCannotHaveRefType() ;

/// @brief Method get_PropertyTypeCannotBeVoid, addr 0x181b045d0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeCannotBeVoid() ;

/// @brief Method get_PropertyTypeMustMatchGetter, addr 0x181b045e0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeMustMatchGetter() ;

/// @brief Method get_PropertyTypeMustMatchSetter, addr 0x181b045f0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeMustMatchSetter() ;

/// @brief Method get_QuotedExpressionMustBeLambda, addr 0x181b04600, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_QuotedExpressionMustBeLambda() ;

/// @brief Method get_ReducedNotCompatible, addr 0x181b04610, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ReducedNotCompatible() ;

/// @brief Method get_ReducibleMustOverrideReduce, addr 0x181b04620, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_ReducibleMustOverrideReduce() ;

/// @brief Method get_RethrowRequiresCatch, addr 0x181b04630, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_RethrowRequiresCatch() ;

/// @brief Method get_SetterHasNoParams, addr 0x181b04640, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_SetterHasNoParams() ;

/// @brief Method get_SetterMustBeVoid, addr 0x181b04650, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_SetterMustBeVoid() ;

/// @brief Method get_TryMustHaveCatchFinallyOrFault, addr 0x181b04660, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_TryMustHaveCatchFinallyOrFault() ;

/// @brief Method get_TypeMustBeDerivedFromSystemDelegate, addr 0x181b04670, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method get_TypeMustNotBeByRef, addr 0x181b04680, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustNotBeByRef() ;

/// @brief Method get_TypeMustNotBePointer, addr 0x181b04690, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustNotBePointer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Strings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Strings(Strings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Strings(Strings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15499};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Strings) == 0x10, "Size mismatch!");

} // namespace end def System::Linq::Expressions
