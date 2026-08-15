#pragma once
// IWYU pragma private; include "Rewired/Internal/StandaloneAxis.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Internal/zzzz__StandaloneAxis_def.hpp"
#include "Rewired/Internal/zzzz__StandaloneAxis_def.hpp"
#include "Rewired/zzzz__AxisCalibration_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x1510;
  constexpr static std::size_t addrs = 0x180eb2f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::*)(float_t)>(&::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::*)(float_t, ::System::AsyncCallback*, ::System::Object*)>(&::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818ef8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::*)(::System::IAsyncResult*)>(&::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::Invoke(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IAsyncResult* Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::BeginInvoke(float_t  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, value, callback, object);
}
inline void Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler::StandaloneAxis_AxisValueChangedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180eb2aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::*)(bool)>(&::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818ef910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::*)(::System::IAsyncResult*)>(&::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::Invoke(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IAsyncResult* Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::BeginInvoke(bool  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, value, callback, object);
}
inline void Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler::StandaloneAxis_ButtonValueChangedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::*)()>(&::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::*)(::System::AsyncCallback*, ::System::Object*)>(&::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::*)(::System::IAsyncResult*)>(&::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler::StandaloneAxis_ButtonDownEventHandler()   {
}
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::*)()>(&::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::*)(::System::AsyncCallback*, ::System::Object*)>(&::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::*)(::System::IAsyncResult*)>(&::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(),
                    {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler::StandaloneAxis_ButtonUpEventHandler()   {
}
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_buttonActivationThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_buttonActivationThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_buttonActivationThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.set_buttonActivationThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(float_t)>(&::Rewired::Internal::StandaloneAxis::set_buttonActivationThreshold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f5e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"set_buttonActivationThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_calibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibration* (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_calibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_calibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.VEgPIbCOHcqrGXQiawbTTZSyuwHv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::AxisCalibration*)>(&::Rewired::Internal::StandaloneAxis::VEgPIbCOHcqrGXQiawbTTZSyuwHv)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f5730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"VEgPIbCOHcqrGXQiawbTTZSyuwHv", {}, {::i2c::type_of<::Rewired::AxisCalibration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_valueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_valueRaw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_valueRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.istCMQRyTPKBXQmFOgidGOQtoItD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(float_t)>(&::Rewired::Internal::StandaloneAxis::istCMQRyTPKBXQmFOgidGOQtoItD)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f5cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"istCMQRyTPKBXQmFOgidGOQtoItD", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_valueRawPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_valueRawPrev)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_valueRawPrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.GxBeBHOLNJcBsDAkoCPgOJVOpLNV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(float_t)>(&::Rewired::Internal::StandaloneAxis::GxBeBHOLNJcBsDAkoCPgOJVOpLNV)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f5220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"GxBeBHOLNJcBsDAkoCPgOJVOpLNV", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_valueRawDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_valueRawDelta)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f5c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_valueRawDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f5ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_valuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_valuePrev)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f5c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_valuePrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_valueDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_valueDelta)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f5c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_valueDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_rawButtonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_rawButtonValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f5b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_rawButtonValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_rawButtonValuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_rawButtonValuePrev)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f5b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_rawButtonValuePrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_buttonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_buttonValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f5b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_buttonValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_buttonValuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_buttonValuePrev)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f5aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_buttonValuePrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_rawMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_rawMin)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f5bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_rawMin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_rawMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_rawMax)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f5b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_rawMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.get_rawZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::get_rawZero)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f5be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_rawZero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.AiBMFlplLGAaoWqAuDybWFHFXgEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::AiBMFlplLGAaoWqAuDybWFHFXgEx)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"AiBMFlplLGAaoWqAuDybWFHFXgEx", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.OrybYAzuUTmXdgfYyXWqzQitnlYd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::OrybYAzuUTmXdgfYyXWqzQitnlYd)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"OrybYAzuUTmXdgfYyXWqzQitnlYd", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.add_AxisValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::add_AxisValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_AxisValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.remove_AxisValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::remove_AxisValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_AxisValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.qyhRmiFQQYUgBpPYTcYQncfbWndu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::qyhRmiFQQYUgBpPYTcYQncfbWndu)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f58a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"qyhRmiFQQYUgBpPYTcYQncfbWndu", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.uLAEItJcqANOHALXExrFbRswQhYrB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::uLAEItJcqANOHALXExrFbRswQhYrB)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"uLAEItJcqANOHALXExrFbRswQhYrB", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.add_RawAxisValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::add_RawAxisValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f58a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_RawAxisValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.remove_RawAxisValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::remove_RawAxisValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_RawAxisValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.dpqhgGyoxZGYSVQhkabyxHePFHJx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*)>(&::Rewired::Internal::StandaloneAxis::dpqhgGyoxZGYSVQhkabyxHePFHJx)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"dpqhgGyoxZGYSVQhkabyxHePFHJx", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.NhFSJoLakhIQRmiADgLJZcoSTKVE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*)>(&::Rewired::Internal::StandaloneAxis::NhFSJoLakhIQRmiADgLJZcoSTKVE)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f52b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"NhFSJoLakhIQRmiADgLJZcoSTKVE", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.add_ButtonDownEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*)>(&::Rewired::Internal::StandaloneAxis::add_ButtonDownEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_ButtonDownEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.remove_ButtonDownEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*)>(&::Rewired::Internal::StandaloneAxis::remove_ButtonDownEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f52b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_ButtonDownEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.DXpABLizEnQUMEwGAfvOacsrCnQd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*)>(&::Rewired::Internal::StandaloneAxis::DXpABLizEnQUMEwGAfvOacsrCnQd)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"DXpABLizEnQUMEwGAfvOacsrCnQd", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.szHfOwTGNsYhBmTBcBhVRFGNkdhm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*)>(&::Rewired::Internal::StandaloneAxis::szHfOwTGNsYhBmTBcBhVRFGNkdhm)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"szHfOwTGNsYhBmTBcBhVRFGNkdhm", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.add_ButtonUpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*)>(&::Rewired::Internal::StandaloneAxis::add_ButtonUpEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_ButtonUpEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.remove_ButtonUpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*)>(&::Rewired::Internal::StandaloneAxis::remove_ButtonUpEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_ButtonUpEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.XpYQRGuwnSACzzUVMGWuhcHgadxd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::XpYQRGuwnSACzzUVMGWuhcHgadxd)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"XpYQRGuwnSACzzUVMGWuhcHgadxd", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.QTcIDOWFTPfZKvDkADHWrRnjumib
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::QTcIDOWFTPfZKvDkADHWrRnjumib)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f53b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"QTcIDOWFTPfZKvDkADHWrRnjumib", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.add_ButtonValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::add_ButtonValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_ButtonValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.remove_ButtonValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::remove_ButtonValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f53b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_ButtonValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.ytUTTilQkoqvUFgOmXDvrDrIFFEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*)>(&::Rewired::Internal::StandaloneAxis::ytUTTilQkoqvUFgOmXDvrDrIFFEx)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"ytUTTilQkoqvUFgOmXDvrDrIFFEx", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.GeqOltbPHLopeKMjQjhzeEGxBdQEb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*)>(&::Rewired::Internal::StandaloneAxis::GeqOltbPHLopeKMjQjhzeEGxBdQEb)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f51a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"GeqOltbPHLopeKMjQjhzeEGxBdQEb", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.add_RawButtonDownEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*)>(&::Rewired::Internal::StandaloneAxis::add_RawButtonDownEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_RawButtonDownEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.remove_RawButtonDownEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*)>(&::Rewired::Internal::StandaloneAxis::remove_RawButtonDownEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f51a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_RawButtonDownEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.JCycbvzKPOMabBoRlHLHfxquPgjX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*)>(&::Rewired::Internal::StandaloneAxis::JCycbvzKPOMabBoRlHLHfxquPgjX)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"JCycbvzKPOMabBoRlHLHfxquPgjX", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.cKVzZaqbUUXKMcFJPHjiYqbqSExc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*)>(&::Rewired::Internal::StandaloneAxis::cKVzZaqbUUXKMcFJPHjiYqbqSExc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"cKVzZaqbUUXKMcFJPHjiYqbqSExc", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.add_RawButtonUpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*)>(&::Rewired::Internal::StandaloneAxis::add_RawButtonUpEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_RawButtonUpEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.remove_RawButtonUpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*)>(&::Rewired::Internal::StandaloneAxis::remove_RawButtonUpEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_RawButtonUpEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.rarZpNLLeVpiQGSULhqMOzsdABWk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::rarZpNLLeVpiQGSULhqMOzsdABWk)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f59a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"rarZpNLLeVpiQGSULhqMOzsdABWk", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.jSgETejxVSNVimdEZLoaDoUAJSinc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::jSgETejxVSNVimdEZLoaDoUAJSinc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"jSgETejxVSNVimdEZLoaDoUAJSinc", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.add_RawButtonValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::add_RawButtonValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f59a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_RawButtonValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.remove_RawButtonValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*)>(&::Rewired::Internal::StandaloneAxis::remove_RawButtonValueChangedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f5cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_RawButtonValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f57d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.SetRawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)(float_t)>(&::Rewired::Internal::StandaloneAxis::SetRawValue)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1818f5430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"SetRawValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::StandaloneAxis::*)()>(&::Rewired::Internal::StandaloneAxis::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f5080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::StandaloneAxis.CreateRelative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::StandaloneAxis* (*)()>(&::Rewired::Internal::StandaloneAxis::CreateRelative)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f50b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"CreateRelative", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Rewired::Internal::StandaloneAxis::__cordl_internal_get__buttonActivationThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonActivationThreshold;
}
constexpr float_t const& Rewired::Internal::StandaloneAxis::__cordl_internal_get__buttonActivationThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonActivationThreshold;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set__buttonActivationThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonActivationThreshold = value;
}
constexpr ::Rewired::AxisCalibration*& Rewired::Internal::StandaloneAxis::__cordl_internal_get__calibration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibration;
}
constexpr ::Rewired::AxisCalibration* const& Rewired::Internal::StandaloneAxis::__cordl_internal_get__calibration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibration;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set__calibration(::Rewired::AxisCalibration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calibration = value;
}
constexpr float_t& Rewired::Internal::StandaloneAxis::__cordl_internal_get__valueRaw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueRaw;
}
constexpr float_t const& Rewired::Internal::StandaloneAxis::__cordl_internal_get__valueRaw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueRaw;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set__valueRaw(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueRaw = value;
}
constexpr float_t& Rewired::Internal::StandaloneAxis::__cordl_internal_get__valueRawPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueRawPrev;
}
constexpr float_t const& Rewired::Internal::StandaloneAxis::__cordl_internal_get__valueRawPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueRawPrev;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set__valueRawPrev(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueRawPrev = value;
}
constexpr ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*& Rewired::Internal::StandaloneAxis::__cordl_internal_get_ZmeXODRKtAoGjvOzINulVpjdWYSj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZmeXODRKtAoGjvOzINulVpjdWYSj;
}
constexpr ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* const& Rewired::Internal::StandaloneAxis::__cordl_internal_get_ZmeXODRKtAoGjvOzINulVpjdWYSj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZmeXODRKtAoGjvOzINulVpjdWYSj;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set_ZmeXODRKtAoGjvOzINulVpjdWYSj(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZmeXODRKtAoGjvOzINulVpjdWYSj = value;
}
constexpr ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*& Rewired::Internal::StandaloneAxis::__cordl_internal_get_KLPIhoPOMHCSyidbOpvBXVbgkIBGA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KLPIhoPOMHCSyidbOpvBXVbgkIBGA;
}
constexpr ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* const& Rewired::Internal::StandaloneAxis::__cordl_internal_get_KLPIhoPOMHCSyidbOpvBXVbgkIBGA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KLPIhoPOMHCSyidbOpvBXVbgkIBGA;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set_KLPIhoPOMHCSyidbOpvBXVbgkIBGA(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KLPIhoPOMHCSyidbOpvBXVbgkIBGA = value;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*& Rewired::Internal::StandaloneAxis::__cordl_internal_get_zuWYzBCgYbTZISNuoDsQZKbGbyTf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zuWYzBCgYbTZISNuoDsQZKbGbyTf;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* const& Rewired::Internal::StandaloneAxis::__cordl_internal_get_zuWYzBCgYbTZISNuoDsQZKbGbyTf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zuWYzBCgYbTZISNuoDsQZKbGbyTf;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set_zuWYzBCgYbTZISNuoDsQZKbGbyTf(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zuWYzBCgYbTZISNuoDsQZKbGbyTf = value;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*& Rewired::Internal::StandaloneAxis::__cordl_internal_get_NzUDYPeUUpRowQFCBrpSjynQvGxg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NzUDYPeUUpRowQFCBrpSjynQvGxg;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* const& Rewired::Internal::StandaloneAxis::__cordl_internal_get_NzUDYPeUUpRowQFCBrpSjynQvGxg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NzUDYPeUUpRowQFCBrpSjynQvGxg;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set_NzUDYPeUUpRowQFCBrpSjynQvGxg(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NzUDYPeUUpRowQFCBrpSjynQvGxg = value;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*& Rewired::Internal::StandaloneAxis::__cordl_internal_get_wSocTChPNsVHaWiPGKFTGUXqRKORA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wSocTChPNsVHaWiPGKFTGUXqRKORA;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* const& Rewired::Internal::StandaloneAxis::__cordl_internal_get_wSocTChPNsVHaWiPGKFTGUXqRKORA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wSocTChPNsVHaWiPGKFTGUXqRKORA;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set_wSocTChPNsVHaWiPGKFTGUXqRKORA(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wSocTChPNsVHaWiPGKFTGUXqRKORA = value;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*& Rewired::Internal::StandaloneAxis::__cordl_internal_get_mUcGfZBsrHaRZVhWqxMHlbyZFMvHA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mUcGfZBsrHaRZVhWqxMHlbyZFMvHA;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* const& Rewired::Internal::StandaloneAxis::__cordl_internal_get_mUcGfZBsrHaRZVhWqxMHlbyZFMvHA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mUcGfZBsrHaRZVhWqxMHlbyZFMvHA;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set_mUcGfZBsrHaRZVhWqxMHlbyZFMvHA(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mUcGfZBsrHaRZVhWqxMHlbyZFMvHA = value;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*& Rewired::Internal::StandaloneAxis::__cordl_internal_get_cHrJAgkPGHENslmylrSLQlDRfaig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cHrJAgkPGHENslmylrSLQlDRfaig;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* const& Rewired::Internal::StandaloneAxis::__cordl_internal_get_cHrJAgkPGHENslmylrSLQlDRfaig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cHrJAgkPGHENslmylrSLQlDRfaig;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set_cHrJAgkPGHENslmylrSLQlDRfaig(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cHrJAgkPGHENslmylrSLQlDRfaig = value;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*& Rewired::Internal::StandaloneAxis::__cordl_internal_get_biDTGFCErMDxMRrblitZIsMmKNdp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biDTGFCErMDxMRrblitZIsMmKNdp;
}
constexpr ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* const& Rewired::Internal::StandaloneAxis::__cordl_internal_get_biDTGFCErMDxMRrblitZIsMmKNdp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biDTGFCErMDxMRrblitZIsMmKNdp;
}
constexpr void Rewired::Internal::StandaloneAxis::__cordl_internal_set_biDTGFCErMDxMRrblitZIsMmKNdp(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___biDTGFCErMDxMRrblitZIsMmKNdp = value;
}
inline float_t Rewired::Internal::StandaloneAxis::get_buttonActivationThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_buttonActivationThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis::set_buttonActivationThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"set_buttonActivationThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::AxisCalibration* Rewired::Internal::StandaloneAxis::get_calibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_calibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibration*>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis::VEgPIbCOHcqrGXQiawbTTZSyuwHv(::Rewired::AxisCalibration*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"VEgPIbCOHcqrGXQiawbTTZSyuwHv", {}, {::i2c::type_of<::Rewired::AxisCalibration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline float_t Rewired::Internal::StandaloneAxis::get_valueRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_valueRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis::istCMQRyTPKBXQmFOgidGOQtoItD(float_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"istCMQRyTPKBXQmFOgidGOQtoItD", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline float_t Rewired::Internal::StandaloneAxis::get_valueRawPrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_valueRawPrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis::GxBeBHOLNJcBsDAkoCPgOJVOpLNV(float_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"GxBeBHOLNJcBsDAkoCPgOJVOpLNV", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline float_t Rewired::Internal::StandaloneAxis::get_valueRawDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_valueRawDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::Internal::StandaloneAxis::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::Internal::StandaloneAxis::get_valuePrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_valuePrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::Internal::StandaloneAxis::get_valueDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_valueDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Rewired::Internal::StandaloneAxis::get_rawButtonValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_rawButtonValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Internal::StandaloneAxis::get_rawButtonValuePrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_rawButtonValuePrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Internal::StandaloneAxis::get_buttonValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_buttonValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Internal::StandaloneAxis::get_buttonValuePrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_buttonValuePrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Rewired::Internal::StandaloneAxis::get_rawMin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_rawMin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::Internal::StandaloneAxis::get_rawMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_rawMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::Internal::StandaloneAxis::get_rawZero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"get_rawZero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis::AiBMFlplLGAaoWqAuDybWFHFXgEx(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"AiBMFlplLGAaoWqAuDybWFHFXgEx", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::OrybYAzuUTmXdgfYyXWqzQitnlYd(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"OrybYAzuUTmXdgfYyXWqzQitnlYd", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::add_AxisValueChangedEvent(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_AxisValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::remove_AxisValueChangedEvent(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_AxisValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::qyhRmiFQQYUgBpPYTcYQncfbWndu(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"qyhRmiFQQYUgBpPYTcYQncfbWndu", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::uLAEItJcqANOHALXExrFbRswQhYrB(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"uLAEItJcqANOHALXExrFbRswQhYrB", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::add_RawAxisValueChangedEvent(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_RawAxisValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::remove_RawAxisValueChangedEvent(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_RawAxisValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::dpqhgGyoxZGYSVQhkabyxHePFHJx(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"dpqhgGyoxZGYSVQhkabyxHePFHJx", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::NhFSJoLakhIQRmiADgLJZcoSTKVE(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"NhFSJoLakhIQRmiADgLJZcoSTKVE", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::add_ButtonDownEvent(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_ButtonDownEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::remove_ButtonDownEvent(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_ButtonDownEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::DXpABLizEnQUMEwGAfvOacsrCnQd(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"DXpABLizEnQUMEwGAfvOacsrCnQd", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::szHfOwTGNsYhBmTBcBhVRFGNkdhm(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"szHfOwTGNsYhBmTBcBhVRFGNkdhm", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::add_ButtonUpEvent(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_ButtonUpEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::remove_ButtonUpEvent(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_ButtonUpEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::XpYQRGuwnSACzzUVMGWuhcHgadxd(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"XpYQRGuwnSACzzUVMGWuhcHgadxd", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::QTcIDOWFTPfZKvDkADHWrRnjumib(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"QTcIDOWFTPfZKvDkADHWrRnjumib", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::add_ButtonValueChangedEvent(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_ButtonValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::remove_ButtonValueChangedEvent(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_ButtonValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::ytUTTilQkoqvUFgOmXDvrDrIFFEx(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"ytUTTilQkoqvUFgOmXDvrDrIFFEx", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::GeqOltbPHLopeKMjQjhzeEGxBdQEb(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"GeqOltbPHLopeKMjQjhzeEGxBdQEb", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::add_RawButtonDownEvent(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_RawButtonDownEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::remove_RawButtonDownEvent(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_RawButtonDownEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::JCycbvzKPOMabBoRlHLHfxquPgjX(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"JCycbvzKPOMabBoRlHLHfxquPgjX", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::cKVzZaqbUUXKMcFJPHjiYqbqSExc(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"cKVzZaqbUUXKMcFJPHjiYqbqSExc", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::add_RawButtonUpEvent(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_RawButtonUpEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::remove_RawButtonUpEvent(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_RawButtonUpEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::rarZpNLLeVpiQGSULhqMOzsdABWk(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"rarZpNLLeVpiQGSULhqMOzsdABWk", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::jSgETejxVSNVimdEZLoaDoUAJSinc(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"jSgETejxVSNVimdEZLoaDoUAJSinc", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::StandaloneAxis::add_RawButtonValueChangedEvent(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"add_RawButtonValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::remove_RawButtonValueChangedEvent(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"remove_RawButtonValueChangedEvent", {}, {::i2c::type_of<::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::StandaloneAxis::SetRawValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"SetRawValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Internal::StandaloneAxis::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Internal::StandaloneAxis* Rewired::Internal::StandaloneAxis::CreateRelative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::StandaloneAxis*>(),
                        {"CreateRelative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::StandaloneAxis*>(nullptr, ___internal_method);
}
inline ::Rewired::Internal::StandaloneAxis* Rewired::Internal::StandaloneAxis::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::StandaloneAxis*>());
}
// Ctor Parameters []
constexpr ::Rewired::Internal::StandaloneAxis::StandaloneAxis()   {
}
