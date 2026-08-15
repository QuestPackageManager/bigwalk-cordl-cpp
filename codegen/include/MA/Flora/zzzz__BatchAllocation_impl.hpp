#pragma once
// IWYU pragma private; include "MA/Flora/BatchAllocation.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_impl.hpp"
#include "MA/Flora/zzzz__BatchAllocation_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::BatchAllocation.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BatchAllocation (*)()>(&::MA::Flora::BatchAllocation::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181455dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAllocation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BatchAllocation::*)(::MA::Flora::BatchDomainIndex, int32_t, int32_t)>(&::MA::Flora::BatchAllocation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAllocation.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchAllocation::*)()>(&::MA::Flora::BatchAllocation::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181455db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAllocation.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchAllocation::*)(::MA::Flora::BatchAllocation)>(&::MA::Flora::BatchAllocation::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181455cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::BatchAllocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAllocation.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchAllocation::*)(::System::Object*)>(&::MA::Flora::BatchAllocation::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181455d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                    {::i2c::class_of<::MA::Flora::BatchAllocation>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAllocation.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BatchAllocation::*)()>(&::MA::Flora::BatchAllocation::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181455d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                    {::i2c::class_of<::MA::Flora::BatchAllocation>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAllocation.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::BatchAllocation, ::MA::Flora::BatchAllocation)>(&::MA::Flora::BatchAllocation::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181455de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::BatchAllocation>(), ::i2c::type_of<::MA::Flora::BatchAllocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAllocation.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::BatchAllocation, ::MA::Flora::BatchAllocation)>(&::MA::Flora::BatchAllocation::op_Inequality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181455e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::BatchAllocation>(), ::i2c::type_of<::MA::Flora::BatchAllocation>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::BatchAllocation MA::Flora::BatchAllocation::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BatchAllocation>(nullptr, ___internal_method);
}
inline void MA::Flora::BatchAllocation::_ctor(::MA::Flora::BatchDomainIndex  domain, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, domain, offset, count);
}
inline bool MA::Flora::BatchAllocation::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::BatchAllocation::Equals(::MA::Flora::BatchAllocation  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::BatchAllocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::BatchAllocation::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::BatchAllocation>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::BatchAllocation::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::BatchAllocation>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::BatchAllocation::op_Equality(::MA::Flora::BatchAllocation  a, ::MA::Flora::BatchAllocation  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::BatchAllocation>(), ::i2c::type_of<::MA::Flora::BatchAllocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::BatchAllocation::op_Inequality(::MA::Flora::BatchAllocation  a, ::MA::Flora::BatchAllocation  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAllocation>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::BatchAllocation>(), ::i2c::type_of<::MA::Flora::BatchAllocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BatchAllocation>"
constexpr  MA::Flora::BatchAllocation::operator ::System::IEquatable_1<::MA::Flora::BatchAllocation>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::BatchAllocation>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BatchAllocation>"
constexpr ::System::IEquatable_1<::MA::Flora::BatchAllocation>* MA::Flora::BatchAllocation::i___System__IEquatable_1___MA__Flora__BatchAllocation_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::BatchAllocation>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Domain", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BatchAllocation::BatchAllocation(::MA::Flora::BatchDomainIndex  Domain, int32_t  Offset, int32_t  Length) noexcept  {
this->Domain = Domain;
this->Offset = Offset;
this->Length = Length;
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchAllocation::BatchAllocation()   {
}
