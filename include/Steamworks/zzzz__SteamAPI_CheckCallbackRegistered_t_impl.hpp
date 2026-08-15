#pragma once
// IWYU pragma private; include "Steamworks/SteamAPI_CheckCallbackRegistered_t.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Steamworks/zzzz__SteamAPI_CheckCallbackRegistered_t_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamAPI_CheckCallbackRegistered_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamAPI_CheckCallbackRegistered_t::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::SteamAPI_CheckCallbackRegistered_t::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAPI_CheckCallbackRegistered_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamAPI_CheckCallbackRegistered_t::*)(int32_t)>(&::Steamworks::SteamAPI_CheckCallbackRegistered_t::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(),
                    {::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAPI_CheckCallbackRegistered_t.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Steamworks::SteamAPI_CheckCallbackRegistered_t::*)(int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Steamworks::SteamAPI_CheckCallbackRegistered_t::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805aae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(),
                    {::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAPI_CheckCallbackRegistered_t.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamAPI_CheckCallbackRegistered_t::*)(::System::IAsyncResult*)>(&::Steamworks::SteamAPI_CheckCallbackRegistered_t::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(),
                    {::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::SteamAPI_CheckCallbackRegistered_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::SteamAPI_CheckCallbackRegistered_t::Invoke(int32_t  iCallbackNum)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iCallbackNum);
}
inline ::System::IAsyncResult* Steamworks::SteamAPI_CheckCallbackRegistered_t::BeginInvoke(int32_t  iCallbackNum, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, iCallbackNum, callback, object);
}
inline void Steamworks::SteamAPI_CheckCallbackRegistered_t::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Steamworks::SteamAPI_CheckCallbackRegistered_t* Steamworks::SteamAPI_CheckCallbackRegistered_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::SteamAPI_CheckCallbackRegistered_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::SteamAPI_CheckCallbackRegistered_t::SteamAPI_CheckCallbackRegistered_t()   {
}
