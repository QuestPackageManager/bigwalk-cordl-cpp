#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/WebRtcPreprocessingPipeline.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecSuppressionLevels_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecmRoutingMode_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__BasePreprocessingPipeline_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__NoiseSuppressionLevels_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__VadSensitivityLevels_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__WebRtcPreprocessingPipeline_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecSuppressionLevels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecmRoutingMode_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__AudioPluginDissonanceNative_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__NoiseSuppressionLevels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__VadSensitivityLevels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__WebRtcPreprocessingPipeline_def.hpp"
#include "Dissonance/Config/zzzz__VoiceSettings_def.hpp"
#include "Dissonance/Threading/zzzz__LockedValue_1_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c._SetFilterPreprocessor_b__23_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::NoiseSuppressionLevels (::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::*)(::Dissonance::Config::VoiceSettings*)>(&::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::_SetFilterPreprocessor_b__23_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f9f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<SetFilterPreprocessor>b__23_0", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c._SetFilterPreprocessor_b__23_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::AecSuppressionLevels (::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::*)(::Dissonance::Config::VoiceSettings*)>(&::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::_SetFilterPreprocessor_b__23_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f9f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<SetFilterPreprocessor>b__23_2", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c._SetFilterPreprocessor_b__23_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::AecmRoutingMode (::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::*)(::Dissonance::Config::VoiceSettings*)>(&::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::_SetFilterPreprocessor_b__23_4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f9fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<SetFilterPreprocessor>b__23_4", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c._SetFilterPreprocessor_b__23_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::VadSensitivityLevels (::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::*)(::Dissonance::Config::VoiceSettings*)>(&::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::_SetFilterPreprocessor_b__23_6)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f9fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<SetFilterPreprocessor>b__23_6", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::setStaticF___9(::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*, "<>9", ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(std::forward<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(value));
}
inline ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c* Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*, "<>9", ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>();
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::setStaticF___9__23_0(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::NoiseSuppressionLevels>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::NoiseSuppressionLevels>*, "<>9__23_0", ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(std::forward<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::NoiseSuppressionLevels>*>(value));
}
inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::NoiseSuppressionLevels>* Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::getStaticF___9__23_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::NoiseSuppressionLevels>*, "<>9__23_0", ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>();
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::setStaticF___9__23_2(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecSuppressionLevels>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecSuppressionLevels>*, "<>9__23_2", ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(std::forward<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecSuppressionLevels>*>(value));
}
inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecSuppressionLevels>* Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::getStaticF___9__23_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecSuppressionLevels>*, "<>9__23_2", ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>();
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::setStaticF___9__23_4(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecmRoutingMode>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecmRoutingMode>*, "<>9__23_4", ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(std::forward<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecmRoutingMode>*>(value));
}
inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecmRoutingMode>* Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::getStaticF___9__23_4()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::AecmRoutingMode>*, "<>9__23_4", ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>();
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::setStaticF___9__23_6(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::VadSensitivityLevels>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::VadSensitivityLevels>*, "<>9__23_6", ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(std::forward<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::VadSensitivityLevels>*>(value));
}
inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::VadSensitivityLevels>* Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::getStaticF___9__23_6()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,::Dissonance::Audio::Capture::VadSensitivityLevels>*, "<>9__23_6", ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>();
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Capture::NoiseSuppressionLevels Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::_SetFilterPreprocessor_b__23_0(::Dissonance::Config::VoiceSettings*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<SetFilterPreprocessor>b__23_0", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::NoiseSuppressionLevels>(this, ___internal_method, s);
}
inline ::Dissonance::Audio::Capture::AecSuppressionLevels Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::_SetFilterPreprocessor_b__23_2(::Dissonance::Config::VoiceSettings*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<SetFilterPreprocessor>b__23_2", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::AecSuppressionLevels>(this, ___internal_method, s);
}
inline ::Dissonance::Audio::Capture::AecmRoutingMode Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::_SetFilterPreprocessor_b__23_4(::Dissonance::Config::VoiceSettings*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<SetFilterPreprocessor>b__23_4", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::AecmRoutingMode>(this, ___internal_method, s);
}
inline ::Dissonance::Audio::Capture::VadSensitivityLevels Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::_SetFilterPreprocessor_b__23_6(::Dissonance::Config::VoiceSettings*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<SetFilterPreprocessor>b__23_6", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::VadSensitivityLevels>(this, ___internal_method, s);
}
inline ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c* Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c()   {
}
template<typename T>
constexpr ::StringW& Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_get_propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
template<typename T>
constexpr ::StringW const& Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_get_propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
template<typename T>
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_set_propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyName = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_get_setValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setValue;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_get_setValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setValue;
}
template<typename T>
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_set_setValue(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setValue = value;
}
template<typename T>
constexpr ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*& Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_get_getValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getValue;
}
template<typename T>
constexpr ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>* const& Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_get_getValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getValue;
}
template<typename T>
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_set_getValue(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getValue = value;
}
template<typename T>
constexpr ::UnityW<::Dissonance::Config::VoiceSettings>& Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
template<typename T>
constexpr ::UnityW<::Dissonance::Config::VoiceSettings> const& Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
template<typename T>
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::__cordl_internal_set_settings(::UnityW<::Dissonance::Config::VoiceSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
template<typename T>
inline void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::_Bind_b__0(::System::Object*  sender, ::System::ComponentModel::PropertyChangedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>*>(),
                        {"<Bind>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::PropertyChangedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, args);
}
template<typename T>
inline ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>* Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1<T>::WebRtcPreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass24_0_1()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.get_NoiseSuppressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::NoiseSuppressionLevels (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::get_NoiseSuppressionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"get_NoiseSuppressionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.set_NoiseSuppressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(::Dissonance::Audio::Capture::NoiseSuppressionLevels)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::set_NoiseSuppressionLevel)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805fbd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"set_NoiseSuppressionLevel", {}, {::i2c::type_of<::Dissonance::Audio::Capture::NoiseSuppressionLevels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.get_VadSensitivityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::VadSensitivityLevels (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::get_VadSensitivityLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"get_VadSensitivityLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.set_VadSensitivityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(::Dissonance::Audio::Capture::VadSensitivityLevels)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::set_VadSensitivityLevel)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805fbed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"set_VadSensitivityLevel", {}, {::i2c::type_of<::Dissonance::Audio::Capture::VadSensitivityLevels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.get_AecSuppressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::AecSuppressionLevels (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::get_AecSuppressionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"get_AecSuppressionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.set_AecSuppressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(::Dissonance::Audio::Capture::AecSuppressionLevels)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::set_AecSuppressionLevel)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805fbb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"set_AecSuppressionLevel", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecSuppressionLevels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.get_AecmSuppressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::AecmRoutingMode (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::get_AecmSuppressionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"get_AecmSuppressionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.set_AecmSuppressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(::Dissonance::Audio::Capture::AecmRoutingMode)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::set_AecmSuppressionLevel)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805fbc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"set_AecmSuppressionLevel", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecmRoutingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(bool)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805fba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates, ::ArrayW<float_t>, ::ArrayW<float_t>, int32_t, bool)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::Process)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1805fade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"Process", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::Reset)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1805fb290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.CreatePreprocessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::CreatePreprocessor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805fac60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"CreatePreprocessor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.SetFilterPreprocessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(::System::IntPtr)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::SetFilterPreprocessor)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x1805fb520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"SetFilterPreprocessor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.ClearFilterPreprocessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(bool)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::ClearFilterPreprocessor)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1805fa970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"ClearFilterPreprocessor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.ReleaseUnmanagedResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::ReleaseUnmanagedResources)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805fb190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"ReleaseUnmanagedResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805fadb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::Finalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fadd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor._SetFilterPreprocessor_b__23_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(::Dissonance::Audio::Capture::NoiseSuppressionLevels)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::_SetFilterPreprocessor_b__23_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"<SetFilterPreprocessor>b__23_1", {}, {::i2c::type_of<::Dissonance::Audio::Capture::NoiseSuppressionLevels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor._SetFilterPreprocessor_b__23_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(::Dissonance::Audio::Capture::AecSuppressionLevels)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::_SetFilterPreprocessor_b__23_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"<SetFilterPreprocessor>b__23_3", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecSuppressionLevels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor._SetFilterPreprocessor_b__23_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(::Dissonance::Audio::Capture::AecmRoutingMode)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::_SetFilterPreprocessor_b__23_5)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"<SetFilterPreprocessor>b__23_5", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecmRoutingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor._SetFilterPreprocessor_b__23_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::*)(::Dissonance::Audio::Capture::VadSensitivityLevels)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::_SetFilterPreprocessor_b__23_7)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"<SetFilterPreprocessor>b__23_7", {}, {::i2c::type_of<::Dissonance::Audio::Capture::VadSensitivityLevels>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>* const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_set__handle(::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handle = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__subscribed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribed;
}
constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>* const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__subscribed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribed;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_set__subscribed(::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscribed = value;
}
constexpr bool& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__useMobileAec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMobileAec;
}
constexpr bool const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__useMobileAec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMobileAec;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_set__useMobileAec(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useMobileAec = value;
}
constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__nsLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nsLevel;
}
constexpr ::Dissonance::Audio::Capture::NoiseSuppressionLevels const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__nsLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nsLevel;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_set__nsLevel(::Dissonance::Audio::Capture::NoiseSuppressionLevels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nsLevel = value;
}
constexpr ::Dissonance::Audio::Capture::VadSensitivityLevels& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__vadlevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vadlevel;
}
constexpr ::Dissonance::Audio::Capture::VadSensitivityLevels const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__vadlevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vadlevel;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_set__vadlevel(::Dissonance::Audio::Capture::VadSensitivityLevels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vadlevel = value;
}
constexpr ::Dissonance::Audio::Capture::AecSuppressionLevels& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__aecLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecLevel;
}
constexpr ::Dissonance::Audio::Capture::AecSuppressionLevels const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__aecLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecLevel;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_set__aecLevel(::Dissonance::Audio::Capture::AecSuppressionLevels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aecLevel = value;
}
constexpr ::Dissonance::Audio::Capture::AecmRoutingMode& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__aecmLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecmLevel;
}
constexpr ::Dissonance::Audio::Capture::AecmRoutingMode const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_get__aecmLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecmLevel;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::__cordl_internal_set__aecmLevel(::Dissonance::Audio::Capture::AecmRoutingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aecmLevel = value;
}
inline ::Dissonance::Audio::Capture::NoiseSuppressionLevels Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::get_NoiseSuppressionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"get_NoiseSuppressionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::NoiseSuppressionLevels>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::set_NoiseSuppressionLevel(::Dissonance::Audio::Capture::NoiseSuppressionLevels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"set_NoiseSuppressionLevel", {}, {::i2c::type_of<::Dissonance::Audio::Capture::NoiseSuppressionLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::Audio::Capture::VadSensitivityLevels Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::get_VadSensitivityLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"get_VadSensitivityLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::VadSensitivityLevels>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::set_VadSensitivityLevel(::Dissonance::Audio::Capture::VadSensitivityLevels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"set_VadSensitivityLevel", {}, {::i2c::type_of<::Dissonance::Audio::Capture::VadSensitivityLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::Audio::Capture::AecSuppressionLevels Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::get_AecSuppressionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"get_AecSuppressionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::AecSuppressionLevels>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::set_AecSuppressionLevel(::Dissonance::Audio::Capture::AecSuppressionLevels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"set_AecSuppressionLevel", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecSuppressionLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::Audio::Capture::AecmRoutingMode Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::get_AecmSuppressionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"get_AecmSuppressionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::AecmRoutingMode>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::set_AecmSuppressionLevel(::Dissonance::Audio::Capture::AecmRoutingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"set_AecmSuppressionLevel", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecmRoutingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::_ctor(bool  useMobileAec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useMobileAec);
}
inline bool Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::Process(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates  inputSampleRate, ::ArrayW<float_t>  input, ::ArrayW<float_t>  output, int32_t  estimatedStreamDelay, bool  isOutputMuted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"Process", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inputSampleRate, input, output, estimatedStreamDelay, isOutputMuted);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::CreatePreprocessor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"CreatePreprocessor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::SetFilterPreprocessor(::System::IntPtr  preprocessor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"SetFilterPreprocessor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preprocessor);
}
template<typename T>
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::Bind(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  getValue, ::StringW  propertyName, ::System::Action_1<T>*  setValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                    {"Bind", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getValue, propertyName, setValue);
}
inline bool Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::ClearFilterPreprocessor(bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"ClearFilterPreprocessor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, throwOnError);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::ReleaseUnmanagedResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"ReleaseUnmanagedResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::_SetFilterPreprocessor_b__23_1(::Dissonance::Audio::Capture::NoiseSuppressionLevels  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"<SetFilterPreprocessor>b__23_1", {}, {::i2c::type_of<::Dissonance::Audio::Capture::NoiseSuppressionLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::_SetFilterPreprocessor_b__23_3(::Dissonance::Audio::Capture::AecSuppressionLevels  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"<SetFilterPreprocessor>b__23_3", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecSuppressionLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::_SetFilterPreprocessor_b__23_5(::Dissonance::Audio::Capture::AecmRoutingMode  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"<SetFilterPreprocessor>b__23_5", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecmRoutingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::_SetFilterPreprocessor_b__23_7(::Dissonance::Audio::Capture::VadSensitivityLevels  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(),
                        {"<SetFilterPreprocessor>b__23_7", {}, {::i2c::type_of<::Dissonance::Audio::Capture::VadSensitivityLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor* Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::New_ctor(bool  useMobileAec)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*>(useMobileAec));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor::WebRtcPreprocessingPipeline_WebRtcPreprocessor()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::*)()>(&::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c.__ctor_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::*)(::Dissonance::Config::VoiceSettings*)>(&::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::__ctor_b__7_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f9ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<.ctor>b__7_0", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c.__ctor_b__7_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::*)(::Dissonance::Config::VoiceSettings*)>(&::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::__ctor_b__7_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805fa010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<.ctor>b__7_2", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::setStaticF___9(::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*, "<>9", ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>(std::forward<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>(value));
}
inline ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c* Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*, "<>9", ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>();
}
inline void Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::setStaticF___9__7_0(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,bool>*, "<>9__7_0", ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>(std::forward<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,bool>* Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,bool>*, "<>9__7_0", ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>();
}
inline void Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::setStaticF___9__7_2(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,float_t>*, "<>9__7_2", ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>(std::forward<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,float_t>*>(value));
}
inline ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,float_t>* Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::getStaticF___9__7_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,float_t>*, "<>9__7_2", ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>();
}
inline void Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::__ctor_b__7_0(::Dissonance::Config::VoiceSettings*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<.ctor>b__7_0", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, v);
}
inline float_t Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::__ctor_b__7_2(::Dissonance::Config::VoiceSettings*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>(),
                        {"<.ctor>b__7_2", {}, {::i2c::type_of<::Dissonance::Config::VoiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, v);
}
inline ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c* Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c()   {
}
template<typename T>
constexpr ::StringW& Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_get_propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
template<typename T>
constexpr ::StringW const& Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_get_propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
template<typename T>
constexpr void Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_set_propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyName = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_get_setValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setValue;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_get_setValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setValue;
}
template<typename T>
constexpr void Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_set_setValue(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setValue = value;
}
template<typename T>
constexpr ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*& Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_get_getValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getValue;
}
template<typename T>
constexpr ::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>* const& Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_get_getValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getValue;
}
template<typename T>
constexpr void Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_set_getValue(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getValue = value;
}
template<typename T>
constexpr ::UnityW<::Dissonance::Config::VoiceSettings>& Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
template<typename T>
constexpr ::UnityW<::Dissonance::Config::VoiceSettings> const& Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
template<typename T>
constexpr void Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::__cordl_internal_set_settings(::UnityW<::Dissonance::Config::VoiceSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
template<typename T>
inline void Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::_Bind_b__0(::System::Object*  sender, ::System::ComponentModel::PropertyChangedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>*>(),
                        {"<Bind>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::PropertyChangedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, args);
}
template<typename T>
inline ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>* Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Audio::Capture::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1<T>::RnnoisePreprocessor_WebRtcPreprocessingPipeline___c__DisplayClass8_0_1()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::get_Enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)(bool)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::set_Enabled)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805f9aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805f98a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::Reset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805f9780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates, ::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::Process)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x1805f9320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"Process", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor.GetGains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)(::ArrayW<float_t>)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::GetGains)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805f9170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"GetGains", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor.ReleaseUnmanagedResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::ReleaseUnmanagedResources)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805f9690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"ReleaseUnmanagedResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805f9090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::Finalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f9160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor.__ctor_b__7_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)(bool)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__ctor_b__7_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f9890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"<.ctor>b__7_1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor.__ctor_b__7_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::*)(float_t)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__ctor_b__7_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"<.ctor>b__7_3", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
constexpr float_t& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_get__removalAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____removalAmount;
}
constexpr float_t const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_get__removalAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____removalAmount;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_set__removalAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____removalAmount = value;
}
constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_get__handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>* const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_get__handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_set__handle(::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handle = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_get__subscribed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribed;
}
constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>* const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_get__subscribed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribed;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__cordl_internal_set__subscribed(::System::Collections::Generic::List_1<::System::ComponentModel::PropertyChangedEventHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscribed = value;
}
inline bool Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::Bind(::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*  getValue, ::StringW  propertyName, ::System::Action_1<T>*  setValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                    {"Bind", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_2<::UnityW<::Dissonance::Config::VoiceSettings>,T>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getValue, propertyName, setValue);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::Process(::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates  inputSampleRate, ::ArrayW<float_t>  input, ::ArrayW<float_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"Process", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputSampleRate, input, output);
}
inline int32_t Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::GetGains(::ArrayW<float_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"GetGains", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::ReleaseUnmanagedResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"ReleaseUnmanagedResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__ctor_b__7_1(bool  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"<.ctor>b__7_1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::__ctor_b__7_3(float_t  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>(),
                        {"<.ctor>b__7_3", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor* Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor::WebRtcPreprocessingPipeline_RnnoisePreprocessor()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline.get_VadIsSpeechDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::get_VadIsSpeechDetected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fa960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline.set_IsOutputMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::*)(bool)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::set_IsOutputMuted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180487390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::*)(::NAudio::Wave::WaveFormat*, bool)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805fa910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline.ThreadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::ThreadStart)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805fa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::Dispose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805fa500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline.ApplyReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::ApplyReset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805fa4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline.PreprocessAudioFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::*)(::ArrayW<float_t>)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::PreprocessAudioFrame)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805fa630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline.GetAecFilterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState (*)()>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::GetAecFilterState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f0570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                        {"GetAecFilterState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline.GetBackgroundNoiseRemovalGains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::*)(::ArrayW<float_t>)>(&::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::GetBackgroundNoiseRemovalGains)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805fa610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                        {"GetBackgroundNoiseRemovalGains", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_get__isVadDetectingSpeech()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVadDetectingSpeech;
}
constexpr bool const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_get__isVadDetectingSpeech() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVadDetectingSpeech;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_set__isVadDetectingSpeech(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isVadDetectingSpeech = value;
}
constexpr bool& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_get__isMobilePlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMobilePlatform;
}
constexpr bool const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_get__isMobilePlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMobilePlatform;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_set__isMobilePlatform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMobilePlatform = value;
}
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_get__preprocessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preprocessor;
}
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor* const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_get__preprocessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preprocessor;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_set__preprocessor(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_WebRtcPreprocessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preprocessor = value;
}
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_get__rnnoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rnnoise;
}
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor* const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_get__rnnoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rnnoise;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_set__rnnoise(::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline_RnnoisePreprocessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rnnoise = value;
}
constexpr bool& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_get__isOutputMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOutputMuted;
}
constexpr bool const& Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_get__isOutputMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOutputMuted;
}
constexpr void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::__cordl_internal_set__isOutputMuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isOutputMuted = value;
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>();
}
inline bool Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::get_VadIsSpeechDetected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::set_IsOutputMuted(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::_ctor(::NAudio::Wave::WaveFormat*  inputFormat, bool  mobilePlatform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputFormat, mobilePlatform);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::ThreadStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::ApplyReset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::PreprocessAudioFrame(::ArrayW<float_t>  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::GetAecFilterState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                        {"GetAecFilterState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState>(nullptr, ___internal_method);
}
inline int32_t Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::GetBackgroundNoiseRemovalGains(::ArrayW<float_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(),
                        {"GetBackgroundNoiseRemovalGains", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output);
}
inline ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline* Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::New_ctor(::NAudio::Wave::WaveFormat*  inputFormat, bool  mobilePlatform)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline*>(inputFormat, mobilePlatform));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::WebRtcPreprocessingPipeline::WebRtcPreprocessingPipeline()   {
}
