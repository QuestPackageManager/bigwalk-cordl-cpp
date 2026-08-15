#pragma once
// IWYU pragma private; include "MA/Flora/SourceRecordIndex.hpp"
#include "MA/Flora/zzzz__SourceRecordIndex_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SourceRecordIndex (*)()>(&::MA::Flora::SourceRecordIndex::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SourceRecordIndex::*)()>(&::MA::Flora::SourceRecordIndex::get_IsCreated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180785420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SourceRecordIndex::*)(int32_t)>(&::MA::Flora::SourceRecordIndex::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SourceRecordIndex::*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::SourceRecordIndex::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SourceRecordIndex::*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::SourceRecordIndex::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SourceRecordIndex::*)(::System::Object*)>(&::MA::Flora::SourceRecordIndex::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814a7cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                    {::i2c::class_of<::MA::Flora::SourceRecordIndex>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SourceRecordIndex::*)()>(&::MA::Flora::SourceRecordIndex::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                    {::i2c::class_of<::MA::Flora::SourceRecordIndex>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::SourceRecordIndex::*)()>(&::MA::Flora::SourceRecordIndex::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814a7d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                    {::i2c::class_of<::MA::Flora::SourceRecordIndex>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::SourceRecordIndex)>(&::MA::Flora::SourceRecordIndex::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.op_Implicit___MA__Flora__SourceRecordIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SourceRecordIndex (*)(int32_t)>(&::MA::Flora::SourceRecordIndex::op_Implicit___MA__Flora__SourceRecordIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::SourceRecordIndex, ::MA::Flora::SourceRecordIndex)>(&::MA::Flora::SourceRecordIndex::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SourceRecordIndex.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::SourceRecordIndex, ::MA::Flora::SourceRecordIndex)>(&::MA::Flora::SourceRecordIndex::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::SourceRecordIndex MA::Flora::SourceRecordIndex::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SourceRecordIndex>(nullptr, ___internal_method);
}
inline bool MA::Flora::SourceRecordIndex::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::SourceRecordIndex::_ctor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline int32_t MA::Flora::SourceRecordIndex::CompareTo(::MA::Flora::SourceRecordIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool MA::Flora::SourceRecordIndex::Equals(::MA::Flora::SourceRecordIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::SourceRecordIndex::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::SourceRecordIndex>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::SourceRecordIndex::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::SourceRecordIndex>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::SourceRecordIndex::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::SourceRecordIndex>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t MA::Flora::SourceRecordIndex::op_Implicit_int32_t(::MA::Flora::SourceRecordIndex  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index);
}
inline ::MA::Flora::SourceRecordIndex MA::Flora::SourceRecordIndex::op_Implicit___MA__Flora__SourceRecordIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SourceRecordIndex>(nullptr, ___internal_method, index);
}
inline bool MA::Flora::SourceRecordIndex::op_Equality(::MA::Flora::SourceRecordIndex  a, ::MA::Flora::SourceRecordIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::SourceRecordIndex::op_Inequality(::MA::Flora::SourceRecordIndex  a, ::MA::Flora::SourceRecordIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SourceRecordIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::SourceRecordIndex>(), ::i2c::type_of<::MA::Flora::SourceRecordIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::SourceRecordIndex>"
constexpr  MA::Flora::SourceRecordIndex::operator ::System::IEquatable_1<::MA::Flora::SourceRecordIndex>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::SourceRecordIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::SourceRecordIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::SourceRecordIndex>* MA::Flora::SourceRecordIndex::i___System__IEquatable_1___MA__Flora__SourceRecordIndex_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::SourceRecordIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::SourceRecordIndex>"
constexpr  MA::Flora::SourceRecordIndex::operator ::System::IComparable_1<::MA::Flora::SourceRecordIndex>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::SourceRecordIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::SourceRecordIndex>"
constexpr ::System::IComparable_1<::MA::Flora::SourceRecordIndex>* MA::Flora::SourceRecordIndex::i___System__IComparable_1___MA__Flora__SourceRecordIndex_()  {
return static_cast<::System::IComparable_1<::MA::Flora::SourceRecordIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::SourceRecordIndex::SourceRecordIndex(int32_t  Index) noexcept  {
this->Index = Index;
}
// Ctor Parameters []
constexpr ::MA::Flora::SourceRecordIndex::SourceRecordIndex()   {
}
