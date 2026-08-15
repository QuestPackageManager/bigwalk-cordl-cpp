#pragma once
// IWYU pragma private; include "Enviro/EnviroCameras.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroCameras_def.hpp"
#include "Enviro/zzzz__EnviroQuality_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroCameras._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroCameras::*)()>(&::Enviro::EnviroCameras::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroCameras*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Enviro::EnviroCameras::__cordl_internal_get_camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Enviro::EnviroCameras::__cordl_internal_get_camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr void Enviro::EnviroCameras::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___camera = value;
}
constexpr ::UnityW<::Enviro::EnviroQuality>& Enviro::EnviroCameras::__cordl_internal_get_quality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr ::UnityW<::Enviro::EnviroQuality> const& Enviro::EnviroCameras::__cordl_internal_get_quality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr void Enviro::EnviroCameras::__cordl_internal_set_quality(::UnityW<::Enviro::EnviroQuality>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quality = value;
}
constexpr bool& Enviro::EnviroCameras::__cordl_internal_get_resetMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetMatrix;
}
constexpr bool const& Enviro::EnviroCameras::__cordl_internal_get_resetMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetMatrix;
}
constexpr void Enviro::EnviroCameras::__cordl_internal_set_resetMatrix(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetMatrix = value;
}
inline void Enviro::EnviroCameras::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroCameras*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroCameras* Enviro::EnviroCameras::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroCameras*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroCameras::EnviroCameras()   {
}
