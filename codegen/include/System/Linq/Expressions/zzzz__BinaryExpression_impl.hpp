#pragma once
// IWYU pragma private; include "System/Linq/Expressions/BinaryExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__BinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::BinaryExpression::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::BinaryExpression::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181628370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.get_CanReduce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::get_CanReduce)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181addb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                    {::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.IsOpAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Linq::Expressions::ExpressionType)>(&::System::Linq::Expressions::BinaryExpression::IsOpAssignment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181adc590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"IsOpAssignment", {}, {::i2c::type_of<::System::Linq::Expressions::ExpressionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.get_Right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::get_Right)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_Right", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.get_Left
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::get_Left)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_Left", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.get_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::get_Method)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181163b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_Method", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.GetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::GetMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                    {::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::BinaryExpression* (::System::Linq::Expressions::BinaryExpression::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::BinaryExpression::Update)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x181add6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"Update", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.Reduce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::Reduce)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181add630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                    {::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.GetBinaryOpFromAssignmentOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (*)(::System::Linq::Expressions::ExpressionType)>(&::System::Linq::Expressions::BinaryExpression::GetBinaryOpFromAssignmentOp)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181adc490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"GetBinaryOpFromAssignmentOp", {}, {::i2c::type_of<::System::Linq::Expressions::ExpressionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.ReduceVariable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::ReduceVariable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181add560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"ReduceVariable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.ReduceMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::ReduceMember)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x181adc9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"ReduceMember", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.ReduceIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::ReduceIndex)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x181adc5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"ReduceIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.get_Conversion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::LambdaExpression* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::get_Conversion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180303b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_Conversion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.GetConversion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::LambdaExpression* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::GetConversion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                    {::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.get_IsLifted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::get_IsLifted)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181addd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_IsLifted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.get_IsLiftedToNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::get_IsLiftedToNull)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181addc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_IsLiftedToNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.Accept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::BinaryExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&::System::Linq::Expressions::BinaryExpression::Accept)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181adc470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                    {::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.get_IsLiftedLogical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::get_IsLiftedLogical)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181addb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_IsLiftedLogical", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.get_IsReferenceComparison
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::get_IsReferenceComparison)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181adde90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_IsReferenceComparison", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BinaryExpression.ReduceUserdefinedLifted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::BinaryExpression::*)()>(&::System::Linq::Expressions::BinaryExpression::ReduceUserdefinedLifted)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x181adcce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"ReduceUserdefinedLifted", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::BinaryExpression::__cordl_internal_get__Right_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Right_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::BinaryExpression::__cordl_internal_get__Right_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Right_k__BackingField;
}
constexpr void System::Linq::Expressions::BinaryExpression::__cordl_internal_set__Right_k__BackingField(::System::Linq::Expressions::Expression*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Right_k__BackingField = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::BinaryExpression::__cordl_internal_get__Left_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Left_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::BinaryExpression::__cordl_internal_get__Left_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Left_k__BackingField;
}
constexpr void System::Linq::Expressions::BinaryExpression::__cordl_internal_set__Left_k__BackingField(::System::Linq::Expressions::Expression*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Left_k__BackingField = value;
}
inline void System::Linq::Expressions::BinaryExpression::_ctor(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, left, right);
}
inline bool System::Linq::Expressions::BinaryExpression::get_CanReduce()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Linq::Expressions::BinaryExpression::IsOpAssignment(::System::Linq::Expressions::ExpressionType  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"IsOpAssignment", {}, {::i2c::type_of<::System::Linq::Expressions::ExpressionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, op);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::BinaryExpression::get_Right()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_Right", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::BinaryExpression::get_Left()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_Left", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Linq::Expressions::BinaryExpression::get_Method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_Method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Linq::Expressions::BinaryExpression::GetMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::BinaryExpression* System::Linq::Expressions::BinaryExpression::Update(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::LambdaExpression*  conversion, ::System::Linq::Expressions::Expression*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"Update", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::BinaryExpression*>(this, ___internal_method, left, conversion, right);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::BinaryExpression::Reduce()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::BinaryExpression::GetBinaryOpFromAssignmentOp(::System::Linq::Expressions::ExpressionType  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"GetBinaryOpFromAssignmentOp", {}, {::i2c::type_of<::System::Linq::Expressions::ExpressionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(nullptr, ___internal_method, op);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::BinaryExpression::ReduceVariable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"ReduceVariable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::BinaryExpression::ReduceMember()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"ReduceMember", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::BinaryExpression::ReduceIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"ReduceIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::LambdaExpression* System::Linq::Expressions::BinaryExpression::get_Conversion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_Conversion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LambdaExpression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::LambdaExpression* System::Linq::Expressions::BinaryExpression::GetConversion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LambdaExpression*>(this, ___internal_method);
}
inline bool System::Linq::Expressions::BinaryExpression::get_IsLifted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_IsLifted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Linq::Expressions::BinaryExpression::get_IsLiftedToNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_IsLiftedToNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::BinaryExpression::Accept(::System::Linq::Expressions::ExpressionVisitor*  visitor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, visitor);
}
inline bool System::Linq::Expressions::BinaryExpression::get_IsLiftedLogical()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_IsLiftedLogical", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Linq::Expressions::BinaryExpression::get_IsReferenceComparison()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"get_IsReferenceComparison", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::BinaryExpression::ReduceUserdefinedLifted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Linq::Expressions::BinaryExpression*>(),
                        {"ReduceUserdefinedLifted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::BinaryExpression* System::Linq::Expressions::BinaryExpression::New_ctor(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::BinaryExpression*>(left, right));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::BinaryExpression::BinaryExpression()   {
}
