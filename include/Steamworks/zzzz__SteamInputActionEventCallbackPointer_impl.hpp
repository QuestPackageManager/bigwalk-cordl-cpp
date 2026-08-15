#pragma once
// IWYU pragma private; include "Steamworks/SteamInputActionEventCallbackPointer.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Steamworks/zzzz__SteamInputActionEventCallbackPointer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamInputActionEventCallbackPointer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamInputActionEventCallbackPointer::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::SteamInputActionEventCallbackPointer::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInputActionEventCallbackPointer.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamInputActionEventCallbackPointer::*)(::System::IntPtr)>(&::Steamworks::SteamInputActionEventCallbackPointer::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(),
                    {::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInputActionEventCallbackPointer.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::SteamInputActionEventCallbackPointer::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::SteamInputActionEventCallbackPointer::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180502370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(),
                    {::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInputActionEventCallbackPointer.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamInputActionEventCallbackPointer::*)(::System::IAsyncResult*)>(&::Steamworks::SteamInputActionEventCallbackPointer::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(),
                    {::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::SteamInputActionEventCallbackPointer::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::SteamInputActionEventCallbackPointer::Invoke(::System::IntPtr  SteamInputActionEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, SteamInputActionEvent);
}
inline ::System::IAsyncResult* Steamworks::SteamInputActionEventCallbackPointer::BeginInvoke(::System::IntPtr  SteamInputActionEvent, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, SteamInputActionEvent, callback, object);
}
inline void Steamworks::SteamInputActionEventCallbackPointer::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamInputActionEventCallbackPointer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::SteamInputActionEventCallbackPointer* Steamworks::SteamInputActionEventCallbackPointer::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::SteamInputActionEventCallbackPointer*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInputActionEventCallbackPointer::SteamInputActionEventCallbackPointer()   {
}
