#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Events/EOSResultEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Events/zzzz__EOSResultEventHandler_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::*)(::Epic::OnlineServices::Result)>(&::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::*)(::Epic::OnlineServices::Result, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180539140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::Invoke(::Epic::OnlineServices::Result  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::BeginInvoke(::Epic::OnlineServices::Result  result, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, result, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler* PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Events::EOSResultEventHandler::EOSResultEventHandler()   {
}
