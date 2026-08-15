#pragma once
// IWYU pragma private; include "Dissonance/Config/DebugSettings.hpp"
#include "Dissonance/zzzz__LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Dissonance/Config/zzzz__DebugSettings_def.hpp"
#include "Dissonance/Config/zzzz__DebugSettings_def.hpp"
#include "Dissonance/zzzz__LogCategory_def.hpp"
#include "Dissonance/zzzz__LogLevel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Dissonance::Config::DebugSettings___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::DebugSettings___c::*)()>(&::Dissonance::Config::DebugSettings___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::DebugSettings___c.__ctor_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Config::DebugSettings___c::*)(::Dissonance::LogCategory)>(&::Dissonance::Config::DebugSettings___c::__ctor_b__15_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings___c*>(),
                        {"<.ctor>b__15_0", {}, {::i2c::type_of<::Dissonance::LogCategory>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Config::DebugSettings___c::setStaticF___9(::Dissonance::Config::DebugSettings___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::Config::DebugSettings___c*, "<>9", ::Dissonance::Config::DebugSettings___c*>(std::forward<::Dissonance::Config::DebugSettings___c*>(value));
}
inline ::Dissonance::Config::DebugSettings___c* Dissonance::Config::DebugSettings___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Config::DebugSettings___c*, "<>9", ::Dissonance::Config::DebugSettings___c*>();
}
inline void Dissonance::Config::DebugSettings___c::setStaticF___9__15_0(::System::Func_2<::Dissonance::LogCategory,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Dissonance::LogCategory,int32_t>*, "<>9__15_0", ::Dissonance::Config::DebugSettings___c*>(std::forward<::System::Func_2<::Dissonance::LogCategory,int32_t>*>(value));
}
inline ::System::Func_2<::Dissonance::LogCategory,int32_t>* Dissonance::Config::DebugSettings___c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Dissonance::LogCategory,int32_t>*, "<>9__15_0", ::Dissonance::Config::DebugSettings___c*>();
}
inline void Dissonance::Config::DebugSettings___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Dissonance::Config::DebugSettings___c::__ctor_b__15_0(::Dissonance::LogCategory  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings___c*>(),
                        {"<.ctor>b__15_0", {}, {::i2c::type_of<::Dissonance::LogCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c);
}
inline ::Dissonance::Config::DebugSettings___c* Dissonance::Config::DebugSettings___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Config::DebugSettings___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Config::DebugSettings___c::DebugSettings___c()   {
}
//  Writing Method size for method: ::Dissonance::Config::DebugSettings.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Dissonance::Config::DebugSettings> (*)()>(&::Dissonance::Config::DebugSettings::get_Instance)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805db7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::DebugSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::DebugSettings::*)()>(&::Dissonance::Config::DebugSettings::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805db600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::DebugSettings.GetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::LogLevel (::Dissonance::Config::DebugSettings::*)(int32_t)>(&::Dissonance::Config::DebugSettings::GetLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805db390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {"GetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::DebugSettings.SetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Config::DebugSettings::*)(int32_t, ::Dissonance::LogLevel)>(&::Dissonance::Config::DebugSettings::SetLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805db4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {"SetLevel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::DebugSettings.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Dissonance::Config::DebugSettings> (*)()>(&::Dissonance::Config::DebugSettings::Load)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805db3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::DebugSettings.Preload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Dissonance::Config::DebugSettings::Preload)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805db420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {"Preload", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Dissonance::LogLevel>*& Dissonance::Config::DebugSettings::__cordl_internal_get__levels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levels;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::LogLevel>* const& Dissonance::Config::DebugSettings::__cordl_internal_get__levels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levels;
}
constexpr void Dissonance::Config::DebugSettings::__cordl_internal_set__levels(::System::Collections::Generic::List_1<::Dissonance::LogLevel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____levels = value;
}
constexpr bool& Dissonance::Config::DebugSettings::__cordl_internal_get_EnableRecordingDiagnostics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableRecordingDiagnostics;
}
constexpr bool const& Dissonance::Config::DebugSettings::__cordl_internal_get_EnableRecordingDiagnostics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableRecordingDiagnostics;
}
constexpr void Dissonance::Config::DebugSettings::__cordl_internal_set_EnableRecordingDiagnostics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableRecordingDiagnostics = value;
}
constexpr bool& Dissonance::Config::DebugSettings::__cordl_internal_get_RecordMicrophoneRawAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordMicrophoneRawAudio;
}
constexpr bool const& Dissonance::Config::DebugSettings::__cordl_internal_get_RecordMicrophoneRawAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordMicrophoneRawAudio;
}
constexpr void Dissonance::Config::DebugSettings::__cordl_internal_set_RecordMicrophoneRawAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordMicrophoneRawAudio = value;
}
constexpr bool& Dissonance::Config::DebugSettings::__cordl_internal_get_RecordPreprocessorOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordPreprocessorOutput;
}
constexpr bool const& Dissonance::Config::DebugSettings::__cordl_internal_get_RecordPreprocessorOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordPreprocessorOutput;
}
constexpr void Dissonance::Config::DebugSettings::__cordl_internal_set_RecordPreprocessorOutput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordPreprocessorOutput = value;
}
constexpr bool& Dissonance::Config::DebugSettings::__cordl_internal_get_EnablePlaybackDiagnostics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnablePlaybackDiagnostics;
}
constexpr bool const& Dissonance::Config::DebugSettings::__cordl_internal_get_EnablePlaybackDiagnostics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnablePlaybackDiagnostics;
}
constexpr void Dissonance::Config::DebugSettings::__cordl_internal_set_EnablePlaybackDiagnostics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnablePlaybackDiagnostics = value;
}
constexpr bool& Dissonance::Config::DebugSettings::__cordl_internal_get_RecordDecodedAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordDecodedAudio;
}
constexpr bool const& Dissonance::Config::DebugSettings::__cordl_internal_get_RecordDecodedAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordDecodedAudio;
}
constexpr void Dissonance::Config::DebugSettings::__cordl_internal_set_RecordDecodedAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordDecodedAudio = value;
}
constexpr bool& Dissonance::Config::DebugSettings::__cordl_internal_get_RecordFinalAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordFinalAudio;
}
constexpr bool const& Dissonance::Config::DebugSettings::__cordl_internal_get_RecordFinalAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordFinalAudio;
}
constexpr void Dissonance::Config::DebugSettings::__cordl_internal_set_RecordFinalAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordFinalAudio = value;
}
constexpr bool& Dissonance::Config::DebugSettings::__cordl_internal_get_EnableNetworkSimulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableNetworkSimulation;
}
constexpr bool const& Dissonance::Config::DebugSettings::__cordl_internal_get_EnableNetworkSimulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableNetworkSimulation;
}
constexpr void Dissonance::Config::DebugSettings::__cordl_internal_set_EnableNetworkSimulation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableNetworkSimulation = value;
}
constexpr float_t& Dissonance::Config::DebugSettings::__cordl_internal_get_PacketLoss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketLoss;
}
constexpr float_t const& Dissonance::Config::DebugSettings::__cordl_internal_get_PacketLoss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketLoss;
}
constexpr void Dissonance::Config::DebugSettings::__cordl_internal_set_PacketLoss(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PacketLoss = value;
}
inline void Dissonance::Config::DebugSettings::setStaticF_SettingsFilePath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "SettingsFilePath", ::Dissonance::Config::DebugSettings*>(std::forward<::StringW>(value));
}
inline ::StringW Dissonance::Config::DebugSettings::getStaticF_SettingsFilePath()  {
return ::cordl_internals::getStaticField<::StringW, "SettingsFilePath", ::Dissonance::Config::DebugSettings*>();
}
inline void Dissonance::Config::DebugSettings::setStaticF__instance(::UnityW<::Dissonance::Config::DebugSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::Dissonance::Config::DebugSettings>, "_instance", ::Dissonance::Config::DebugSettings*>(std::forward<::UnityW<::Dissonance::Config::DebugSettings>>(value));
}
inline ::UnityW<::Dissonance::Config::DebugSettings> Dissonance::Config::DebugSettings::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Dissonance::Config::DebugSettings>, "_instance", ::Dissonance::Config::DebugSettings*>();
}
inline ::UnityW<::Dissonance::Config::DebugSettings> Dissonance::Config::DebugSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Dissonance::Config::DebugSettings>>(nullptr, ___internal_method);
}
inline void Dissonance::Config::DebugSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::LogLevel Dissonance::Config::DebugSettings::GetLevel(int32_t  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {"GetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::LogLevel>(this, ___internal_method, category);
}
inline void Dissonance::Config::DebugSettings::SetLevel(int32_t  category, ::Dissonance::LogLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {"SetLevel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category, level);
}
inline ::UnityW<::Dissonance::Config::DebugSettings> Dissonance::Config::DebugSettings::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Dissonance::Config::DebugSettings>>(nullptr, ___internal_method);
}
inline void Dissonance::Config::DebugSettings::Preload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::DebugSettings*>(),
                        {"Preload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Dissonance::Config::DebugSettings* Dissonance::Config::DebugSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Config::DebugSettings*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Config::DebugSettings::DebugSettings()   {
}
constexpr ::Dissonance::LogLevel  Dissonance::Config::DebugSettings::DefaultLevel{static_cast<int32_t>(0x2)};
