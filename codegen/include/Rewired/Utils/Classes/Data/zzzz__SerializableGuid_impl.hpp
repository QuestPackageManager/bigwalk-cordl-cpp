#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/SerializableGuid.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializableGuid_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializableGuid::*)(::System::Guid)>(&::Rewired::Utils::Classes::Data::SerializableGuid::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181957dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Rewired::Utils::Classes::Data::SerializableGuid::*)()>(&::Rewired::Utils::Classes::Data::SerializableGuid::GetBytes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181957b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"GetBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid.ToGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Utils::Classes::Data::SerializableGuid::*)()>(&::Rewired::Utils::Classes::Data::SerializableGuid::ToGuid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181957c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"ToGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializableGuid::*)(::System::Object*)>(&::Rewired::Utils::Classes::Data::SerializableGuid::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181957ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::SerializableGuid::*)()>(&::Rewired::Utils::Classes::Data::SerializableGuid::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181957bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializableGuid::*)(::Rewired::Utils::Classes::Data::SerializableGuid)>(&::Rewired::Utils::Classes::Data::SerializableGuid::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804a5a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializableGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::Classes::Data::SerializableGuid, ::Rewired::Utils::Classes::Data::SerializableGuid)>(&::Rewired::Utils::Classes::Data::SerializableGuid::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804a5a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializableGuid>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializableGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::Classes::Data::SerializableGuid, ::Rewired::Utils::Classes::Data::SerializableGuid)>(&::Rewired::Utils::Classes::Data::SerializableGuid::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181957e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializableGuid>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializableGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializableGuid::*)()>(&::Rewired::Utils::Classes::Data::SerializableGuid::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181957d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializableGuid::*)(::StringW)>(&::Rewired::Utils::Classes::Data::SerializableGuid::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181957d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializableGuid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializableGuid::*)(::StringW, ::System::IFormatProvider*)>(&::Rewired::Utils::Classes::Data::SerializableGuid::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181957ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::SerializableGuid::setStaticF_Empty(::Rewired::Utils::Classes::Data::SerializableGuid  value)  {
::cordl_internals::setStaticField<::Rewired::Utils::Classes::Data::SerializableGuid, "Empty", ::Rewired::Utils::Classes::Data::SerializableGuid>(std::forward<::Rewired::Utils::Classes::Data::SerializableGuid>(value));
}
inline ::Rewired::Utils::Classes::Data::SerializableGuid Rewired::Utils::Classes::Data::SerializableGuid::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::Rewired::Utils::Classes::Data::SerializableGuid, "Empty", ::Rewired::Utils::Classes::Data::SerializableGuid>();
}
inline void Rewired::Utils::Classes::Data::SerializableGuid::_ctor(::System::Guid  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::ArrayW<uint8_t> Rewired::Utils::Classes::Data::SerializableGuid::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"GetBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline ::System::Guid Rewired::Utils::Classes::Data::SerializableGuid::ToGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"ToGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::SerializableGuid::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Rewired::Utils::Classes::Data::SerializableGuid::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::SerializableGuid::Equals(::Rewired::Utils::Classes::Data::SerializableGuid  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializableGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Rewired::Utils::Classes::Data::SerializableGuid::op_Equality(::Rewired::Utils::Classes::Data::SerializableGuid  a, ::Rewired::Utils::Classes::Data::SerializableGuid  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializableGuid>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializableGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::Utils::Classes::Data::SerializableGuid::op_Inequality(::Rewired::Utils::Classes::Data::SerializableGuid  a, ::Rewired::Utils::Classes::Data::SerializableGuid  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializableGuid>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializableGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializableGuid::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializableGuid::ToString(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializableGuid::ToString(::StringW  format, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializableGuid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, provider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::SerializableGuid>"
constexpr  Rewired::Utils::Classes::Data::SerializableGuid::operator ::System::IEquatable_1<::Rewired::Utils::Classes::Data::SerializableGuid>*()  {
return static_cast<::System::IEquatable_1<::Rewired::Utils::Classes::Data::SerializableGuid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::SerializableGuid>"
constexpr ::System::IEquatable_1<::Rewired::Utils::Classes::Data::SerializableGuid>* Rewired::Utils::Classes::Data::SerializableGuid::i___System__IEquatable_1___Rewired__Utils__Classes__Data__SerializableGuid_()  {
return static_cast<::System::IEquatable_1<::Rewired::Utils::Classes::Data::SerializableGuid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_a", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_b", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::SerializableGuid::SerializableGuid(int64_t  _a, int64_t  _b) noexcept  {
this->_a = _a;
this->_b = _b;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::SerializableGuid::SerializableGuid()   {
}
