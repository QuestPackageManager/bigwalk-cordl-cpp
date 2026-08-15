#pragma once
// IWYU pragma private; include "Steamworks/SNetListenSocket_t.hpp"
#include "Steamworks/zzzz__SNetListenSocket_t_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::SNetListenSocket_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SNetListenSocket_t::*)(uint32_t)>(&::Steamworks::SNetListenSocket_t::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SNetListenSocket_t.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SNetListenSocket_t::*)()>(&::Steamworks::SNetListenSocket_t::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                    {::i2c::class_of<::Steamworks::SNetListenSocket_t>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SNetListenSocket_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SNetListenSocket_t::*)(::System::Object*)>(&::Steamworks::SNetListenSocket_t::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805aabd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                    {::i2c::class_of<::Steamworks::SNetListenSocket_t>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SNetListenSocket_t.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::SNetListenSocket_t::*)()>(&::Steamworks::SNetListenSocket_t::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                    {::i2c::class_of<::Steamworks::SNetListenSocket_t>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SNetListenSocket_t.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetListenSocket_t, ::Steamworks::SNetListenSocket_t)>(&::Steamworks::SNetListenSocket_t::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::Steamworks::SNetListenSocket_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SNetListenSocket_t.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetListenSocket_t, ::Steamworks::SNetListenSocket_t)>(&::Steamworks::SNetListenSocket_t::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::Steamworks::SNetListenSocket_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SNetListenSocket_t.op_Explicit___Steamworks__SNetListenSocket_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SNetListenSocket_t (*)(uint32_t)>(&::Steamworks::SNetListenSocket_t::op_Explicit___Steamworks__SNetListenSocket_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SNetListenSocket_t.op_Explicit_uint32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::SNetListenSocket_t)>(&::Steamworks::SNetListenSocket_t::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SNetListenSocket_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SNetListenSocket_t::*)(::Steamworks::SNetListenSocket_t)>(&::Steamworks::SNetListenSocket_t::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SNetListenSocket_t.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::SNetListenSocket_t::*)(::Steamworks::SNetListenSocket_t)>(&::Steamworks::SNetListenSocket_t::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::SNetListenSocket_t::_ctor(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::SNetListenSocket_t::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SNetListenSocket_t>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::SNetListenSocket_t::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SNetListenSocket_t>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::SNetListenSocket_t::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SNetListenSocket_t>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::SNetListenSocket_t::op_Equality(::Steamworks::SNetListenSocket_t  x, ::Steamworks::SNetListenSocket_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::Steamworks::SNetListenSocket_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::SNetListenSocket_t::op_Inequality(::Steamworks::SNetListenSocket_t  x, ::Steamworks::SNetListenSocket_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::Steamworks::SNetListenSocket_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::SNetListenSocket_t Steamworks::SNetListenSocket_t::op_Explicit___Steamworks__SNetListenSocket_t(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SNetListenSocket_t>(nullptr, ___internal_method, value);
}
inline uint32_t Steamworks::SNetListenSocket_t::op_Explicit_uint32_t(::Steamworks::SNetListenSocket_t  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::SNetListenSocket_t::Equals(::Steamworks::SNetListenSocket_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::SNetListenSocket_t::CompareTo(::Steamworks::SNetListenSocket_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SNetListenSocket_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::SNetListenSocket_t>"
constexpr  Steamworks::SNetListenSocket_t::operator ::System::IEquatable_1<::Steamworks::SNetListenSocket_t>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::SNetListenSocket_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::SNetListenSocket_t>"
constexpr ::System::IEquatable_1<::Steamworks::SNetListenSocket_t>* Steamworks::SNetListenSocket_t::i___System__IEquatable_1___Steamworks__SNetListenSocket_t_()  {
return static_cast<::System::IEquatable_1<::Steamworks::SNetListenSocket_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::SNetListenSocket_t>"
constexpr  Steamworks::SNetListenSocket_t::operator ::System::IComparable_1<::Steamworks::SNetListenSocket_t>*()  {
return static_cast<::System::IComparable_1<::Steamworks::SNetListenSocket_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::SNetListenSocket_t>"
constexpr ::System::IComparable_1<::Steamworks::SNetListenSocket_t>* Steamworks::SNetListenSocket_t::i___System__IComparable_1___Steamworks__SNetListenSocket_t_()  {
return static_cast<::System::IComparable_1<::Steamworks::SNetListenSocket_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_SNetListenSocket", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SNetListenSocket_t::SNetListenSocket_t(uint32_t  m_SNetListenSocket) noexcept  {
this->m_SNetListenSocket = m_SNetListenSocket;
}
// Ctor Parameters []
constexpr ::Steamworks::SNetListenSocket_t::SNetListenSocket_t()   {
}
