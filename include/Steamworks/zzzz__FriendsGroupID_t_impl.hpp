#pragma once
// IWYU pragma private; include "Steamworks/FriendsGroupID_t.hpp"
#include "Steamworks/zzzz__FriendsGroupID_t_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::FriendsGroupID_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::FriendsGroupID_t::*)(int16_t)>(&::Steamworks::FriendsGroupID_t::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {".ctor", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FriendsGroupID_t.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::FriendsGroupID_t::*)()>(&::Steamworks::FriendsGroupID_t::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a9da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                    {::i2c::class_of<::Steamworks::FriendsGroupID_t>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FriendsGroupID_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::FriendsGroupID_t::*)(::System::Object*)>(&::Steamworks::FriendsGroupID_t::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805a9d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                    {::i2c::class_of<::Steamworks::FriendsGroupID_t>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FriendsGroupID_t.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::FriendsGroupID_t::*)()>(&::Steamworks::FriendsGroupID_t::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                    {::i2c::class_of<::Steamworks::FriendsGroupID_t>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FriendsGroupID_t.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::FriendsGroupID_t, ::Steamworks::FriendsGroupID_t)>(&::Steamworks::FriendsGroupID_t::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a9df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>(), ::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FriendsGroupID_t.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::FriendsGroupID_t, ::Steamworks::FriendsGroupID_t)>(&::Steamworks::FriendsGroupID_t::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a9e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>(), ::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FriendsGroupID_t.op_Explicit___Steamworks__FriendsGroupID_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::FriendsGroupID_t (*)(int16_t)>(&::Steamworks::FriendsGroupID_t::op_Explicit___Steamworks__FriendsGroupID_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a9e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FriendsGroupID_t.op_Explicit_int16_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::Steamworks::FriendsGroupID_t)>(&::Steamworks::FriendsGroupID_t::op_Explicit_int16_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a9e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FriendsGroupID_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::FriendsGroupID_t::*)(::Steamworks::FriendsGroupID_t)>(&::Steamworks::FriendsGroupID_t::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a9cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FriendsGroupID_t.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::FriendsGroupID_t::*)(::Steamworks::FriendsGroupID_t)>(&::Steamworks::FriendsGroupID_t::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a9cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::FriendsGroupID_t::setStaticF_Invalid(::Steamworks::FriendsGroupID_t  value)  {
::cordl_internals::setStaticField<::Steamworks::FriendsGroupID_t, "Invalid", ::Steamworks::FriendsGroupID_t>(std::forward<::Steamworks::FriendsGroupID_t>(value));
}
inline ::Steamworks::FriendsGroupID_t Steamworks::FriendsGroupID_t::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::FriendsGroupID_t, "Invalid", ::Steamworks::FriendsGroupID_t>();
}
inline void Steamworks::FriendsGroupID_t::_ctor(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {".ctor", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::FriendsGroupID_t::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::FriendsGroupID_t>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::FriendsGroupID_t::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::FriendsGroupID_t>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::FriendsGroupID_t::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::FriendsGroupID_t>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::FriendsGroupID_t::op_Equality(::Steamworks::FriendsGroupID_t  x, ::Steamworks::FriendsGroupID_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>(), ::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::FriendsGroupID_t::op_Inequality(::Steamworks::FriendsGroupID_t  x, ::Steamworks::FriendsGroupID_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>(), ::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::FriendsGroupID_t Steamworks::FriendsGroupID_t::op_Explicit___Steamworks__FriendsGroupID_t(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::FriendsGroupID_t>(nullptr, ___internal_method, value);
}
inline int16_t Steamworks::FriendsGroupID_t::op_Explicit_int16_t(::Steamworks::FriendsGroupID_t  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::FriendsGroupID_t::Equals(::Steamworks::FriendsGroupID_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::FriendsGroupID_t::CompareTo(::Steamworks::FriendsGroupID_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FriendsGroupID_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::FriendsGroupID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::FriendsGroupID_t>"
constexpr  Steamworks::FriendsGroupID_t::operator ::System::IEquatable_1<::Steamworks::FriendsGroupID_t>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::FriendsGroupID_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::FriendsGroupID_t>"
constexpr ::System::IEquatable_1<::Steamworks::FriendsGroupID_t>* Steamworks::FriendsGroupID_t::i___System__IEquatable_1___Steamworks__FriendsGroupID_t_()  {
return static_cast<::System::IEquatable_1<::Steamworks::FriendsGroupID_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::FriendsGroupID_t>"
constexpr  Steamworks::FriendsGroupID_t::operator ::System::IComparable_1<::Steamworks::FriendsGroupID_t>*()  {
return static_cast<::System::IComparable_1<::Steamworks::FriendsGroupID_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::FriendsGroupID_t>"
constexpr ::System::IComparable_1<::Steamworks::FriendsGroupID_t>* Steamworks::FriendsGroupID_t::i___System__IComparable_1___Steamworks__FriendsGroupID_t_()  {
return static_cast<::System::IComparable_1<::Steamworks::FriendsGroupID_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_FriendsGroupID", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::FriendsGroupID_t::FriendsGroupID_t(int16_t  m_FriendsGroupID) noexcept  {
this->m_FriendsGroupID = m_FriendsGroupID;
}
// Ctor Parameters []
constexpr ::Steamworks::FriendsGroupID_t::FriendsGroupID_t()   {
}
