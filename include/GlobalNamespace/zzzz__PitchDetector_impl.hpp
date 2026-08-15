#pragma once
// IWYU pragma private; include "GlobalNamespace/PitchDetector.hpp"
#include "UnityEngine/zzzz__FFTWindow_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PitchDetector_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioGUI_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.get_SmoothedPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::get_SmoothedPitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"get_SmoothedPitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.set_SmoothedPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)(float_t)>(&::GlobalNamespace::PitchDetector::set_SmoothedPitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"set_SmoothedPitch", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.get_MidiNote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::get_MidiNote)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"get_MidiNote", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.set_MidiNote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)(::StringW)>(&::GlobalNamespace::PitchDetector::set_MidiNote)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"set_MidiNote", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::get_Identifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dcbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.get_GUIDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::get_GUIDebugMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"get_GUIDebugMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.set_GUIDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)(bool)>(&::GlobalNamespace::PitchDetector::set_GUIDebugMode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803dcc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"set_GUIDebugMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PitchDetector> (*)()>(&::GlobalNamespace::PitchDetector::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803dcc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PitchDetector*)>(&::GlobalNamespace::PitchDetector::set_Instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803dcc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::PitchDetector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803db160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::Start)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803dbd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803dbcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803dbd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180318fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::Update)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x1803dc0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.GetMeterTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PitchDetector::*)(::ArrayW<::ArrayW<float_t>>)>(&::GlobalNamespace::PitchDetector::GetMeterTarget)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803dbb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"GetMeterTarget", {}, {::i2c::type_of<::ArrayW<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.GetNoteNameFromFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t)>(&::GlobalNamespace::PitchDetector::GetNoteNameFromFrequency)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803dbc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"GetNoteNameFromFrequency", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.DrawGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::DrawGUI)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x1803db6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"DrawGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.SwitchWindowType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)(::StringW)>(&::GlobalNamespace::PitchDetector::SwitchWindowType)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803dbf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"SwitchWindowType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector.ChangePuzzle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::ChangePuzzle)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x1803db1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"ChangePuzzle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchDetector::*)()>(&::GlobalNamespace::PitchDetector::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803dc9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchDetector._Start_g___clearRef_40_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PitchDetector*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::PitchDetector::_Start_g___clearRef_40_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803dc0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"<Start>g___clearRef|40_0", {}, {::i2c::type_of<::GlobalNamespace::PitchDetector*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PitchDetector::__cordl_internal_get_Cue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cue;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PitchDetector::__cordl_internal_get_Cue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cue;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set_Cue(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Cue = value;
}
constexpr ::UnityEngine::FFTWindow& GlobalNamespace::PitchDetector::__cordl_internal_get_WindowType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindowType;
}
constexpr ::UnityEngine::FFTWindow const& GlobalNamespace::PitchDetector::__cordl_internal_get_WindowType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindowType;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set_WindowType(::UnityEngine::FFTWindow  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindowType = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::PitchDetector::__cordl_internal_get__asc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::PitchDetector::__cordl_internal_get__asc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asc = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::PitchDetector::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::PitchDetector::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__source(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::PitchDetector::__cordl_internal_get__cachedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::PitchDetector::__cordl_internal_get__cachedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedClip;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedClip = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::PitchDetector::__cordl_internal_get__spectrum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spectrum;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::PitchDetector::__cordl_internal_get__spectrum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spectrum;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__spectrum(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spectrum = value;
}
constexpr int32_t& GlobalNamespace::PitchDetector::__cordl_internal_get__sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr int32_t const& GlobalNamespace::PitchDetector::__cordl_internal_get__sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate = value;
}
constexpr float_t& GlobalNamespace::PitchDetector::__cordl_internal_get__SmoothedPitch_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SmoothedPitch_k__BackingField;
}
constexpr float_t const& GlobalNamespace::PitchDetector::__cordl_internal_get__SmoothedPitch_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SmoothedPitch_k__BackingField;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__SmoothedPitch_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SmoothedPitch_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::PitchDetector::__cordl_internal_get__MidiNote_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MidiNote_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PitchDetector::__cordl_internal_get__MidiNote_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MidiNote_k__BackingField;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__MidiNote_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MidiNote_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PitchDetector::__cordl_internal_get__guiDebugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugMode;
}
constexpr bool const& GlobalNamespace::PitchDetector::__cordl_internal_get__guiDebugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugMode;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__guiDebugMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugMode = value;
}
constexpr int32_t& GlobalNamespace::PitchDetector::__cordl_internal_get__currentPuzzle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPuzzle1;
}
constexpr int32_t const& GlobalNamespace::PitchDetector::__cordl_internal_get__currentPuzzle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPuzzle1;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__currentPuzzle1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPuzzle1 = value;
}
constexpr int32_t& GlobalNamespace::PitchDetector::__cordl_internal_get__currentPuzzle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPuzzle2;
}
constexpr int32_t const& GlobalNamespace::PitchDetector::__cordl_internal_get__currentPuzzle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPuzzle2;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__currentPuzzle2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPuzzle2 = value;
}
constexpr int32_t& GlobalNamespace::PitchDetector::__cordl_internal_get__currentPuzzle3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPuzzle3;
}
constexpr int32_t const& GlobalNamespace::PitchDetector::__cordl_internal_get__currentPuzzle3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPuzzle3;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__currentPuzzle3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPuzzle3 = value;
}
constexpr float_t& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzleMeter1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzleMeter1;
}
constexpr float_t const& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzleMeter1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzleMeter1;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__puzzleMeter1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____puzzleMeter1 = value;
}
constexpr float_t& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzleMeter2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzleMeter2;
}
constexpr float_t const& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzleMeter2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzleMeter2;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__puzzleMeter2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____puzzleMeter2 = value;
}
constexpr float_t& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzleMeter3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzleMeter3;
}
constexpr float_t const& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzleMeter3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzleMeter3;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__puzzleMeter3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____puzzleMeter3 = value;
}
constexpr ::ArrayW<::ArrayW<float_t>>& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzlePitches1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzlePitches1;
}
constexpr ::ArrayW<::ArrayW<float_t>> const& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzlePitches1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzlePitches1;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__puzzlePitches1(::ArrayW<::ArrayW<float_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____puzzlePitches1 = value;
}
constexpr ::ArrayW<::ArrayW<float_t>>& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzlePitches2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzlePitches2;
}
constexpr ::ArrayW<::ArrayW<float_t>> const& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzlePitches2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzlePitches2;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__puzzlePitches2(::ArrayW<::ArrayW<float_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____puzzlePitches2 = value;
}
constexpr ::ArrayW<::ArrayW<float_t>>& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzlePitches3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzlePitches3;
}
constexpr ::ArrayW<::ArrayW<float_t>> const& GlobalNamespace::PitchDetector::__cordl_internal_get__puzzlePitches3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____puzzlePitches3;
}
constexpr void GlobalNamespace::PitchDetector::__cordl_internal_set__puzzlePitches3(::ArrayW<::ArrayW<float_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____puzzlePitches3 = value;
}
inline void GlobalNamespace::PitchDetector::setStaticF__noteNames(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_noteNames", ::GlobalNamespace::PitchDetector*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::PitchDetector::getStaticF__noteNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_noteNames", ::GlobalNamespace::PitchDetector*>();
}
inline void GlobalNamespace::PitchDetector::setStaticF__pitches(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_pitches", ::GlobalNamespace::PitchDetector*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> GlobalNamespace::PitchDetector::getStaticF__pitches()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_pitches", ::GlobalNamespace::PitchDetector*>();
}
inline void GlobalNamespace::PitchDetector::setStaticF__noteToPitchLookUp(::ArrayW<::ArrayW<int32_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "_noteToPitchLookUp", ::GlobalNamespace::PitchDetector*>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
inline ::ArrayW<::ArrayW<int32_t>> GlobalNamespace::PitchDetector::getStaticF__noteToPitchLookUp()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "_noteToPitchLookUp", ::GlobalNamespace::PitchDetector*>();
}
inline void GlobalNamespace::PitchDetector::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::PitchDetector>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::PitchDetector>, "<Instance>k__BackingField", ::GlobalNamespace::PitchDetector*>(std::forward<::UnityW<::GlobalNamespace::PitchDetector>>(value));
}
inline ::UnityW<::GlobalNamespace::PitchDetector> GlobalNamespace::PitchDetector::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::PitchDetector>, "<Instance>k__BackingField", ::GlobalNamespace::PitchDetector*>();
}
inline float_t GlobalNamespace::PitchDetector::get_SmoothedPitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"get_SmoothedPitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::set_SmoothedPitch(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"set_SmoothedPitch", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PitchDetector::get_MidiNote()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"get_MidiNote", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::set_MidiNote(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"set_MidiNote", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PitchDetector::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::PitchDetector::get_GUIDebugMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"get_GUIDebugMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::set_GUIDebugMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"set_GUIDebugMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::PitchDetector> GlobalNamespace::PitchDetector::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PitchDetector>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::set_Instance(::GlobalNamespace::PitchDetector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::PitchDetector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PitchDetector::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PitchDetector::GetMeterTarget(::ArrayW<::ArrayW<float_t>>  pitches)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"GetMeterTarget", {}, {::i2c::type_of<::ArrayW<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pitches);
}
inline ::StringW GlobalNamespace::PitchDetector::GetNoteNameFromFrequency(float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"GetNoteNameFromFrequency", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, frequency);
}
inline void GlobalNamespace::PitchDetector::DrawGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"DrawGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::SwitchWindowType(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"SwitchWindowType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void GlobalNamespace::PitchDetector::ChangePuzzle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"ChangePuzzle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchDetector::_Start_g___clearRef_40_0(::GlobalNamespace::PitchDetector*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchDetector*>(),
                        {"<Start>g___clearRef|40_0", {}, {::i2c::type_of<::GlobalNamespace::PitchDetector*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::PitchDetector* GlobalNamespace::PitchDetector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PitchDetector*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr  GlobalNamespace::PitchDetector::operator ::GlobalNamespace::IAudioGUI*() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* GlobalNamespace::PitchDetector::i___GlobalNamespace__IAudioGUI() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PitchDetector::PitchDetector()   {
}
