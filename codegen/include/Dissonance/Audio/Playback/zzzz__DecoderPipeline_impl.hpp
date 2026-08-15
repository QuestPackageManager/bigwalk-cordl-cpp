#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/DecoderPipeline.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__DecoderPipeline_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceDecoder_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__BufferedDecoder_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__DecoderPipeline_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IDecoderPipeline_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IRateProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IRemoteChannelProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__ISampleSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__Resampler_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SyncState_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SynchronizerSampleSource_def.hpp"
#include "Dissonance/Datastructures/zzzz__ConcurrentPool_1_def.hpp"
#include "Dissonance/Datastructures/zzzz__TransferBuffer_1_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline___c::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline___c.__ctor_b__34_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* (::Dissonance::Audio::Playback::DecoderPipeline___c::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline___c::__ctor_b__34_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ed290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline___c*>(),
                        {"<.ctor>b__34_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Playback::DecoderPipeline___c::setStaticF___9(::Dissonance::Audio::Playback::DecoderPipeline___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::Audio::Playback::DecoderPipeline___c*, "<>9", ::Dissonance::Audio::Playback::DecoderPipeline___c*>(std::forward<::Dissonance::Audio::Playback::DecoderPipeline___c*>(value));
}
inline ::Dissonance::Audio::Playback::DecoderPipeline___c* Dissonance::Audio::Playback::DecoderPipeline___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Audio::Playback::DecoderPipeline___c*, "<>9", ::Dissonance::Audio::Playback::DecoderPipeline___c*>();
}
inline void Dissonance::Audio::Playback::DecoderPipeline___c::setStaticF___9__34_1(::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*, "<>9__34_1", ::Dissonance::Audio::Playback::DecoderPipeline___c*>(std::forward<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*>(value));
}
inline ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* Dissonance::Audio::Playback::DecoderPipeline___c::getStaticF___9__34_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*, "<>9__34_1", ::Dissonance::Audio::Playback::DecoderPipeline___c*>();
}
inline void Dissonance::Audio::Playback::DecoderPipeline___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* Dissonance::Audio::Playback::DecoderPipeline___c::__ctor_b__34_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline___c*>(),
                        {"<.ctor>b__34_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::DecoderPipeline___c* Dissonance::Audio::Playback::DecoderPipeline___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::DecoderPipeline___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::DecoderPipeline___c::DecoderPipeline___c()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0.__ctor_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ed4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::__cordl_internal_get_inputFrameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputFrameSize;
}
constexpr uint32_t const& Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::__cordl_internal_get_inputFrameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputFrameSize;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::__cordl_internal_set_inputFrameSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputFrameSize = value;
}
constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder*& Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::__cordl_internal_get_decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoder;
}
constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder* const& Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::__cordl_internal_get_decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoder;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::__cordl_internal_set_decoder(::Dissonance::Audio::Codecs::IVoiceDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decoder = value;
}
inline void Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::__ctor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0* Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::DecoderPipeline___c__DisplayClass34_0::DecoderPipeline___c__DisplayClass34_0()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.get_BufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::get_BufferCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805dcc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_BufferCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.get_BufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::get_BufferTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805dcc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_BufferTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::get_PacketLoss)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805dcd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.get_PlaybackOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::PlaybackOptions (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::get_PlaybackOptions)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805dcd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_PlaybackOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.get_OutputFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::get_OutputFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805dcce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_OutputFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.get_InputFrameTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::get_InputFrameTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_InputFrameTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.Dissonance_Audio_Playback_IRateProvider_get_PlaybackRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::Dissonance_Audio_Playback_IRateProvider_get_PlaybackRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805dbd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Dissonance.Audio.Playback.IRateProvider.get_PlaybackRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.get_SyncState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::SyncState (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::get_SyncState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805dcdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_SyncState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::get_ID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_ID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline::*)(::Dissonance::Audio::Codecs::IVoiceDecoder*, uint32_t, ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*, ::StringW, bool)>(&::Dissonance::Audio::Playback::DecoderPipeline::_ctor)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x1805dc640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.RecycleFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline::*)(::Dissonance::Networking::VoicePacket)>(&::Dissonance::Audio::Playback::DecoderPipeline::RecycleFrame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805dc400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"RecycleFrame", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline::*)(::Dissonance::Audio::Playback::SessionContext)>(&::Dissonance::Audio::Playback::DecoderPipeline::Prepare)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805dbf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.EnableDynamicSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::EnableDynamicSync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805dbda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"EnableDynamicSync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.SetOutputSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline::*)(::System::Nullable_1<int32_t>)>(&::Dissonance::Audio::Playback::DecoderPipeline::SetOutputSampleRate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805dc4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"SetOutputSampleRate", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::DecoderPipeline::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Playback::DecoderPipeline::Read)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805dc300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.Push
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::DecoderPipeline::*)(::Dissonance::Networking::VoicePacket, ::System::DateTime)>(&::Dissonance::Audio::Playback::DecoderPipeline::Push)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1805dbfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Push", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::Stop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805dc5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805dc490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.FlushTransferBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::FlushTransferBuffer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805dbdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"FlushTransferBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.get_VolumeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::IVolumeProvider* (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::get_VolumeProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_VolumeProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.set_VolumeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline::*)(::Dissonance::Audio::Playback::IVolumeProvider*)>(&::Dissonance::Audio::Playback::DecoderPipeline::set_VolumeProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803117a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"set_VolumeProvider", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IVolumeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::DecoderPipeline::*)()>(&::Dissonance::Audio::Playback::DecoderPipeline::Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805dbd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Dissonance.Audio.Playback.IVolumeProvider.get_TargetVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipeline.GetRemoteChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipeline::*)(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*)>(&::Dissonance::Audio::Playback::DecoderPipeline::GetRemoteChannels)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805dbeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"GetRemoteChannels", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__completionHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completionHandler;
}
constexpr ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>* const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__completionHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completionHandler;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__completionHandler(::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____completionHandler = value;
}
constexpr ::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Networking::VoicePacket>*& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__inputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBuffer;
}
constexpr ::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Networking::VoicePacket>* const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__inputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBuffer;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__inputBuffer(::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Networking::VoicePacket>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputBuffer = value;
}
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__bytePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytePool;
}
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>* const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__bytePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytePool;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__bytePool(::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bytePool = value;
}
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__channelListPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelListPool;
}
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__channelListPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelListPool;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__channelListPool(::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelListPool = value;
}
constexpr ::Dissonance::Audio::Playback::BufferedDecoder*& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::Dissonance::Audio::Playback::BufferedDecoder* const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__source(::Dissonance::Audio::Playback::BufferedDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr ::Dissonance::Audio::Playback::SynchronizerSampleSource*& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__synchronizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synchronizer;
}
constexpr ::Dissonance::Audio::Playback::SynchronizerSampleSource* const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__synchronizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synchronizer;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__synchronizer(::Dissonance::Audio::Playback::SynchronizerSampleSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____synchronizer = value;
}
constexpr ::Dissonance::Audio::Playback::Resampler*& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__resampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampler;
}
constexpr ::Dissonance::Audio::Playback::Resampler* const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__resampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampler;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__resampler(::Dissonance::Audio::Playback::Resampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resampler = value;
}
constexpr ::Dissonance::Audio::Playback::ISampleSource*& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr ::Dissonance::Audio::Playback::ISampleSource* const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__output(::Dissonance::Audio::Playback::ISampleSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____output = value;
}
constexpr bool& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__prepared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prepared;
}
constexpr bool const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__prepared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prepared;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__prepared(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prepared = value;
}
constexpr bool& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__complete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complete;
}
constexpr bool const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__complete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complete;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__complete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____complete = value;
}
constexpr bool& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__sourceClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceClosed;
}
constexpr bool const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__sourceClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceClosed;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__sourceClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceClosed = value;
}
constexpr ::System::TimeSpan& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__frameDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameDuration;
}
constexpr ::System::TimeSpan const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__frameDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameDuration;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__frameDuration(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameDuration = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__firstFrameArrival()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstFrameArrival;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__firstFrameArrival() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstFrameArrival;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__firstFrameArrival(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstFrameArrival = value;
}
constexpr uint32_t& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__firstFrameSeq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstFrameSeq;
}
constexpr uint32_t const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__firstFrameSeq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstFrameSeq;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__firstFrameSeq(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstFrameSeq = value;
}
constexpr ::StringW& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr ::StringW const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr ::Dissonance::Audio::Playback::IVolumeProvider*& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__VolumeProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeProvider_k__BackingField;
}
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* const& Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_get__VolumeProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeProvider_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::DecoderPipeline::__cordl_internal_set__VolumeProvider_k__BackingField(::Dissonance::Audio::Playback::IVolumeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VolumeProvider_k__BackingField = value;
}
inline void Dissonance::Audio::Playback::DecoderPipeline::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::DecoderPipeline*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::DecoderPipeline::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::DecoderPipeline*>();
}
inline int32_t Dissonance::Audio::Playback::DecoderPipeline::get_BufferCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_BufferCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::TimeSpan Dissonance::Audio::Playback::DecoderPipeline::get_BufferTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_BufferTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::DecoderPipeline::get_PacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::PlaybackOptions Dissonance::Audio::Playback::DecoderPipeline::get_PlaybackOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_PlaybackOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::PlaybackOptions>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Playback::DecoderPipeline::get_OutputFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_OutputFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline ::System::TimeSpan Dissonance::Audio::Playback::DecoderPipeline::get_InputFrameTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_InputFrameTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::DecoderPipeline::Dissonance_Audio_Playback_IRateProvider_get_PlaybackRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Dissonance.Audio.Playback.IRateProvider.get_PlaybackRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::SyncState Dissonance::Audio::Playback::DecoderPipeline::get_SyncState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_SyncState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::SyncState>(this, ___internal_method);
}
inline ::StringW Dissonance::Audio::Playback::DecoderPipeline::get_ID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_ID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::DecoderPipeline::_ctor(::Dissonance::Audio::Codecs::IVoiceDecoder*  decoder, uint32_t  inputFrameSize, ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  completionHandler, ::StringW  id, bool  softClip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decoder, inputFrameSize, completionHandler, id, softClip);
}
inline void Dissonance::Audio::Playback::DecoderPipeline::RecycleFrame(::Dissonance::Networking::VoicePacket  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"RecycleFrame", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void Dissonance::Audio::Playback::DecoderPipeline::Prepare(::Dissonance::Audio::Playback::SessionContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void Dissonance::Audio::Playback::DecoderPipeline::EnableDynamicSync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"EnableDynamicSync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::DecoderPipeline::SetOutputSampleRate(::System::Nullable_1<int32_t>  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"SetOutputSampleRate", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rate);
}
inline bool Dissonance::Audio::Playback::DecoderPipeline::Read(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, samples);
}
inline float_t Dissonance::Audio::Playback::DecoderPipeline::Push(::Dissonance::Networking::VoicePacket  packet, ::System::DateTime  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Push", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, packet, now);
}
inline void Dissonance::Audio::Playback::DecoderPipeline::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::DecoderPipeline::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::DecoderPipeline::FlushTransferBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"FlushTransferBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::IVolumeProvider* Dissonance::Audio::Playback::DecoderPipeline::get_VolumeProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"get_VolumeProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::IVolumeProvider*>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::DecoderPipeline::set_VolumeProvider(::Dissonance::Audio::Playback::IVolumeProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"set_VolumeProvider", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IVolumeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Playback::DecoderPipeline::Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"Dissonance.Audio.Playback.IVolumeProvider.get_TargetVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::DecoderPipeline::GetRemoteChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipeline*>(),
                        {"GetRemoteChannels", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Dissonance::Audio::Playback::DecoderPipeline* Dissonance::Audio::Playback::DecoderPipeline::New_ctor(::Dissonance::Audio::Codecs::IVoiceDecoder*  decoder, uint32_t  inputFrameSize, ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  completionHandler, ::StringW  id, bool  softClip)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::DecoderPipeline*>(decoder, inputFrameSize, completionHandler, id, softClip));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IDecoderPipeline"
constexpr  Dissonance::Audio::Playback::DecoderPipeline::operator ::Dissonance::Audio::Playback::IDecoderPipeline*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IDecoderPipeline*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IDecoderPipeline"
constexpr ::Dissonance::Audio::Playback::IDecoderPipeline* Dissonance::Audio::Playback::DecoderPipeline::i___Dissonance__Audio__Playback__IDecoderPipeline() noexcept {
return static_cast<::Dissonance::Audio::Playback::IDecoderPipeline*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr  Dissonance::Audio::Playback::DecoderPipeline::operator ::Dissonance::Audio::Playback::IVolumeProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVolumeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* Dissonance::Audio::Playback::DecoderPipeline::i___Dissonance__Audio__Playback__IVolumeProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVolumeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr  Dissonance::Audio::Playback::DecoderPipeline::operator ::Dissonance::Audio::Playback::IRemoteChannelProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr ::Dissonance::Audio::Playback::IRemoteChannelProvider* Dissonance::Audio::Playback::DecoderPipeline::i___Dissonance__Audio__Playback__IRemoteChannelProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IRateProvider"
constexpr  Dissonance::Audio::Playback::DecoderPipeline::operator ::Dissonance::Audio::Playback::IRateProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IRateProvider"
constexpr ::Dissonance::Audio::Playback::IRateProvider* Dissonance::Audio::Playback::DecoderPipeline::i___Dissonance__Audio__Playback__IRateProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRateProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::DecoderPipeline::DecoderPipeline()   {
}
