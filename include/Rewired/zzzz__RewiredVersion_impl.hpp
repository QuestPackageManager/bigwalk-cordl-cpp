#pragma once
// IWYU pragma private; include "Rewired/RewiredVersion.hpp"
#include "Rewired/zzzz__RewiredVersion_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::RewiredVersion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::RewiredVersion::*)(int32_t, int32_t, int32_t, int32_t, ::StringW)>(&::Rewired::RewiredVersion::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181846dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RewiredVersion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::RewiredVersion::*)(::StringW)>(&::Rewired::RewiredVersion::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181846e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RewiredVersion.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::RewiredVersion::*)(::System::Object*)>(&::Rewired::RewiredVersion::Equals)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181846a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::RewiredVersion>(),
                    {::i2c::class_of<::Rewired::RewiredVersion>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RewiredVersion.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::RewiredVersion::*)()>(&::Rewired::RewiredVersion::GetHashCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181846be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::RewiredVersion>(),
                    {::i2c::class_of<::Rewired::RewiredVersion>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RewiredVersion.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::RewiredVersion::*)()>(&::Rewired::RewiredVersion::ToString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181846ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::RewiredVersion>(),
                    {::i2c::class_of<::Rewired::RewiredVersion>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RewiredVersion.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::RewiredVersion, ::Rewired::RewiredVersion)>(&::Rewired::RewiredVersion::op_Equality)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181846f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::RewiredVersion>(), ::i2c::type_of<::Rewired::RewiredVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RewiredVersion.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::RewiredVersion, ::Rewired::RewiredVersion)>(&::Rewired::RewiredVersion::op_Inequality)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181847130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::RewiredVersion>(), ::i2c::type_of<::Rewired::RewiredVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RewiredVersion.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::RewiredVersion, ::Rewired::RewiredVersion)>(&::Rewired::RewiredVersion::op_GreaterThan)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181846ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Rewired::RewiredVersion>(), ::i2c::type_of<::Rewired::RewiredVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::RewiredVersion.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::RewiredVersion, ::Rewired::RewiredVersion)>(&::Rewired::RewiredVersion::op_LessThan)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181847250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {"op_LessThan", {}, {::i2c::type_of<::Rewired::RewiredVersion>(), ::i2c::type_of<::Rewired::RewiredVersion>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::RewiredVersion::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void Rewired::RewiredVersion::_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::RewiredVersion::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::RewiredVersion>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Rewired::RewiredVersion::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::RewiredVersion>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Rewired::RewiredVersion::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::RewiredVersion>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Rewired::RewiredVersion::op_Equality(::Rewired::RewiredVersion  a, ::Rewired::RewiredVersion  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::RewiredVersion>(), ::i2c::type_of<::Rewired::RewiredVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::RewiredVersion::op_Inequality(::Rewired::RewiredVersion  a, ::Rewired::RewiredVersion  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::RewiredVersion>(), ::i2c::type_of<::Rewired::RewiredVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::RewiredVersion::op_GreaterThan(::Rewired::RewiredVersion  a, ::Rewired::RewiredVersion  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Rewired::RewiredVersion>(), ::i2c::type_of<::Rewired::RewiredVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::RewiredVersion::op_LessThan(::Rewired::RewiredVersion  a, ::Rewired::RewiredVersion  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::RewiredVersion>(),
                        {"op_LessThan", {}, {::i2c::type_of<::Rewired::RewiredVersion>(), ::i2c::type_of<::Rewired::RewiredVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "version1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "version2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "version3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "version4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unityVersion", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::RewiredVersion::RewiredVersion(int32_t  version1, int32_t  version2, int32_t  version3, int32_t  version4, ::StringW  unityVersion) noexcept  {
this->version1 = version1;
this->version2 = version2;
this->version3 = version3;
this->version4 = version4;
this->unityVersion = unityVersion;
}
// Ctor Parameters []
constexpr ::Rewired::RewiredVersion::RewiredVersion()   {
}
