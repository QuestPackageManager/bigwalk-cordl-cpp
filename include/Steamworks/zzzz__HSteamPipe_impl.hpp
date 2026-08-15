#pragma once
// IWYU pragma private; include "Steamworks/HSteamPipe.hpp"
#include "Steamworks/zzzz__HSteamPipe_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::HSteamPipe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::HSteamPipe::*)(int32_t)>(&::Steamworks::HSteamPipe::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamPipe.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::HSteamPipe::*)()>(&::Steamworks::HSteamPipe::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamPipe>(),
                    {::i2c::class_of<::Steamworks::HSteamPipe>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamPipe.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HSteamPipe::*)(::System::Object*)>(&::Steamworks::HSteamPipe::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c2f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamPipe>(),
                    {::i2c::class_of<::Steamworks::HSteamPipe>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamPipe.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HSteamPipe::*)()>(&::Steamworks::HSteamPipe::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HSteamPipe>(),
                    {::i2c::class_of<::Steamworks::HSteamPipe>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamPipe.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamPipe, ::Steamworks::HSteamPipe)>(&::Steamworks::HSteamPipe::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamPipe.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamPipe, ::Steamworks::HSteamPipe)>(&::Steamworks::HSteamPipe::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamPipe.op_Explicit___Steamworks__HSteamPipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamPipe (*)(int32_t)>(&::Steamworks::HSteamPipe::op_Explicit___Steamworks__HSteamPipe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamPipe.op_Explicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::HSteamPipe)>(&::Steamworks::HSteamPipe::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamPipe.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HSteamPipe::*)(::Steamworks::HSteamPipe)>(&::Steamworks::HSteamPipe::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HSteamPipe.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HSteamPipe::*)(::Steamworks::HSteamPipe)>(&::Steamworks::HSteamPipe::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::HSteamPipe::_ctor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::HSteamPipe::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamPipe>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::HSteamPipe::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamPipe>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HSteamPipe::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HSteamPipe>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::HSteamPipe::op_Equality(::Steamworks::HSteamPipe  x, ::Steamworks::HSteamPipe  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::HSteamPipe::op_Inequality(::Steamworks::HSteamPipe  x, ::Steamworks::HSteamPipe  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::HSteamPipe Steamworks::HSteamPipe::op_Explicit___Steamworks__HSteamPipe(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"op_Explicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamPipe>(nullptr, ___internal_method, value);
}
inline int32_t Steamworks::HSteamPipe::op_Explicit_int32_t(::Steamworks::HSteamPipe  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::HSteamPipe::Equals(::Steamworks::HSteamPipe  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HSteamPipe::CompareTo(::Steamworks::HSteamPipe  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HSteamPipe>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HSteamPipe>"
constexpr  Steamworks::HSteamPipe::operator ::System::IEquatable_1<::Steamworks::HSteamPipe>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::HSteamPipe>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::HSteamPipe>"
constexpr ::System::IEquatable_1<::Steamworks::HSteamPipe>* Steamworks::HSteamPipe::i___System__IEquatable_1___Steamworks__HSteamPipe_()  {
return static_cast<::System::IEquatable_1<::Steamworks::HSteamPipe>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::HSteamPipe>"
constexpr  Steamworks::HSteamPipe::operator ::System::IComparable_1<::Steamworks::HSteamPipe>*()  {
return static_cast<::System::IComparable_1<::Steamworks::HSteamPipe>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::HSteamPipe>"
constexpr ::System::IComparable_1<::Steamworks::HSteamPipe>* Steamworks::HSteamPipe::i___System__IComparable_1___Steamworks__HSteamPipe_()  {
return static_cast<::System::IComparable_1<::Steamworks::HSteamPipe>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_HSteamPipe", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HSteamPipe::HSteamPipe(int32_t  m_HSteamPipe) noexcept  {
this->m_HSteamPipe = m_HSteamPipe;
}
// Ctor Parameters []
constexpr ::Steamworks::HSteamPipe::HSteamPipe()   {
}
