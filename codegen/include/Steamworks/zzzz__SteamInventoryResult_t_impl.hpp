#pragma once
// IWYU pragma private; include "Steamworks/SteamInventoryResult_t.hpp"
#include "Steamworks/zzzz__SteamInventoryResult_t_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamInventoryResult_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamInventoryResult_t::*)(int32_t)>(&::Steamworks::SteamInventoryResult_t::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventoryResult_t.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamInventoryResult_t::*)()>(&::Steamworks::SteamInventoryResult_t::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                    {::i2c::class_of<::Steamworks::SteamInventoryResult_t>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventoryResult_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamInventoryResult_t::*)(::System::Object*)>(&::Steamworks::SteamInventoryResult_t::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b0080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                    {::i2c::class_of<::Steamworks::SteamInventoryResult_t>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventoryResult_t.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::SteamInventoryResult_t::*)()>(&::Steamworks::SteamInventoryResult_t::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                    {::i2c::class_of<::Steamworks::SteamInventoryResult_t>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventoryResult_t.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryResult_t, ::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamInventoryResult_t::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventoryResult_t.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamInventoryResult_t, ::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamInventoryResult_t::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventoryResult_t.op_Explicit___Steamworks__SteamInventoryResult_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamInventoryResult_t (*)(int32_t)>(&::Steamworks::SteamInventoryResult_t::op_Explicit___Steamworks__SteamInventoryResult_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventoryResult_t.op_Explicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamInventoryResult_t::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventoryResult_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamInventoryResult_t::*)(::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamInventoryResult_t::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInventoryResult_t.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::SteamInventoryResult_t::*)(::Steamworks::SteamInventoryResult_t)>(&::Steamworks::SteamInventoryResult_t::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::SteamInventoryResult_t::setStaticF_Invalid(::Steamworks::SteamInventoryResult_t  value)  {
::cordl_internals::setStaticField<::Steamworks::SteamInventoryResult_t, "Invalid", ::Steamworks::SteamInventoryResult_t>(std::forward<::Steamworks::SteamInventoryResult_t>(value));
}
inline ::Steamworks::SteamInventoryResult_t Steamworks::SteamInventoryResult_t::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::SteamInventoryResult_t, "Invalid", ::Steamworks::SteamInventoryResult_t>();
}
inline void Steamworks::SteamInventoryResult_t::_ctor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::SteamInventoryResult_t::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamInventoryResult_t>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::SteamInventoryResult_t::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamInventoryResult_t>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::SteamInventoryResult_t::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamInventoryResult_t>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::SteamInventoryResult_t::op_Equality(::Steamworks::SteamInventoryResult_t  x, ::Steamworks::SteamInventoryResult_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::SteamInventoryResult_t::op_Inequality(::Steamworks::SteamInventoryResult_t  x, ::Steamworks::SteamInventoryResult_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>(), ::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::SteamInventoryResult_t Steamworks::SteamInventoryResult_t::op_Explicit___Steamworks__SteamInventoryResult_t(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamInventoryResult_t>(nullptr, ___internal_method, value);
}
inline int32_t Steamworks::SteamInventoryResult_t::op_Explicit_int32_t(::Steamworks::SteamInventoryResult_t  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::SteamInventoryResult_t::Equals(::Steamworks::SteamInventoryResult_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::SteamInventoryResult_t::CompareTo(::Steamworks::SteamInventoryResult_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInventoryResult_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::SteamInventoryResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::SteamInventoryResult_t>"
constexpr  Steamworks::SteamInventoryResult_t::operator ::System::IEquatable_1<::Steamworks::SteamInventoryResult_t>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::SteamInventoryResult_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::SteamInventoryResult_t>"
constexpr ::System::IEquatable_1<::Steamworks::SteamInventoryResult_t>* Steamworks::SteamInventoryResult_t::i___System__IEquatable_1___Steamworks__SteamInventoryResult_t_()  {
return static_cast<::System::IEquatable_1<::Steamworks::SteamInventoryResult_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::SteamInventoryResult_t>"
constexpr  Steamworks::SteamInventoryResult_t::operator ::System::IComparable_1<::Steamworks::SteamInventoryResult_t>*()  {
return static_cast<::System::IComparable_1<::Steamworks::SteamInventoryResult_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::SteamInventoryResult_t>"
constexpr ::System::IComparable_1<::Steamworks::SteamInventoryResult_t>* Steamworks::SteamInventoryResult_t::i___System__IComparable_1___Steamworks__SteamInventoryResult_t_()  {
return static_cast<::System::IComparable_1<::Steamworks::SteamInventoryResult_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_SteamInventoryResult", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamInventoryResult_t::SteamInventoryResult_t(int32_t  m_SteamInventoryResult) noexcept  {
this->m_SteamInventoryResult = m_SteamInventoryResult;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInventoryResult_t::SteamInventoryResult_t()   {
}
