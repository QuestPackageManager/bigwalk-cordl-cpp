#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveScenes/PlayerCamera.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/Examples/AdditiveScenes/zzzz__PlayerCamera_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::PlayerCamera.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::PlayerCamera::*)()>(&::Mirror::Examples::AdditiveScenes::PlayerCamera::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18155ea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::PlayerCamera.OnStartLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::PlayerCamera::*)()>(&::Mirror::Examples::AdditiveScenes::PlayerCamera::OnStartLocalPlayer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18155ea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::PlayerCamera.OnStopLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::PlayerCamera::*)()>(&::Mirror::Examples::AdditiveScenes::PlayerCamera::OnStopLocalPlayer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18155eb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::PlayerCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::PlayerCamera::*)()>(&::Mirror::Examples::AdditiveScenes::PlayerCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::PlayerCamera.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::PlayerCamera::*)()>(&::Mirror::Examples::AdditiveScenes::PlayerCamera::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Mirror::Examples::AdditiveScenes::PlayerCamera::__cordl_internal_get_mainCam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCam;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Mirror::Examples::AdditiveScenes::PlayerCamera::__cordl_internal_get_mainCam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCam;
}
constexpr void Mirror::Examples::AdditiveScenes::PlayerCamera::__cordl_internal_set_mainCam(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCam = value;
}
inline void Mirror::Examples::AdditiveScenes::PlayerCamera::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::PlayerCamera::OnStartLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::PlayerCamera::OnStopLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::PlayerCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::PlayerCamera::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::PlayerCamera*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::AdditiveScenes::PlayerCamera* Mirror::Examples::AdditiveScenes::PlayerCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::AdditiveScenes::PlayerCamera*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::AdditiveScenes::PlayerCamera::PlayerCamera()   {
}
