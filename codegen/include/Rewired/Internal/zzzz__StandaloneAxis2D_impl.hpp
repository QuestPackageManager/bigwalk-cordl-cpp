#pragma once
// IWYU pragma private; include "Rewired/Internal/StandaloneAxis2D.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Internal/zzzz__StandaloneAxis2D_def.hpp"
#include "Rewired/Internal/zzzz__StandaloneAxis2D_def.hpp"
#include "Rewired/Internal/zzzz__StandaloneAxis_def.hpp"
#include "Rewired/zzzz__Axis2DCalibration_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180eb2dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::*)(::UnityEngine::Vector2)>(&::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::*)(::UnityEngine::Vector2, ::System::AsyncCallback*, ::System::Object*)>(&::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818fc870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::*)(::System::IAsyncResult*)>(&::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::Invoke(::UnityEngine::Vector2  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IAsyncResult* Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::BeginInvoke(::UnityEngine::Vector2  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, value, callback, object);
}
inline void Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler::StandaloneAxis2D_ValueChangedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.get_calibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Axis2DCalibration* (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::get_calibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_calibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.get_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::StandaloneAxis* (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::get_xAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_xAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.get_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::StandaloneAxis* (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::get_yAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_yAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::get_value)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f4e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.get_valuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::get_valuePrev)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f4e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_valuePrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.get_valueDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::get_valueDelta)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1818f4d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_valueDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.get_rawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::get_rawValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818f4c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_rawValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.get_rawValuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::get_rawValuePrev)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818f4b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_rawValuePrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.get_rawValueDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::get_rawValueDelta)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818f4ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_rawValueDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.get_rawZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::get_rawZero)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f4cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_rawZero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.add__ValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis2D::add__ValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"add__ValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.remove__ValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis2D::remove__ValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f4f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"remove__ValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.add_ValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis2D::add_ValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"add_ValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.remove_ValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis2D::remove_ValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f4f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"remove_ValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.add__RawValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis2D::add__RawValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f49e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"add__RawValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.remove__RawValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis2D::remove__RawValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f4f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"remove__RawValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.add_RawValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis2D::add_RawValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f49e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"add_RawValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.remove_RawValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis2D::remove_RawValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f4f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"remove_RawValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818f47c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis*, ::Rewired::Internal::StandaloneAxis*)>(&::Rewired::Internal::StandaloneAxis2D::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818f48b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis*>(), ::i2c::type_of<::Rewired::Internal::StandaloneAxis*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.SetRawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(float_t, float_t)>(&::Rewired::Internal::StandaloneAxis2D::SetRawValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f4220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"SetRawValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.SetRawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(::UnityEngine::Vector2)>(&::Rewired::Internal::StandaloneAxis2D::SetRawValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f4290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"SetRawValue", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::Clear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818f3d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f4170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.Deinitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::Deinitialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f3f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"Deinitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.EvalAndSendValueChangeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::EvalAndSendValueChangeEvents)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1818f3f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"EvalAndSendValueChangeEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::Subscribe)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1818f4300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"Subscribe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)()>(&::Rewired::Internal::StandaloneAxis2D::Unsubscribe)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1818f4560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"Unsubscribe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.GetCalibratedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis*, ::Rewired::Internal::StandaloneAxis*)>(&::Rewired::Internal::StandaloneAxis2D::GetCalibratedValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f4100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis*>(), ::i2c::type_of<::Rewired::Internal::StandaloneAxis*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.GetCalibratedValuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Internal::StandaloneAxis2D::*)(::Rewired::Internal::StandaloneAxis*, ::Rewired::Internal::StandaloneAxis*)>(&::Rewired::Internal::StandaloneAxis2D::GetCalibratedValuePrev)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f4090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"GetCalibratedValuePrev", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis*>(), ::i2c::type_of<::Rewired::Internal::StandaloneAxis*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.OnAxisValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(float_t)>(&::Rewired::Internal::StandaloneAxis2D::OnAxisValueChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f41d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"OnAxisValueChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.OnAxisRawValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis2D::*)(float_t)>(&::Rewired::Internal::StandaloneAxis2D::OnAxisRawValueChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"OnAxisRawValueChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis2D.CreateRelative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::StandaloneAxis2D* (*)()>(&::Rewired::Internal::StandaloneAxis2D::CreateRelative)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1818f3da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"CreateRelative", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Axis2DCalibration*& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__calibration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibration;
}
constexpr ::Rewired::Axis2DCalibration* const& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__calibration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibration;
}
constexpr void Rewired::Internal::StandaloneAxis2D::__cordl_internal_set__calibration(::Rewired::Axis2DCalibration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calibration = value;
}
constexpr ::Rewired::Internal::StandaloneAxis*& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__xAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xAxis;
}
constexpr ::Rewired::Internal::StandaloneAxis* const& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__xAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xAxis;
}
constexpr void Rewired::Internal::StandaloneAxis2D::__cordl_internal_set__xAxis(::Rewired::Internal::StandaloneAxis*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xAxis = value;
}
constexpr ::Rewired::Internal::StandaloneAxis*& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__yAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr ::Rewired::Internal::StandaloneAxis* const& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__yAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr void Rewired::Internal::StandaloneAxis2D::__cordl_internal_set__yAxis(::Rewired::Internal::StandaloneAxis*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yAxis = value;
}
constexpr bool& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__allowEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowEvents;
}
constexpr bool const& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__allowEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowEvents;
}
constexpr void Rewired::Internal::StandaloneAxis2D::__cordl_internal_set__allowEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowEvents = value;
}
constexpr ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__ValueChangedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ValueChangedEvent;
}
constexpr ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* const& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__ValueChangedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ValueChangedEvent;
}
constexpr void Rewired::Internal::StandaloneAxis2D::__cordl_internal_set__ValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ValueChangedEvent = value;
}
constexpr ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__RawValueChangedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RawValueChangedEvent;
}
constexpr ::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler* const& Rewired::Internal::StandaloneAxis2D::__cordl_internal_get__RawValueChangedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RawValueChangedEvent;
}
constexpr void Rewired::Internal::StandaloneAxis2D::__cordl_internal_set__RawValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RawValueChangedEvent = value;
}
inline ::Rewired::Axis2DCalibration* Rewired::Internal::StandaloneAxis2D::get_calibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_calibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Axis2DCalibration*>(this, ___internal_method);
}
inline ::Rewired::Internal::StandaloneAxis* Rewired::Internal::StandaloneAxis2D::get_xAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_xAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::StandaloneAxis*>(this, ___internal_method);
}
inline ::Rewired::Internal::StandaloneAxis* Rewired::Internal::StandaloneAxis2D::get_yAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_yAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::StandaloneAxis*>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Internal::StandaloneAxis2D::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Internal::StandaloneAxis2D::get_valuePrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_valuePrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Internal::StandaloneAxis2D::get_valueDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_valueDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Internal::StandaloneAxis2D::get_rawValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_rawValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Internal::StandaloneAxis2D::get_rawValuePrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_rawValuePrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Internal::StandaloneAxis2D::get_rawValueDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_rawValueDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Internal::StandaloneAxis2D::get_rawZero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"get_rawZero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis2D::add__ValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"add__ValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis2D::remove__ValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"remove__ValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis2D::add_ValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"add_ValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis2D::remove_ValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"remove_ValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis2D::add__RawValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"add__RawValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis2D::remove__RawValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"remove__RawValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis2D::add_RawValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"add_RawValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis2D::remove_RawValueChangedEvent(::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"remove_RawValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis2D_ValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis2D::_ctor(::Rewired::Internal::StandaloneAxis*  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::StandaloneAxis*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis*>(), ::i2c::type_of<::Rewired::Internal::StandaloneAxis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Internal::StandaloneAxis2D::SetRawValue(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"SetRawValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y);
}
inline void Rewired::Internal::StandaloneAxis2D::SetRawValue(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"SetRawValue", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis2D::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis2D::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis2D::Deinitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"Deinitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis2D::EvalAndSendValueChangeEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"EvalAndSendValueChangeEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis2D::Subscribe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"Subscribe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis2D::Unsubscribe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"Unsubscribe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Internal::StandaloneAxis2D::GetCalibratedValue(::Rewired::Internal::StandaloneAxis*  xAxis, ::Rewired::Internal::StandaloneAxis*  yAxis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"GetCalibratedValue", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis*>(), ::i2c::type_of<::Rewired::Internal::StandaloneAxis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, xAxis, yAxis);
}
inline ::UnityEngine::Vector2 Rewired::Internal::StandaloneAxis2D::GetCalibratedValuePrev(::Rewired::Internal::StandaloneAxis*  xAxis, ::Rewired::Internal::StandaloneAxis*  yAxis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"GetCalibratedValuePrev", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis*>(), ::i2c::type_of<::Rewired::Internal::StandaloneAxis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, xAxis, yAxis);
}
inline void Rewired::Internal::StandaloneAxis2D::OnAxisValueChanged(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"OnAxisValueChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis2D::OnAxisRawValueChanged(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"OnAxisRawValueChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Internal::StandaloneAxis2D* Rewired::Internal::StandaloneAxis2D::CreateRelative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis2D*>(),
                        {"CreateRelative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::StandaloneAxis2D*>(nullptr, ___internal_method);
}
inline ::Rewired::Internal::StandaloneAxis2D* Rewired::Internal::StandaloneAxis2D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::StandaloneAxis2D*>());
}
inline ::Rewired::Internal::StandaloneAxis2D* Rewired::Internal::StandaloneAxis2D::New_ctor(::Rewired::Internal::StandaloneAxis*  _cordl_fixed_empty_name_whitespace, ::Rewired::Internal::StandaloneAxis*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::StandaloneAxis2D*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Internal::StandaloneAxis2D::StandaloneAxis2D()   {
}
