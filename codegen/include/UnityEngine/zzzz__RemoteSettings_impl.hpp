#pragma once
// IWYU pragma private; include "UnityEngine/RemoteSettings.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RemoteSettings_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RemoteSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::RemoteSettings_UpdatedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RemoteSettings_UpdatedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::RemoteSettings_UpdatedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RemoteSettings_UpdatedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RemoteSettings_UpdatedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RemoteSettings_UpdatedEventHandler::*)()>(&::UnityEngine::RemoteSettings_UpdatedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::RemoteSettings_UpdatedEventHandler*>(),
                    {::i2c::class_of<::UnityEngine::RemoteSettings_UpdatedEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::RemoteSettings_UpdatedEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RemoteSettings_UpdatedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::RemoteSettings_UpdatedEventHandler::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::RemoteSettings_UpdatedEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RemoteSettings_UpdatedEventHandler* UnityEngine::RemoteSettings_UpdatedEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RemoteSettings_UpdatedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::RemoteSettings_UpdatedEventHandler::RemoteSettings_UpdatedEventHandler()   {
}
//  Writing Method size for method: ::UnityEngine::RemoteSettings.RemoteSettingsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::RemoteSettings::RemoteSettingsUpdated)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182548d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RemoteSettings*>(),
                        {"RemoteSettingsUpdated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RemoteSettings.RemoteSettingsBeforeFetchFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182548cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RemoteSettings*>(),
                        {"RemoteSettingsBeforeFetchFromServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RemoteSettings.RemoteSettingsUpdateCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, bool, int32_t)>(&::UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182548ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RemoteSettings*>(),
                        {"RemoteSettingsUpdateCompleted", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::RemoteSettings::setStaticF_Updated(::UnityEngine::RemoteSettings_UpdatedEventHandler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::RemoteSettings_UpdatedEventHandler*, "Updated", ::UnityEngine::RemoteSettings*>(std::forward<::UnityEngine::RemoteSettings_UpdatedEventHandler*>(value));
}
inline ::UnityEngine::RemoteSettings_UpdatedEventHandler* UnityEngine::RemoteSettings::getStaticF_Updated()  {
return ::cordl_internals::getStaticField<::UnityEngine::RemoteSettings_UpdatedEventHandler*, "Updated", ::UnityEngine::RemoteSettings*>();
}
inline void UnityEngine::RemoteSettings::setStaticF_BeforeFetchFromServer(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "BeforeFetchFromServer", ::UnityEngine::RemoteSettings*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::RemoteSettings::getStaticF_BeforeFetchFromServer()  {
return ::cordl_internals::getStaticField<::System::Action*, "BeforeFetchFromServer", ::UnityEngine::RemoteSettings*>();
}
inline void UnityEngine::RemoteSettings::setStaticF_Completed(::System::Action_3<bool,bool,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<bool,bool,int32_t>*, "Completed", ::UnityEngine::RemoteSettings*>(std::forward<::System::Action_3<bool,bool,int32_t>*>(value));
}
inline ::System::Action_3<bool,bool,int32_t>* UnityEngine::RemoteSettings::getStaticF_Completed()  {
return ::cordl_internals::getStaticField<::System::Action_3<bool,bool,int32_t>*, "Completed", ::UnityEngine::RemoteSettings*>();
}
inline void UnityEngine::RemoteSettings::RemoteSettingsUpdated(bool  wasLastUpdatedFromServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RemoteSettings*>(),
                        {"RemoteSettingsUpdated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wasLastUpdatedFromServer);
}
inline void UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RemoteSettings*>(),
                        {"RemoteSettingsBeforeFetchFromServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted(bool  wasLastUpdatedFromServer, bool  settingsChanged, int32_t  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RemoteSettings*>(),
                        {"RemoteSettingsUpdateCompleted", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wasLastUpdatedFromServer, settingsChanged, response);
}
// Ctor Parameters []
constexpr ::UnityEngine::RemoteSettings::RemoteSettings()   {
}
