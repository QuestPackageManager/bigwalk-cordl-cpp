#pragma once
// IWYU pragma private; include "UnityEngine/Application.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Application_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsageChange_def.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsage_def.hpp"
#include "UnityEngine/zzzz__Application_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
#include "UnityEngine/zzzz__ThreadPriority_def.hpp"
//  Writing Method size for method: ::UnityEngine::Application_LowMemoryCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Application_LowMemoryCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Application_LowMemoryCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application_LowMemoryCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application_LowMemoryCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Application_LowMemoryCallback::*)()>(&::UnityEngine::Application_LowMemoryCallback::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Application_LowMemoryCallback*>(),
                    {::i2c::class_of<::UnityEngine::Application_LowMemoryCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Application_LowMemoryCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application_LowMemoryCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Application_LowMemoryCallback::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Application_LowMemoryCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Application_LowMemoryCallback* UnityEngine::Application_LowMemoryCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Application_LowMemoryCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Application_LowMemoryCallback::Application_LowMemoryCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Application_MemoryUsageChangedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Application_MemoryUsageChangedCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Application_MemoryUsageChangedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application_MemoryUsageChangedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application_MemoryUsageChangedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Application_MemoryUsageChangedCallback::*)(::by_ref<::UnityEngine::ApplicationMemoryUsageChange>)>(&::UnityEngine::Application_MemoryUsageChangedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Application_MemoryUsageChangedCallback*>(),
                    {::i2c::class_of<::UnityEngine::Application_MemoryUsageChangedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Application_MemoryUsageChangedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application_MemoryUsageChangedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Application_MemoryUsageChangedCallback::Invoke(::by_ref<::UnityEngine::ApplicationMemoryUsageChange>  usage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Application_MemoryUsageChangedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage);
}
inline ::UnityEngine::Application_MemoryUsageChangedCallback* UnityEngine::Application_MemoryUsageChangedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Application_MemoryUsageChangedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Application_MemoryUsageChangedCallback::Application_MemoryUsageChangedCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Application_LogCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Application_LogCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Application_LogCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182248220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application_LogCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application_LogCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Application_LogCallback::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::UnityEngine::Application_LogCallback::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Application_LogCallback*>(),
                    {::i2c::class_of<::UnityEngine::Application_LogCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Application_LogCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application_LogCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Application_LogCallback::Invoke(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Application_LogCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, condition, stackTrace, type);
}
inline ::UnityEngine::Application_LogCallback* UnityEngine::Application_LogCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Application_LogCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Application_LogCallback::Application_LogCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Application.Quit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Application::Quit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223e930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Quit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Quit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Application::Quit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223e940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Quit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Application::get_isPlaying)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223ee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_isPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_isFocused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Application::get_isFocused)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223edf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_isFocused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_runInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Application::get_runInBackground)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223efb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_runInBackground", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.set_runInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Application::set_runInBackground)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223f5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"set_runInBackground", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_isBatchMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Application::get_isBatchMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223ede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_isBatchMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_dataPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_dataPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223ed10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_dataPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_streamingAssetsPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_streamingAssetsPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223efd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_streamingAssetsPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_persistentDataPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_persistentDataPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223ee70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_persistentDataPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_temporaryCachePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_temporaryCachePath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223f090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_temporaryCachePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_unityVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_unityVersion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223f150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_unityVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_unityVersionVer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Application::get_unityVersionVer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223f130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_unityVersionVer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_unityVersionMaj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Application::get_unityVersionMaj)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223f120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_unityVersionMaj", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_version)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223f1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_productName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_productName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223ef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_productName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.OpenURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Application::OpenURL)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18223e840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"OpenURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_targetFrameRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Application::get_targetFrameRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223f070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_targetFrameRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.set_targetFrameRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Application::set_targetFrameRate)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x18223f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"set_targetFrameRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.SetLogCallbackDefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Application::SetLogCallbackDefined)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223e950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"SetLogCallbackDefined", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.set_backgroundLoadingPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ThreadPriority)>(&::UnityEngine::Application::set_backgroundLoadingPriority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223f5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"set_backgroundLoadingPriority", {}, {::i2c::type_of<::UnityEngine::ThreadPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_platform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RuntimePlatform (*)()>(&::UnityEngine::Application::get_platform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_platform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_isMobilePlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Application::get_isMobilePlatform)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18223ee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_isMobilePlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_systemLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SystemLanguage (*)()>(&::UnityEngine::Application::get_systemLanguage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223f060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_systemLanguage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.CallLowMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ApplicationMemoryUsage)>(&::UnityEngine::Application::CallLowMemory)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18223e390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"CallLowMemory", {}, {::i2c::type_of<::UnityEngine::ApplicationMemoryUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.HasLogCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Application::HasLogCallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18223e460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"HasLogCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.add_logMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Application_LogCallback*)>(&::UnityEngine::Application::add_logMessageReceived)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18223eb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"add_logMessageReceived", {}, {::i2c::type_of<::UnityEngine::Application_LogCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.remove_logMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Application_LogCallback*)>(&::UnityEngine::Application::remove_logMessageReceived)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18223f420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"remove_logMessageReceived", {}, {::i2c::type_of<::UnityEngine::Application_LogCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.add_logMessageReceivedThreaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Application_LogCallback*)>(&::UnityEngine::Application::add_logMessageReceivedThreaded)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18223ea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"add_logMessageReceivedThreaded", {}, {::i2c::type_of<::UnityEngine::Application_LogCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.remove_logMessageReceivedThreaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Application_LogCallback*)>(&::UnityEngine::Application::remove_logMessageReceivedThreaded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18223f350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"remove_logMessageReceivedThreaded", {}, {::i2c::type_of<::UnityEngine::Application_LogCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.CallLogCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::LogType, bool)>(&::UnityEngine::Application::CallLogCallback)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18223e2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"CallLogCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.add_focusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::UnityEngine::Application::add_focusChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18223e9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"add_focusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.remove_focusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::UnityEngine::Application::remove_focusChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18223f280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"remove_focusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.add_quitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Application::add_quitting)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18223ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"add_quitting", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.remove_quitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Application::remove_quitting)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18223f4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"remove_quitting", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Internal_ApplicationWantsToQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Application::Internal_ApplicationWantsToQuit)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18223e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Internal_ApplicationWantsToQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_exitCancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (*)()>(&::UnityEngine::Application::get_exitCancellationToken)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18223eda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_exitCancellationToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Internal_InitializeExitCancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Application::Internal_InitializeExitCancellationToken)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18223e670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Internal_InitializeExitCancellationToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Internal_RaiseExitCancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Application::Internal_RaiseExitCancellationToken)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18223e710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Internal_RaiseExitCancellationToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Internal_ApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Application::Internal_ApplicationQuit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18223e4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Internal_ApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Internal_ApplicationUnload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Application::Internal_ApplicationUnload)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18223e500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Internal_ApplicationUnload", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.InvokeOnBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Application::InvokeOnBeforeRender)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223e820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"InvokeOnBeforeRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.InvokeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Application::InvokeFocusChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18223e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"InvokeFocusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.InvokeDeepLinkActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Application::InvokeDeepLinkActivated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18223e760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"InvokeDeepLinkActivated", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_isEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Application::get_isEditor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_isEditor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_dataPath_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Application::get_dataPath_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223ed00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_dataPath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_streamingAssetsPath_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Application::get_streamingAssetsPath_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223efc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_streamingAssetsPath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_persistentDataPath_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Application::get_persistentDataPath_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223ee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_persistentDataPath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_temporaryCachePath_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Application::get_temporaryCachePath_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223f080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_temporaryCachePath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_unityVersion_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Application::get_unityVersion_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223f140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_unityVersion_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_version_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Application::get_version_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_version_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_productName_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Application::get_productName_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223ef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_productName_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.OpenURL_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Application::OpenURL_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"OpenURL_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Application::setStaticF_lowMemory(::UnityEngine::Application_LowMemoryCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Application_LowMemoryCallback*, "lowMemory", ::UnityEngine::Application*>(std::forward<::UnityEngine::Application_LowMemoryCallback*>(value));
}
inline ::UnityEngine::Application_LowMemoryCallback* UnityEngine::Application::getStaticF_lowMemory()  {
return ::cordl_internals::getStaticField<::UnityEngine::Application_LowMemoryCallback*, "lowMemory", ::UnityEngine::Application*>();
}
inline void UnityEngine::Application::setStaticF_memoryUsageChanged(::UnityEngine::Application_MemoryUsageChangedCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Application_MemoryUsageChangedCallback*, "memoryUsageChanged", ::UnityEngine::Application*>(std::forward<::UnityEngine::Application_MemoryUsageChangedCallback*>(value));
}
inline ::UnityEngine::Application_MemoryUsageChangedCallback* UnityEngine::Application::getStaticF_memoryUsageChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Application_MemoryUsageChangedCallback*, "memoryUsageChanged", ::UnityEngine::Application*>();
}
inline void UnityEngine::Application::setStaticF_s_LogCallbackHandler(::UnityEngine::Application_LogCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Application_LogCallback*, "s_LogCallbackHandler", ::UnityEngine::Application*>(std::forward<::UnityEngine::Application_LogCallback*>(value));
}
inline ::UnityEngine::Application_LogCallback* UnityEngine::Application::getStaticF_s_LogCallbackHandler()  {
return ::cordl_internals::getStaticField<::UnityEngine::Application_LogCallback*, "s_LogCallbackHandler", ::UnityEngine::Application*>();
}
inline void UnityEngine::Application::setStaticF_s_LogCallbackHandlerThreaded(::UnityEngine::Application_LogCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Application_LogCallback*, "s_LogCallbackHandlerThreaded", ::UnityEngine::Application*>(std::forward<::UnityEngine::Application_LogCallback*>(value));
}
inline ::UnityEngine::Application_LogCallback* UnityEngine::Application::getStaticF_s_LogCallbackHandlerThreaded()  {
return ::cordl_internals::getStaticField<::UnityEngine::Application_LogCallback*, "s_LogCallbackHandlerThreaded", ::UnityEngine::Application*>();
}
inline void UnityEngine::Application::setStaticF_focusChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "focusChanged", ::UnityEngine::Application*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Application::getStaticF_focusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "focusChanged", ::UnityEngine::Application*>();
}
inline void UnityEngine::Application::setStaticF_deepLinkActivated(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "deepLinkActivated", ::UnityEngine::Application*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* UnityEngine::Application::getStaticF_deepLinkActivated()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "deepLinkActivated", ::UnityEngine::Application*>();
}
inline void UnityEngine::Application::setStaticF_wantsToQuit(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "wantsToQuit", ::UnityEngine::Application*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Application::getStaticF_wantsToQuit()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "wantsToQuit", ::UnityEngine::Application*>();
}
inline void UnityEngine::Application::setStaticF_quitting(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "quitting", ::UnityEngine::Application*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Application::getStaticF_quitting()  {
return ::cordl_internals::getStaticField<::System::Action*, "quitting", ::UnityEngine::Application*>();
}
inline void UnityEngine::Application::setStaticF_unloading(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "unloading", ::UnityEngine::Application*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Application::getStaticF_unloading()  {
return ::cordl_internals::getStaticField<::System::Action*, "unloading", ::UnityEngine::Application*>();
}
inline void UnityEngine::Application::setStaticF_s_currentCancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setStaticField<::System::Threading::CancellationTokenSource*, "s_currentCancellationTokenSource", ::UnityEngine::Application*>(std::forward<::System::Threading::CancellationTokenSource*>(value));
}
inline ::System::Threading::CancellationTokenSource* UnityEngine::Application::getStaticF_s_currentCancellationTokenSource()  {
return ::cordl_internals::getStaticField<::System::Threading::CancellationTokenSource*, "s_currentCancellationTokenSource", ::UnityEngine::Application*>();
}
inline void UnityEngine::Application::Quit(int32_t  exitCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Quit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exitCode);
}
inline void UnityEngine::Application::Quit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Quit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::Application::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_isPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Application::get_isFocused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_isFocused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Application::get_runInBackground()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_runInBackground", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::set_runInBackground(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"set_runInBackground", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Application::get_isBatchMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_isBatchMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_dataPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_dataPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_streamingAssetsPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_streamingAssetsPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_persistentDataPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_persistentDataPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_temporaryCachePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_temporaryCachePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_unityVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_unityVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Application::get_unityVersionVer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_unityVersionVer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Application::get_unityVersionMaj()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_unityVersionMaj", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_productName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_productName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::OpenURL(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"OpenURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, url);
}
inline int32_t UnityEngine::Application::get_targetFrameRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_targetFrameRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::set_targetFrameRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"set_targetFrameRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::SetLogCallbackDefined(bool  defined)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"SetLogCallbackDefined", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, defined);
}
inline void UnityEngine::Application::set_backgroundLoadingPriority(::UnityEngine::ThreadPriority  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"set_backgroundLoadingPriority", {}, {::i2c::type_of<::UnityEngine::ThreadPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::RuntimePlatform UnityEngine::Application::get_platform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_platform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RuntimePlatform>(nullptr, ___internal_method);
}
inline bool UnityEngine::Application::get_isMobilePlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_isMobilePlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::SystemLanguage UnityEngine::Application::get_systemLanguage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_systemLanguage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SystemLanguage>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::CallLowMemory(::UnityEngine::ApplicationMemoryUsage  usage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"CallLowMemory", {}, {::i2c::type_of<::UnityEngine::ApplicationMemoryUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, usage);
}
inline bool UnityEngine::Application::HasLogCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"HasLogCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::add_logMessageReceived(::UnityEngine::Application_LogCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"add_logMessageReceived", {}, {::i2c::type_of<::UnityEngine::Application_LogCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::remove_logMessageReceived(::UnityEngine::Application_LogCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"remove_logMessageReceived", {}, {::i2c::type_of<::UnityEngine::Application_LogCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::add_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"add_logMessageReceivedThreaded", {}, {::i2c::type_of<::UnityEngine::Application_LogCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::remove_logMessageReceivedThreaded(::UnityEngine::Application_LogCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"remove_logMessageReceivedThreaded", {}, {::i2c::type_of<::UnityEngine::Application_LogCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::CallLogCallback(::StringW  logString, ::StringW  stackTrace, ::UnityEngine::LogType  type, bool  invokedOnMainThread)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"CallLogCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logString, stackTrace, type, invokedOnMainThread);
}
inline void UnityEngine::Application::add_focusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"add_focusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::remove_focusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"remove_focusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::add_quitting(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"add_quitting", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::remove_quitting(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"remove_quitting", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Application::Internal_ApplicationWantsToQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Internal_ApplicationWantsToQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Threading::CancellationToken UnityEngine::Application::get_exitCancellationToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_exitCancellationToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::Internal_InitializeExitCancellationToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Internal_InitializeExitCancellationToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::Internal_RaiseExitCancellationToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Internal_RaiseExitCancellationToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::Internal_ApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Internal_ApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::Internal_ApplicationUnload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"Internal_ApplicationUnload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::InvokeOnBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"InvokeOnBeforeRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::InvokeFocusChanged(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"InvokeFocusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, focus);
}
inline void UnityEngine::Application::InvokeDeepLinkActivated(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"InvokeDeepLinkActivated", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, url);
}
inline bool UnityEngine::Application::get_isEditor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_isEditor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::get_dataPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_dataPath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Application::get_streamingAssetsPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_streamingAssetsPath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Application::get_persistentDataPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_persistentDataPath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Application::get_temporaryCachePath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_temporaryCachePath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Application::get_unityVersion_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_unityVersion_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Application::get_version_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_version_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Application::get_productName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"get_productName_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Application::OpenURL_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Application*>(),
                        {"OpenURL_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, url);
}
// Ctor Parameters []
constexpr ::UnityEngine::Application::Application()   {
}
