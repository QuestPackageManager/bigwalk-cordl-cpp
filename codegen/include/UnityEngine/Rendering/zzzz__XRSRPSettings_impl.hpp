#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/XRSRPSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__XRSRPSettings_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::XRSRPSettings::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fce6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.get_isDeviceActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::XRSRPSettings::get_isDeviceActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182065ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_isDeviceActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.get_loadedDeviceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Rendering::XRSRPSettings::get_loadedDeviceName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182065f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_loadedDeviceName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.get_supportedDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::Rendering::XRSRPSettings::get_supportedDevices)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182065fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_supportedDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.get_eyeTextureDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (*)()>(&::UnityEngine::Rendering::XRSRPSettings::get_eyeTextureDesc)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182065e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_eyeTextureDesc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.get_eyeTextureWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::XRSRPSettings::get_eyeTextureWidth)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182065ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_eyeTextureWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.get_eyeTextureHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::XRSRPSettings::get_eyeTextureHeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182065e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_eyeTextureHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.get_occlusionMeshScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::XRSRPSettings::get_occlusionMeshScale)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182065f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_occlusionMeshScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.set_occlusionMeshScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Rendering::XRSRPSettings::set_occlusionMeshScale)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182066070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"set_occlusionMeshScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.get_useVisibilityMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::XRSRPSettings::get_useVisibilityMesh)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182065ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_useVisibilityMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.set_useVisibilityMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::XRSRPSettings::set_useVisibilityMesh)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1820660c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"set_useVisibilityMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.get_mirrorViewMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::XRSRPSettings::get_mirrorViewMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182065f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_mirrorViewMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings.set_mirrorViewMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Rendering::XRSRPSettings::set_mirrorViewMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182066040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"set_mirrorViewMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRSRPSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::XRSRPSettings::*)()>(&::UnityEngine::Rendering::XRSRPSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::XRSRPSettings::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::XRSRPSettings::get_isDeviceActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_isDeviceActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::XRSRPSettings::get_loadedDeviceName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_loadedDeviceName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::XRSRPSettings::get_supportedDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_supportedDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::XRSRPSettings::get_eyeTextureDesc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_eyeTextureDesc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::XRSRPSettings::get_eyeTextureWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_eyeTextureWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::XRSRPSettings::get_eyeTextureHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_eyeTextureHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Rendering::XRSRPSettings::get_occlusionMeshScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_occlusionMeshScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::XRSRPSettings::set_occlusionMeshScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"set_occlusionMeshScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Rendering::XRSRPSettings::get_useVisibilityMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_useVisibilityMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::XRSRPSettings::set_useVisibilityMesh(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"set_useVisibilityMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::XRSRPSettings::get_mirrorViewMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"get_mirrorViewMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::XRSRPSettings::set_mirrorViewMode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {"set_mirrorViewMode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::XRSRPSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::XRSRPSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::XRSRPSettings* UnityEngine::Rendering::XRSRPSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::XRSRPSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::XRSRPSettings::XRSRPSettings()   {
}
