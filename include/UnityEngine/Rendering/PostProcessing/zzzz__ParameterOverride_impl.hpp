#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ParameterOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ParameterOverride.Interp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ParameterOverride::*)(::UnityEngine::Rendering::PostProcessing::ParameterOverride*, ::UnityEngine::Rendering::PostProcessing::ParameterOverride*, float_t)>(&::UnityEngine::Rendering::PostProcessing::ParameterOverride::Interp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ParameterOverride.GetHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::ParameterOverride::*)()>(&::UnityEngine::Rendering::PostProcessing::ParameterOverride::GetHash)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ParameterOverride.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ParameterOverride::*)()>(&::UnityEngine::Rendering::PostProcessing::ParameterOverride::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ParameterOverride.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ParameterOverride::*)()>(&::UnityEngine::Rendering::PostProcessing::ParameterOverride::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ParameterOverride.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ParameterOverride::*)(::UnityEngine::Rendering::PostProcessing::ParameterOverride*)>(&::UnityEngine::Rendering::PostProcessing::ParameterOverride::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ParameterOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ParameterOverride::*)()>(&::UnityEngine::Rendering::PostProcessing::ParameterOverride::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::PostProcessing::ParameterOverride::__cordl_internal_get_overrideState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideState;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::ParameterOverride::__cordl_internal_get_overrideState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideState;
}
constexpr void UnityEngine::Rendering::PostProcessing::ParameterOverride::__cordl_internal_set_overrideState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideState = value;
}
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride::Interp(::UnityEngine::Rendering::PostProcessing::ParameterOverride*  from, ::UnityEngine::Rendering::PostProcessing::ParameterOverride*  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline int32_t UnityEngine::Rendering::PostProcessing::ParameterOverride::GetHash()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline T UnityEngine::Rendering::PostProcessing::ParameterOverride::GetValue()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(),
                    {"GetValue", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride::SetValue(::UnityEngine::Rendering::PostProcessing::ParameterOverride*  parameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameter);
}
inline void UnityEngine::Rendering::PostProcessing::ParameterOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ParameterOverride* UnityEngine::Rendering::PostProcessing::ParameterOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ParameterOverride*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ParameterOverride::ParameterOverride()   {
}
