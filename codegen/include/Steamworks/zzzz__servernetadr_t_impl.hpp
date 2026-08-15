#pragma once
// IWYU pragma private; include "Steamworks/servernetadr_t.hpp"
#include "Steamworks/zzzz__servernetadr_t_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::servernetadr_t.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::servernetadr_t::*)(uint32_t, uint16_t, uint16_t)>(&::Steamworks::servernetadr_t::Init)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c2cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"Init", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.GetQueryPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Steamworks::servernetadr_t::*)()>(&::Steamworks::servernetadr_t::GetQueryPort)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"GetQueryPort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.SetQueryPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::servernetadr_t::*)(uint16_t)>(&::Steamworks::servernetadr_t::SetQueryPort)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"SetQueryPort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.GetConnectionPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Steamworks::servernetadr_t::*)()>(&::Steamworks::servernetadr_t::GetConnectionPort)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"GetConnectionPort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.SetConnectionPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::servernetadr_t::*)(uint16_t)>(&::Steamworks::servernetadr_t::SetConnectionPort)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"SetConnectionPort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.GetIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Steamworks::servernetadr_t::*)()>(&::Steamworks::servernetadr_t::GetIP)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"GetIP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.SetIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::servernetadr_t::*)(uint32_t)>(&::Steamworks::servernetadr_t::SetIP)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"SetIP", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.GetConnectionAddressString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::servernetadr_t::*)()>(&::Steamworks::servernetadr_t::GetConnectionAddressString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c2c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"GetConnectionAddressString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.GetQueryAddressString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::servernetadr_t::*)()>(&::Steamworks::servernetadr_t::GetQueryAddressString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c2c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"GetQueryAddressString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t, uint16_t)>(&::Steamworks::servernetadr_t::ToString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805c2ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"ToString", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::servernetadr_t, ::Steamworks::servernetadr_t)>(&::Steamworks::servernetadr_t::op_LessThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c2ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"op_LessThan", {}, {::i2c::type_of<::Steamworks::servernetadr_t>(), ::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::servernetadr_t, ::Steamworks::servernetadr_t)>(&::Steamworks::servernetadr_t::op_GreaterThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c2e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Steamworks::servernetadr_t>(), ::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::servernetadr_t::*)(::System::Object*)>(&::Steamworks::servernetadr_t::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c2b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::servernetadr_t>(),
                    {::i2c::class_of<::Steamworks::servernetadr_t>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::servernetadr_t::*)()>(&::Steamworks::servernetadr_t::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805c2c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::servernetadr_t>(),
                    {::i2c::class_of<::Steamworks::servernetadr_t>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::servernetadr_t, ::Steamworks::servernetadr_t)>(&::Steamworks::servernetadr_t::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c2e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::servernetadr_t>(), ::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::servernetadr_t, ::Steamworks::servernetadr_t)>(&::Steamworks::servernetadr_t::op_Inequality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c2ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::servernetadr_t>(), ::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::servernetadr_t::*)(::Steamworks::servernetadr_t)>(&::Steamworks::servernetadr_t::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c2b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::servernetadr_t.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::servernetadr_t::*)(::Steamworks::servernetadr_t)>(&::Steamworks::servernetadr_t::CompareTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c2ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::servernetadr_t::Init(uint32_t  ip, uint16_t  usQueryPort, uint16_t  usConnectionPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"Init", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ip, usQueryPort, usConnectionPort);
}
inline uint16_t Steamworks::servernetadr_t::GetQueryPort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"GetQueryPort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline void Steamworks::servernetadr_t::SetQueryPort(uint16_t  usPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"SetQueryPort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, usPort);
}
inline uint16_t Steamworks::servernetadr_t::GetConnectionPort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"GetConnectionPort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline void Steamworks::servernetadr_t::SetConnectionPort(uint16_t  usPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"SetConnectionPort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, usPort);
}
inline uint32_t Steamworks::servernetadr_t::GetIP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"GetIP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Steamworks::servernetadr_t::SetIP(uint32_t  unIP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"SetIP", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unIP);
}
inline ::StringW Steamworks::servernetadr_t::GetConnectionAddressString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"GetConnectionAddressString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Steamworks::servernetadr_t::GetQueryAddressString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"GetQueryAddressString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Steamworks::servernetadr_t::ToString(uint32_t  unIP, uint16_t  usPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"ToString", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, unIP, usPort);
}
inline bool Steamworks::servernetadr_t::op_LessThan(::Steamworks::servernetadr_t  x, ::Steamworks::servernetadr_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"op_LessThan", {}, {::i2c::type_of<::Steamworks::servernetadr_t>(), ::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::servernetadr_t::op_GreaterThan(::Steamworks::servernetadr_t  x, ::Steamworks::servernetadr_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Steamworks::servernetadr_t>(), ::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::servernetadr_t::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::servernetadr_t>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::servernetadr_t::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::servernetadr_t>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::servernetadr_t::op_Equality(::Steamworks::servernetadr_t  x, ::Steamworks::servernetadr_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::servernetadr_t>(), ::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::servernetadr_t::op_Inequality(::Steamworks::servernetadr_t  x, ::Steamworks::servernetadr_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::servernetadr_t>(), ::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::servernetadr_t::Equals(::Steamworks::servernetadr_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::servernetadr_t::CompareTo(::Steamworks::servernetadr_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::servernetadr_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::servernetadr_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_usConnectionPort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_usQueryPort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unIP", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::servernetadr_t::servernetadr_t(uint16_t  m_usConnectionPort, uint16_t  m_usQueryPort, uint32_t  m_unIP) noexcept  {
this->m_usConnectionPort = m_usConnectionPort;
this->m_usQueryPort = m_usQueryPort;
this->m_unIP = m_unIP;
}
// Ctor Parameters []
constexpr ::Steamworks::servernetadr_t::servernetadr_t()   {
}
