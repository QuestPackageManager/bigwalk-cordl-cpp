#pragma once
// IWYU pragma private; include "Steamworks/UGCQueryHandle_t.hpp"
#include "Steamworks/zzzz__UGCQueryHandle_t_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::UGCQueryHandle_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::UGCQueryHandle_t::*)(uint64_t)>(&::Steamworks::UGCQueryHandle_t::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UGCQueryHandle_t.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::UGCQueryHandle_t::*)()>(&::Steamworks::UGCQueryHandle_t::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                    {::i2c::class_of<::Steamworks::UGCQueryHandle_t>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UGCQueryHandle_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::UGCQueryHandle_t::*)(::System::Object*)>(&::Steamworks::UGCQueryHandle_t::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                    {::i2c::class_of<::Steamworks::UGCQueryHandle_t>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UGCQueryHandle_t.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::UGCQueryHandle_t::*)()>(&::Steamworks::UGCQueryHandle_t::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                    {::i2c::class_of<::Steamworks::UGCQueryHandle_t>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UGCQueryHandle_t.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::Steamworks::UGCQueryHandle_t)>(&::Steamworks::UGCQueryHandle_t::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UGCQueryHandle_t.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::UGCQueryHandle_t, ::Steamworks::UGCQueryHandle_t)>(&::Steamworks::UGCQueryHandle_t::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UGCQueryHandle_t.op_Explicit___Steamworks__UGCQueryHandle_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::UGCQueryHandle_t (*)(uint64_t)>(&::Steamworks::UGCQueryHandle_t::op_Explicit___Steamworks__UGCQueryHandle_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UGCQueryHandle_t.op_Explicit_uint64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::Steamworks::UGCQueryHandle_t)>(&::Steamworks::UGCQueryHandle_t::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UGCQueryHandle_t.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::UGCQueryHandle_t::*)(::Steamworks::UGCQueryHandle_t)>(&::Steamworks::UGCQueryHandle_t::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UGCQueryHandle_t.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::UGCQueryHandle_t::*)(::Steamworks::UGCQueryHandle_t)>(&::Steamworks::UGCQueryHandle_t::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::UGCQueryHandle_t::setStaticF_Invalid(::Steamworks::UGCQueryHandle_t  value)  {
::cordl_internals::setStaticField<::Steamworks::UGCQueryHandle_t, "Invalid", ::Steamworks::UGCQueryHandle_t>(std::forward<::Steamworks::UGCQueryHandle_t>(value));
}
inline ::Steamworks::UGCQueryHandle_t Steamworks::UGCQueryHandle_t::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::UGCQueryHandle_t, "Invalid", ::Steamworks::UGCQueryHandle_t>();
}
inline void Steamworks::UGCQueryHandle_t::_ctor(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::UGCQueryHandle_t::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::UGCQueryHandle_t>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::UGCQueryHandle_t::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::UGCQueryHandle_t>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::UGCQueryHandle_t::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::UGCQueryHandle_t>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::UGCQueryHandle_t::op_Equality(::Steamworks::UGCQueryHandle_t  x, ::Steamworks::UGCQueryHandle_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::UGCQueryHandle_t::op_Inequality(::Steamworks::UGCQueryHandle_t  x, ::Steamworks::UGCQueryHandle_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>(), ::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::UGCQueryHandle_t Steamworks::UGCQueryHandle_t::op_Explicit___Steamworks__UGCQueryHandle_t(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::UGCQueryHandle_t>(nullptr, ___internal_method, value);
}
inline uint64_t Steamworks::UGCQueryHandle_t::op_Explicit_uint64_t(::Steamworks::UGCQueryHandle_t  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::UGCQueryHandle_t::Equals(::Steamworks::UGCQueryHandle_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::UGCQueryHandle_t::CompareTo(::Steamworks::UGCQueryHandle_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UGCQueryHandle_t>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::UGCQueryHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::UGCQueryHandle_t>"
constexpr  Steamworks::UGCQueryHandle_t::operator ::System::IEquatable_1<::Steamworks::UGCQueryHandle_t>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::UGCQueryHandle_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::UGCQueryHandle_t>"
constexpr ::System::IEquatable_1<::Steamworks::UGCQueryHandle_t>* Steamworks::UGCQueryHandle_t::i___System__IEquatable_1___Steamworks__UGCQueryHandle_t_()  {
return static_cast<::System::IEquatable_1<::Steamworks::UGCQueryHandle_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::UGCQueryHandle_t>"
constexpr  Steamworks::UGCQueryHandle_t::operator ::System::IComparable_1<::Steamworks::UGCQueryHandle_t>*()  {
return static_cast<::System::IComparable_1<::Steamworks::UGCQueryHandle_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::UGCQueryHandle_t>"
constexpr ::System::IComparable_1<::Steamworks::UGCQueryHandle_t>* Steamworks::UGCQueryHandle_t::i___System__IComparable_1___Steamworks__UGCQueryHandle_t_()  {
return static_cast<::System::IComparable_1<::Steamworks::UGCQueryHandle_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_UGCQueryHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::UGCQueryHandle_t::UGCQueryHandle_t(uint64_t  m_UGCQueryHandle) noexcept  {
this->m_UGCQueryHandle = m_UGCQueryHandle;
}
// Ctor Parameters []
constexpr ::Steamworks::UGCQueryHandle_t::UGCQueryHandle_t()   {
}
