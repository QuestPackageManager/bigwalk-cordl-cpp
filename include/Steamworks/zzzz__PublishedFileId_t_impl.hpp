#pragma once
// IWYU pragma private; include "Steamworks/PublishedFileId_t.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::PublishedFileId_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::PublishedFileId_t::*)(uint64_t)>(&::Steamworks::PublishedFileId_t::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::PublishedFileId_t.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::PublishedFileId_t::*)()>(&::Steamworks::PublishedFileId_t::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                    {::i2c::class_of<::Steamworks::PublishedFileId_t>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::PublishedFileId_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::PublishedFileId_t::*)(::System::Object*)>(&::Steamworks::PublishedFileId_t::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805aa9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                    {::i2c::class_of<::Steamworks::PublishedFileId_t>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::PublishedFileId_t.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::PublishedFileId_t::*)()>(&::Steamworks::PublishedFileId_t::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                    {::i2c::class_of<::Steamworks::PublishedFileId_t>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::PublishedFileId_t.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::PublishedFileId_t::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::PublishedFileId_t.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PublishedFileId_t, ::Steamworks::PublishedFileId_t)>(&::Steamworks::PublishedFileId_t::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::PublishedFileId_t.op_Explicit___Steamworks__PublishedFileId_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::PublishedFileId_t (*)(uint64_t)>(&::Steamworks::PublishedFileId_t::op_Explicit___Steamworks__PublishedFileId_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::PublishedFileId_t.op_Explicit_uint64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::PublishedFileId_t::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::PublishedFileId_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::PublishedFileId_t::*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::PublishedFileId_t::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::PublishedFileId_t.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::PublishedFileId_t::*)(::Steamworks::PublishedFileId_t)>(&::Steamworks::PublishedFileId_t::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::PublishedFileId_t::setStaticF_Invalid(::Steamworks::PublishedFileId_t  value)  {
::cordl_internals::setStaticField<::Steamworks::PublishedFileId_t, "Invalid", ::Steamworks::PublishedFileId_t>(std::forward<::Steamworks::PublishedFileId_t>(value));
}
inline ::Steamworks::PublishedFileId_t Steamworks::PublishedFileId_t::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::PublishedFileId_t, "Invalid", ::Steamworks::PublishedFileId_t>();
}
inline void Steamworks::PublishedFileId_t::_ctor(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::PublishedFileId_t::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::PublishedFileId_t>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::PublishedFileId_t::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::PublishedFileId_t>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::PublishedFileId_t::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::PublishedFileId_t>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::PublishedFileId_t::op_Equality(::Steamworks::PublishedFileId_t  x, ::Steamworks::PublishedFileId_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::PublishedFileId_t::op_Inequality(::Steamworks::PublishedFileId_t  x, ::Steamworks::PublishedFileId_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::PublishedFileId_t Steamworks::PublishedFileId_t::op_Explicit___Steamworks__PublishedFileId_t(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::PublishedFileId_t>(nullptr, ___internal_method, value);
}
inline uint64_t Steamworks::PublishedFileId_t::op_Explicit_uint64_t(::Steamworks::PublishedFileId_t  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::PublishedFileId_t::Equals(::Steamworks::PublishedFileId_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::PublishedFileId_t::CompareTo(::Steamworks::PublishedFileId_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::PublishedFileId_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::PublishedFileId_t>"
constexpr  Steamworks::PublishedFileId_t::operator ::System::IEquatable_1<::Steamworks::PublishedFileId_t>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::PublishedFileId_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::PublishedFileId_t>"
constexpr ::System::IEquatable_1<::Steamworks::PublishedFileId_t>* Steamworks::PublishedFileId_t::i___System__IEquatable_1___Steamworks__PublishedFileId_t_()  {
return static_cast<::System::IEquatable_1<::Steamworks::PublishedFileId_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::PublishedFileId_t>"
constexpr  Steamworks::PublishedFileId_t::operator ::System::IComparable_1<::Steamworks::PublishedFileId_t>*()  {
return static_cast<::System::IComparable_1<::Steamworks::PublishedFileId_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::PublishedFileId_t>"
constexpr ::System::IComparable_1<::Steamworks::PublishedFileId_t>* Steamworks::PublishedFileId_t::i___System__IComparable_1___Steamworks__PublishedFileId_t_()  {
return static_cast<::System::IComparable_1<::Steamworks::PublishedFileId_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_PublishedFileId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::PublishedFileId_t::PublishedFileId_t(uint64_t  m_PublishedFileId) noexcept  {
this->m_PublishedFileId = m_PublishedFileId;
}
// Ctor Parameters []
constexpr ::Steamworks::PublishedFileId_t::PublishedFileId_t()   {
}
