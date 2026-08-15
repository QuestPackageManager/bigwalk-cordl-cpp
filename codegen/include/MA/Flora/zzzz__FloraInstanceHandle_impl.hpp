#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceHandle.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraInstanceHandle.get_Null
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceHandle (*)()>(&::MA::Flora::FloraInstanceHandle::get_Null)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"get_Null", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceHandle.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraInstanceHandle::*)()>(&::MA::Flora::FloraInstanceHandle::Exists)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18147c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"Exists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceHandle.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraInstanceHandle::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18147cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceHandle.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraInstanceHandle::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18147cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceHandle.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraInstanceHandle::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraInstanceHandle::CompareTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181453a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceHandle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraInstanceHandle::*)(::System::Object*)>(&::MA::Flora::FloraInstanceHandle::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18147c910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceHandle>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceHandle.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraInstanceHandle::*)()>(&::MA::Flora::FloraInstanceHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceHandle>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceHandle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraInstanceHandle::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraInstanceHandle::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18147c8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceHandle.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::FloraInstanceHandle::*)()>(&::MA::Flora::FloraInstanceHandle::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18147cb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceHandle>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceHandle.ToFixedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FixedString64Bytes (::MA::Flora::FloraInstanceHandle::*)()>(&::MA::Flora::FloraInstanceHandle::ToFixedString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18147ca20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"ToFixedString", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::FloraInstanceHandle MA::Flora::FloraInstanceHandle::get_Null()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"get_Null", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceHandle>(nullptr, ___internal_method);
}
inline bool MA::Flora::FloraInstanceHandle::Exists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"Exists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::FloraInstanceHandle::op_Equality(::MA::Flora::FloraInstanceHandle  lhs, ::MA::Flora::FloraInstanceHandle  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool MA::Flora::FloraInstanceHandle::op_Inequality(::MA::Flora::FloraInstanceHandle  lhs, ::MA::Flora::FloraInstanceHandle  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t MA::Flora::FloraInstanceHandle::CompareTo(::MA::Flora::FloraInstanceHandle  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool MA::Flora::FloraInstanceHandle::Equals(::System::Object*  compare)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceHandle>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, compare);
}
inline int32_t MA::Flora::FloraInstanceHandle::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceHandle>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::FloraInstanceHandle::Equals(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline ::StringW MA::Flora::FloraInstanceHandle::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceHandle>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Unity::Collections::FixedString64Bytes MA::Flora::FloraInstanceHandle::ToFixedString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceHandle>(),
                        {"ToFixedString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString64Bytes>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::FloraInstanceHandle>"
constexpr  MA::Flora::FloraInstanceHandle::operator ::System::IEquatable_1<::MA::Flora::FloraInstanceHandle>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::FloraInstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::FloraInstanceHandle>"
constexpr ::System::IEquatable_1<::MA::Flora::FloraInstanceHandle>* MA::Flora::FloraInstanceHandle::i___System__IEquatable_1___MA__Flora__FloraInstanceHandle_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::FloraInstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::FloraInstanceHandle>"
constexpr  MA::Flora::FloraInstanceHandle::operator ::System::IComparable_1<::MA::Flora::FloraInstanceHandle>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::FloraInstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::FloraInstanceHandle>"
constexpr ::System::IComparable_1<::MA::Flora::FloraInstanceHandle>* MA::Flora::FloraInstanceHandle::i___System__IComparable_1___MA__Flora__FloraInstanceHandle_()  {
return static_cast<::System::IComparable_1<::MA::Flora::FloraInstanceHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraInstanceHandle::FloraInstanceHandle(int32_t  Index, int32_t  Version) noexcept  {
this->Index = Index;
this->Version = Version;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceHandle::FloraInstanceHandle()   {
}
