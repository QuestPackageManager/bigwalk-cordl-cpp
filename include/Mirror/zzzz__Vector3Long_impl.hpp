#pragma once
// IWYU pragma private; include "Mirror/Vector3Long.hpp"
#include "Mirror/zzzz__Vector3Long_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mirror::Vector3Long._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Vector3Long::*)(int64_t, int64_t, int64_t)>(&::Mirror::Vector3Long::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815992b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Vector3Long (*)(::Mirror::Vector3Long, ::Mirror::Vector3Long)>(&::Mirror::Vector3Long::op_Addition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815992e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Addition", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Vector3Long (*)(::Mirror::Vector3Long, ::Mirror::Vector3Long)>(&::Mirror::Vector3Long::op_Subtraction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815993e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.op_UnaryNegation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Vector3Long (*)(::Mirror::Vector3Long)>(&::Mirror::Vector3Long::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181599410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_UnaryNegation", {}, {::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Vector3Long (*)(::Mirror::Vector3Long, int64_t)>(&::Mirror::Vector3Long::op_Multiply)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815993b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Vector3Long (*)(int64_t, ::Mirror::Vector3Long)>(&::Mirror::Vector3Long::op_Multiply)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181599380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Multiply", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::Vector3Long, ::Mirror::Vector3Long)>(&::Mirror::Vector3Long::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158f960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Equality", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::Vector3Long, ::Mirror::Vector3Long)>(&::Mirror::Vector3Long::op_Inequality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181599310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Mirror::Vector3Long::*)(int32_t)>(&::Mirror::Vector3Long::get_Item)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18158fa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Vector3Long::*)(int32_t, int64_t)>(&::Mirror::Vector3Long::set_Item)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18158fac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::Vector3Long::*)()>(&::Mirror::Vector3Long::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18158f9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Vector3Long>(),
                    {::i2c::class_of<::Mirror::Vector3Long>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Vector3Long::*)(::Mirror::Vector3Long)>(&::Mirror::Vector3Long::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158f960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"Equals", {}, {::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::Vector3Long::*)(::System::Object*)>(&::Mirror::Vector3Long::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18158f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Vector3Long>(),
                    {::i2c::class_of<::Mirror::Vector3Long>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Vector3Long.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::Vector3Long::*)()>(&::Mirror::Vector3Long::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158f990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Vector3Long>(),
                    {::i2c::class_of<::Mirror::Vector3Long>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Mirror::Vector3Long::setStaticF_zero(::Mirror::Vector3Long  value)  {
::cordl_internals::setStaticField<::Mirror::Vector3Long, "zero", ::Mirror::Vector3Long>(std::forward<::Mirror::Vector3Long>(value));
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::Mirror::Vector3Long, "zero", ::Mirror::Vector3Long>();
}
inline void Mirror::Vector3Long::setStaticF_one(::Mirror::Vector3Long  value)  {
::cordl_internals::setStaticField<::Mirror::Vector3Long, "one", ::Mirror::Vector3Long>(std::forward<::Mirror::Vector3Long>(value));
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::getStaticF_one()  {
return ::cordl_internals::getStaticField<::Mirror::Vector3Long, "one", ::Mirror::Vector3Long>();
}
inline void Mirror::Vector3Long::setStaticF_forward(::Mirror::Vector3Long  value)  {
::cordl_internals::setStaticField<::Mirror::Vector3Long, "forward", ::Mirror::Vector3Long>(std::forward<::Mirror::Vector3Long>(value));
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::getStaticF_forward()  {
return ::cordl_internals::getStaticField<::Mirror::Vector3Long, "forward", ::Mirror::Vector3Long>();
}
inline void Mirror::Vector3Long::setStaticF_back(::Mirror::Vector3Long  value)  {
::cordl_internals::setStaticField<::Mirror::Vector3Long, "back", ::Mirror::Vector3Long>(std::forward<::Mirror::Vector3Long>(value));
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::getStaticF_back()  {
return ::cordl_internals::getStaticField<::Mirror::Vector3Long, "back", ::Mirror::Vector3Long>();
}
inline void Mirror::Vector3Long::setStaticF_left(::Mirror::Vector3Long  value)  {
::cordl_internals::setStaticField<::Mirror::Vector3Long, "left", ::Mirror::Vector3Long>(std::forward<::Mirror::Vector3Long>(value));
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::getStaticF_left()  {
return ::cordl_internals::getStaticField<::Mirror::Vector3Long, "left", ::Mirror::Vector3Long>();
}
inline void Mirror::Vector3Long::setStaticF_right(::Mirror::Vector3Long  value)  {
::cordl_internals::setStaticField<::Mirror::Vector3Long, "right", ::Mirror::Vector3Long>(std::forward<::Mirror::Vector3Long>(value));
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::getStaticF_right()  {
return ::cordl_internals::getStaticField<::Mirror::Vector3Long, "right", ::Mirror::Vector3Long>();
}
inline void Mirror::Vector3Long::setStaticF_up(::Mirror::Vector3Long  value)  {
::cordl_internals::setStaticField<::Mirror::Vector3Long, "up", ::Mirror::Vector3Long>(std::forward<::Mirror::Vector3Long>(value));
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::getStaticF_up()  {
return ::cordl_internals::getStaticField<::Mirror::Vector3Long, "up", ::Mirror::Vector3Long>();
}
inline void Mirror::Vector3Long::setStaticF_down(::Mirror::Vector3Long  value)  {
::cordl_internals::setStaticField<::Mirror::Vector3Long, "down", ::Mirror::Vector3Long>(std::forward<::Mirror::Vector3Long>(value));
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::getStaticF_down()  {
return ::cordl_internals::getStaticField<::Mirror::Vector3Long, "down", ::Mirror::Vector3Long>();
}
inline void Mirror::Vector3Long::_ctor(int64_t  x, int64_t  y, int64_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z);
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::op_Addition(::Mirror::Vector3Long  a, ::Mirror::Vector3Long  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Addition", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Vector3Long>(nullptr, ___internal_method, a, b);
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::op_Subtraction(::Mirror::Vector3Long  a, ::Mirror::Vector3Long  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Vector3Long>(nullptr, ___internal_method, a, b);
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::op_UnaryNegation(::Mirror::Vector3Long  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_UnaryNegation", {}, {::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Vector3Long>(nullptr, ___internal_method, v);
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::op_Multiply(::Mirror::Vector3Long  a, int64_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Vector3Long>(nullptr, ___internal_method, a, n);
}
inline ::Mirror::Vector3Long Mirror::Vector3Long::op_Multiply(int64_t  n, ::Mirror::Vector3Long  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Multiply", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Vector3Long>(nullptr, ___internal_method, n, a);
}
inline bool Mirror::Vector3Long::op_Equality(::Mirror::Vector3Long  a, ::Mirror::Vector3Long  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Equality", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Mirror::Vector3Long::op_Inequality(::Mirror::Vector3Long  a, ::Mirror::Vector3Long  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int64_t Mirror::Vector3Long::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, index);
}
inline void Mirror::Vector3Long::set_Item(int32_t  index, int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline ::StringW Mirror::Vector3Long::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Vector3Long>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Mirror::Vector3Long::Equals(::Mirror::Vector3Long  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Vector3Long>(),
                        {"Equals", {}, {::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Mirror::Vector3Long::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Vector3Long>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Mirror::Vector3Long::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Vector3Long>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Vector3Long::Vector3Long(int64_t  x, int64_t  y, int64_t  z) noexcept  {
this->x = x;
this->y = y;
this->z = z;
}
// Ctor Parameters []
constexpr ::Mirror::Vector3Long::Vector3Long()   {
}
