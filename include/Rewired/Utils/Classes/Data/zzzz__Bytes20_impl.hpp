#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/Bytes20.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__Bytes20_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Bytes20._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::Bytes20::*)(::ArrayW<uint8_t>)>(&::Rewired::Utils::Classes::Data::Bytes20::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181944930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Bytes20.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Rewired::Utils::Classes::Data::Bytes20::*)()>(&::Rewired::Utils::Classes::Data::Bytes20::GetBytes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181944750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                        {"GetBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Bytes20.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::Bytes20::*)(::System::Object*)>(&::Rewired::Utils::Classes::Data::Bytes20::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181944670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Bytes20.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::Bytes20::*)()>(&::Rewired::Utils::Classes::Data::Bytes20::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181944820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Bytes20.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::Bytes20::*)(::Rewired::Utils::Classes::Data::Bytes20)>(&::Rewired::Utils::Classes::Data::Bytes20::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181944700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Bytes20>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Bytes20.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::Classes::Data::Bytes20, ::Rewired::Utils::Classes::Data::Bytes20)>(&::Rewired::Utils::Classes::Data::Bytes20::op_Equality)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181944700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Bytes20>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Bytes20>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Bytes20.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::Classes::Data::Bytes20, ::Rewired::Utils::Classes::Data::Bytes20)>(&::Rewired::Utils::Classes::Data::Bytes20::op_Inequality)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819449c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Bytes20>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Bytes20>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::Bytes20.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::Bytes20::*)()>(&::Rewired::Utils::Classes::Data::Bytes20::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181944880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::Bytes20::_ctor(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::ArrayW<uint8_t> Rewired::Utils::Classes::Data::Bytes20::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                        {"GetBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::Bytes20::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Rewired::Utils::Classes::Data::Bytes20::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::Bytes20::Equals(::Rewired::Utils::Classes::Data::Bytes20  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Bytes20>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Rewired::Utils::Classes::Data::Bytes20::op_Equality(::Rewired::Utils::Classes::Data::Bytes20  a, ::Rewired::Utils::Classes::Data::Bytes20  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Bytes20>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Bytes20>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::Utils::Classes::Data::Bytes20::op_Inequality(::Rewired::Utils::Classes::Data::Bytes20  a, ::Rewired::Utils::Classes::Data::Bytes20  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::Bytes20>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::Bytes20>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW Rewired::Utils::Classes::Data::Bytes20::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::Bytes20>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Bytes20>"
constexpr  Rewired::Utils::Classes::Data::Bytes20::operator ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Bytes20>*()  {
return static_cast<::System::IEquatable_1<::Rewired::Utils::Classes::Data::Bytes20>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Bytes20>"
constexpr ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Bytes20>* Rewired::Utils::Classes::Data::Bytes20::i___System__IEquatable_1___Rewired__Utils__Classes__Data__Bytes20_()  {
return static_cast<::System::IEquatable_1<::Rewired::Utils::Classes::Data::Bytes20>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value0", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value1", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value2", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::Bytes20::Bytes20(int64_t  value0, int64_t  value1, int32_t  value2) noexcept  {
this->value0 = value0;
this->value1 = value1;
this->value2 = value2;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::Bytes20::Bytes20()   {
}
