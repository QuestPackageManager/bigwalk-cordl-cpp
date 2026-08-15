#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsMatrix.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "MA/Flora/zzzz__GraphicsMatrix_def.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.get_Identity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsMatrix (*)()>(&::MA::Flora::GraphicsMatrix::get_Identity)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181500200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"get_Identity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.get_XAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::GraphicsMatrix::*)()>(&::MA::Flora::GraphicsMatrix::get_XAxis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"get_XAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.set_XAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsMatrix::*)(::Unity::Mathematics::float3)>(&::MA::Flora::GraphicsMatrix::set_XAxis)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f6180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"set_XAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.get_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::GraphicsMatrix::*)()>(&::MA::Flora::GraphicsMatrix::get_YAxis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180646620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"get_YAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.set_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsMatrix::*)(::Unity::Mathematics::float3)>(&::MA::Flora::GraphicsMatrix::set_YAxis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814f61b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"set_YAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.get_ZAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::GraphicsMatrix::*)()>(&::MA::Flora::GraphicsMatrix::get_ZAxis)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180646640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"get_ZAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.set_ZAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsMatrix::*)(::Unity::Mathematics::float3)>(&::MA::Flora::GraphicsMatrix::set_ZAxis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814f61d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"set_ZAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::GraphicsMatrix::*)()>(&::MA::Flora::GraphicsMatrix::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180646600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsMatrix::*)(::Unity::Mathematics::float3)>(&::MA::Flora::GraphicsMatrix::set_Position)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f6150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"set_Position", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsMatrix::*)(::Unity::Mathematics::float4x4)>(&::MA::Flora::GraphicsMatrix::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f60c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsMatrix::*)(::Unity::Mathematics::float3x3, ::Unity::Mathematics::float3)>(&::MA::Flora::GraphicsMatrix::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814f6020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsMatrix::*)(::MA::Flora::GraphicsMatrix)>(&::MA::Flora::GraphicsMatrix::Equals)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1806463f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::GraphicsMatrix>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsMatrix::*)(::by_ref<::MA::Flora::GraphicsMatrix>, float_t)>(&::MA::Flora::GraphicsMatrix::NearlyEquals)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814f59d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::by_ref<::MA::Flora::GraphicsMatrix>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsMatrix::*)(::System::Object*)>(&::MA::Flora::GraphicsMatrix::Equals)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1815000c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                    {::i2c::class_of<::MA::Flora::GraphicsMatrix>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::GraphicsMatrix::*)()>(&::MA::Flora::GraphicsMatrix::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f59c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                    {::i2c::class_of<::MA::Flora::GraphicsMatrix>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::GraphicsMatrix::*)()>(&::MA::Flora::GraphicsMatrix::ToString)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814f5ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                    {::i2c::class_of<::MA::Flora::GraphicsMatrix>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::GraphicsMatrix::*)(::StringW, ::System::IFormatProvider*)>(&::MA::Flora::GraphicsMatrix::ToString)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1814f5bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::GraphicsMatrix, ::MA::Flora::GraphicsMatrix)>(&::MA::Flora::GraphicsMatrix::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815002d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::GraphicsMatrix>(), ::i2c::type_of<::MA::Flora::GraphicsMatrix>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::GraphicsMatrix, ::MA::Flora::GraphicsMatrix)>(&::MA::Flora::GraphicsMatrix::op_Inequality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181500460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::GraphicsMatrix>(), ::i2c::type_of<::MA::Flora::GraphicsMatrix>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.op_Implicit___MA__Flora__GraphicsMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsMatrix (*)(::Unity::Mathematics::float4x4)>(&::MA::Flora::GraphicsMatrix::op_Implicit___MA__Flora__GraphicsMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181500300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.op_Implicit___Unity__Mathematics__float4x4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::MA::Flora::GraphicsMatrix)>(&::MA::Flora::GraphicsMatrix::op_Implicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181500390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::GraphicsMatrix>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.op_Implicit___MA__Flora__GraphicsMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsMatrix (*)(::MA::Flora::FloraLocalToWorld)>(&::MA::Flora::GraphicsMatrix::op_Implicit___MA__Flora__GraphicsMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181500300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsMatrix.op_Implicit___MA__Flora__FloraLocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (*)(::MA::Flora::GraphicsMatrix)>(&::MA::Flora::GraphicsMatrix::op_Implicit___MA__Flora__FloraLocalToWorld)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815003f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::GraphicsMatrix>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::GraphicsMatrix MA::Flora::GraphicsMatrix::get_Identity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"get_Identity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsMatrix>(nullptr, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::GraphicsMatrix::get_XAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"get_XAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsMatrix::set_XAxis(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"set_XAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 MA::Flora::GraphicsMatrix::get_YAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"get_YAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsMatrix::set_YAxis(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"set_YAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 MA::Flora::GraphicsMatrix::get_ZAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"get_ZAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsMatrix::set_ZAxis(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"set_ZAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 MA::Flora::GraphicsMatrix::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsMatrix::set_Position(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"set_Position", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void MA::Flora::GraphicsMatrix::_ctor(::Unity::Mathematics::float4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, matrix);
}
inline void MA::Flora::GraphicsMatrix::_ctor(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotation, position);
}
inline bool MA::Flora::GraphicsMatrix::Equals(::MA::Flora::GraphicsMatrix  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::GraphicsMatrix>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool MA::Flora::GraphicsMatrix::NearlyEquals(::by_ref<::MA::Flora::GraphicsMatrix>  rhs, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::by_ref<::MA::Flora::GraphicsMatrix>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs, epsilon);
}
inline bool MA::Flora::GraphicsMatrix::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::GraphicsMatrix>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::GraphicsMatrix::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::GraphicsMatrix>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::GraphicsMatrix::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::GraphicsMatrix>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW MA::Flora::GraphicsMatrix::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline bool MA::Flora::GraphicsMatrix::op_Equality(::MA::Flora::GraphicsMatrix  lhs, ::MA::Flora::GraphicsMatrix  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::GraphicsMatrix>(), ::i2c::type_of<::MA::Flora::GraphicsMatrix>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool MA::Flora::GraphicsMatrix::op_Inequality(::MA::Flora::GraphicsMatrix  lhs, ::MA::Flora::GraphicsMatrix  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::GraphicsMatrix>(), ::i2c::type_of<::MA::Flora::GraphicsMatrix>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::MA::Flora::GraphicsMatrix MA::Flora::GraphicsMatrix::op_Implicit___MA__Flora__GraphicsMatrix(::Unity::Mathematics::float4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsMatrix>(nullptr, ___internal_method, m);
}
inline ::Unity::Mathematics::float4x4 MA::Flora::GraphicsMatrix::op_Implicit___Unity__Mathematics__float4x4(::MA::Flora::GraphicsMatrix  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::GraphicsMatrix>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, m);
}
inline ::MA::Flora::GraphicsMatrix MA::Flora::GraphicsMatrix::op_Implicit___MA__Flora__GraphicsMatrix(::MA::Flora::FloraLocalToWorld  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsMatrix>(nullptr, ___internal_method, m);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::GraphicsMatrix::op_Implicit___MA__Flora__FloraLocalToWorld(::MA::Flora::GraphicsMatrix  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsMatrix>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::GraphicsMatrix>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(nullptr, ___internal_method, m);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::GraphicsMatrix>"
constexpr  MA::Flora::GraphicsMatrix::operator ::System::IEquatable_1<::MA::Flora::GraphicsMatrix>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::GraphicsMatrix>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::GraphicsMatrix>"
constexpr ::System::IEquatable_1<::MA::Flora::GraphicsMatrix>* MA::Flora::GraphicsMatrix::i___System__IEquatable_1___MA__Flora__GraphicsMatrix_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::GraphicsMatrix>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "packed0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "packed1", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "packed2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsMatrix::GraphicsMatrix(::Unity::Mathematics::float4  packed0, ::Unity::Mathematics::float4  packed1, ::Unity::Mathematics::float4  packed2) noexcept  {
this->packed0 = packed0;
this->packed1 = packed1;
this->packed2 = packed2;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsMatrix::GraphicsMatrix()   {
}
