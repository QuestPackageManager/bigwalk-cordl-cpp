#pragma once
// IWYU pragma private; include "Dissonance/Config/VoiceSettings.hpp"
#include "Dissonance/zzzz__AudioQuality_impl.hpp"
#include "Dissonance/zzzz__FrameSize_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Dissonance/Config/zzzz__VoiceSettings_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecSuppressionLevels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecmRoutingMode_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__NoiseSuppressionLevels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__VadSensitivityLevels_def.hpp"
#include "Dissonance/Config/zzzz__VoiceSettings_def.hpp"
#include "Dissonance/zzzz__AudioQuality_def.hpp"
#include "Dissonance/zzzz__FrameSize_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings___c::*)()>(&::Dissonance::Config::VoiceSettings___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings___c._set_Quality_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings___c::*)(::StringW, ::Dissonance::AudioQuality)>(&::Dissonance::Config::VoiceSettings___c::_set_Quality_b__20_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings___c*>(),
                        {"<set_Quality>b__20_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::AudioQuality>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings___c._set_FrameSize_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings___c::*)(::StringW, ::Dissonance::FrameSize)>(&::Dissonance::Config::VoiceSettings___c::_set_FrameSize_b__24_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings___c*>(),
                        {"<set_FrameSize>b__24_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::FrameSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings___c._Load_b__84_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::AudioQuality (::Dissonance::Config::VoiceSettings___c::*)(::StringW, ::Dissonance::AudioQuality)>(&::Dissonance::Config::VoiceSettings___c::_Load_b__84_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings___c*>(),
                        {"<Load>b__84_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::AudioQuality>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings___c._Load_b__84_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::FrameSize (::Dissonance::Config::VoiceSettings___c::*)(::StringW, ::Dissonance::FrameSize)>(&::Dissonance::Config::VoiceSettings___c::_Load_b__84_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings___c*>(),
                        {"<Load>b__84_1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::FrameSize>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Config::VoiceSettings___c::setStaticF___9(::Dissonance::Config::VoiceSettings___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::Config::VoiceSettings___c*, "<>9", ::Dissonance::Config::VoiceSettings___c*>(std::forward<::Dissonance::Config::VoiceSettings___c*>(value));
}
inline ::Dissonance::Config::VoiceSettings___c* Dissonance::Config::VoiceSettings___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Config::VoiceSettings___c*, "<>9", ::Dissonance::Config::VoiceSettings___c*>();
}
inline void Dissonance::Config::VoiceSettings___c::setStaticF___9__20_0(::System::Action_2<::StringW,::Dissonance::AudioQuality>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::Dissonance::AudioQuality>*, "<>9__20_0", ::Dissonance::Config::VoiceSettings___c*>(std::forward<::System::Action_2<::StringW,::Dissonance::AudioQuality>*>(value));
}
inline ::System::Action_2<::StringW,::Dissonance::AudioQuality>* Dissonance::Config::VoiceSettings___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::Dissonance::AudioQuality>*, "<>9__20_0", ::Dissonance::Config::VoiceSettings___c*>();
}
inline void Dissonance::Config::VoiceSettings___c::setStaticF___9__24_0(::System::Action_2<::StringW,::Dissonance::FrameSize>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::Dissonance::FrameSize>*, "<>9__24_0", ::Dissonance::Config::VoiceSettings___c*>(std::forward<::System::Action_2<::StringW,::Dissonance::FrameSize>*>(value));
}
inline ::System::Action_2<::StringW,::Dissonance::FrameSize>* Dissonance::Config::VoiceSettings___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::Dissonance::FrameSize>*, "<>9__24_0", ::Dissonance::Config::VoiceSettings___c*>();
}
inline void Dissonance::Config::VoiceSettings___c::setStaticF___9__84_0(::System::Func_3<::StringW,::Dissonance::AudioQuality,::Dissonance::AudioQuality>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::StringW,::Dissonance::AudioQuality,::Dissonance::AudioQuality>*, "<>9__84_0", ::Dissonance::Config::VoiceSettings___c*>(std::forward<::System::Func_3<::StringW,::Dissonance::AudioQuality,::Dissonance::AudioQuality>*>(value));
}
inline ::System::Func_3<::StringW,::Dissonance::AudioQuality,::Dissonance::AudioQuality>* Dissonance::Config::VoiceSettings___c::getStaticF___9__84_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<::StringW,::Dissonance::AudioQuality,::Dissonance::AudioQuality>*, "<>9__84_0", ::Dissonance::Config::VoiceSettings___c*>();
}
inline void Dissonance::Config::VoiceSettings___c::setStaticF___9__84_1(::System::Func_3<::StringW,::Dissonance::FrameSize,::Dissonance::FrameSize>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::StringW,::Dissonance::FrameSize,::Dissonance::FrameSize>*, "<>9__84_1", ::Dissonance::Config::VoiceSettings___c*>(std::forward<::System::Func_3<::StringW,::Dissonance::FrameSize,::Dissonance::FrameSize>*>(value));
}
inline ::System::Func_3<::StringW,::Dissonance::FrameSize,::Dissonance::FrameSize>* Dissonance::Config::VoiceSettings___c::getStaticF___9__84_1()  {
return ::cordl_internals::getStaticField<::System::Func_3<::StringW,::Dissonance::FrameSize,::Dissonance::FrameSize>*, "<>9__84_1", ::Dissonance::Config::VoiceSettings___c*>();
}
inline void Dissonance::Config::VoiceSettings___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings___c::_set_Quality_b__20_0(::StringW  key, ::Dissonance::AudioQuality  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings___c*>(),
                        {"<set_Quality>b__20_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::AudioQuality>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, q);
}
inline void Dissonance::Config::VoiceSettings___c::_set_FrameSize_b__24_0(::StringW  key, ::Dissonance::FrameSize  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings___c*>(),
                        {"<set_FrameSize>b__24_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::FrameSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, f);
}
inline ::Dissonance::AudioQuality Dissonance::Config::VoiceSettings___c::_Load_b__84_0(::StringW  s, ::Dissonance::AudioQuality  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings___c*>(),
                        {"<Load>b__84_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::AudioQuality>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::AudioQuality>(this, ___internal_method, s, q);
}
inline ::Dissonance::FrameSize Dissonance::Config::VoiceSettings___c::_Load_b__84_1(::StringW  s, ::Dissonance::FrameSize  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings___c*>(),
                        {"<Load>b__84_1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::FrameSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::FrameSize>(this, ___internal_method, s, f);
}
inline ::Dissonance::Config::VoiceSettings___c* Dissonance::Config::VoiceSettings___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Config::VoiceSettings___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Config::VoiceSettings___c::VoiceSettings___c()   {
}
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_Quality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::AudioQuality (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_Quality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_Quality", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_Quality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(::Dissonance::AudioQuality)>(&::Dissonance::Config::VoiceSettings::set_Quality)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805ef6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_Quality", {}, {::i2c::type_of<::Dissonance::AudioQuality>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::FrameSize (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_FrameSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_FrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(::Dissonance::FrameSize)>(&::Dissonance::Config::VoiceSettings::set_FrameSize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805ef540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_FrameSize", {}, {::i2c::type_of<::Dissonance::FrameSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_ForwardErrorCorrection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_ForwardErrorCorrection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805eea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_ForwardErrorCorrection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_ForwardErrorCorrection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(bool)>(&::Dissonance::Config::VoiceSettings::set_ForwardErrorCorrection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805ef440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_ForwardErrorCorrection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_DenoiseAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::NoiseSuppressionLevels (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_DenoiseAmount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_DenoiseAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_DenoiseAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(::Dissonance::Audio::Capture::NoiseSuppressionLevels)>(&::Dissonance::Config::VoiceSettings::set_DenoiseAmount)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805ef350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_DenoiseAmount", {}, {::i2c::type_of<::Dissonance::Audio::Capture::NoiseSuppressionLevels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_BackgroundSoundRemovalEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_BackgroundSoundRemovalEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805eea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_BackgroundSoundRemovalEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_BackgroundSoundRemovalEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(bool)>(&::Dissonance::Config::VoiceSettings::set_BackgroundSoundRemovalEnabled)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805ef250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_BackgroundSoundRemovalEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_BackgroundSoundRemovalAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_BackgroundSoundRemovalAmount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_BackgroundSoundRemovalAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_BackgroundSoundRemovalAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(float_t)>(&::Dissonance::Config::VoiceSettings::set_BackgroundSoundRemovalAmount)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805ef130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_BackgroundSoundRemovalAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_VadSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::VadSensitivityLevels (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_VadSensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_VadSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_VadSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(::Dissonance::Audio::Capture::VadSensitivityLevels)>(&::Dissonance::Config::VoiceSettings::set_VadSensitivity)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805ef800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_VadSensitivity", {}, {::i2c::type_of<::Dissonance::Audio::Capture::VadSensitivityLevels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_AecSuppressionAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::AecSuppressionLevels (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_AecSuppressionAmount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecSuppressionAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_AecSuppressionAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(::Dissonance::Audio::Capture::AecSuppressionLevels)>(&::Dissonance::Config::VoiceSettings::set_AecSuppressionAmount)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805eee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecSuppressionAmount", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecSuppressionLevels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_AecDelayAgnostic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_AecDelayAgnostic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ee9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecDelayAgnostic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_AecDelayAgnostic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(bool)>(&::Dissonance::Config::VoiceSettings::set_AecDelayAgnostic)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805eeb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecDelayAgnostic", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_AecExtendedFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_AecExtendedFilter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ee9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecExtendedFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_AecExtendedFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(bool)>(&::Dissonance::Config::VoiceSettings::set_AecExtendedFilter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805eec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecExtendedFilter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_AecRefinedAdaptiveFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_AecRefinedAdaptiveFilter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805eea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecRefinedAdaptiveFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_AecRefinedAdaptiveFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(bool)>(&::Dissonance::Config::VoiceSettings::set_AecRefinedAdaptiveFilter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805eed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecRefinedAdaptiveFilter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_AecmRoutingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::AecmRoutingMode (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_AecmRoutingMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecmRoutingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_AecmRoutingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(::Dissonance::Audio::Capture::AecmRoutingMode)>(&::Dissonance::Config::VoiceSettings::set_AecmRoutingMode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805ef040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecmRoutingMode", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecmRoutingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_AecmComfortNoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_AecmComfortNoise)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805eea10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecmComfortNoise", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_AecmComfortNoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(bool)>(&::Dissonance::Config::VoiceSettings::set_AecmComfortNoise)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805eef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecmComfortNoise", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_VoiceDuckLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::get_VoiceDuckLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_VoiceDuckLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.set_VoiceDuckLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(float_t)>(&::Dissonance::Config::VoiceSettings::set_VoiceDuckLevel)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805ef8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_VoiceDuckLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.add_PropertyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&::Dissonance::Config::VoiceSettings::add_PropertyChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805ee960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"add_PropertyChanged", {}, {::i2c::type_of<::System::ComponentModel::PropertyChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.remove_PropertyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&::Dissonance::Config::VoiceSettings::remove_PropertyChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805eead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"remove_PropertyChanged", {}, {::i2c::type_of<::System::ComponentModel::PropertyChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.OnPropertyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)(::StringW)>(&::Dissonance::Config::VoiceSettings::OnPropertyChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805ee520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"OnPropertyChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Dissonance::Config::VoiceSettings> (*)()>(&::Dissonance::Config::VoiceSettings::get_Instance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805eea40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ee940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.LoadDefaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::LoadDefaults)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805edf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"LoadDefaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::Reset)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805ee610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.Preload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Dissonance::Config::VoiceSettings::Preload)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805ee590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"Preload", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Dissonance::Config::VoiceSettings> (*)()>(&::Dissonance::Config::VoiceSettings::Load)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x1805edfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::VoiceSettings.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Config::VoiceSettings::*)()>(&::Dissonance::Config::VoiceSettings::ToString)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805ee6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                    {::i2c::class_of<::Dissonance::Config::VoiceSettings*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Dissonance::AudioQuality& Dissonance::Config::VoiceSettings::__cordl_internal_get__quality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quality;
}
constexpr ::Dissonance::AudioQuality const& Dissonance::Config::VoiceSettings::__cordl_internal_get__quality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quality;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__quality(::Dissonance::AudioQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____quality = value;
}
constexpr ::Dissonance::FrameSize& Dissonance::Config::VoiceSettings::__cordl_internal_get__frameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr ::Dissonance::FrameSize const& Dissonance::Config::VoiceSettings::__cordl_internal_get__frameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__frameSize(::Dissonance::FrameSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameSize = value;
}
constexpr int32_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__forwardErrorCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardErrorCorrection;
}
constexpr int32_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__forwardErrorCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardErrorCorrection;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__forwardErrorCorrection(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardErrorCorrection = value;
}
constexpr int32_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__denoiseAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____denoiseAmount;
}
constexpr int32_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__denoiseAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____denoiseAmount;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__denoiseAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____denoiseAmount = value;
}
constexpr int32_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__bgSoundRemovalEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bgSoundRemovalEnabled;
}
constexpr int32_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__bgSoundRemovalEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bgSoundRemovalEnabled;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__bgSoundRemovalEnabled(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bgSoundRemovalEnabled = value;
}
constexpr float_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__bgSoundRemovalAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bgSoundRemovalAmount;
}
constexpr float_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__bgSoundRemovalAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bgSoundRemovalAmount;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__bgSoundRemovalAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bgSoundRemovalAmount = value;
}
constexpr int32_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__vadSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vadSensitivity;
}
constexpr int32_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__vadSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vadSensitivity;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__vadSensitivity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vadSensitivity = value;
}
constexpr int32_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecAmount;
}
constexpr int32_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecAmount;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__aecAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aecAmount = value;
}
constexpr int32_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecDelayAgnostic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecDelayAgnostic;
}
constexpr int32_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecDelayAgnostic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecDelayAgnostic;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__aecDelayAgnostic(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aecDelayAgnostic = value;
}
constexpr int32_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecExtendedFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecExtendedFilter;
}
constexpr int32_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecExtendedFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecExtendedFilter;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__aecExtendedFilter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aecExtendedFilter = value;
}
constexpr int32_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecRefinedAdaptiveFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecRefinedAdaptiveFilter;
}
constexpr int32_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecRefinedAdaptiveFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecRefinedAdaptiveFilter;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__aecRefinedAdaptiveFilter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aecRefinedAdaptiveFilter = value;
}
constexpr int32_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecmRoutingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecmRoutingMode;
}
constexpr int32_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecmRoutingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecmRoutingMode;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__aecmRoutingMode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aecmRoutingMode = value;
}
constexpr int32_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecmComfortNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecmComfortNoise;
}
constexpr int32_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__aecmComfortNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aecmComfortNoise;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__aecmComfortNoise(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aecmComfortNoise = value;
}
constexpr float_t& Dissonance::Config::VoiceSettings::__cordl_internal_get__voiceDuckLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceDuckLevel;
}
constexpr float_t const& Dissonance::Config::VoiceSettings::__cordl_internal_get__voiceDuckLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceDuckLevel;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set__voiceDuckLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceDuckLevel = value;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& Dissonance::Config::VoiceSettings::__cordl_internal_get_PropertyChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropertyChanged;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& Dissonance::Config::VoiceSettings::__cordl_internal_get_PropertyChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropertyChanged;
}
constexpr void Dissonance::Config::VoiceSettings::__cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PropertyChanged = value;
}
inline void Dissonance::Config::VoiceSettings::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Config::VoiceSettings*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Config::VoiceSettings::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Config::VoiceSettings*>();
}
inline void Dissonance::Config::VoiceSettings::setStaticF_SettingsFilePath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "SettingsFilePath", ::Dissonance::Config::VoiceSettings*>(std::forward<::StringW>(value));
}
inline ::StringW Dissonance::Config::VoiceSettings::getStaticF_SettingsFilePath()  {
return ::cordl_internals::getStaticField<::StringW, "SettingsFilePath", ::Dissonance::Config::VoiceSettings*>();
}
inline void Dissonance::Config::VoiceSettings::setStaticF__instance(::UnityW<::Dissonance::Config::VoiceSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::Dissonance::Config::VoiceSettings>, "_instance", ::Dissonance::Config::VoiceSettings*>(std::forward<::UnityW<::Dissonance::Config::VoiceSettings>>(value));
}
inline ::UnityW<::Dissonance::Config::VoiceSettings> Dissonance::Config::VoiceSettings::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Dissonance::Config::VoiceSettings>, "_instance", ::Dissonance::Config::VoiceSettings*>();
}
inline ::Dissonance::AudioQuality Dissonance::Config::VoiceSettings::get_Quality()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_Quality", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::AudioQuality>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_Quality(::Dissonance::AudioQuality  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_Quality", {}, {::i2c::type_of<::Dissonance::AudioQuality>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::FrameSize Dissonance::Config::VoiceSettings::get_FrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_FrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::FrameSize>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_FrameSize(::Dissonance::FrameSize  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_FrameSize", {}, {::i2c::type_of<::Dissonance::FrameSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Config::VoiceSettings::get_ForwardErrorCorrection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_ForwardErrorCorrection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_ForwardErrorCorrection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_ForwardErrorCorrection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::Audio::Capture::NoiseSuppressionLevels Dissonance::Config::VoiceSettings::get_DenoiseAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_DenoiseAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::NoiseSuppressionLevels>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_DenoiseAmount(::Dissonance::Audio::Capture::NoiseSuppressionLevels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_DenoiseAmount", {}, {::i2c::type_of<::Dissonance::Audio::Capture::NoiseSuppressionLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Config::VoiceSettings::get_BackgroundSoundRemovalEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_BackgroundSoundRemovalEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_BackgroundSoundRemovalEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_BackgroundSoundRemovalEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Config::VoiceSettings::get_BackgroundSoundRemovalAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_BackgroundSoundRemovalAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_BackgroundSoundRemovalAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_BackgroundSoundRemovalAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::Audio::Capture::VadSensitivityLevels Dissonance::Config::VoiceSettings::get_VadSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_VadSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::VadSensitivityLevels>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_VadSensitivity(::Dissonance::Audio::Capture::VadSensitivityLevels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_VadSensitivity", {}, {::i2c::type_of<::Dissonance::Audio::Capture::VadSensitivityLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::Audio::Capture::AecSuppressionLevels Dissonance::Config::VoiceSettings::get_AecSuppressionAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecSuppressionAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::AecSuppressionLevels>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_AecSuppressionAmount(::Dissonance::Audio::Capture::AecSuppressionLevels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecSuppressionAmount", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecSuppressionLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Config::VoiceSettings::get_AecDelayAgnostic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecDelayAgnostic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_AecDelayAgnostic(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecDelayAgnostic", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Config::VoiceSettings::get_AecExtendedFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecExtendedFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_AecExtendedFilter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecExtendedFilter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Config::VoiceSettings::get_AecRefinedAdaptiveFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecRefinedAdaptiveFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_AecRefinedAdaptiveFilter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecRefinedAdaptiveFilter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::Audio::Capture::AecmRoutingMode Dissonance::Config::VoiceSettings::get_AecmRoutingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecmRoutingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::AecmRoutingMode>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_AecmRoutingMode(::Dissonance::Audio::Capture::AecmRoutingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecmRoutingMode", {}, {::i2c::type_of<::Dissonance::Audio::Capture::AecmRoutingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Config::VoiceSettings::get_AecmComfortNoise()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_AecmComfortNoise", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_AecmComfortNoise(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_AecmComfortNoise", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Config::VoiceSettings::get_VoiceDuckLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_VoiceDuckLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::set_VoiceDuckLevel(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"set_VoiceDuckLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Config::VoiceSettings::add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"add_PropertyChanged", {}, {::i2c::type_of<::System::ComponentModel::PropertyChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Config::VoiceSettings::remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"remove_PropertyChanged", {}, {::i2c::type_of<::System::ComponentModel::PropertyChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Config::VoiceSettings::OnPropertyChanged(::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"OnPropertyChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName);
}
inline ::UnityW<::Dissonance::Config::VoiceSettings> Dissonance::Config::VoiceSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Dissonance::Config::VoiceSettings>>(nullptr, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::LoadDefaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"LoadDefaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Config::VoiceSettings::Preload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"Preload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::Dissonance::Config::VoiceSettings> Dissonance::Config::VoiceSettings::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::VoiceSettings*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Dissonance::Config::VoiceSettings>>(nullptr, ___internal_method);
}
inline ::StringW Dissonance::Config::VoiceSettings::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Config::VoiceSettings*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Dissonance::Config::VoiceSettings* Dissonance::Config::VoiceSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Config::VoiceSettings*>());
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr  Dissonance::Config::VoiceSettings::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* Dissonance::Config::VoiceSettings::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Config::VoiceSettings::VoiceSettings()   {
}
