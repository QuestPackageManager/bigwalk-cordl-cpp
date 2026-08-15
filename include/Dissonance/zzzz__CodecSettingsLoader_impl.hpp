#pragma once
// IWYU pragma private; include "Dissonance/CodecSettingsLoader.hpp"
#include "Dissonance/Audio/Codecs/zzzz__Codec_impl.hpp"
#include "Dissonance/zzzz__AudioQuality_impl.hpp"
#include "Dissonance/zzzz__CodecSettings_impl.hpp"
#include "Dissonance/zzzz__FrameSize_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__CodecSettingsLoader_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__Codec_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceEncoder_def.hpp"
#include "Dissonance/zzzz__AudioQuality_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__FrameSize_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Dissonance::CodecSettingsLoader.get_Config
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CodecSettings (::Dissonance::CodecSettingsLoader::*)()>(&::Dissonance::CodecSettingsLoader::get_Config)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c6b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {"get_Config", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::CodecSettingsLoader.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::CodecSettingsLoader::*)(::Dissonance::Audio::Codecs::Codec)>(&::Dissonance::CodecSettingsLoader::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805c69e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {"Start", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Codec>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::CodecSettingsLoader.GenerateSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::CodecSettingsLoader::*)()>(&::Dissonance::CodecSettingsLoader::GenerateSettings)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805c6700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {"GenerateSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::CodecSettingsLoader.GetEncoderSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CodecSettings (*)(::Dissonance::Audio::Codecs::Codec, ::Dissonance::AudioQuality, ::Dissonance::FrameSize)>(&::Dissonance::CodecSettingsLoader::GetEncoderSettings)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805c68e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {"GetEncoderSettings", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Codec>(), ::i2c::type_of<::Dissonance::AudioQuality>(), ::i2c::type_of<::Dissonance::FrameSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::CodecSettingsLoader.CreateEncoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Codecs::IVoiceEncoder* (::Dissonance::CodecSettingsLoader::*)()>(&::Dissonance::CodecSettingsLoader::CreateEncoder)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805c6570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {"CreateEncoder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::CodecSettingsLoader.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::CodecSettingsLoader::*)()>(&::Dissonance::CodecSettingsLoader::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805c6a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                    {::i2c::class_of<::Dissonance::CodecSettingsLoader*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::CodecSettingsLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::CodecSettingsLoader::*)()>(&::Dissonance::CodecSettingsLoader::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c6b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Dissonance::CodecSettingsLoader::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Dissonance::CodecSettingsLoader::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Dissonance::CodecSettingsLoader::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr bool& Dissonance::CodecSettingsLoader::__cordl_internal_get__settingsReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsReady;
}
constexpr bool const& Dissonance::CodecSettingsLoader::__cordl_internal_get__settingsReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsReady;
}
constexpr void Dissonance::CodecSettingsLoader::__cordl_internal_set__settingsReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsReady = value;
}
constexpr ::System::Object*& Dissonance::CodecSettingsLoader::__cordl_internal_get__settingsWriteLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsWriteLock;
}
constexpr ::System::Object* const& Dissonance::CodecSettingsLoader::__cordl_internal_get__settingsWriteLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsWriteLock;
}
constexpr void Dissonance::CodecSettingsLoader::__cordl_internal_set__settingsWriteLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsWriteLock = value;
}
constexpr ::Dissonance::CodecSettings& Dissonance::CodecSettingsLoader::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::Dissonance::CodecSettings const& Dissonance::CodecSettingsLoader::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Dissonance::CodecSettingsLoader::__cordl_internal_set__config(::Dissonance::CodecSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr ::Dissonance::AudioQuality& Dissonance::CodecSettingsLoader::__cordl_internal_get__encoderQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoderQuality;
}
constexpr ::Dissonance::AudioQuality const& Dissonance::CodecSettingsLoader::__cordl_internal_get__encoderQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoderQuality;
}
constexpr void Dissonance::CodecSettingsLoader::__cordl_internal_set__encoderQuality(::Dissonance::AudioQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoderQuality = value;
}
constexpr ::Dissonance::FrameSize& Dissonance::CodecSettingsLoader::__cordl_internal_get__encoderFrameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoderFrameSize;
}
constexpr ::Dissonance::FrameSize const& Dissonance::CodecSettingsLoader::__cordl_internal_get__encoderFrameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoderFrameSize;
}
constexpr void Dissonance::CodecSettingsLoader::__cordl_internal_set__encoderFrameSize(::Dissonance::FrameSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoderFrameSize = value;
}
constexpr ::Dissonance::Audio::Codecs::Codec& Dissonance::CodecSettingsLoader::__cordl_internal_get__codec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr ::Dissonance::Audio::Codecs::Codec const& Dissonance::CodecSettingsLoader::__cordl_internal_get__codec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr void Dissonance::CodecSettingsLoader::__cordl_internal_set__codec(::Dissonance::Audio::Codecs::Codec  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codec = value;
}
constexpr bool& Dissonance::CodecSettingsLoader::__cordl_internal_get__encodeFec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encodeFec;
}
constexpr bool const& Dissonance::CodecSettingsLoader::__cordl_internal_get__encodeFec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encodeFec;
}
constexpr void Dissonance::CodecSettingsLoader::__cordl_internal_set__encodeFec(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encodeFec = value;
}
inline void Dissonance::CodecSettingsLoader::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::CodecSettingsLoader*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::CodecSettingsLoader::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::CodecSettingsLoader*>();
}
inline ::Dissonance::CodecSettings Dissonance::CodecSettingsLoader::get_Config()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {"get_Config", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CodecSettings>(this, ___internal_method);
}
inline void Dissonance::CodecSettingsLoader::Start(::Dissonance::Audio::Codecs::Codec  codec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {"Start", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Codec>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codec);
}
inline void Dissonance::CodecSettingsLoader::GenerateSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {"GenerateSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::CodecSettings Dissonance::CodecSettingsLoader::GetEncoderSettings(::Dissonance::Audio::Codecs::Codec  codec, ::Dissonance::AudioQuality  quality, ::Dissonance::FrameSize  frameSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {"GetEncoderSettings", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Codec>(), ::i2c::type_of<::Dissonance::AudioQuality>(), ::i2c::type_of<::Dissonance::FrameSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CodecSettings>(nullptr, ___internal_method, codec, quality, frameSize);
}
inline ::Dissonance::Audio::Codecs::IVoiceEncoder* Dissonance::CodecSettingsLoader::CreateEncoder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {"CreateEncoder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Codecs::IVoiceEncoder*>(this, ___internal_method);
}
inline ::StringW Dissonance::CodecSettingsLoader::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::CodecSettingsLoader*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::CodecSettingsLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettingsLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::CodecSettingsLoader* Dissonance::CodecSettingsLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::CodecSettingsLoader*>());
}
// Ctor Parameters []
constexpr ::Dissonance::CodecSettingsLoader::CodecSettingsLoader()   {
}
