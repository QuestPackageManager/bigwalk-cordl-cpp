#pragma once
// IWYU pragma private; include "GlobalNamespace/GlassGrabber.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GlassGrabber_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GlassGrabber.OnAnyCameraPreRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlassGrabber::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::GlassGrabber::OnAnyCameraPreRender)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1803e7d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlassGrabber*>(),
                        {"OnAnyCameraPreRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlassGrabber.CreateCameraBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::GlobalNamespace::GlassGrabber::*)()>(&::GlobalNamespace::GlassGrabber::CreateCameraBuffer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803e7c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlassGrabber*>(),
                        {"CreateCameraBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlassGrabber.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlassGrabber::*)()>(&::GlobalNamespace::GlassGrabber::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803e8160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlassGrabber*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlassGrabber.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlassGrabber::*)()>(&::GlobalNamespace::GlassGrabber::OnDisable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803e7f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlassGrabber*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlassGrabber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlassGrabber::*)()>(&::GlobalNamespace::GlassGrabber::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803e8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlassGrabber*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GlassGrabber::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::GlassGrabber::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::GlassGrabber::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityEngine::Rendering::CommandBuffer*>*& GlobalNamespace::GlassGrabber::__cordl_internal_get_activeCameras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCameras;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityEngine::Rendering::CommandBuffer*>* const& GlobalNamespace::GlassGrabber::__cordl_internal_get_activeCameras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCameras;
}
constexpr void GlobalNamespace::GlassGrabber::__cordl_internal_set_activeCameras(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityEngine::Rendering::CommandBuffer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeCameras = value;
}
inline void GlobalNamespace::GlassGrabber::OnAnyCameraPreRender(::UnityEngine::Camera*  activeCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlassGrabber*>(),
                        {"OnAnyCameraPreRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeCamera);
}
inline ::UnityEngine::Rendering::CommandBuffer* GlobalNamespace::GlassGrabber::CreateCameraBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlassGrabber*>(),
                        {"CreateCameraBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method);
}
inline void GlobalNamespace::GlassGrabber::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlassGrabber*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GlassGrabber::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlassGrabber*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GlassGrabber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlassGrabber*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GlassGrabber* GlobalNamespace::GlassGrabber::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GlassGrabber*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlassGrabber::GlassGrabber()   {
}
