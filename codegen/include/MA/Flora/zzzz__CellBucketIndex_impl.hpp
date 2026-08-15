#pragma once
// IWYU pragma private; include "MA/Flora/CellBucketIndex.hpp"
#include "MA/Flora/zzzz__CellBucketIndex_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::CellBucketIndex.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CellBucketIndex (*)()>(&::MA::Flora::CellBucketIndex::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CellBucketIndex::*)(int32_t)>(&::MA::Flora::CellBucketIndex::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketIndex.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::CellBucketIndex)>(&::MA::Flora::CellBucketIndex::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CellBucketIndex::*)(::MA::Flora::CellBucketIndex)>(&::MA::Flora::CellBucketIndex::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CellBucketIndex::*)(::System::Object*)>(&::MA::Flora::CellBucketIndex::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18149c500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                    {::i2c::class_of<::MA::Flora::CellBucketIndex>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketIndex.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::CellBucketIndex::*)()>(&::MA::Flora::CellBucketIndex::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                    {::i2c::class_of<::MA::Flora::CellBucketIndex>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketIndex.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::CellBucketIndex::*)()>(&::MA::Flora::CellBucketIndex::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18149c570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                    {::i2c::class_of<::MA::Flora::CellBucketIndex>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketIndex.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CellBucketIndex)>(&::MA::Flora::CellBucketIndex::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketIndex.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::CellBucketIndex, ::MA::Flora::CellBucketIndex)>(&::MA::Flora::CellBucketIndex::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::CellBucketIndex MA::Flora::CellBucketIndex::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CellBucketIndex>(nullptr, ___internal_method);
}
inline void MA::Flora::CellBucketIndex::_ctor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline int32_t MA::Flora::CellBucketIndex::op_Implicit_int32_t(::MA::Flora::CellBucketIndex  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x);
}
inline bool MA::Flora::CellBucketIndex::Equals(::MA::Flora::CellBucketIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::CellBucketIndex::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::CellBucketIndex>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::CellBucketIndex::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::CellBucketIndex>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::CellBucketIndex::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::CellBucketIndex>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool MA::Flora::CellBucketIndex::op_Equality(::MA::Flora::CellBucketIndex  a, ::MA::Flora::CellBucketIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::CellBucketIndex::op_Inequality(::MA::Flora::CellBucketIndex  a, ::MA::Flora::CellBucketIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::CellBucketIndex>(), ::i2c::type_of<::MA::Flora::CellBucketIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::CellBucketIndex>"
constexpr  MA::Flora::CellBucketIndex::operator ::System::IEquatable_1<::MA::Flora::CellBucketIndex>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::CellBucketIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::CellBucketIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::CellBucketIndex>* MA::Flora::CellBucketIndex::i___System__IEquatable_1___MA__Flora__CellBucketIndex_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::CellBucketIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CellBucketIndex::CellBucketIndex(int32_t  Index) noexcept  {
this->Index = Index;
}
// Ctor Parameters []
constexpr ::MA::Flora::CellBucketIndex::CellBucketIndex()   {
}
