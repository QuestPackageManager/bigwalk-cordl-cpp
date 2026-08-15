#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/PhraseRecognitionSystem.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Windows/Speech/zzzz__PhraseRecognitionSystem_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__PhraseRecognitionSystem_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__SpeechError_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__SpeechSystemStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate::*)(::UnityEngine::Windows::Speech::SpeechError)>(&::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate::Invoke(::UnityEngine::Windows::Speech::SpeechError  errorCode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode);
}
inline ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate* UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate::PhraseRecognitionSystem_ErrorDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate::*)(::UnityEngine::Windows::Speech::SpeechSystemStatus)>(&::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate::Invoke(::UnityEngine::Windows::Speech::SpeechSystemStatus  status)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status);
}
inline ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate* UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate::PhraseRecognitionSystem_StatusDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognitionSystem.PhraseRecognitionSystem_InvokeErrorEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::Speech::SpeechError)>(&::UnityEngine::Windows::Speech::PhraseRecognitionSystem::PhraseRecognitionSystem_InvokeErrorEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822805f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem*>(),
                        {"PhraseRecognitionSystem_InvokeErrorEvent", {}, {::i2c::type_of<::UnityEngine::Windows::Speech::SpeechError>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognitionSystem.PhraseRecognitionSystem_InvokeStatusChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::Speech::SpeechSystemStatus)>(&::UnityEngine::Windows::Speech::PhraseRecognitionSystem::PhraseRecognitionSystem_InvokeStatusChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182280620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem*>(),
                        {"PhraseRecognitionSystem_InvokeStatusChangedEvent", {}, {::i2c::type_of<::UnityEngine::Windows::Speech::SpeechSystemStatus>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::Speech::PhraseRecognitionSystem::setStaticF_OnError(::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*, "OnError", ::UnityEngine::Windows::Speech::PhraseRecognitionSystem*>(std::forward<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*>(value));
}
inline ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate* UnityEngine::Windows::Speech::PhraseRecognitionSystem::getStaticF_OnError()  {
return ::cordl_internals::getStaticField<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*, "OnError", ::UnityEngine::Windows::Speech::PhraseRecognitionSystem*>();
}
inline void UnityEngine::Windows::Speech::PhraseRecognitionSystem::setStaticF_OnStatusChanged(::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*, "OnStatusChanged", ::UnityEngine::Windows::Speech::PhraseRecognitionSystem*>(std::forward<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*>(value));
}
inline ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate* UnityEngine::Windows::Speech::PhraseRecognitionSystem::getStaticF_OnStatusChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*, "OnStatusChanged", ::UnityEngine::Windows::Speech::PhraseRecognitionSystem*>();
}
inline void UnityEngine::Windows::Speech::PhraseRecognitionSystem::PhraseRecognitionSystem_InvokeErrorEvent(::UnityEngine::Windows::Speech::SpeechError  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem*>(),
                        {"PhraseRecognitionSystem_InvokeErrorEvent", {}, {::i2c::type_of<::UnityEngine::Windows::Speech::SpeechError>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline void UnityEngine::Windows::Speech::PhraseRecognitionSystem::PhraseRecognitionSystem_InvokeStatusChangedEvent(::UnityEngine::Windows::Speech::SpeechSystemStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognitionSystem*>(),
                        {"PhraseRecognitionSystem_InvokeStatusChangedEvent", {}, {::i2c::type_of<::UnityEngine::Windows::Speech::SpeechSystemStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status);
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::PhraseRecognitionSystem::PhraseRecognitionSystem()   {
}
