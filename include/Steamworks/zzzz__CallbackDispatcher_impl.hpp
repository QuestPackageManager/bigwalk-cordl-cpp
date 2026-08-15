#pragma once
// IWYU pragma private; include "Steamworks/CallbackDispatcher.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__CallbackDispatcher_def.hpp"
#include "Steamworks/zzzz__CallResult_def.hpp"
#include "Steamworks/zzzz__Callback_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::CallbackDispatcher.ExceptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::Steamworks::CallbackDispatcher::ExceptionHandler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18054ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"ExceptionHandler", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackDispatcher.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::CallbackDispatcher::get_IsInitialized)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18054e340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackDispatcher.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::CallbackDispatcher::Initialize)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18054ca20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackDispatcher.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::CallbackDispatcher::Shutdown)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18054d8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackDispatcher.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::Callback*)>(&::Steamworks::CallbackDispatcher::Register)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18054cc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Register", {}, {::i2c::type_of<::Steamworks::Callback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackDispatcher.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::SteamAPICall_t, ::Steamworks::CallResult*)>(&::Steamworks::CallbackDispatcher::Register)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18054ce10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Register", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::Steamworks::CallResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackDispatcher.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::Callback*)>(&::Steamworks::CallbackDispatcher::Unregister)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18054e060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Unregister", {}, {::i2c::type_of<::Steamworks::Callback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackDispatcher.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::SteamAPICall_t, ::Steamworks::CallResult*)>(&::Steamworks::CallbackDispatcher::Unregister)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18054dec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Unregister", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::Steamworks::CallResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackDispatcher.UnregisterAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::CallbackDispatcher::UnregisterAll)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x18054da00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"UnregisterAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackDispatcher.RunFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::CallbackDispatcher::RunFrame)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x18054d010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"RunFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::CallbackDispatcher::setStaticF_m_registeredCallbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*, "m_registeredCallbacks", ::Steamworks::CallbackDispatcher*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>* Steamworks::CallbackDispatcher::getStaticF_m_registeredCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*, "m_registeredCallbacks", ::Steamworks::CallbackDispatcher*>();
}
inline void Steamworks::CallbackDispatcher::setStaticF_m_registeredGameServerCallbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*, "m_registeredGameServerCallbacks", ::Steamworks::CallbackDispatcher*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>* Steamworks::CallbackDispatcher::getStaticF_m_registeredGameServerCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*, "m_registeredGameServerCallbacks", ::Steamworks::CallbackDispatcher*>();
}
inline void Steamworks::CallbackDispatcher::setStaticF_m_registeredCallResults(::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>*, "m_registeredCallResults", ::Steamworks::CallbackDispatcher*>(std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>* Steamworks::CallbackDispatcher::getStaticF_m_registeredCallResults()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>*, "m_registeredCallResults", ::Steamworks::CallbackDispatcher*>();
}
inline void Steamworks::CallbackDispatcher::setStaticF_m_sync(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "m_sync", ::Steamworks::CallbackDispatcher*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Steamworks::CallbackDispatcher::getStaticF_m_sync()  {
return ::cordl_internals::getStaticField<::System::Object*, "m_sync", ::Steamworks::CallbackDispatcher*>();
}
inline void Steamworks::CallbackDispatcher::setStaticF_m_pCallbackMsg(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "m_pCallbackMsg", ::Steamworks::CallbackDispatcher*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Steamworks::CallbackDispatcher::getStaticF_m_pCallbackMsg()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "m_pCallbackMsg", ::Steamworks::CallbackDispatcher*>();
}
inline void Steamworks::CallbackDispatcher::setStaticF_m_initCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "m_initCount", ::Steamworks::CallbackDispatcher*>(std::forward<int32_t>(value));
}
inline int32_t Steamworks::CallbackDispatcher::getStaticF_m_initCount()  {
return ::cordl_internals::getStaticField<int32_t, "m_initCount", ::Steamworks::CallbackDispatcher*>();
}
inline void Steamworks::CallbackDispatcher::ExceptionHandler(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"ExceptionHandler", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e);
}
inline bool Steamworks::CallbackDispatcher::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::CallbackDispatcher::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::CallbackDispatcher::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::CallbackDispatcher::Register(::Steamworks::Callback*  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Register", {}, {::i2c::type_of<::Steamworks::Callback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cb);
}
inline void Steamworks::CallbackDispatcher::Register(::Steamworks::SteamAPICall_t  asyncCall, ::Steamworks::CallResult*  cr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Register", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::Steamworks::CallResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncCall, cr);
}
inline void Steamworks::CallbackDispatcher::Unregister(::Steamworks::Callback*  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Unregister", {}, {::i2c::type_of<::Steamworks::Callback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cb);
}
inline void Steamworks::CallbackDispatcher::Unregister(::Steamworks::SteamAPICall_t  asyncCall, ::Steamworks::CallResult*  cr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"Unregister", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::Steamworks::CallResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncCall, cr);
}
inline void Steamworks::CallbackDispatcher::UnregisterAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"UnregisterAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::CallbackDispatcher::RunFrame(bool  isGameServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackDispatcher*>(),
                        {"RunFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isGameServer);
}
// Ctor Parameters []
constexpr ::Steamworks::CallbackDispatcher::CallbackDispatcher()   {
}
