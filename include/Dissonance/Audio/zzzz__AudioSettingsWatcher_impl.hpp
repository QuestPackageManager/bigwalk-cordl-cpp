#pragma once
// IWYU pragma private; include "Dissonance/Audio/AudioSettingsWatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_impl.hpp"
#include "Dissonance/Audio/zzzz__AudioSettingsWatcher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::AudioSettingsWatcher.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::AudioSettingsWatcher* (*)()>(&::Dissonance::Audio::AudioSettingsWatcher::get_Instance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805d7fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioSettingsWatcher*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::AudioSettingsWatcher.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioConfiguration (::Dissonance::Audio::AudioSettingsWatcher::*)()>(&::Dissonance::Audio::AudioSettingsWatcher::get_Configuration)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805d7f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioSettingsWatcher*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::AudioSettingsWatcher.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::AudioSettingsWatcher::*)()>(&::Dissonance::Audio::AudioSettingsWatcher::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805d7d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioSettingsWatcher*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::AudioSettingsWatcher.OnAudioConfigChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::AudioSettingsWatcher::*)(bool)>(&::Dissonance::Audio::AudioSettingsWatcher::OnAudioConfigChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805d7cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioSettingsWatcher*>(),
                        {"OnAudioConfigChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::AudioSettingsWatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::AudioSettingsWatcher::*)()>(&::Dissonance::Audio::AudioSettingsWatcher::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805d7ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioSettingsWatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Dissonance::Audio::AudioSettingsWatcher::__cordl_internal_get__lock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr ::System::Object* const& Dissonance::Audio::AudioSettingsWatcher::__cordl_internal_get__lock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr void Dissonance::Audio::AudioSettingsWatcher::__cordl_internal_set__lock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lock = value;
}
constexpr bool& Dissonance::Audio::AudioSettingsWatcher::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Dissonance::Audio::AudioSettingsWatcher::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Dissonance::Audio::AudioSettingsWatcher::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::UnityEngine::AudioConfiguration& Dissonance::Audio::AudioSettingsWatcher::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::UnityEngine::AudioConfiguration const& Dissonance::Audio::AudioSettingsWatcher::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Dissonance::Audio::AudioSettingsWatcher::__cordl_internal_set__config(::UnityEngine::AudioConfiguration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
inline void Dissonance::Audio::AudioSettingsWatcher::setStaticF_Singleton(::Dissonance::Audio::AudioSettingsWatcher*  value)  {
::cordl_internals::setStaticField<::Dissonance::Audio::AudioSettingsWatcher*, "Singleton", ::Dissonance::Audio::AudioSettingsWatcher*>(std::forward<::Dissonance::Audio::AudioSettingsWatcher*>(value));
}
inline ::Dissonance::Audio::AudioSettingsWatcher* Dissonance::Audio::AudioSettingsWatcher::getStaticF_Singleton()  {
return ::cordl_internals::getStaticField<::Dissonance::Audio::AudioSettingsWatcher*, "Singleton", ::Dissonance::Audio::AudioSettingsWatcher*>();
}
inline ::Dissonance::Audio::AudioSettingsWatcher* Dissonance::Audio::AudioSettingsWatcher::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioSettingsWatcher*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::AudioSettingsWatcher*>(nullptr, ___internal_method);
}
inline ::UnityEngine::AudioConfiguration Dissonance::Audio::AudioSettingsWatcher::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioSettingsWatcher*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioConfiguration>(this, ___internal_method);
}
inline void Dissonance::Audio::AudioSettingsWatcher::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioSettingsWatcher*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::AudioSettingsWatcher::OnAudioConfigChanged(bool  devicewaschanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioSettingsWatcher*>(),
                        {"OnAudioConfigChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, devicewaschanged);
}
inline void Dissonance::Audio::AudioSettingsWatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AudioSettingsWatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::AudioSettingsWatcher* Dissonance::Audio::AudioSettingsWatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::AudioSettingsWatcher*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::AudioSettingsWatcher::AudioSettingsWatcher()   {
}
