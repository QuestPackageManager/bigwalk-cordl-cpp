#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalVoiceProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalVoiceProvider_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "GlobalNamespace/zzzz__IVoiceDataProvider_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.get_CachedVoiceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::LocalVoiceProvider::*)()>(&::GlobalNamespace::LocalVoiceProvider::get_CachedVoiceData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"get_CachedVoiceData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.set_CachedVoiceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)(::ArrayW<float_t>)>(&::GlobalNamespace::LocalVoiceProvider::set_CachedVoiceData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"set_CachedVoiceData", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.get_CachedVoiceWriteHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LocalVoiceProvider::*)()>(&::GlobalNamespace::LocalVoiceProvider::get_CachedVoiceWriteHead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"get_CachedVoiceWriteHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.set_CachedVoiceWriteHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)(int32_t)>(&::GlobalNamespace::LocalVoiceProvider::set_CachedVoiceWriteHead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"set_CachedVoiceWriteHead", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.get_RecommendedVoiceReadHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LocalVoiceProvider::*)()>(&::GlobalNamespace::LocalVoiceProvider::get_RecommendedVoiceReadHead)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803d4de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"get_RecommendedVoiceReadHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.add_OnWriteHeadJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)(::System::Action*)>(&::GlobalNamespace::LocalVoiceProvider::add_OnWriteHeadJump)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803d4d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"add_OnWriteHeadJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.remove_OnWriteHeadJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)(::System::Action*)>(&::GlobalNamespace::LocalVoiceProvider::remove_OnWriteHeadJump)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803d4e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"remove_OnWriteHeadJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)()>(&::GlobalNamespace::LocalVoiceProvider::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d49b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)()>(&::GlobalNamespace::LocalVoiceProvider::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180394f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)()>(&::GlobalNamespace::LocalVoiceProvider::Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803d4be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)(::System::ArraySegment_1<float_t>, ::NAudio::Wave::WaveFormat*)>(&::GlobalNamespace::LocalVoiceProvider::Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803d4a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)()>(&::GlobalNamespace::LocalVoiceProvider::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d4d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider.ResetAudioProcessing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)()>(&::GlobalNamespace::LocalVoiceProvider::ResetAudioProcessing)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803d4cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"ResetAudioProcessing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceProvider::*)()>(&::GlobalNamespace::LocalVoiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::NAudio::Wave::WaveFormat*& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::NAudio::Wave::WaveFormat* const& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void GlobalNamespace::LocalVoiceProvider::__cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
constexpr bool& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__reset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reset;
}
constexpr bool const& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__reset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reset;
}
constexpr void GlobalNamespace::LocalVoiceProvider::__cordl_internal_set__reset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reset = value;
}
constexpr int32_t& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__channelCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelCount;
}
constexpr int32_t const& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__channelCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelCount;
}
constexpr void GlobalNamespace::LocalVoiceProvider::__cordl_internal_set__channelCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelCount = value;
}
constexpr int32_t& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__bufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferLength;
}
constexpr int32_t const& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__bufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferLength;
}
constexpr void GlobalNamespace::LocalVoiceProvider::__cordl_internal_set__bufferLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferLength = value;
}
constexpr int32_t& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__buferrNum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buferrNum;
}
constexpr int32_t const& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__buferrNum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buferrNum;
}
constexpr void GlobalNamespace::LocalVoiceProvider::__cordl_internal_set__buferrNum(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buferrNum = value;
}
constexpr bool& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__firstBufferReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstBufferReceived;
}
constexpr bool const& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__firstBufferReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstBufferReceived;
}
constexpr void GlobalNamespace::LocalVoiceProvider::__cordl_internal_set__firstBufferReceived(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstBufferReceived = value;
}
constexpr bool& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__onWriteHeadJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onWriteHeadJump;
}
constexpr bool const& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__onWriteHeadJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onWriteHeadJump;
}
constexpr void GlobalNamespace::LocalVoiceProvider::__cordl_internal_set__onWriteHeadJump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onWriteHeadJump = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__CachedVoiceData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedVoiceData_k__BackingField;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__CachedVoiceData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedVoiceData_k__BackingField;
}
constexpr void GlobalNamespace::LocalVoiceProvider::__cordl_internal_set__CachedVoiceData_k__BackingField(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CachedVoiceData_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__CachedVoiceWriteHead_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedVoiceWriteHead_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get__CachedVoiceWriteHead_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedVoiceWriteHead_k__BackingField;
}
constexpr void GlobalNamespace::LocalVoiceProvider::__cordl_internal_set__CachedVoiceWriteHead_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CachedVoiceWriteHead_k__BackingField = value;
}
constexpr ::System::Action*& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get_OnWriteHeadJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWriteHeadJump;
}
constexpr ::System::Action* const& GlobalNamespace::LocalVoiceProvider::__cordl_internal_get_OnWriteHeadJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWriteHeadJump;
}
constexpr void GlobalNamespace::LocalVoiceProvider::__cordl_internal_set_OnWriteHeadJump(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnWriteHeadJump = value;
}
inline ::ArrayW<float_t> GlobalNamespace::LocalVoiceProvider::get_CachedVoiceData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"get_CachedVoiceData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoiceProvider::set_CachedVoiceData(::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"set_CachedVoiceData", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LocalVoiceProvider::get_CachedVoiceWriteHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"get_CachedVoiceWriteHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoiceProvider::set_CachedVoiceWriteHead(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"set_CachedVoiceWriteHead", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LocalVoiceProvider::get_RecommendedVoiceReadHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"get_RecommendedVoiceReadHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoiceProvider::add_OnWriteHeadJump(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"add_OnWriteHeadJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalVoiceProvider::remove_OnWriteHeadJump(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"remove_OnWriteHeadJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalVoiceProvider::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoiceProvider::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoiceProvider::Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoiceProvider::Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  buffer, ::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, format);
}
inline void GlobalNamespace::LocalVoiceProvider::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoiceProvider::ResetAudioProcessing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {"ResetAudioProcessing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalVoiceProvider* GlobalNamespace::LocalVoiceProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalVoiceProvider*>());
}
/// @brief Convert operator to "::GlobalNamespace::IVoiceDataProvider"
constexpr  GlobalNamespace::LocalVoiceProvider::operator ::GlobalNamespace::IVoiceDataProvider*() noexcept {
return static_cast<::GlobalNamespace::IVoiceDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVoiceDataProvider"
constexpr ::GlobalNamespace::IVoiceDataProvider* GlobalNamespace::LocalVoiceProvider::i___GlobalNamespace__IVoiceDataProvider() noexcept {
return static_cast<::GlobalNamespace::IVoiceDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr  GlobalNamespace::LocalVoiceProvider::operator ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* GlobalNamespace::LocalVoiceProvider::i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalVoiceProvider::LocalVoiceProvider()   {
}
