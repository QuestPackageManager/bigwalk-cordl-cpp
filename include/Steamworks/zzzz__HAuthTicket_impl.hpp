#pragma once
// IWYU pragma private; include "Steamworks/HAuthTicket.hpp"
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::HAuthTicket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::HAuthTicket::*)(uint32_t)>(&::Steamworks::HAuthTicket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HAuthTicket.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::HAuthTicket::*)()>(&::Steamworks::HAuthTicket::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HAuthTicket>(),
                    {::i2c::class_of<::Steamworks::HAuthTicket>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HAuthTicket.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HAuthTicket::*)(::System::Object*)>(&::Steamworks::HAuthTicket::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805a9e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HAuthTicket>(),
                    {::i2c::class_of<::Steamworks::HAuthTicket>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HAuthTicket.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HAuthTicket::*)()>(&::Steamworks::HAuthTicket::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HAuthTicket>(),
                    {::i2c::class_of<::Steamworks::HAuthTicket>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HAuthTicket.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HAuthTicket, ::Steamworks::HAuthTicket)>(&::Steamworks::HAuthTicket::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HAuthTicket>(), ::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HAuthTicket.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HAuthTicket, ::Steamworks::HAuthTicket)>(&::Steamworks::HAuthTicket::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HAuthTicket>(), ::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HAuthTicket.op_Explicit___Steamworks__HAuthTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HAuthTicket (*)(uint32_t)>(&::Steamworks::HAuthTicket::op_Explicit___Steamworks__HAuthTicket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HAuthTicket.op_Explicit_uint32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::HAuthTicket)>(&::Steamworks::HAuthTicket::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HAuthTicket.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HAuthTicket::*)(::Steamworks::HAuthTicket)>(&::Steamworks::HAuthTicket::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HAuthTicket.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HAuthTicket::*)(::Steamworks::HAuthTicket)>(&::Steamworks::HAuthTicket::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::HAuthTicket::setStaticF_Invalid(::Steamworks::HAuthTicket  value)  {
::cordl_internals::setStaticField<::Steamworks::HAuthTicket, "Invalid", ::Steamworks::HAuthTicket>(std::forward<::Steamworks::HAuthTicket>(value));
}
inline ::Steamworks::HAuthTicket Steamworks::HAuthTicket::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::HAuthTicket, "Invalid", ::Steamworks::HAuthTicket>();
}
inline void Steamworks::HAuthTicket::_ctor(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::HAuthTicket::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HAuthTicket>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::HAuthTicket::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HAuthTicket>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HAuthTicket::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HAuthTicket>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::HAuthTicket::op_Equality(::Steamworks::HAuthTicket  x, ::Steamworks::HAuthTicket  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HAuthTicket>(), ::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::HAuthTicket::op_Inequality(::Steamworks::HAuthTicket  x, ::Steamworks::HAuthTicket  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HAuthTicket>(), ::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::HAuthTicket Steamworks::HAuthTicket::op_Explicit___Steamworks__HAuthTicket(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HAuthTicket>(nullptr, ___internal_method, value);
}
inline uint32_t Steamworks::HAuthTicket::op_Explicit_uint32_t(::Steamworks::HAuthTicket  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::HAuthTicket::Equals(::Steamworks::HAuthTicket  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HAuthTicket::CompareTo(::Steamworks::HAuthTicket  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HAuthTicket>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HAuthTicket>"
constexpr  Steamworks::HAuthTicket::operator ::System::IEquatable_1<::Steamworks::HAuthTicket>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::HAuthTicket>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::HAuthTicket>"
constexpr ::System::IEquatable_1<::Steamworks::HAuthTicket>* Steamworks::HAuthTicket::i___System__IEquatable_1___Steamworks__HAuthTicket_()  {
return static_cast<::System::IEquatable_1<::Steamworks::HAuthTicket>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::HAuthTicket>"
constexpr  Steamworks::HAuthTicket::operator ::System::IComparable_1<::Steamworks::HAuthTicket>*()  {
return static_cast<::System::IComparable_1<::Steamworks::HAuthTicket>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::HAuthTicket>"
constexpr ::System::IComparable_1<::Steamworks::HAuthTicket>* Steamworks::HAuthTicket::i___System__IComparable_1___Steamworks__HAuthTicket_()  {
return static_cast<::System::IComparable_1<::Steamworks::HAuthTicket>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_HAuthTicket", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HAuthTicket::HAuthTicket(uint32_t  m_HAuthTicket) noexcept  {
this->m_HAuthTicket = m_HAuthTicket;
}
// Ctor Parameters []
constexpr ::Steamworks::HAuthTicket::HAuthTicket()   {
}
