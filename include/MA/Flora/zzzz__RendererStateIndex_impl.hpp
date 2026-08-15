#pragma once
// IWYU pragma private; include "MA/Flora/RendererStateIndex.hpp"
#include "MA/Flora/zzzz__RendererStateIndex_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::RendererStateIndex (*)()>(&::MA::Flora::RendererStateIndex::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::RendererStateIndex::*)()>(&::MA::Flora::RendererStateIndex::get_IsCreated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180785420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::RendererStateIndex::*)(int32_t)>(&::MA::Flora::RendererStateIndex::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::RendererStateIndex::*)(::MA::Flora::RendererStateIndex)>(&::MA::Flora::RendererStateIndex::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::RendererStateIndex::*)(::MA::Flora::RendererStateIndex)>(&::MA::Flora::RendererStateIndex::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::RendererStateIndex::*)(::System::Object*)>(&::MA::Flora::RendererStateIndex::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814a7a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                    {::i2c::class_of<::MA::Flora::RendererStateIndex>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::RendererStateIndex::*)()>(&::MA::Flora::RendererStateIndex::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                    {::i2c::class_of<::MA::Flora::RendererStateIndex>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::RendererStateIndex::*)()>(&::MA::Flora::RendererStateIndex::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814a7a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                    {::i2c::class_of<::MA::Flora::RendererStateIndex>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::RendererStateIndex)>(&::MA::Flora::RendererStateIndex::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.op_Implicit___MA__Flora__RendererStateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::RendererStateIndex (*)(int32_t)>(&::MA::Flora::RendererStateIndex::op_Implicit___MA__Flora__RendererStateIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::RendererStateIndex, ::MA::Flora::RendererStateIndex)>(&::MA::Flora::RendererStateIndex::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>(), ::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererStateIndex.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::RendererStateIndex, ::MA::Flora::RendererStateIndex)>(&::MA::Flora::RendererStateIndex::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>(), ::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::RendererStateIndex MA::Flora::RendererStateIndex::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::RendererStateIndex>(nullptr, ___internal_method);
}
inline bool MA::Flora::RendererStateIndex::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::RendererStateIndex::_ctor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline int32_t MA::Flora::RendererStateIndex::CompareTo(::MA::Flora::RendererStateIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool MA::Flora::RendererStateIndex::Equals(::MA::Flora::RendererStateIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::RendererStateIndex::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::RendererStateIndex>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::RendererStateIndex::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::RendererStateIndex>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::RendererStateIndex::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::RendererStateIndex>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t MA::Flora::RendererStateIndex::op_Implicit_int32_t(::MA::Flora::RendererStateIndex  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index);
}
inline ::MA::Flora::RendererStateIndex MA::Flora::RendererStateIndex::op_Implicit___MA__Flora__RendererStateIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::RendererStateIndex>(nullptr, ___internal_method, index);
}
inline bool MA::Flora::RendererStateIndex::op_Equality(::MA::Flora::RendererStateIndex  a, ::MA::Flora::RendererStateIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>(), ::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::RendererStateIndex::op_Inequality(::MA::Flora::RendererStateIndex  a, ::MA::Flora::RendererStateIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererStateIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::RendererStateIndex>(), ::i2c::type_of<::MA::Flora::RendererStateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::RendererStateIndex>"
constexpr  MA::Flora::RendererStateIndex::operator ::System::IEquatable_1<::MA::Flora::RendererStateIndex>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::RendererStateIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::RendererStateIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::RendererStateIndex>* MA::Flora::RendererStateIndex::i___System__IEquatable_1___MA__Flora__RendererStateIndex_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::RendererStateIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::RendererStateIndex>"
constexpr  MA::Flora::RendererStateIndex::operator ::System::IComparable_1<::MA::Flora::RendererStateIndex>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::RendererStateIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::RendererStateIndex>"
constexpr ::System::IComparable_1<::MA::Flora::RendererStateIndex>* MA::Flora::RendererStateIndex::i___System__IComparable_1___MA__Flora__RendererStateIndex_()  {
return static_cast<::System::IComparable_1<::MA::Flora::RendererStateIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::RendererStateIndex::RendererStateIndex(int32_t  Index) noexcept  {
this->Index = Index;
}
// Ctor Parameters []
constexpr ::MA::Flora::RendererStateIndex::RendererStateIndex()   {
}
