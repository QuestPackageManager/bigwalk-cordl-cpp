#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/DebugUtility.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__DebugUtility_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__DebugUtility_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::*)(::System::Object*, ::System::IntPtr)>(&::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182565f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182565d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182565cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::*)(::System::IAsyncResult*)>(&::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::Invoke(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, ::UnityEngine::Color  color, float_t  duration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, up, color, duration);
}
inline ::System::IAsyncResult* WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::BeginInvoke(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, ::UnityEngine::Color  color, float_t  duration, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, position, up, color, duration, callback, object);
}
inline void WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine* WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(object, method));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine::DebugUtility_DrawLine()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::DebugUtility.DrawCross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*, ::UnityEngine::Vector3, float_t, ::UnityEngine::Color, float_t)>(&::WaveHarmonic::Crest::Utility::DebugUtility::DrawCross)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x182565550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility*>(),
                        {"DrawCross", {}, {::i2c::type_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::DebugUtility.DrawCross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Color, float_t)>(&::WaveHarmonic::Crest::Utility::DebugUtility::DrawCross)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x182565800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility*>(),
                        {"DrawCross", {}, {::i2c::type_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Utility::DebugUtility::DrawCross(::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*  draw, ::UnityEngine::Vector3  position, float_t  r, ::UnityEngine::Color  color, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility*>(),
                        {"DrawCross", {}, {::i2c::type_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, position, r, color, duration);
}
inline void WaveHarmonic::Crest::Utility::DebugUtility::DrawCross(::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*  draw, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, float_t  r, ::UnityEngine::Color  color, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::DebugUtility*>(),
                        {"DrawCross", {}, {::i2c::type_of<::WaveHarmonic::Crest::Utility::DebugUtility_DrawLine*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, position, up, r, color, duration);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Utility::DebugUtility::DebugUtility()   {
}
