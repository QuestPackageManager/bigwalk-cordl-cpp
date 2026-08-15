#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferDescriptor.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_impl.hpp"
#include "MA/Flora/zzzz__GraphicsBufferDescriptor_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::MA::Flora::GraphicsBufferDescriptor.get_SizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::MA::Flora::GraphicsBufferDescriptor::*)()>(&::MA::Flora::GraphicsBufferDescriptor::get_SizeInBytes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814fa5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                        {"get_SizeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferDescriptor::*)(::UnityEngine::GraphicsBuffer_Target, ::UnityEngine::GraphicsBuffer_UsageFlags, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x293b0;
  constexpr static std::size_t addrs = 0x180785660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferDescriptor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsBufferDescriptor::*)(::System::Object*)>(&::MA::Flora::GraphicsBufferDescriptor::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814fa350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                    {::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferDescriptor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsBufferDescriptor::*)(::MA::Flora::GraphicsBufferDescriptor)>(&::MA::Flora::GraphicsBufferDescriptor::Equals)> {
  constexpr static std::size_t size = 0xa170;
  constexpr static std::size_t addrs = 0x180646e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferDescriptor.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::GraphicsBufferDescriptor::*)()>(&::MA::Flora::GraphicsBufferDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814fa3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                    {::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferDescriptor.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::GraphicsBufferDescriptor::*)()>(&::MA::Flora::GraphicsBufferDescriptor::ToString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814fa4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                    {::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferDescriptor.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::GraphicsBufferDescriptor, ::MA::Flora::GraphicsBufferDescriptor)>(&::MA::Flora::GraphicsBufferDescriptor::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180645b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferDescriptor.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::GraphicsBufferDescriptor, ::MA::Flora::GraphicsBufferDescriptor)>(&::MA::Flora::GraphicsBufferDescriptor::op_Inequality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149c1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
inline int64_t MA::Flora::GraphicsBufferDescriptor::get_SizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                        {"get_SizeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsBufferDescriptor::_ctor(::UnityEngine::GraphicsBuffer_Target  target, ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags, int32_t  stride, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target, usageFlags, stride, length);
}
inline bool MA::Flora::GraphicsBufferDescriptor::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool MA::Flora::GraphicsBufferDescriptor::Equals(::MA::Flora::GraphicsBufferDescriptor  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::GraphicsBufferDescriptor::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::GraphicsBufferDescriptor::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool MA::Flora::GraphicsBufferDescriptor::op_Equality(::MA::Flora::GraphicsBufferDescriptor  lhs, ::MA::Flora::GraphicsBufferDescriptor  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool MA::Flora::GraphicsBufferDescriptor::op_Inequality(::MA::Flora::GraphicsBufferDescriptor  lhs, ::MA::Flora::GraphicsBufferDescriptor  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferDescriptor>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::GraphicsBufferDescriptor>"
constexpr  MA::Flora::GraphicsBufferDescriptor::operator ::System::IEquatable_1<::MA::Flora::GraphicsBufferDescriptor>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::GraphicsBufferDescriptor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::GraphicsBufferDescriptor>"
constexpr ::System::IEquatable_1<::MA::Flora::GraphicsBufferDescriptor>* MA::Flora::GraphicsBufferDescriptor::i___System__IEquatable_1___MA__Flora__GraphicsBufferDescriptor_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::GraphicsBufferDescriptor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Target", ty: "::UnityEngine::GraphicsBuffer_Target", modifiers: "", def_value: Some("{}") }, CppParam { name: "UsageFlags", ty: "::UnityEngine::GraphicsBuffer_UsageFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "Stride", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsBufferDescriptor::GraphicsBufferDescriptor(::UnityEngine::GraphicsBuffer_Target  Target, ::UnityEngine::GraphicsBuffer_UsageFlags  UsageFlags, int32_t  Stride, int32_t  Length) noexcept  {
this->Target = Target;
this->UsageFlags = UsageFlags;
this->Stride = Stride;
this->Length = Length;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferDescriptor::GraphicsBufferDescriptor()   {
}
