#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/MaskRendererBIRP.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRenderer_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRendererBIRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererBIRP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererBIRP::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::MaskRendererBIRP::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825a1d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererBIRP.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererBIRP::*)()>(&::WaveHarmonic::Crest::MaskRendererBIRP::Enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825a1ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererBIRP.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererBIRP::*)()>(&::WaveHarmonic::Crest::MaskRendererBIRP::Destroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825a1a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererBIRP.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererBIRP::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::MaskRendererBIRP::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1825a1af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRendererBIRP.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRendererBIRP::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::MaskRendererBIRP::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825a1ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::MaskRendererBIRP::__cordl_internal_get__Commands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Commands;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::MaskRendererBIRP::__cordl_internal_get__Commands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Commands;
}
constexpr void WaveHarmonic::Crest::MaskRendererBIRP::__cordl_internal_set__Commands(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Commands = value;
}
inline void WaveHarmonic::Crest::MaskRendererBIRP::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::MaskRendererBIRP::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRendererBIRP::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRendererBIRP::OnBeginCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::MaskRendererBIRP::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRendererBIRP*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::WaveHarmonic::Crest::MaskRendererBIRP* WaveHarmonic::Crest::MaskRendererBIRP::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::MaskRendererBIRP*>(water));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MaskRendererBIRP::MaskRendererBIRP()   {
}
