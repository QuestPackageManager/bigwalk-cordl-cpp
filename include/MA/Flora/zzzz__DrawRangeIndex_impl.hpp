#pragma once
// IWYU pragma private; include "MA/Flora/DrawRangeIndex.hpp"
#include "MA/Flora/zzzz__DrawRangeIndex_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DrawRangeIndex (*)()>(&::MA::Flora::DrawRangeIndex::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawRangeIndex::*)(int32_t)>(&::MA::Flora::DrawRangeIndex::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DrawRangeIndex::*)(::MA::Flora::DrawRangeIndex)>(&::MA::Flora::DrawRangeIndex::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::DrawRangeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawRangeIndex::*)(::MA::Flora::DrawRangeIndex)>(&::MA::Flora::DrawRangeIndex::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DrawRangeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawRangeIndex::*)(::System::Object*)>(&::MA::Flora::DrawRangeIndex::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814bcb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                    {::i2c::class_of<::MA::Flora::DrawRangeIndex>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DrawRangeIndex::*)()>(&::MA::Flora::DrawRangeIndex::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                    {::i2c::class_of<::MA::Flora::DrawRangeIndex>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::DrawRangeIndex::*)()>(&::MA::Flora::DrawRangeIndex::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814bcb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                    {::i2c::class_of<::MA::Flora::DrawRangeIndex>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::DrawRangeIndex)>(&::MA::Flora::DrawRangeIndex::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::DrawRangeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex.op_Implicit___MA__Flora__DrawRangeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DrawRangeIndex (*)(int32_t)>(&::MA::Flora::DrawRangeIndex::op_Implicit___MA__Flora__DrawRangeIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::DrawRangeIndex, ::MA::Flora::DrawRangeIndex)>(&::MA::Flora::DrawRangeIndex::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::DrawRangeIndex>(), ::i2c::type_of<::MA::Flora::DrawRangeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeIndex.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::DrawRangeIndex, ::MA::Flora::DrawRangeIndex)>(&::MA::Flora::DrawRangeIndex::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::DrawRangeIndex>(), ::i2c::type_of<::MA::Flora::DrawRangeIndex>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::DrawRangeIndex MA::Flora::DrawRangeIndex::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DrawRangeIndex>(nullptr, ___internal_method);
}
inline void MA::Flora::DrawRangeIndex::_ctor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t MA::Flora::DrawRangeIndex::CompareTo(::MA::Flora::DrawRangeIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::DrawRangeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool MA::Flora::DrawRangeIndex::Equals(::MA::Flora::DrawRangeIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DrawRangeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::DrawRangeIndex::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DrawRangeIndex>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::DrawRangeIndex::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DrawRangeIndex>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::DrawRangeIndex::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DrawRangeIndex>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t MA::Flora::DrawRangeIndex::op_Implicit_int32_t(::MA::Flora::DrawRangeIndex  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::DrawRangeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index);
}
inline ::MA::Flora::DrawRangeIndex MA::Flora::DrawRangeIndex::op_Implicit___MA__Flora__DrawRangeIndex(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DrawRangeIndex>(nullptr, ___internal_method, id);
}
inline bool MA::Flora::DrawRangeIndex::op_Equality(::MA::Flora::DrawRangeIndex  left, ::MA::Flora::DrawRangeIndex  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::DrawRangeIndex>(), ::i2c::type_of<::MA::Flora::DrawRangeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool MA::Flora::DrawRangeIndex::op_Inequality(::MA::Flora::DrawRangeIndex  left, ::MA::Flora::DrawRangeIndex  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::DrawRangeIndex>(), ::i2c::type_of<::MA::Flora::DrawRangeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DrawRangeIndex>"
constexpr  MA::Flora::DrawRangeIndex::operator ::System::IEquatable_1<::MA::Flora::DrawRangeIndex>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DrawRangeIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DrawRangeIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::DrawRangeIndex>* MA::Flora::DrawRangeIndex::i___System__IEquatable_1___MA__Flora__DrawRangeIndex_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DrawRangeIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawRangeIndex::DrawRangeIndex(int32_t  m_Value) noexcept  {
this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawRangeIndex::DrawRangeIndex()   {
}
