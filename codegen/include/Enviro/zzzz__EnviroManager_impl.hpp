#pragma once
// IWYU pragma private; include "Enviro/EnviroManager.hpp"
#include "Enviro/zzzz__EnviroManagerBase_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__EnviroManager_def.hpp"
#include "Enviro/zzzz__EnviroCameras_def.hpp"
#include "Enviro/zzzz__EnviroEffectRemovalZone_def.hpp"
#include "Enviro/zzzz__EnviroEnvironment_def.hpp"
#include "Enviro/zzzz__EnviroEvents_def.hpp"
#include "Enviro/zzzz__EnviroManager_def.hpp"
#include "Enviro/zzzz__EnviroWeatherType_def.hpp"
#include "Enviro/zzzz__EnviroZone_def.hpp"
#include "Enviro/zzzz__GeneralObjects_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "axis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "stretch", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "density", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "feather", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "pad0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pad1", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroManager_ZoneParams::EnviroManager_ZoneParams(float_t  type, ::UnityEngine::Vector3  pos, float_t  radius, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  axis, float_t  stretch, float_t  density, float_t  feather, ::UnityEngine::Matrix4x4  transform, float_t  pad0, float_t  pad1) noexcept  {
this->type = type;
this->pos = pos;
this->radius = radius;
this->size = size;
this->axis = axis;
this->stretch = stretch;
this->density = density;
this->feather = feather;
this->transform = transform;
this->pad0 = pad0;
this->pad1 = pad1;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager_ZoneParams::EnviroManager_ZoneParams()   {
}
//  Writing Method size for method: ::Enviro::EnviroManager_HourPassed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_HourPassed::*)(::System::Object*, ::System::IntPtr)>(&::Enviro::EnviroManager_HourPassed::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_HourPassed.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_HourPassed::*)()>(&::Enviro::EnviroManager_HourPassed::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_HourPassed.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Enviro::EnviroManager_HourPassed::*)(::System::AsyncCallback*, ::System::Object*)>(&::Enviro::EnviroManager_HourPassed::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_HourPassed.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_HourPassed::*)(::System::IAsyncResult*)>(&::Enviro::EnviroManager_HourPassed::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Enviro::EnviroManager_HourPassed::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Enviro::EnviroManager_HourPassed::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Enviro::EnviroManager_HourPassed::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Enviro::EnviroManager_HourPassed::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_HourPassed*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Enviro::EnviroManager_HourPassed* Enviro::EnviroManager_HourPassed::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManager_HourPassed*>(object, method));
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager_HourPassed::EnviroManager_HourPassed()   {
}
//  Writing Method size for method: ::Enviro::EnviroManager_DayPassed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_DayPassed::*)(::System::Object*, ::System::IntPtr)>(&::Enviro::EnviroManager_DayPassed::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_DayPassed.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_DayPassed::*)()>(&::Enviro::EnviroManager_DayPassed::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_DayPassed.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Enviro::EnviroManager_DayPassed::*)(::System::AsyncCallback*, ::System::Object*)>(&::Enviro::EnviroManager_DayPassed::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_DayPassed.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_DayPassed::*)(::System::IAsyncResult*)>(&::Enviro::EnviroManager_DayPassed::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Enviro::EnviroManager_DayPassed::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Enviro::EnviroManager_DayPassed::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Enviro::EnviroManager_DayPassed::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Enviro::EnviroManager_DayPassed::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_DayPassed*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Enviro::EnviroManager_DayPassed* Enviro::EnviroManager_DayPassed::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManager_DayPassed*>(object, method));
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager_DayPassed::EnviroManager_DayPassed()   {
}
//  Writing Method size for method: ::Enviro::EnviroManager_YearPassed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_YearPassed::*)(::System::Object*, ::System::IntPtr)>(&::Enviro::EnviroManager_YearPassed::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_YearPassed.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_YearPassed::*)()>(&::Enviro::EnviroManager_YearPassed::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_YearPassed.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Enviro::EnviroManager_YearPassed::*)(::System::AsyncCallback*, ::System::Object*)>(&::Enviro::EnviroManager_YearPassed::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_YearPassed.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_YearPassed::*)(::System::IAsyncResult*)>(&::Enviro::EnviroManager_YearPassed::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Enviro::EnviroManager_YearPassed::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Enviro::EnviroManager_YearPassed::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Enviro::EnviroManager_YearPassed::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Enviro::EnviroManager_YearPassed::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_YearPassed*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Enviro::EnviroManager_YearPassed* Enviro::EnviroManager_YearPassed::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManager_YearPassed*>(object, method));
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager_YearPassed::EnviroManager_YearPassed()   {
}
//  Writing Method size for method: ::Enviro::EnviroManager_WeatherChanged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_WeatherChanged::*)(::System::Object*, ::System::IntPtr)>(&::Enviro::EnviroManager_WeatherChanged::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805829b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_WeatherChanged.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_WeatherChanged::*)(::Enviro::EnviroWeatherType*)>(&::Enviro::EnviroManager_WeatherChanged::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_WeatherChanged.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Enviro::EnviroManager_WeatherChanged::*)(::Enviro::EnviroWeatherType*, ::System::AsyncCallback*, ::System::Object*)>(&::Enviro::EnviroManager_WeatherChanged::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_WeatherChanged.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_WeatherChanged::*)(::System::IAsyncResult*)>(&::Enviro::EnviroManager_WeatherChanged::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Enviro::EnviroManager_WeatherChanged::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Enviro::EnviroManager_WeatherChanged::Invoke(::Enviro::EnviroWeatherType*  weatherType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weatherType);
}
inline ::System::IAsyncResult* Enviro::EnviroManager_WeatherChanged::BeginInvoke(::Enviro::EnviroWeatherType*  weatherType, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, weatherType, callback, object);
}
inline void Enviro::EnviroManager_WeatherChanged::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_WeatherChanged*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Enviro::EnviroManager_WeatherChanged* Enviro::EnviroManager_WeatherChanged::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManager_WeatherChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager_WeatherChanged::EnviroManager_WeatherChanged()   {
}
//  Writing Method size for method: ::Enviro::EnviroManager_ZoneWeatherChanged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_ZoneWeatherChanged::*)(::System::Object*, ::System::IntPtr)>(&::Enviro::EnviroManager_ZoneWeatherChanged::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18060c120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_ZoneWeatherChanged.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_ZoneWeatherChanged::*)(::Enviro::EnviroWeatherType*, ::Enviro::EnviroZone*)>(&::Enviro::EnviroManager_ZoneWeatherChanged::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_ZoneWeatherChanged.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Enviro::EnviroManager_ZoneWeatherChanged::*)(::Enviro::EnviroWeatherType*, ::Enviro::EnviroZone*, ::System::AsyncCallback*, ::System::Object*)>(&::Enviro::EnviroManager_ZoneWeatherChanged::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180582750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_ZoneWeatherChanged.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_ZoneWeatherChanged::*)(::System::IAsyncResult*)>(&::Enviro::EnviroManager_ZoneWeatherChanged::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Enviro::EnviroManager_ZoneWeatherChanged::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Enviro::EnviroManager_ZoneWeatherChanged::Invoke(::Enviro::EnviroWeatherType*  weatherType, ::Enviro::EnviroZone*  zone)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weatherType, zone);
}
inline ::System::IAsyncResult* Enviro::EnviroManager_ZoneWeatherChanged::BeginInvoke(::Enviro::EnviroWeatherType*  weatherType, ::Enviro::EnviroZone*  zone, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, weatherType, zone, callback, object);
}
inline void Enviro::EnviroManager_ZoneWeatherChanged::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_ZoneWeatherChanged*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Enviro::EnviroManager_ZoneWeatherChanged* Enviro::EnviroManager_ZoneWeatherChanged::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManager_ZoneWeatherChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager_ZoneWeatherChanged::EnviroManager_ZoneWeatherChanged()   {
}
//  Writing Method size for method: ::Enviro::EnviroManager_SeasonChanged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_SeasonChanged::*)(::System::Object*, ::System::IntPtr)>(&::Enviro::EnviroManager_SeasonChanged::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_SeasonChanged.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_SeasonChanged::*)(::Enviro::EnviroEnvironment_Seasons)>(&::Enviro::EnviroManager_SeasonChanged::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_SeasonChanged.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Enviro::EnviroManager_SeasonChanged::*)(::Enviro::EnviroEnvironment_Seasons, ::System::AsyncCallback*, ::System::Object*)>(&::Enviro::EnviroManager_SeasonChanged::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18060b940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_SeasonChanged.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_SeasonChanged::*)(::System::IAsyncResult*)>(&::Enviro::EnviroManager_SeasonChanged::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Enviro::EnviroManager_SeasonChanged::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Enviro::EnviroManager_SeasonChanged::Invoke(::Enviro::EnviroEnvironment_Seasons  season)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, season);
}
inline ::System::IAsyncResult* Enviro::EnviroManager_SeasonChanged::BeginInvoke(::Enviro::EnviroEnvironment_Seasons  season, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, season, callback, object);
}
inline void Enviro::EnviroManager_SeasonChanged::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_SeasonChanged*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Enviro::EnviroManager_SeasonChanged* Enviro::EnviroManager_SeasonChanged::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManager_SeasonChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager_SeasonChanged::EnviroManager_SeasonChanged()   {
}
//  Writing Method size for method: ::Enviro::EnviroManager_isNightEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_isNightEvent::*)(::System::Object*, ::System::IntPtr)>(&::Enviro::EnviroManager_isNightEvent::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_isNightEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_isNightEvent::*)()>(&::Enviro::EnviroManager_isNightEvent::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_isNightEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Enviro::EnviroManager_isNightEvent::*)(::System::AsyncCallback*, ::System::Object*)>(&::Enviro::EnviroManager_isNightEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_isNightEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_isNightEvent::*)(::System::IAsyncResult*)>(&::Enviro::EnviroManager_isNightEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Enviro::EnviroManager_isNightEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Enviro::EnviroManager_isNightEvent::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Enviro::EnviroManager_isNightEvent::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Enviro::EnviroManager_isNightEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_isNightEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Enviro::EnviroManager_isNightEvent* Enviro::EnviroManager_isNightEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManager_isNightEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager_isNightEvent::EnviroManager_isNightEvent()   {
}
//  Writing Method size for method: ::Enviro::EnviroManager_isDayEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_isDayEvent::*)(::System::Object*, ::System::IntPtr)>(&::Enviro::EnviroManager_isDayEvent::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_isDayEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_isDayEvent::*)()>(&::Enviro::EnviroManager_isDayEvent::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_isDayEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Enviro::EnviroManager_isDayEvent::*)(::System::AsyncCallback*, ::System::Object*)>(&::Enviro::EnviroManager_isDayEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager_isDayEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager_isDayEvent::*)(::System::IAsyncResult*)>(&::Enviro::EnviroManager_isDayEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(),
                    {::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Enviro::EnviroManager_isDayEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Enviro::EnviroManager_isDayEvent::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Enviro::EnviroManager_isDayEvent::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Enviro::EnviroManager_isDayEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager_isDayEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Enviro::EnviroManager_isDayEvent* Enviro::EnviroManager_isDayEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManager_isDayEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager_isDayEvent::EnviroManager_isDayEvent()   {
}
//  Writing Method size for method: ::Enviro::EnviroManager__FirstFrame_d__99._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager__FirstFrame_d__99::*)(int32_t)>(&::Enviro::EnviroManager__FirstFrame_d__99::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager__FirstFrame_d__99.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager__FirstFrame_d__99::*)()>(&::Enviro::EnviroManager__FirstFrame_d__99::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager__FirstFrame_d__99.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Enviro::EnviroManager__FirstFrame_d__99::*)()>(&::Enviro::EnviroManager__FirstFrame_d__99::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18060b9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager__FirstFrame_d__99.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Enviro::EnviroManager__FirstFrame_d__99::*)()>(&::Enviro::EnviroManager__FirstFrame_d__99::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager__FirstFrame_d__99.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager__FirstFrame_d__99::*)()>(&::Enviro::EnviroManager__FirstFrame_d__99::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager__FirstFrame_d__99.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Enviro::EnviroManager__FirstFrame_d__99::*)()>(&::Enviro::EnviroManager__FirstFrame_d__99::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Enviro::EnviroManager__FirstFrame_d__99::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Enviro::EnviroManager__FirstFrame_d__99::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Enviro::EnviroManager__FirstFrame_d__99::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Enviro::EnviroManager__FirstFrame_d__99::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Enviro::EnviroManager__FirstFrame_d__99::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Enviro::EnviroManager__FirstFrame_d__99::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Enviro::EnviroManager>& Enviro::EnviroManager__FirstFrame_d__99::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Enviro::EnviroManager> const& Enviro::EnviroManager__FirstFrame_d__99::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Enviro::EnviroManager__FirstFrame_d__99::__cordl_internal_set___4__this(::UnityW<::Enviro::EnviroManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Enviro::EnviroManager__FirstFrame_d__99::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Enviro::EnviroManager__FirstFrame_d__99::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Enviro::EnviroManager__FirstFrame_d__99::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Enviro::EnviroManager__FirstFrame_d__99::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Enviro::EnviroManager__FirstFrame_d__99::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Enviro::EnviroManager__FirstFrame_d__99::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager__FirstFrame_d__99*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Enviro::EnviroManager__FirstFrame_d__99* Enviro::EnviroManager__FirstFrame_d__99::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManager__FirstFrame_d__99*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Enviro::EnviroManager__FirstFrame_d__99::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Enviro::EnviroManager__FirstFrame_d__99::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Enviro::EnviroManager__FirstFrame_d__99::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Enviro::EnviroManager__FirstFrame_d__99::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Enviro::EnviroManager__FirstFrame_d__99::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Enviro::EnviroManager__FirstFrame_d__99::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager__FirstFrame_d__99::EnviroManager__FirstFrame_d__99()   {
}
//  Writing Method size for method: ::Enviro::EnviroManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Enviro::EnviroManager> (*)()>(&::Enviro::EnviroManager::get_instance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180605330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.add_OnHourPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_HourPassed*)>(&::Enviro::EnviroManager::add_OnHourPassed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180604fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnHourPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_HourPassed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.remove_OnHourPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_HourPassed*)>(&::Enviro::EnviroManager::remove_OnHourPassed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1806054c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnHourPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_HourPassed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.add_OnDayPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_DayPassed*)>(&::Enviro::EnviroManager::add_OnDayPassed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180604eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnDayPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_DayPassed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.remove_OnDayPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_DayPassed*)>(&::Enviro::EnviroManager::remove_OnDayPassed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1806053a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnDayPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_DayPassed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.add_OnYearPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_YearPassed*)>(&::Enviro::EnviroManager::add_OnYearPassed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180605210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnYearPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_YearPassed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.remove_OnYearPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_YearPassed*)>(&::Enviro::EnviroManager::remove_OnYearPassed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180605700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnYearPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_YearPassed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.add_OnWeatherChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_WeatherChanged*)>(&::Enviro::EnviroManager::add_OnWeatherChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180605180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnWeatherChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_WeatherChanged*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.remove_OnWeatherChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_WeatherChanged*)>(&::Enviro::EnviroManager::remove_OnWeatherChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180605670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnWeatherChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_WeatherChanged*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.add_OnZoneWeatherChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_ZoneWeatherChanged*)>(&::Enviro::EnviroManager::add_OnZoneWeatherChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1806052a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnZoneWeatherChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_ZoneWeatherChanged*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.remove_OnZoneWeatherChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_ZoneWeatherChanged*)>(&::Enviro::EnviroManager::remove_OnZoneWeatherChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180605790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnZoneWeatherChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_ZoneWeatherChanged*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.add_OnSeasonChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_SeasonChanged*)>(&::Enviro::EnviroManager::add_OnSeasonChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1806050f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnSeasonChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_SeasonChanged*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.remove_OnSeasonChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_SeasonChanged*)>(&::Enviro::EnviroManager::remove_OnSeasonChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1806055e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnSeasonChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_SeasonChanged*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.add_OnNightTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_isNightEvent*)>(&::Enviro::EnviroManager::add_OnNightTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180605060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnNightTime", {}, {::i2c::type_of<::Enviro::EnviroManager_isNightEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.remove_OnNightTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_isNightEvent*)>(&::Enviro::EnviroManager::remove_OnNightTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180605550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnNightTime", {}, {::i2c::type_of<::Enviro::EnviroManager_isNightEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.add_OnDayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_isDayEvent*)>(&::Enviro::EnviroManager::add_OnDayTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180604f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnDayTime", {}, {::i2c::type_of<::Enviro::EnviroManager_isDayEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.remove_OnDayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroManager_isDayEvent*)>(&::Enviro::EnviroManager::remove_OnDayTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180605430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnDayTime", {}, {::i2c::type_of<::Enviro::EnviroManager_isDayEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.NotifyHourPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::NotifyHourPassed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager*>(),
                    {::i2c::class_of<::Enviro::EnviroManager*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.NotifyDayPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::NotifyDayPassed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager*>(),
                    {::i2c::class_of<::Enviro::EnviroManager*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.NotifyYearPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::NotifyYearPassed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager*>(),
                    {::i2c::class_of<::Enviro::EnviroManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.NotifyWeatherChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroWeatherType*)>(&::Enviro::EnviroManager::NotifyWeatherChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager*>(),
                    {::i2c::class_of<::Enviro::EnviroManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.NotifyZoneWeatherChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroWeatherType*, ::Enviro::EnviroZone*)>(&::Enviro::EnviroManager::NotifyZoneWeatherChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager*>(),
                    {::i2c::class_of<::Enviro::EnviroManager*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.NotifySeasonChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroEnvironment_Seasons)>(&::Enviro::EnviroManager::NotifySeasonChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager*>(),
                    {::i2c::class_of<::Enviro::EnviroManager*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.NotifyIsNight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::NotifyIsNight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager*>(),
                    {::i2c::class_of<::Enviro::EnviroManager*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.NotifyIsDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::NotifyIsDay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroManager*>(),
                    {::i2c::class_of<::Enviro::EnviroManager*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.HourPassedInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::HourPassedInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806039e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"HourPassedInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.DayPassedInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::DayPassedInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"DayPassedInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.YearPassedInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::YearPassedInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180604730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"YearPassedInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.WeatherChangedInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::WeatherChangedInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180604760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"WeatherChangedInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.SeasonsChangedInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::SeasonsChangedInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806041d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"SeasonsChangedInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.NightTimeInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::NightTimeInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"NightTimeInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.DayTimeInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::DayTimeInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806031c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"DayTimeInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.ZoneChangedInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::ZoneChangedInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180604790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"ZoneChangedInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180603ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180603df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.AddCameraComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::AddCameraComponents)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180602a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"AddCameraComponents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.ChangeCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::UnityEngine::Camera*)>(&::Enviro::EnviroManager::ChangeCamera)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"ChangeCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.AddAdditionalCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::UnityEngine::Camera*, bool)>(&::Enviro::EnviroManager::AddAdditionalCamera)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180602870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"AddAdditionalCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1806046a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180604d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::LateUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180603a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.CreateGeneralObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::CreateGeneralObjects)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x180602d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"CreateGeneralObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.UpdateNonTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::UpdateNonTime)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180604a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"UpdateNonTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.AddRemovalZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Enviro::EnviroManager::*)(::Enviro::EnviroEffectRemovalZone*)>(&::Enviro::EnviroManager::AddRemovalZone)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180602bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"AddRemovalZone", {}, {::i2c::type_of<::Enviro::EnviroEffectRemovalZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.RemoveRemovaleZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroEffectRemovalZone*)>(&::Enviro::EnviroManager::RemoveRemovaleZone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180603ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"RemoveRemovaleZone", {}, {::i2c::type_of<::Enviro::EnviroEffectRemovalZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.SetupZoneBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::SetupZoneBuffers)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x180604230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"SetupZoneBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.CreateZoneBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::CreateZoneBuffers)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1806030b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"CreateZoneBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.ReleaseZoneBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::ReleaseZoneBuffers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180603f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"ReleaseZoneBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.FirstFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::FirstFrame)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180603990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"FirstFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.CreateHDRPVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::CreateHDRPVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"CreateHDRPVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.CheckCameraSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::CheckCameraSetup)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180602c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"CheckCameraSetup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.SetSRPKeywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::SetSRPKeywords)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180604200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"SetSRPKeywords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::Save)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180604050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::Load)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180603ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.EventInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::EventInit)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x1806031f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"EventInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager.UpdateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::UpdateManager)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1806047c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"UpdateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180604d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager._EventInit_b__105_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::_EventInit_b__105_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806039e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager._EventInit_b__105_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::_EventInit_b__105_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager._EventInit_b__105_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::_EventInit_b__105_2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180604730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager._EventInit_b__105_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::_EventInit_b__105_3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180603c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager._EventInit_b__105_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)()>(&::Enviro::EnviroManager::_EventInit_b__105_4)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806031c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager._EventInit_b__105_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroWeatherType*)>(&::Enviro::EnviroManager::_EventInit_b__105_5)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180604760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_5", {}, {::i2c::type_of<::Enviro::EnviroWeatherType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager._EventInit_b__105_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroWeatherType*, ::Enviro::EnviroZone*)>(&::Enviro::EnviroManager::_EventInit_b__105_6)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180604790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_6", {}, {::i2c::type_of<::Enviro::EnviroWeatherType*>(), ::i2c::type_of<::Enviro::EnviroZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManager._EventInit_b__105_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManager::*)(::Enviro::EnviroEnvironment_Seasons)>(&::Enviro::EnviroManager::_EventInit_b__105_7)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806041d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_7", {}, {::i2c::type_of<::Enviro::EnviroEnvironment_Seasons>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::GeneralObjects*& Enviro::EnviroManager::__cordl_internal_get_Objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Objects;
}
constexpr ::Enviro::GeneralObjects* const& Enviro::EnviroManager::__cordl_internal_get_Objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Objects;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_Objects(::Enviro::GeneralObjects*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Objects = value;
}
constexpr bool& Enviro::EnviroManager::__cordl_internal_get_dontDestroyOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnLoad;
}
constexpr bool const& Enviro::EnviroManager::__cordl_internal_get_dontDestroyOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnLoad;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_dontDestroyOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontDestroyOnLoad = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Enviro::EnviroManager::__cordl_internal_get_Camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Enviro::EnviroManager::__cordl_internal_get_Camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Camera;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_Camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Camera = value;
}
constexpr ::StringW& Enviro::EnviroManager::__cordl_internal_get_CameraTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraTag;
}
constexpr ::StringW const& Enviro::EnviroManager::__cordl_internal_get_CameraTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraTag;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_CameraTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraTag = value;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroCameras*>*& Enviro::EnviroManager::__cordl_internal_get_Cameras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cameras;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroCameras*>* const& Enviro::EnviroManager::__cordl_internal_get_Cameras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cameras;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_Cameras(::System::Collections::Generic::List_1<::Enviro::EnviroCameras*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Cameras = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Enviro::EnviroManager::__cordl_internal_get_optionalFollowTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optionalFollowTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Enviro::EnviroManager::__cordl_internal_get_optionalFollowTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optionalFollowTransform;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_optionalFollowTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optionalFollowTransform = value;
}
constexpr bool& Enviro::EnviroManager::__cordl_internal_get_showSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSetup;
}
constexpr bool const& Enviro::EnviroManager::__cordl_internal_get_showSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSetup;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_showSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSetup = value;
}
constexpr bool& Enviro::EnviroManager::__cordl_internal_get_showModules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showModules;
}
constexpr bool const& Enviro::EnviroManager::__cordl_internal_get_showModules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showModules;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_showModules(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showModules = value;
}
constexpr bool& Enviro::EnviroManager::__cordl_internal_get_showEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEvents;
}
constexpr bool const& Enviro::EnviroManager::__cordl_internal_get_showEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEvents;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_showEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEvents = value;
}
constexpr bool& Enviro::EnviroManager::__cordl_internal_get_showThirdParty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showThirdParty;
}
constexpr bool const& Enviro::EnviroManager::__cordl_internal_get_showThirdParty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showThirdParty;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_showThirdParty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showThirdParty = value;
}
constexpr float_t& Enviro::EnviroManager::__cordl_internal_get_dayNightSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightSwitch;
}
constexpr float_t const& Enviro::EnviroManager::__cordl_internal_get_dayNightSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightSwitch;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_dayNightSwitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightSwitch = value;
}
constexpr bool& Enviro::EnviroManager::__cordl_internal_get_isNight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNight;
}
constexpr bool const& Enviro::EnviroManager::__cordl_internal_get_isNight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNight;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_isNight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isNight = value;
}
constexpr float_t& Enviro::EnviroManager::__cordl_internal_get_solarTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___solarTime;
}
constexpr float_t const& Enviro::EnviroManager::__cordl_internal_get_solarTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___solarTime;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_solarTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___solarTime = value;
}
constexpr float_t& Enviro::EnviroManager::__cordl_internal_get_lunarTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lunarTime;
}
constexpr float_t const& Enviro::EnviroManager::__cordl_internal_get_lunarTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lunarTime;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_lunarTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lunarTime = value;
}
constexpr bool& Enviro::EnviroManager::__cordl_internal_get_notFirstFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notFirstFrame;
}
constexpr bool const& Enviro::EnviroManager::__cordl_internal_get_notFirstFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notFirstFrame;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_notFirstFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notFirstFrame = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroEffectRemovalZone>>*& Enviro::EnviroManager::__cordl_internal_get_removalZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removalZones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroEffectRemovalZone>>* const& Enviro::EnviroManager::__cordl_internal_get_removalZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removalZones;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_removalZones(::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroEffectRemovalZone>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removalZones = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Enviro::EnviroManager::__cordl_internal_get_clearZoneCB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearZoneCB;
}
constexpr ::UnityEngine::ComputeBuffer* const& Enviro::EnviroManager::__cordl_internal_get_clearZoneCB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearZoneCB;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_clearZoneCB(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearZoneCB = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Enviro::EnviroManager::__cordl_internal_get_removeZoneParamsCB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeZoneParamsCB;
}
constexpr ::UnityEngine::ComputeBuffer* const& Enviro::EnviroManager::__cordl_internal_get_removeZoneParamsCB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeZoneParamsCB;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_removeZoneParamsCB(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removeZoneParamsCB = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Enviro::EnviroManager::__cordl_internal_get_clearCBPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearCBPoint;
}
constexpr ::UnityEngine::ComputeBuffer* const& Enviro::EnviroManager::__cordl_internal_get_clearCBPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearCBPoint;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_clearCBPoint(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearCBPoint = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Enviro::EnviroManager::__cordl_internal_get_clearCBSpot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearCBSpot;
}
constexpr ::UnityEngine::ComputeBuffer* const& Enviro::EnviroManager::__cordl_internal_get_clearCBSpot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearCBSpot;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_clearCBSpot(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearCBSpot = value;
}
constexpr ::ArrayW<::Enviro::EnviroManager_ZoneParams>& Enviro::EnviroManager::__cordl_internal_get_removalZoneParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removalZoneParams;
}
constexpr ::ArrayW<::Enviro::EnviroManager_ZoneParams> const& Enviro::EnviroManager::__cordl_internal_get_removalZoneParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removalZoneParams;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_removalZoneParams(::ArrayW<::Enviro::EnviroManager_ZoneParams>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removalZoneParams = value;
}
constexpr float_t& Enviro::EnviroManager::__cordl_internal_get_sunRotationX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunRotationX;
}
constexpr float_t const& Enviro::EnviroManager::__cordl_internal_get_sunRotationX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunRotationX;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_sunRotationX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunRotationX = value;
}
constexpr float_t& Enviro::EnviroManager::__cordl_internal_get_sunRotationY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunRotationY;
}
constexpr float_t const& Enviro::EnviroManager::__cordl_internal_get_sunRotationY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunRotationY;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_sunRotationY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunRotationY = value;
}
constexpr float_t& Enviro::EnviroManager::__cordl_internal_get_moonRotationX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonRotationX;
}
constexpr float_t const& Enviro::EnviroManager::__cordl_internal_get_moonRotationX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonRotationX;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_moonRotationX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonRotationX = value;
}
constexpr float_t& Enviro::EnviroManager::__cordl_internal_get_moonRotationY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonRotationY;
}
constexpr float_t const& Enviro::EnviroManager::__cordl_internal_get_moonRotationY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moonRotationY;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_moonRotationY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moonRotationY = value;
}
constexpr bool& Enviro::EnviroManager::__cordl_internal_get_showNonTimeControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNonTimeControls;
}
constexpr bool const& Enviro::EnviroManager::__cordl_internal_get_showNonTimeControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNonTimeControls;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_showNonTimeControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showNonTimeControls = value;
}
constexpr ::Enviro::EnviroEvents*& Enviro::EnviroManager::__cordl_internal_get_Events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Events;
}
constexpr ::Enviro::EnviroEvents* const& Enviro::EnviroManager::__cordl_internal_get_Events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Events;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_Events(::Enviro::EnviroEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Events = value;
}
constexpr ::Enviro::EnviroManager_HourPassed*& Enviro::EnviroManager::__cordl_internal_get_OnHourPassed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHourPassed;
}
constexpr ::Enviro::EnviroManager_HourPassed* const& Enviro::EnviroManager::__cordl_internal_get_OnHourPassed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHourPassed;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_OnHourPassed(::Enviro::EnviroManager_HourPassed*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHourPassed = value;
}
constexpr ::Enviro::EnviroManager_DayPassed*& Enviro::EnviroManager::__cordl_internal_get_OnDayPassed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDayPassed;
}
constexpr ::Enviro::EnviroManager_DayPassed* const& Enviro::EnviroManager::__cordl_internal_get_OnDayPassed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDayPassed;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_OnDayPassed(::Enviro::EnviroManager_DayPassed*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDayPassed = value;
}
constexpr ::Enviro::EnviroManager_YearPassed*& Enviro::EnviroManager::__cordl_internal_get_OnYearPassed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnYearPassed;
}
constexpr ::Enviro::EnviroManager_YearPassed* const& Enviro::EnviroManager::__cordl_internal_get_OnYearPassed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnYearPassed;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_OnYearPassed(::Enviro::EnviroManager_YearPassed*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnYearPassed = value;
}
constexpr ::Enviro::EnviroManager_WeatherChanged*& Enviro::EnviroManager::__cordl_internal_get_OnWeatherChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWeatherChanged;
}
constexpr ::Enviro::EnviroManager_WeatherChanged* const& Enviro::EnviroManager::__cordl_internal_get_OnWeatherChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWeatherChanged;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_OnWeatherChanged(::Enviro::EnviroManager_WeatherChanged*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnWeatherChanged = value;
}
constexpr ::Enviro::EnviroManager_ZoneWeatherChanged*& Enviro::EnviroManager::__cordl_internal_get_OnZoneWeatherChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnZoneWeatherChanged;
}
constexpr ::Enviro::EnviroManager_ZoneWeatherChanged* const& Enviro::EnviroManager::__cordl_internal_get_OnZoneWeatherChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnZoneWeatherChanged;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_OnZoneWeatherChanged(::Enviro::EnviroManager_ZoneWeatherChanged*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnZoneWeatherChanged = value;
}
constexpr ::Enviro::EnviroManager_SeasonChanged*& Enviro::EnviroManager::__cordl_internal_get_OnSeasonChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSeasonChanged;
}
constexpr ::Enviro::EnviroManager_SeasonChanged* const& Enviro::EnviroManager::__cordl_internal_get_OnSeasonChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSeasonChanged;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_OnSeasonChanged(::Enviro::EnviroManager_SeasonChanged*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSeasonChanged = value;
}
constexpr ::Enviro::EnviroManager_isNightEvent*& Enviro::EnviroManager::__cordl_internal_get_OnNightTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNightTime;
}
constexpr ::Enviro::EnviroManager_isNightEvent* const& Enviro::EnviroManager::__cordl_internal_get_OnNightTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNightTime;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_OnNightTime(::Enviro::EnviroManager_isNightEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnNightTime = value;
}
constexpr ::Enviro::EnviroManager_isDayEvent*& Enviro::EnviroManager::__cordl_internal_get_OnDayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDayTime;
}
constexpr ::Enviro::EnviroManager_isDayEvent* const& Enviro::EnviroManager::__cordl_internal_get_OnDayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDayTime;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_OnDayTime(::Enviro::EnviroManager_isDayEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDayTime = value;
}
constexpr ::UnityW<::Enviro::EnviroZone>& Enviro::EnviroManager::__cordl_internal_get_currentZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentZone;
}
constexpr ::UnityW<::Enviro::EnviroZone> const& Enviro::EnviroManager::__cordl_internal_get_currentZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentZone;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_currentZone(::UnityW<::Enviro::EnviroZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentZone = value;
}
constexpr ::UnityW<::Enviro::EnviroZone>& Enviro::EnviroManager::__cordl_internal_get_defaultZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultZone;
}
constexpr ::UnityW<::Enviro::EnviroZone> const& Enviro::EnviroManager::__cordl_internal_get_defaultZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultZone;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_defaultZone(::UnityW<::Enviro::EnviroZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultZone = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroZone>>*& Enviro::EnviroManager::__cordl_internal_get_zones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroZone>>* const& Enviro::EnviroManager::__cordl_internal_get_zones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_zones(::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroZone>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zones = value;
}
constexpr bool& Enviro::EnviroManager::__cordl_internal_get_updateSkyAndLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateSkyAndLighting;
}
constexpr bool const& Enviro::EnviroManager::__cordl_internal_get_updateSkyAndLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateSkyAndLighting;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_updateSkyAndLighting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateSkyAndLighting = value;
}
constexpr bool& Enviro::EnviroManager::__cordl_internal_get_updateSkyAndLightingHDRP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateSkyAndLightingHDRP;
}
constexpr bool const& Enviro::EnviroManager::__cordl_internal_get_updateSkyAndLightingHDRP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateSkyAndLightingHDRP;
}
constexpr void Enviro::EnviroManager::__cordl_internal_set_updateSkyAndLightingHDRP(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateSkyAndLightingHDRP = value;
}
inline void Enviro::EnviroManager::setStaticF__instance(::UnityW<::Enviro::EnviroManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Enviro::EnviroManager>, "_instance", ::Enviro::EnviroManager*>(std::forward<::UnityW<::Enviro::EnviroManager>>(value));
}
inline ::UnityW<::Enviro::EnviroManager> Enviro::EnviroManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Enviro::EnviroManager>, "_instance", ::Enviro::EnviroManager*>();
}
inline ::UnityW<::Enviro::EnviroManager> Enviro::EnviroManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Enviro::EnviroManager>>(nullptr, ___internal_method);
}
inline void Enviro::EnviroManager::add_OnHourPassed(::Enviro::EnviroManager_HourPassed*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnHourPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_HourPassed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::remove_OnHourPassed(::Enviro::EnviroManager_HourPassed*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnHourPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_HourPassed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::add_OnDayPassed(::Enviro::EnviroManager_DayPassed*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnDayPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_DayPassed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::remove_OnDayPassed(::Enviro::EnviroManager_DayPassed*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnDayPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_DayPassed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::add_OnYearPassed(::Enviro::EnviroManager_YearPassed*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnYearPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_YearPassed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::remove_OnYearPassed(::Enviro::EnviroManager_YearPassed*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnYearPassed", {}, {::i2c::type_of<::Enviro::EnviroManager_YearPassed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::add_OnWeatherChanged(::Enviro::EnviroManager_WeatherChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnWeatherChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_WeatherChanged*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::remove_OnWeatherChanged(::Enviro::EnviroManager_WeatherChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnWeatherChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_WeatherChanged*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::add_OnZoneWeatherChanged(::Enviro::EnviroManager_ZoneWeatherChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnZoneWeatherChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_ZoneWeatherChanged*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::remove_OnZoneWeatherChanged(::Enviro::EnviroManager_ZoneWeatherChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnZoneWeatherChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_ZoneWeatherChanged*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::add_OnSeasonChanged(::Enviro::EnviroManager_SeasonChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnSeasonChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_SeasonChanged*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::remove_OnSeasonChanged(::Enviro::EnviroManager_SeasonChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnSeasonChanged", {}, {::i2c::type_of<::Enviro::EnviroManager_SeasonChanged*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::add_OnNightTime(::Enviro::EnviroManager_isNightEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnNightTime", {}, {::i2c::type_of<::Enviro::EnviroManager_isNightEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::remove_OnNightTime(::Enviro::EnviroManager_isNightEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnNightTime", {}, {::i2c::type_of<::Enviro::EnviroManager_isNightEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::add_OnDayTime(::Enviro::EnviroManager_isDayEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"add_OnDayTime", {}, {::i2c::type_of<::Enviro::EnviroManager_isDayEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::remove_OnDayTime(::Enviro::EnviroManager_isDayEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"remove_OnDayTime", {}, {::i2c::type_of<::Enviro::EnviroManager_isDayEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroManager::NotifyHourPassed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::NotifyDayPassed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::NotifyYearPassed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::NotifyWeatherChanged(::Enviro::EnviroWeatherType*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Enviro::EnviroManager::NotifyZoneWeatherChanged(::Enviro::EnviroWeatherType*  type, ::Enviro::EnviroZone*  zone)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, zone);
}
inline void Enviro::EnviroManager::NotifySeasonChanged(::Enviro::EnviroEnvironment_Seasons  season)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, season);
}
inline void Enviro::EnviroManager::NotifyIsNight()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::NotifyIsDay()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroManager*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::HourPassedInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"HourPassedInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::DayPassedInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"DayPassedInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::YearPassedInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"YearPassedInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::WeatherChangedInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"WeatherChangedInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::SeasonsChangedInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"SeasonsChangedInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::NightTimeInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"NightTimeInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::DayTimeInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"DayTimeInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::ZoneChangedInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"ZoneChangedInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::AddCameraComponents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"AddCameraComponents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::ChangeCamera(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"ChangeCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam);
}
inline void Enviro::EnviroManager::AddAdditionalCamera(::UnityEngine::Camera*  cam, bool  reset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"AddAdditionalCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, reset);
}
inline void Enviro::EnviroManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::CreateGeneralObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"CreateGeneralObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::UpdateNonTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"UpdateNonTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Enviro::EnviroManager::AddRemovalZone(::Enviro::EnviroEffectRemovalZone*  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"AddRemovalZone", {}, {::i2c::type_of<::Enviro::EnviroEffectRemovalZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zone);
}
inline void Enviro::EnviroManager::RemoveRemovaleZone(::Enviro::EnviroEffectRemovalZone*  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"RemoveRemovaleZone", {}, {::i2c::type_of<::Enviro::EnviroEffectRemovalZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone);
}
inline void Enviro::EnviroManager::SetupZoneBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"SetupZoneBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::CreateZoneBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"CreateZoneBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::ReleaseZoneBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"ReleaseZoneBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Enviro::EnviroManager::FirstFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"FirstFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Enviro::EnviroManager::CreateHDRPVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"CreateHDRPVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::CheckCameraSetup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"CheckCameraSetup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::SetSRPKeywords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"SetSRPKeywords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::EventInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"EventInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::UpdateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"UpdateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::_EventInit_b__105_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::_EventInit_b__105_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::_EventInit_b__105_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::_EventInit_b__105_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::_EventInit_b__105_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManager::_EventInit_b__105_5(::Enviro::EnviroWeatherType*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_5", {}, {::i2c::type_of<::Enviro::EnviroWeatherType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Enviro::EnviroManager::_EventInit_b__105_6(::Enviro::EnviroWeatherType*  type, ::Enviro::EnviroZone*  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_6", {}, {::i2c::type_of<::Enviro::EnviroWeatherType*>(), ::i2c::type_of<::Enviro::EnviroZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, zone);
}
inline void Enviro::EnviroManager::_EventInit_b__105_7(::Enviro::EnviroEnvironment_Seasons  season)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManager*>(),
                        {"<EventInit>b__105_7", {}, {::i2c::type_of<::Enviro::EnviroEnvironment_Seasons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, season);
}
inline ::Enviro::EnviroManager* Enviro::EnviroManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManager*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManager::EnviroManager()   {
}
