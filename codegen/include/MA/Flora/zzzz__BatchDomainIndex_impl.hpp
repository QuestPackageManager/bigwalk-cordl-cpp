#pragma once
// IWYU pragma private; include "MA/Flora/BatchDomainIndex.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::BatchDomainIndex.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BatchDomainIndex (*)()>(&::MA::Flora::BatchDomainIndex::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainIndex.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchDomainIndex::*)()>(&::MA::Flora::BatchDomainIndex::get_IsCreated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180785420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainIndex.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BatchDomainIndex::*)(::MA::Flora::BatchDomainIndex)>(&::MA::Flora::BatchDomainIndex::CompareTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181453a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchDomainIndex::*)(::MA::Flora::BatchDomainIndex)>(&::MA::Flora::BatchDomainIndex::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchDomainIndex::*)(::System::Object*)>(&::MA::Flora::BatchDomainIndex::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180673f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                    {::i2c::class_of<::MA::Flora::BatchDomainIndex>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainIndex.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BatchDomainIndex::*)()>(&::MA::Flora::BatchDomainIndex::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                    {::i2c::class_of<::MA::Flora::BatchDomainIndex>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainIndex.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::BatchDomainIndex::*)()>(&::MA::Flora::BatchDomainIndex::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181453aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                    {::i2c::class_of<::MA::Flora::BatchDomainIndex>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainIndex.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::BatchDomainIndex)>(&::MA::Flora::BatchDomainIndex::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainIndex.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::BatchDomainIndex, ::MA::Flora::BatchDomainIndex)>(&::MA::Flora::BatchDomainIndex::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainIndex.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::BatchDomainIndex, ::MA::Flora::BatchDomainIndex)>(&::MA::Flora::BatchDomainIndex::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::BatchDomainIndex MA::Flora::BatchDomainIndex::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BatchDomainIndex>(nullptr, ___internal_method);
}
inline bool MA::Flora::BatchDomainIndex::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t MA::Flora::BatchDomainIndex::CompareTo(::MA::Flora::BatchDomainIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool MA::Flora::BatchDomainIndex::Equals(::MA::Flora::BatchDomainIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::BatchDomainIndex::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::BatchDomainIndex>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::BatchDomainIndex::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::BatchDomainIndex>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::BatchDomainIndex::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::BatchDomainIndex>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t MA::Flora::BatchDomainIndex::op_Implicit_int32_t(::MA::Flora::BatchDomainIndex  domainIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, domainIndex);
}
inline bool MA::Flora::BatchDomainIndex::op_Equality(::MA::Flora::BatchDomainIndex  a, ::MA::Flora::BatchDomainIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::BatchDomainIndex::op_Inequality(::MA::Flora::BatchDomainIndex  a, ::MA::Flora::BatchDomainIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BatchDomainIndex>"
constexpr  MA::Flora::BatchDomainIndex::operator ::System::IEquatable_1<::MA::Flora::BatchDomainIndex>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::BatchDomainIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BatchDomainIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::BatchDomainIndex>* MA::Flora::BatchDomainIndex::i___System__IEquatable_1___MA__Flora__BatchDomainIndex_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::BatchDomainIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::BatchDomainIndex>"
constexpr  MA::Flora::BatchDomainIndex::operator ::System::IComparable_1<::MA::Flora::BatchDomainIndex>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::BatchDomainIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::BatchDomainIndex>"
constexpr ::System::IComparable_1<::MA::Flora::BatchDomainIndex>* MA::Flora::BatchDomainIndex::i___System__IComparable_1___MA__Flora__BatchDomainIndex_()  {
return static_cast<::System::IComparable_1<::MA::Flora::BatchDomainIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BatchDomainIndex::BatchDomainIndex(int32_t  Index) noexcept  {
this->Index = Index;
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchDomainIndex::BatchDomainIndex()   {
}
