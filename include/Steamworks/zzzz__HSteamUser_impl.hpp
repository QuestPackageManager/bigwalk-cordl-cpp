#pragma once
// IWYU pragma private; include "Steamworks/HSteamUser.hpp"
#include "Steamworks/zzzz__HSteamUser_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::HSteamUser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::HSteamUser::*)(int32_t)>(&::Steamworks::HSteamUser::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamUser.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::HSteamUser::*)()>(&::Steamworks::HSteamUser::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamUser>(),
                    {::i2c::class_of<::Steamworks::HSteamUser>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamUser.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HSteamUser::*)(::System::Object*)>(&::Steamworks::HSteamUser::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c2f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamUser>(),
                    {::i2c::class_of<::Steamworks::HSteamUser>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamUser.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HSteamUser::*)()>(&::Steamworks::HSteamUser::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamUser>(),
                    {::i2c::class_of<::Steamworks::HSteamUser>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamUser.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamUser)>(&::Steamworks::HSteamUser::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamUser.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamUser)>(&::Steamworks::HSteamUser::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamUser.op_Explicit___Steamworks__HSteamUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamUser (*)(int32_t)>(&::Steamworks::HSteamUser::op_Explicit___Steamworks__HSteamUser)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamUser.op_Explicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::HSteamUser)>(&::Steamworks::HSteamUser::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamUser.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HSteamUser::*)(::Steamworks::HSteamUser)>(&::Steamworks::HSteamUser::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamUser.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HSteamUser::*)(::Steamworks::HSteamUser)>(&::Steamworks::HSteamUser::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::HSteamUser::_ctor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::HSteamUser::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamUser>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::HSteamUser::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamUser>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HSteamUser::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamUser>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::HSteamUser::op_Equality(::Steamworks::HSteamUser  x, ::Steamworks::HSteamUser  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::HSteamUser::op_Inequality(::Steamworks::HSteamUser  x, ::Steamworks::HSteamUser  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::HSteamUser Steamworks::HSteamUser::op_Explicit___Steamworks__HSteamUser(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamUser>(nullptr, ___internal_method, value);
}
inline int32_t Steamworks::HSteamUser::op_Explicit_int32_t(::Steamworks::HSteamUser  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::HSteamUser::Equals(::Steamworks::HSteamUser  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HSteamUser::CompareTo(::Steamworks::HSteamUser  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamUser>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HSteamUser>"
constexpr  Steamworks::HSteamUser::operator ::System::IEquatable_1<::Steamworks::HSteamUser>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::HSteamUser>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::HSteamUser>"
constexpr ::System::IEquatable_1<::Steamworks::HSteamUser>* Steamworks::HSteamUser::i___System__IEquatable_1___Steamworks__HSteamUser_()  {
return static_cast<::System::IEquatable_1<::Steamworks::HSteamUser>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::HSteamUser>"
constexpr  Steamworks::HSteamUser::operator ::System::IComparable_1<::Steamworks::HSteamUser>*()  {
return static_cast<::System::IComparable_1<::Steamworks::HSteamUser>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::HSteamUser>"
constexpr ::System::IComparable_1<::Steamworks::HSteamUser>* Steamworks::HSteamUser::i___System__IComparable_1___Steamworks__HSteamUser_()  {
return static_cast<::System::IComparable_1<::Steamworks::HSteamUser>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_HSteamUser", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HSteamUser::HSteamUser(int32_t  m_HSteamUser) noexcept  {
this->m_HSteamUser = m_HSteamUser;
}
// Ctor Parameters []
constexpr ::Steamworks::HSteamUser::HSteamUser()   {
}
