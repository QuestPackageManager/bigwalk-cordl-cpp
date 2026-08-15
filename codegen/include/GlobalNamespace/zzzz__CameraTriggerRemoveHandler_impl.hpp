#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraTriggerRemoveHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__CameraTriggerRemoveHandler_def.hpp"
#include "GlobalNamespace/zzzz__CameraTrigger_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerRemoveHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerRemoveHandler::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::CameraTriggerRemoveHandler::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803e3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerRemoveHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerRemoveHandler::*)(::GlobalNamespace::CameraTrigger*)>(&::GlobalNamespace::CameraTriggerRemoveHandler::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(),
                    {::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerRemoveHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::CameraTriggerRemoveHandler::*)(::GlobalNamespace::CameraTrigger*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::CameraTriggerRemoveHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(),
                    {::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerRemoveHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerRemoveHandler::*)(::System::IAsyncResult*)>(&::GlobalNamespace::CameraTriggerRemoveHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(),
                    {::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CameraTriggerRemoveHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::CameraTriggerRemoveHandler::Invoke(::GlobalNamespace::CameraTrigger*  cameraTrigger)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraTrigger);
}
inline ::System::IAsyncResult* GlobalNamespace::CameraTriggerRemoveHandler::BeginInvoke(::GlobalNamespace::CameraTrigger*  cameraTrigger, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, cameraTrigger, callback, object);
}
inline void GlobalNamespace::CameraTriggerRemoveHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CameraTriggerRemoveHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::CameraTriggerRemoveHandler* GlobalNamespace::CameraTriggerRemoveHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CameraTriggerRemoveHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CameraTriggerRemoveHandler::CameraTriggerRemoveHandler()   {
}
