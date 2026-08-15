#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/GlitterLight.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroSplat/zzzz__GlitterLight_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::JBooth::MicroSplat::GlitterLight.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::GlitterLight::*)()>(&::JBooth::MicroSplat::GlitterLight::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fe840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::GlitterLight*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::GlitterLight.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::GlitterLight::*)()>(&::JBooth::MicroSplat::GlitterLight::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fe840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::GlitterLight*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::GlitterLight.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::GlitterLight::*)()>(&::JBooth::MicroSplat::GlitterLight::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1813fe870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::GlitterLight*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::GlitterLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::GlitterLight::*)()>(&::JBooth::MicroSplat::GlitterLight::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::GlitterLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Light>& JBooth::MicroSplat::GlitterLight::__cordl_internal_get_lght()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lght;
}
constexpr ::UnityW<::UnityEngine::Light> const& JBooth::MicroSplat::GlitterLight::__cordl_internal_get_lght() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lght;
}
constexpr void JBooth::MicroSplat::GlitterLight::__cordl_internal_set_lght(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lght = value;
}
inline void JBooth::MicroSplat::GlitterLight::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::GlitterLight*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::GlitterLight::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::GlitterLight*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::GlitterLight::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::GlitterLight*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::GlitterLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::GlitterLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::GlitterLight* JBooth::MicroSplat::GlitterLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::GlitterLight*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::GlitterLight::GlitterLight()   {
}
