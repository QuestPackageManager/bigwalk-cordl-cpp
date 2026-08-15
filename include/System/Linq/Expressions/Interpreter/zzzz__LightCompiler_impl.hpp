#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LightCompiler.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_impl.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightCompiler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DebugInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__HybridReferenceDictionary_2_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Interpreter_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelScopeInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelScopeKind_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightCompiler_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightDelegateCreator_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariable_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/Linq/Expressions/zzzz__BinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__CatchBlock_def.hpp"
#include "System/Linq/Expressions/zzzz__ElementInit_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__IndexExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelTarget_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__MemberBinding_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__StackGuard_def.hpp"
#include "System/Linq/Expressions/zzzz__SwitchCase_def.hpp"
#include "System/Linq/Expressions/zzzz__SwitchExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__TryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__UnaryExpression_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor.VisitParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::VisitParameter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181b30030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(),
                    {::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor.VisitBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::*)(::System::Linq::Expressions::BlockExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::VisitBlock)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b2ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(),
                    {::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor.VisitCatchBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::CatchBlock* (::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::*)(::System::Linq::Expressions::CatchBlock*)>(&::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::VisitCatchBlock)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181b2ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(),
                    {::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor.PushParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::*)(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*)>(&::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::PushParameters)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181b2fd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(),
                        {"PushParameters", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor.PopParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::*)(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*)>(&::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::PopParameters)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181b2fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(),
                        {"PopParameters", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::*)()>(&::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b30080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>*& System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::__cordl_internal_get__definedParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____definedParameters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>* const& System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::__cordl_internal_get__definedParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____definedParameters;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::__cordl_internal_set__definedParameters(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____definedParameters = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*& System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::__cordl_internal_get__hoistedParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoistedParameters;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>* const& System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::__cordl_internal_get__hoistedParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoistedParameters;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::__cordl_internal_set__hoistedParameters(::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoistedParameters = value;
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::VisitParameter(::System::Linq::Expressions::ParameterExpression*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::VisitBlock(::System::Linq::Expressions::BlockExpression*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::CatchBlock* System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::VisitCatchBlock(::System::Linq::Expressions::CatchBlock*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::CatchBlock*>(this, ___internal_method, node);
}
template<typename T>
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::VisitLambda(::System::Linq::Expressions::Expression_1<T>*  node)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(), 15}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::PushParameters(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(),
                        {"PushParameters", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::PopParameters(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(),
                        {"PopParameters", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor* System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor::LightCompiler_QuoteVisitor()   {
}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler___c::*)()>(&::System::Linq::Expressions::Interpreter::LightCompiler___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler___c._CompileSwitchExpression_b__56_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LightCompiler___c::*)(::System::Linq::Expressions::SwitchCase*)>(&::System::Linq::Expressions::Interpreter::LightCompiler___c::_CompileSwitchExpression_b__56_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181b33560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler___c*>(),
                        {"<CompileSwitchExpression>b__56_0", {}, {::i2c::type_of<::System::Linq::Expressions::SwitchCase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler___c._CompileSwitchExpression_b__56_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LightCompiler___c::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler___c::_CompileSwitchExpression_b__56_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b33620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler___c*>(),
                        {"<CompileSwitchExpression>b__56_1", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler___c._CompileNoLabelPush_b__101_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler___c::*)(::System::Linq::Expressions::Interpreter::LightCompiler*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler___c::_CompileNoLabelPush_b__101_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181b33540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler___c*>(),
                        {"<CompileNoLabelPush>b__101_0", {}, {::i2c::type_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::LightCompiler___c::setStaticF___9(::System::Linq::Expressions::Interpreter::LightCompiler___c*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::LightCompiler___c*, "<>9", ::System::Linq::Expressions::Interpreter::LightCompiler___c*>(std::forward<::System::Linq::Expressions::Interpreter::LightCompiler___c*>(value));
}
inline ::System::Linq::Expressions::Interpreter::LightCompiler___c* System::Linq::Expressions::Interpreter::LightCompiler___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::LightCompiler___c*, "<>9", ::System::Linq::Expressions::Interpreter::LightCompiler___c*>();
}
inline void System::Linq::Expressions::Interpreter::LightCompiler___c::setStaticF___9__56_1(::System::Func_2<::System::Linq::Expressions::Expression*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Linq::Expressions::Expression*,bool>*, "<>9__56_1", ::System::Linq::Expressions::Interpreter::LightCompiler___c*>(std::forward<::System::Func_2<::System::Linq::Expressions::Expression*,bool>*>(value));
}
inline ::System::Func_2<::System::Linq::Expressions::Expression*,bool>* System::Linq::Expressions::Interpreter::LightCompiler___c::getStaticF___9__56_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::Expressions::Expression*,bool>*, "<>9__56_1", ::System::Linq::Expressions::Interpreter::LightCompiler___c*>();
}
inline void System::Linq::Expressions::Interpreter::LightCompiler___c::setStaticF___9__56_0(::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>*, "<>9__56_0", ::System::Linq::Expressions::Interpreter::LightCompiler___c*>(std::forward<::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>*>(value));
}
inline ::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>* System::Linq::Expressions::Interpreter::LightCompiler___c::getStaticF___9__56_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>*, "<>9__56_0", ::System::Linq::Expressions::Interpreter::LightCompiler___c*>();
}
inline void System::Linq::Expressions::Interpreter::LightCompiler___c::setStaticF___9__101_0(::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>*, "<>9__101_0", ::System::Linq::Expressions::Interpreter::LightCompiler___c*>(std::forward<::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>*>(value));
}
inline ::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>* System::Linq::Expressions::Interpreter::LightCompiler___c::getStaticF___9__101_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>*, "<>9__101_0", ::System::Linq::Expressions::Interpreter::LightCompiler___c*>();
}
inline void System::Linq::Expressions::Interpreter::LightCompiler___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Linq::Expressions::Interpreter::LightCompiler___c::_CompileSwitchExpression_b__56_0(::System::Linq::Expressions::SwitchCase*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler___c*>(),
                        {"<CompileSwitchExpression>b__56_0", {}, {::i2c::type_of<::System::Linq::Expressions::SwitchCase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool System::Linq::Expressions::Interpreter::LightCompiler___c::_CompileSwitchExpression_b__56_1(::System::Linq::Expressions::Expression*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler___c*>(),
                        {"<CompileSwitchExpression>b__56_1", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler___c::_CompileNoLabelPush_b__101_0(::System::Linq::Expressions::Interpreter::LightCompiler*  _cordl_this, ::System::Linq::Expressions::Expression*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler___c*>(),
                        {"<CompileNoLabelPush>b__101_0", {}, {::i2c::type_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_this, e);
}
inline ::System::Linq::Expressions::Interpreter::LightCompiler___c* System::Linq::Expressions::Interpreter::LightCompiler___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LightCompiler___c*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LightCompiler___c::LightCompiler___c()   {
}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)()>(&::System::Linq::Expressions::Interpreter::LightCompiler::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181b1f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Interpreter::LightCompiler*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181b1f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Linq::Expressions::Interpreter::LightCompiler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.get_Instructions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::InstructionList* (::System::Linq::Expressions::Interpreter::LightCompiler::*)()>(&::System::Linq::Expressions::Interpreter::LightCompiler::get_Instructions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"get_Instructions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::LightDelegateCreator* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::LambdaExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTop)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181b1c570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTop", {}, {::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.MakeInterpreter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Interpreter* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::StringW)>(&::System::Linq::Expressions::Interpreter::LightCompiler::MakeInterpreter)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181b1e950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"MakeInterpreter", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileConstantExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileConstantExpression)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b15d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileConstantExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileDefaultExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileDefaultExpression)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181b16a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileDefaultExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileDefaultExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileDefaultExpression)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181b16940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileDefaultExpression", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EnsureAvailableForClosure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::LocalVariable* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EnsureAvailableForClosure)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181b1e400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EnsureAvailableForClosure", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.ResolveLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::LocalVariable* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::ResolveLocal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b1ed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"ResolveLocal", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileGetVariable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileGetVariable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b16db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileGetVariable", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EmitCopyValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EmitCopyValueType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b1df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EmitCopyValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.LoadLocalNoValueTypeCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::LoadLocalNoValueTypeCopy)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181b1e6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"LoadLocalNoValueTypeCopy", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.MaybeMutableValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::MaybeMutableValueType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181b1ebf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"MaybeMutableValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileGetBoxedVariable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileGetBoxedVariable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181b16c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileGetBoxedVariable", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileSetVariable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileSetVariable)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181b1b6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileSetVariable", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileParameterExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileParameterExpression)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b1b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileParameterExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileBlockExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockExpression)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181b14f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileBlockExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileBlockStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition> (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BlockExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockStart)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x181b15090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileBlockStart", {}, {::i2c::type_of<::System::Linq::Expressions::BlockExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileBlockEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockEnd)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b14ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileBlockEnd", {}, {::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileIndexExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileIndexExpression)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b172c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileIndexExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EmitIndexGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::IndexExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EmitIndexGet)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181b1dfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EmitIndexGet", {}, {::i2c::type_of<::System::Linq::Expressions::IndexExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileIndexAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileIndexAssignment)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181b17070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileIndexAssignment", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMemberAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberAssignment)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181b18f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMemberAssignment", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMemberAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(bool, ::System::Reflection::MemberInfo*, ::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberAssignment)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x181b18b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMemberAssignment", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileVariableAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileVariableAssignment)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b1dc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileVariableAssignment", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileAssignBinaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileAssignBinaryExpression)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181b13f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileAssignBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileBinaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileBinaryExpression)> {
  constexpr static std::size_t size = 0xd70;
  constexpr static std::size_t addrs = 0x181b14150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileEqual)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b16b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileEqual", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileNotEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileNotEqual)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b1b160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileNotEqual", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileComparison
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileComparison)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181b15960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileComparison", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileArithmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileArithmetic)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181b13a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileArithmetic", {}, {::i2c::type_of<::System::Linq::Expressions::ExpressionType>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileConvertUnaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileConvertUnaryExpression)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x181b16240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileConvertUnaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileConvertToType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Type*, ::System::Type*, bool, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileConvertToType)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x181b15e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileConvertToType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileNotExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::UnaryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileNotExpression)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b1b1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileNotExpression", {}, {::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileUnaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileUnaryExpression)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x181b1d6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileUnaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EmitUnaryMethodCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::UnaryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EmitUnaryMethodCall)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181b1e280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EmitUnaryMethodCall", {}, {::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EmitUnaryBoolCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::UnaryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EmitUnaryBoolCheck)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181b1e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EmitUnaryBoolCheck", {}, {::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileAndAlsoBinaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileAndAlsoBinaryExpression)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b13a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileAndAlsoBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileOrElseBinaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileOrElseBinaryExpression)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b1b250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileOrElseBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileLogicalBinaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileLogicalBinaryExpression)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x181b18540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileLogicalBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMethodLogicalBinaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodLogicalBinaryExpression)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181b19b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMethodLogicalBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileLiftedLogicalBinaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileLiftedLogicalBinaryExpression)> {
  constexpr static std::size_t size = 0x900;
  constexpr static std::size_t addrs = 0x181b179f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileLiftedLogicalBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileUnliftedLogicalBinaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileUnliftedLogicalBinaryExpression)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181b1db10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileUnliftedLogicalBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileConditionalExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileConditionalExpression)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181b15b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileConditionalExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileLoopExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileLoopExpression)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181b188a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileLoopExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileSwitchExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileSwitchExpression)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x181b1be30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileSwitchExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileStringSwitchExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::SwitchExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileStringSwitchExpression)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x181b1b9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileStringSwitchExpression", {}, {::i2c::type_of<::System::Linq::Expressions::SwitchExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileLabelExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileLabelExpression)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181b17530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileLabelExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileGotoExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileGotoExpression)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181b16e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileGotoExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.PushLabelBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Interpreter::LabelScopeKind)>(&::System::Linq::Expressions::Interpreter::LightCompiler::PushLabelBlock)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b1ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"PushLabelBlock", {}, {::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeKind>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.PopLabelBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Interpreter::LabelScopeKind)>(&::System::Linq::Expressions::Interpreter::LightCompiler::PopLabelBlock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181b1ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"PopLabelBlock", {}, {::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeKind>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EnsureLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::LabelInfo* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::LabelTarget*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EnsureLabel)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181b1e4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EnsureLabel", {}, {::i2c::type_of<::System::Linq::Expressions::LabelTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.ReferenceLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::LabelInfo* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::LabelTarget*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::ReferenceLabel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b1ecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"ReferenceLabel", {}, {::i2c::type_of<::System::Linq::Expressions::LabelTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.DefineLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::LabelInfo* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::LabelTarget*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::DefineLabel)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181b1de70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"DefineLabel", {}, {::i2c::type_of<::System::Linq::Expressions::LabelTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.TryPushLabelBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::TryPushLabelBlock)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x181b1ef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"TryPushLabelBlock", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.DefineBlockLabels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::DefineBlockLabels)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181b1dd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"DefineBlockLabels", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CheckRethrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)()>(&::System::Linq::Expressions::Interpreter::LightCompiler::CheckRethrow)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181b13000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CheckRethrow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileThrowUnaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileThrowUnaryExpression)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181b1c390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileThrowUnaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTryExpression)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x181b1c780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTryFaultExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::TryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTryFaultExpression)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x181b1cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTryFaultExpression", {}, {::i2c::type_of<::System::Linq::Expressions::TryExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMethodCallExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodCallExpression)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b19a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMethodCallExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMethodCallExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::IArgumentProvider*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodCallExpression)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x181b196e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMethodCallExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::IArgumentProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileArrayIndexAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::ByRefUpdater* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, int32_t)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileArrayIndexAddress)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181b13c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileArrayIndexAddress", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EmitThisForMethodCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EmitThisForMethodCall)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b1e090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EmitThisForMethodCall", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.ShouldWritebackNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::ShouldWritebackNode)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181b1edc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"ShouldWritebackNode", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::ByRefUpdater* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, int32_t)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileAddress)> {
  constexpr static std::size_t size = 0x9d0;
  constexpr static std::size_t addrs = 0x181b13040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileAddress", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMultiDimArrayAccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::ByRefUpdater* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::IArgumentProvider*, int32_t)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMultiDimArrayAccess)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x181b19ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMultiDimArrayAccess", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::IArgumentProvider*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileNewExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileNewExpression)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181b1a2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileNewExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMemberExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberExpression)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b18fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMemberExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMember)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181b193c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMember", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileNewArrayExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileNewArrayExpression)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181b1a040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileNewArrayExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileDebugInfoExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileDebugInfoExpression)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181b167f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileDebugInfoExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileRuntimeVariablesExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileRuntimeVariablesExpression)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181b1b4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileRuntimeVariablesExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileLambdaExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileLambdaExpression)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181b17730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileLambdaExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileCoalesceBinaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileCoalesceBinaryExpression)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x181b15410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileCoalesceBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileInvocationExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileInvocationExpression)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181b17370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileInvocationExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileListInitExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileListInitExpression)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b182f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileListInitExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileListInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileListInit)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181b18350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileListInit", {}, {::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMemberInitExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberInitExpression)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b19040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMemberInitExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMemberInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberInit)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181b190a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMemberInit", {}, {::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.GetMemberType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Reflection::MemberInfo*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::GetMemberType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181b1e5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"GetMemberType", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileQuoteUnaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileQuoteUnaryExpression)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181b1b320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileQuoteUnaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileUnboxUnaryExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileUnboxUnaryExpression)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181b1da40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileUnboxUnaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTypeEqualExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeEqualExpression)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181b1d330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTypeEqualExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTypeAsExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::UnaryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeAsExpression)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b1d2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTypeAsExpression", {}, {::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTypeIsExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeIsExpression)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181b1d490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTypeIsExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.Compile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::Compile)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181b1dd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"Compile", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileAsVoid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileAsVoid)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181b13e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileAsVoid", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileNoLabelPush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileNoLabelPush)> {
  constexpr static std::size_t size = 0xb90;
  constexpr static std::size_t addrs = 0x181b1a5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileNoLabelPush", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.Compile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::Compile)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b1dcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"Compile", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::InstructionList*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__instructions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instructions;
}
constexpr ::System::Linq::Expressions::Interpreter::InstructionList* const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__instructions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instructions;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__instructions(::System::Linq::Expressions::Interpreter::InstructionList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instructions = value;
}
constexpr ::System::Linq::Expressions::Interpreter::LocalVariables*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__locals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locals;
}
constexpr ::System::Linq::Expressions::Interpreter::LocalVariables* const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__locals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locals;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__locals(::System::Linq::Expressions::Interpreter::LocalVariables*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locals = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__debugInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugInfos;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>* const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__debugInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugInfos;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__debugInfos(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugInfos = value;
}
constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__treeLabels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____treeLabels;
}
constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>* const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__treeLabels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____treeLabels;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__treeLabels(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____treeLabels = value;
}
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__labelBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelBlock;
}
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo* const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__labelBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelBlock;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__labelBlock(::System::Linq::Expressions::Interpreter::LabelScopeInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____labelBlock = value;
}
constexpr ::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__exceptionForRethrowStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionForRethrowStack;
}
constexpr ::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>* const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__exceptionForRethrowStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionForRethrowStack;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__exceptionForRethrowStack(::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exceptionForRethrowStack = value;
}
constexpr ::System::Linq::Expressions::Interpreter::LightCompiler*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::System::Linq::Expressions::Interpreter::LightCompiler* const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__parent(::System::Linq::Expressions::Interpreter::LightCompiler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
constexpr ::System::Linq::Expressions::StackGuard*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__guard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guard;
}
constexpr ::System::Linq::Expressions::StackGuard* const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__guard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guard;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__guard(::System::Linq::Expressions::StackGuard*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guard = value;
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::setStaticF_s_emptyLocals(::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>, "s_emptyLocals", ::System::Linq::Expressions::Interpreter::LightCompiler*>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition> System::Linq::Expressions::Interpreter::LightCompiler::getStaticF_s_emptyLocals()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>, "s_emptyLocals", ::System::Linq::Expressions::Interpreter::LightCompiler*>();
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::_ctor(::System::Linq::Expressions::Interpreter::LightCompiler*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Linq::Expressions::Interpreter::LightCompiler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::System::Linq::Expressions::Interpreter::InstructionList* System::Linq::Expressions::Interpreter::LightCompiler::get_Instructions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"get_Instructions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::InstructionList*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LightDelegateCreator* System::Linq::Expressions::Interpreter::LightCompiler::CompileTop(::System::Linq::Expressions::LambdaExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTop", {}, {::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Interpreter::Interpreter* System::Linq::Expressions::Interpreter::LightCompiler::MakeInterpreter(::StringW  lambdaName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"MakeInterpreter", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Interpreter*>(this, ___internal_method, lambdaName);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileConstantExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileConstantExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileDefaultExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileDefaultExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileDefaultExpression(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileDefaultExpression", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariable* System::Linq::Expressions::Interpreter::LightCompiler::EnsureAvailableForClosure(::System::Linq::Expressions::ParameterExpression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EnsureAvailableForClosure", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LocalVariable*>(this, ___internal_method, expr);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariable* System::Linq::Expressions::Interpreter::LightCompiler::ResolveLocal(::System::Linq::Expressions::ParameterExpression*  variable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"ResolveLocal", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LocalVariable*>(this, ___internal_method, variable);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileGetVariable(::System::Linq::Expressions::ParameterExpression*  variable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileGetVariable", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, variable);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::EmitCopyValueType(::System::Type*  valueType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EmitCopyValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueType);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::LoadLocalNoValueTypeCopy(::System::Linq::Expressions::ParameterExpression*  variable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"LoadLocalNoValueTypeCopy", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, variable);
}
inline bool System::Linq::Expressions::Interpreter::LightCompiler::MaybeMutableValueType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"MaybeMutableValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileGetBoxedVariable(::System::Linq::Expressions::ParameterExpression*  variable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileGetBoxedVariable", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, variable);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileSetVariable(::System::Linq::Expressions::ParameterExpression*  variable, bool  isVoid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileSetVariable", {}, {::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, variable, isVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileParameterExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileParameterExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileBlockExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr, asVoid);
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition> System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockStart(::System::Linq::Expressions::BlockExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileBlockStart", {}, {::i2c::type_of<::System::Linq::Expressions::BlockExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockEnd(::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>  locals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileBlockEnd", {}, {::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locals);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileIndexExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileIndexExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::EmitIndexGet(::System::Linq::Expressions::IndexExpression*  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EmitIndexGet", {}, {::i2c::type_of<::System::Linq::Expressions::IndexExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileIndexAssignment(::System::Linq::Expressions::BinaryExpression*  node, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileIndexAssignment", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberAssignment(::System::Linq::Expressions::BinaryExpression*  node, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMemberAssignment", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberAssignment(bool  asVoid, ::System::Reflection::MemberInfo*  refMember, ::System::Linq::Expressions::Expression*  value, bool  forBinding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMemberAssignment", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asVoid, refMember, value, forBinding);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileVariableAssignment(::System::Linq::Expressions::BinaryExpression*  node, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileVariableAssignment", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileAssignBinaryExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileAssignBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileBinaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftedToNull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileEqual", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, left, right, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileNotEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftedToNull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileNotEqual", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, left, right, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileComparison(::System::Linq::Expressions::BinaryExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileComparison", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileArithmetic(::System::Linq::Expressions::ExpressionType  nodeType, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileArithmetic", {}, {::i2c::type_of<::System::Linq::Expressions::ExpressionType>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, left, right);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileConvertUnaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileConvertUnaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileConvertToType(::System::Type*  typeFrom, ::System::Type*  typeTo, bool  isChecked, bool  isLiftedToNull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileConvertToType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeFrom, typeTo, isChecked, isLiftedToNull);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileNotExpression(::System::Linq::Expressions::UnaryExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileNotExpression", {}, {::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileUnaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileUnaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::EmitUnaryMethodCall(::System::Linq::Expressions::UnaryExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EmitUnaryMethodCall", {}, {::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::EmitUnaryBoolCheck(::System::Linq::Expressions::UnaryExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EmitUnaryBoolCheck", {}, {::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileAndAlsoBinaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileAndAlsoBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileOrElseBinaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileOrElseBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  b, bool  andAlso)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileLogicalBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, andAlso);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  expr, bool  andAlso)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMethodLogicalBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr, andAlso);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileLiftedLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  node, bool  andAlso)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileLiftedLogicalBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, andAlso);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileUnliftedLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  expr, bool  andAlso)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileUnliftedLogicalBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::BinaryExpression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr, andAlso);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileConditionalExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileConditionalExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileLoopExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileLoopExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileSwitchExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileSwitchExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
template<typename T>
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileIntSwitchExpression(::System::Linq::Expressions::SwitchExpression*  node)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                    {"CompileIntSwitchExpression", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Linq::Expressions::SwitchExpression*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileStringSwitchExpression(::System::Linq::Expressions::SwitchExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileStringSwitchExpression", {}, {::i2c::type_of<::System::Linq::Expressions::SwitchExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileLabelExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileLabelExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileGotoExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileGotoExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::PushLabelBlock(::System::Linq::Expressions::Interpreter::LabelScopeKind  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"PushLabelBlock", {}, {::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeKind>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::PopLabelBlock(::System::Linq::Expressions::Interpreter::LabelScopeKind  kind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"PopLabelBlock", {}, {::i2c::type_of<::System::Linq::Expressions::Interpreter::LabelScopeKind>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kind);
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo* System::Linq::Expressions::Interpreter::LightCompiler::EnsureLabel(::System::Linq::Expressions::LabelTarget*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EnsureLabel", {}, {::i2c::type_of<::System::Linq::Expressions::LabelTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LabelInfo*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo* System::Linq::Expressions::Interpreter::LightCompiler::ReferenceLabel(::System::Linq::Expressions::LabelTarget*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"ReferenceLabel", {}, {::i2c::type_of<::System::Linq::Expressions::LabelTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LabelInfo*>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo* System::Linq::Expressions::Interpreter::LightCompiler::DefineLabel(::System::Linq::Expressions::LabelTarget*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"DefineLabel", {}, {::i2c::type_of<::System::Linq::Expressions::LabelTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LabelInfo*>(this, ___internal_method, node);
}
inline bool System::Linq::Expressions::Interpreter::LightCompiler::TryPushLabelBlock(::System::Linq::Expressions::Expression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"TryPushLabelBlock", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::DefineBlockLabels(::System::Linq::Expressions::Expression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"DefineBlockLabels", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CheckRethrow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CheckRethrow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileThrowUnaryExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileThrowUnaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileTryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileTryFaultExpression(::System::Linq::Expressions::TryExpression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTryFaultExpression", {}, {::i2c::type_of<::System::Linq::Expressions::TryExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodCallExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMethodCallExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodCallExpression(::System::Linq::Expressions::Expression*  object, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::IArgumentProvider*  arguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMethodCallExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::IArgumentProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method, arguments);
}
inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* System::Linq::Expressions::Interpreter::LightCompiler::CompileArrayIndexAddress(::System::Linq::Expressions::Expression*  array, ::System::Linq::Expressions::Expression*  index, int32_t  argumentIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileArrayIndexAddress", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(this, ___internal_method, array, index, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::EmitThisForMethodCall(::System::Linq::Expressions::Expression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"EmitThisForMethodCall", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool System::Linq::Expressions::Interpreter::LightCompiler::ShouldWritebackNode(::System::Linq::Expressions::Expression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"ShouldWritebackNode", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* System::Linq::Expressions::Interpreter::LightCompiler::CompileAddress(::System::Linq::Expressions::Expression*  node, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileAddress", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(this, ___internal_method, node, index);
}
inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* System::Linq::Expressions::Interpreter::LightCompiler::CompileMultiDimArrayAccess(::System::Linq::Expressions::Expression*  array, ::System::Linq::Expressions::IArgumentProvider*  arguments, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMultiDimArrayAccess", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::IArgumentProvider*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(this, ___internal_method, array, arguments, index);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileNewExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileNewExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMemberExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMember(::System::Linq::Expressions::Expression*  from, ::System::Reflection::MemberInfo*  member, bool  forBinding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMember", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, member, forBinding);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileNewArrayExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileNewArrayExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileDebugInfoExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileDebugInfoExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileRuntimeVariablesExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileRuntimeVariablesExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileLambdaExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileLambdaExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileCoalesceBinaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileCoalesceBinaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileInvocationExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileInvocationExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileListInitExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileListInitExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileListInit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*  initializers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileListInit", {}, {::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initializers);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberInitExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMemberInitExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberInit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*  bindings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileMemberInit", {}, {::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindings);
}
inline ::System::Type* System::Linq::Expressions::Interpreter::LightCompiler::GetMemberType(::System::Reflection::MemberInfo*  member)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"GetMemberType", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, member);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileQuoteUnaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileQuoteUnaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileUnboxUnaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileUnboxUnaryExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeEqualExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTypeEqualExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeAsExpression(::System::Linq::Expressions::UnaryExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTypeAsExpression", {}, {::i2c::type_of<::System::Linq::Expressions::UnaryExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeIsExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileTypeIsExpression", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::Compile(::System::Linq::Expressions::Expression*  expr, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"Compile", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileAsVoid(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileAsVoid", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileNoLabelPush(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"CompileNoLabelPush", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::Compile(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::Interpreter::LightCompiler*>(),
                        {"Compile", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expr);
}
inline ::System::Linq::Expressions::Interpreter::LightCompiler* System::Linq::Expressions::Interpreter::LightCompiler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LightCompiler*>());
}
inline ::System::Linq::Expressions::Interpreter::LightCompiler* System::Linq::Expressions::Interpreter::LightCompiler::New_ctor(::System::Linq::Expressions::Interpreter::LightCompiler*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LightCompiler*>(parent));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LightCompiler::LightCompiler()   {
}
