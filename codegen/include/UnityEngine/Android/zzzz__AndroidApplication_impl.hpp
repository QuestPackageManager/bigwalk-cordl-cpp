#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidApplication.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidApplication_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidConfiguration_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidInsets_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.get_UnityPlayerRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Android::AndroidApplication::get_UnityPlayerRaw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182224b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"get_UnityPlayerRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.AcquireMainThreadSynchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Android::AndroidApplication::AcquireMainThreadSynchronizationContext)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822249f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"AcquireMainThreadSynchronizationContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.SetCurrentConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Android::AndroidConfiguration*)>(&::UnityEngine::Android::AndroidApplication::SetCurrentConfiguration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182224af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"SetCurrentConfiguration", {}, {::i2c::type_of<::UnityEngine::Android::AndroidConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.GetCurrentConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Android::AndroidConfiguration* (*)()>(&::UnityEngine::Android::AndroidApplication::GetCurrentConfiguration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182224ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"GetCurrentConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.DispatchConfigurationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Android::AndroidApplication::DispatchConfigurationChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182224a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"DispatchConfigurationChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.SetCurrentInsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Android::AndroidInsets*)>(&::UnityEngine::Android::AndroidApplication::SetCurrentInsets)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182224b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"SetCurrentInsets", {}, {::i2c::type_of<::UnityEngine::Android::AndroidInsets*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.GetCurrentInsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Android::AndroidInsets* (*)()>(&::UnityEngine::Android::AndroidApplication::GetCurrentInsets)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182224ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"GetCurrentInsets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.DispatchInsetsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Android::AndroidApplication::DispatchInsetsChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182224a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"DispatchInsetsChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Android::AndroidApplication::setStaticF_m_MainThreadSynchronizationContext(::System::Threading::SynchronizationContext*  value)  {
::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "m_MainThreadSynchronizationContext", ::UnityEngine::Android::AndroidApplication*>(std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* UnityEngine::Android::AndroidApplication::getStaticF_m_MainThreadSynchronizationContext()  {
return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "m_MainThreadSynchronizationContext", ::UnityEngine::Android::AndroidApplication*>();
}
inline void UnityEngine::Android::AndroidApplication::setStaticF_m_CurrentConfiguration(::UnityEngine::Android::AndroidConfiguration*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Android::AndroidConfiguration*, "m_CurrentConfiguration", ::UnityEngine::Android::AndroidApplication*>(std::forward<::UnityEngine::Android::AndroidConfiguration*>(value));
}
inline ::UnityEngine::Android::AndroidConfiguration* UnityEngine::Android::AndroidApplication::getStaticF_m_CurrentConfiguration()  {
return ::cordl_internals::getStaticField<::UnityEngine::Android::AndroidConfiguration*, "m_CurrentConfiguration", ::UnityEngine::Android::AndroidApplication*>();
}
inline void UnityEngine::Android::AndroidApplication::setStaticF_m_CurrentAndroidInsets(::UnityEngine::Android::AndroidInsets*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Android::AndroidInsets*, "m_CurrentAndroidInsets", ::UnityEngine::Android::AndroidApplication*>(std::forward<::UnityEngine::Android::AndroidInsets*>(value));
}
inline ::UnityEngine::Android::AndroidInsets* UnityEngine::Android::AndroidApplication::getStaticF_m_CurrentAndroidInsets()  {
return ::cordl_internals::getStaticField<::UnityEngine::Android::AndroidInsets*, "m_CurrentAndroidInsets", ::UnityEngine::Android::AndroidApplication*>();
}
inline void UnityEngine::Android::AndroidApplication::setStaticF_onConfigurationChanged(::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>*, "onConfigurationChanged", ::UnityEngine::Android::AndroidApplication*>(std::forward<::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>* UnityEngine::Android::AndroidApplication::getStaticF_onConfigurationChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>*, "onConfigurationChanged", ::UnityEngine::Android::AndroidApplication*>();
}
inline void UnityEngine::Android::AndroidApplication::setStaticF_onInsetsChanged(::System::Action_1<::UnityEngine::Android::AndroidInsets*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Android::AndroidInsets*>*, "onInsetsChanged", ::UnityEngine::Android::AndroidApplication*>(std::forward<::System::Action_1<::UnityEngine::Android::AndroidInsets*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Android::AndroidInsets*>* UnityEngine::Android::AndroidApplication::getStaticF_onInsetsChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Android::AndroidInsets*>*, "onInsetsChanged", ::UnityEngine::Android::AndroidApplication*>();
}
inline ::System::IntPtr UnityEngine::Android::AndroidApplication::get_UnityPlayerRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"get_UnityPlayerRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Android::AndroidApplication::AcquireMainThreadSynchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"AcquireMainThreadSynchronizationContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Android::AndroidApplication::SetCurrentConfiguration(::UnityEngine::Android::AndroidConfiguration*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"SetCurrentConfiguration", {}, {::i2c::type_of<::UnityEngine::Android::AndroidConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, config);
}
inline ::UnityEngine::Android::AndroidConfiguration* UnityEngine::Android::AndroidApplication::GetCurrentConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"GetCurrentConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Android::AndroidConfiguration*>(nullptr, ___internal_method);
}
inline void UnityEngine::Android::AndroidApplication::DispatchConfigurationChanged(bool  notifySubscribers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"DispatchConfigurationChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, notifySubscribers);
}
inline void UnityEngine::Android::AndroidApplication::SetCurrentInsets(::UnityEngine::Android::AndroidInsets*  insets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"SetCurrentInsets", {}, {::i2c::type_of<::UnityEngine::Android::AndroidInsets*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, insets);
}
inline ::UnityEngine::Android::AndroidInsets* UnityEngine::Android::AndroidApplication::GetCurrentInsets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"GetCurrentInsets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Android::AndroidInsets*>(nullptr, ___internal_method);
}
inline void UnityEngine::Android::AndroidApplication::DispatchInsetsChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                        {"DispatchInsetsChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidApplication::AndroidApplication()   {
}
