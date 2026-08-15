#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SphericalHarmonicsL2.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SphericalHarmonicsL2::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Color>)>(&::UnityEngine::Rendering::SphericalHarmonicsL2::Evaluate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822a2760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"Evaluate", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.EvaluateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>, ::ArrayW<::UnityEngine::Vector3>, ::by_ref<::ArrayW<::UnityEngine::Color>>)>(&::UnityEngine::Rendering::SphericalHarmonicsL2::EvaluateInternal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1822a2650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"EvaluateInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Color>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::SphericalHarmonicsL2::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::SphericalHarmonicsL2::get_Item)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1822a29b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SphericalHarmonicsL2::*)(int32_t, int32_t, float_t)>(&::UnityEngine::Rendering::SphericalHarmonicsL2::set_Item)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1822a2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SphericalHarmonicsL2::*)()>(&::UnityEngine::Rendering::SphericalHarmonicsL2::GetHashCode)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1822a27d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                    {::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SphericalHarmonicsL2::*)(::System::Object*)>(&::UnityEngine::Rendering::SphericalHarmonicsL2::Equals)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1822a23d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                    {::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SphericalHarmonicsL2::*)(::UnityEngine::Rendering::SphericalHarmonicsL2)>(&::UnityEngine::Rendering::SphericalHarmonicsL2::Equals)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1822a2510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SphericalHarmonicsL2::*)(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>)>(&::UnityEngine::Rendering::SphericalHarmonicsL2::Equals)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1822a2510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::SphericalHarmonicsL2, ::UnityEngine::Rendering::SphericalHarmonicsL2)>(&::UnityEngine::Rendering::SphericalHarmonicsL2::op_Equality)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180651850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), ::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::SphericalHarmonicsL2, ::UnityEngine::Rendering::SphericalHarmonicsL2)>(&::UnityEngine::Rendering::SphericalHarmonicsL2::op_Inequality)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822a2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), ::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SphericalHarmonicsL2.EvaluateInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Rendering::SphericalHarmonicsL2::EvaluateInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822a2640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"EvaluateInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SphericalHarmonicsL2::Evaluate(::ArrayW<::UnityEngine::Vector3>  directions, ::ArrayW<::UnityEngine::Color>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"Evaluate", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, directions, results);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2::EvaluateInternal(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>  sh, ::ArrayW<::UnityEngine::Vector3>  directions, ::by_ref<::ArrayW<::UnityEngine::Color>>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"EvaluateInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Color>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sh, directions, results);
}
inline float_t UnityEngine::Rendering::SphericalHarmonicsL2::get_Item(int32_t  rgb, int32_t  coefficient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, rgb, coefficient);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2::set_Item(int32_t  rgb, int32_t  coefficient, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rgb, coefficient, value);
}
inline int32_t UnityEngine::Rendering::SphericalHarmonicsL2::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::SphericalHarmonicsL2::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::SphericalHarmonicsL2::Equals(::UnityEngine::Rendering::SphericalHarmonicsL2  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::SphericalHarmonicsL2::Equals(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::SphericalHarmonicsL2::op_Equality(::UnityEngine::Rendering::SphericalHarmonicsL2  lhs, ::UnityEngine::Rendering::SphericalHarmonicsL2  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), ::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Rendering::SphericalHarmonicsL2::op_Inequality(::UnityEngine::Rendering::SphericalHarmonicsL2  lhs, ::UnityEngine::Rendering::SphericalHarmonicsL2  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(), ::i2c::type_of<::UnityEngine::Rendering::SphericalHarmonicsL2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline void UnityEngine::Rendering::SphericalHarmonicsL2::EvaluateInternal_Injected(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>  sh, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  directions, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::SphericalHarmonicsL2>(),
                        {"EvaluateInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sh, directions, results);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SphericalHarmonicsL2>"
constexpr  UnityEngine::Rendering::SphericalHarmonicsL2::operator ::System::IEquatable_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SphericalHarmonicsL2>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* UnityEngine::Rendering::SphericalHarmonicsL2::i___System__IEquatable_1___UnityEngine__Rendering__SphericalHarmonicsL2_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "shr0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shr1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shr2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shr3", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shr4", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shr5", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shr6", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shr7", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shr8", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shg0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shg1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shg2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shg3", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shg4", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shg5", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shg6", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shg7", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shg8", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shb0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shb1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shb2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shb3", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shb4", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shb5", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shb6", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shb7", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "shb8", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2::SphericalHarmonicsL2(float_t  shr0, float_t  shr1, float_t  shr2, float_t  shr3, float_t  shr4, float_t  shr5, float_t  shr6, float_t  shr7, float_t  shr8, float_t  shg0, float_t  shg1, float_t  shg2, float_t  shg3, float_t  shg4, float_t  shg5, float_t  shg6, float_t  shg7, float_t  shg8, float_t  shb0, float_t  shb1, float_t  shb2, float_t  shb3, float_t  shb4, float_t  shb5, float_t  shb6, float_t  shb7, float_t  shb8) noexcept  {
this->shr0 = shr0;
this->shr1 = shr1;
this->shr2 = shr2;
this->shr3 = shr3;
this->shr4 = shr4;
this->shr5 = shr5;
this->shr6 = shr6;
this->shr7 = shr7;
this->shr8 = shr8;
this->shg0 = shg0;
this->shg1 = shg1;
this->shg2 = shg2;
this->shg3 = shg3;
this->shg4 = shg4;
this->shg5 = shg5;
this->shg6 = shg6;
this->shg7 = shg7;
this->shg8 = shg8;
this->shb0 = shb0;
this->shb1 = shb1;
this->shb2 = shb2;
this->shb3 = shb3;
this->shb4 = shb4;
this->shb5 = shb5;
this->shb6 = shb6;
this->shb7 = shb7;
this->shb8 = shb8;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2::SphericalHarmonicsL2()   {
}
