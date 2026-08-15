#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/NintendoSwitchGamepadVibration.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchGamepadVibration_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::*)(float_t, float_t, float_t, float_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818dab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::*)(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180646bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::*)(::System::Object*)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818da900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818da9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180646bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::op_Inequality)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818dab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::ToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818daa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration.CIAXGegmgQFLpONlKQcWWHypSiui
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration (*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::CIAXGegmgQFLpONlKQcWWHypSiui)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"CIAXGegmgQFLpONlKQcWWHypSiui", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration (*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::Create)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818da8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration (*)(float_t, float_t, float_t, float_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::Create)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818da800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"Create", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration (*)(float_t, float_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818da870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"Create", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::_ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::Equals(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"Equals", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::op_Equality(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  a, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::op_Inequality(::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  a, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::CIAXGegmgQFLpONlKQcWWHypSiui()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"CIAXGegmgQFLpONlKQcWWHypSiui", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(nullptr, ___internal_method);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(nullptr, ___internal_method);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::Create(float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"Create", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(nullptr, ___internal_method, amplitudeLow, frequencyLow, amplitudeHigh, frequencyHigh);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::Create(float_t  amplitudeLow, float_t  amplitudeHigh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(),
                        {"Create", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(nullptr, ___internal_method, amplitudeLow, amplitudeHigh);
}
/// @brief Convert operator to "::System::IEquatable_1<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>"
constexpr  Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::operator ::System::IEquatable_1<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>*()  {
return static_cast<::System::IEquatable_1<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>"
constexpr ::System::IEquatable_1<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>* Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::i___System__IEquatable_1___Rewired__ControllerExtensions__NintendoSwitchGamepadVibration_()  {
return static_cast<::System::IEquatable_1<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "amplitudeLow", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "frequencyLow", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "amplitudeHigh", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "frequencyHigh", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::NintendoSwitchGamepadVibration(float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh) noexcept  {
this->amplitudeLow = amplitudeLow;
this->frequencyLow = frequencyLow;
this->amplitudeHigh = amplitudeHigh;
this->frequencyHigh = frequencyHigh;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration::NintendoSwitchGamepadVibration()   {
}
