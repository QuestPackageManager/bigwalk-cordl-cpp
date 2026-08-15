#pragma once
// IWYU pragma private; include "Steamworks/FSteamNetworkingSocketsDebugOutput.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Steamworks/zzzz__FSteamNetworkingSocketsDebugOutput_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingSocketsDebugOutputType_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::FSteamNetworkingSocketsDebugOutput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::FSteamNetworkingSocketsDebugOutput::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::FSteamNetworkingSocketsDebugOutput::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805a9c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FSteamNetworkingSocketsDebugOutput.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::FSteamNetworkingSocketsDebugOutput::*)(::Steamworks::ESteamNetworkingSocketsDebugOutputType, ::System::Text::StringBuilder*)>(&::Steamworks::FSteamNetworkingSocketsDebugOutput::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(),
                    {::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FSteamNetworkingSocketsDebugOutput.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::FSteamNetworkingSocketsDebugOutput::*)(::Steamworks::ESteamNetworkingSocketsDebugOutputType, ::System::Text::StringBuilder*, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::FSteamNetworkingSocketsDebugOutput::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805a9b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(),
                    {::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::FSteamNetworkingSocketsDebugOutput.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::FSteamNetworkingSocketsDebugOutput::*)(::System::IAsyncResult*)>(&::Steamworks::FSteamNetworkingSocketsDebugOutput::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(),
                    {::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::FSteamNetworkingSocketsDebugOutput::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::FSteamNetworkingSocketsDebugOutput::Invoke(::Steamworks::ESteamNetworkingSocketsDebugOutputType  nType, ::System::Text::StringBuilder*  pszMsg)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nType, pszMsg);
}
inline ::System::IAsyncResult* Steamworks::FSteamNetworkingSocketsDebugOutput::BeginInvoke(::Steamworks::ESteamNetworkingSocketsDebugOutputType  nType, ::System::Text::StringBuilder*  pszMsg, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, nType, pszMsg, callback, object);
}
inline void Steamworks::FSteamNetworkingSocketsDebugOutput::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::FSteamNetworkingSocketsDebugOutput* Steamworks::FSteamNetworkingSocketsDebugOutput::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::FSteamNetworkingSocketsDebugOutput*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::FSteamNetworkingSocketsDebugOutput::FSteamNetworkingSocketsDebugOutput()   {
}
