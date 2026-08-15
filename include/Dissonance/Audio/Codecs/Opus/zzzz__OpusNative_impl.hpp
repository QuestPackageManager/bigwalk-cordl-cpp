#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Opus/OpusNative.hpp"
#include "System/Runtime/InteropServices/zzzz__CallingConvention_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Codecs/Opus/zzzz__OpusNative_def.hpp"
#include "Dissonance/Audio/Codecs/Opus/zzzz__OpusNative_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__EncodedBuffer_def.hpp"
#include "Dissonance/Threading/zzzz__LockedValue_1_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.opus_get_version_string
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_get_version_string)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805f8960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_get_version_string", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.opus_encoder_create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, int32_t, int32_t, ::by_ref<int32_t>)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_encoder_create)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805f8840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_encoder_create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.opus_encoder_destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_encoder_destroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805f88e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_encoder_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.opus_encode_float
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_encode_float)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805f8790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_encode_float", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.opus_decoder_create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, int32_t, ::by_ref<int32_t>)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_decoder_create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805f8680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_decoder_create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.opus_decoder_destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_decoder_destroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805f8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_decoder_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.opus_decode_float
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_decode_float)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805f85c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_decode_float", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.dissonance_opus_decoder_ctl_out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl, ::by_ref<int32_t>)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::dissonance_opus_decoder_ctl_out)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805f83e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"dissonance_opus_decoder_ctl_out", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.dissonance_opus_decoder_ctl_in
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl, int32_t)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::dissonance_opus_decoder_ctl_in)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805f8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"dissonance_opus_decoder_ctl_in", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.dissonance_opus_encoder_ctl_out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl, ::by_ref<int32_t>)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::dissonance_opus_encoder_ctl_out)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805f8520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"dissonance_opus_encoder_ctl_out", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.dissonance_opus_encoder_ctl_in
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl, int32_t)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::dissonance_opus_encoder_ctl_in)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805f8480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"dissonance_opus_encoder_ctl_in", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods.opus_pcm_soft_clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::ArrayW<float_t>)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_pcm_soft_clip)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805f89d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_pcm_soft_clip", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_get_version_string()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_get_version_string", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_encoder_create(int32_t  samplingRate, int32_t  channels, int32_t  application, ::by_ref<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_encoder_create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, samplingRate, channels, application, error);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_encoder_destroy(::System::IntPtr  encoder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_encoder_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, encoder);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_encode_float(::System::IntPtr  encoder, ::System::IntPtr  floatPcm, int32_t  frameSize, ::System::IntPtr  byteEncoded, int32_t  maxEncodedLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_encode_float", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, encoder, floatPcm, frameSize, byteEncoded, maxEncodedLength);
}
inline ::System::IntPtr Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_decoder_create(int32_t  samplingRate, int32_t  channels, ::by_ref<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_decoder_create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, samplingRate, channels, error);
}
inline ::System::IntPtr Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_decoder_destroy(::System::IntPtr  decoder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_decoder_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, decoder);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_decode_float(::System::IntPtr  decoder, ::System::IntPtr  byteData, int32_t  dataLength, ::System::IntPtr  floatPcm, int32_t  frameSize, bool  decodeFEC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_decode_float", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, decoder, byteData, dataLength, floatPcm, frameSize, decodeFEC);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::dissonance_opus_decoder_ctl_out(::System::IntPtr  st, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  request, ::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"dissonance_opus_decoder_ctl_out", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, request, value);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::dissonance_opus_decoder_ctl_in(::System::IntPtr  st, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  request, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"dissonance_opus_decoder_ctl_in", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, request, value);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::dissonance_opus_encoder_ctl_out(::System::IntPtr  st, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  request, ::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"dissonance_opus_encoder_ctl_out", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, request, value);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::dissonance_opus_encoder_ctl_in(::System::IntPtr  st, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  request, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"dissonance_opus_encoder_ctl_in", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, request, value);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::opus_pcm_soft_clip(::System::IntPtr  pcm, int32_t  frameSize, int32_t  channels, ::ArrayW<float_t>  softClipMem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*>(),
                        {"opus_pcm_soft_clip", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pcm, frameSize, channels, softClipMem);
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods::OpusNative_OpusNativeMethods()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl::OpusNative_Ctl(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl::OpusNative_Ctl()   {
}
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  Dissonance::Audio::Codecs::Opus::OpusNative_Ctl::SetBitrateRequest{static_cast<int32_t>(0xfa2)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  Dissonance::Audio::Codecs::Opus::OpusNative_Ctl::GetBitrateRequest{static_cast<int32_t>(0xfa3)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  Dissonance::Audio::Codecs::Opus::OpusNative_Ctl::SetInbandFECRequest{static_cast<int32_t>(0xfac)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  Dissonance::Audio::Codecs::Opus::OpusNative_Ctl::GetInbandFECRequest{static_cast<int32_t>(0xfad)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  Dissonance::Audio::Codecs::Opus::OpusNative_Ctl::SetPacketLossPercRequest{static_cast<int32_t>(0xfae)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  Dissonance::Audio::Codecs::Opus::OpusNative_Ctl::GetPacketLossPercRequest{static_cast<int32_t>(0xfaf)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  Dissonance::Audio::Codecs::Opus::OpusNative_Ctl::ResetState{static_cast<int32_t>(0xfbc)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth::OpusNative_Bandwidth(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth::OpusNative_Bandwidth()   {
}
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth  Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth::Narrowband{static_cast<int32_t>(0x44d)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth  Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth::Mediumband{static_cast<int32_t>(0x44e)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth  Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth::Wideband{static_cast<int32_t>(0x44f)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth  Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth::SuperWideband{static_cast<int32_t>(0x450)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth  Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth::Fullband{static_cast<int32_t>(0x451)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Application::OpusNative_Application(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Application::OpusNative_Application()   {
}
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Application  Dissonance::Audio::Codecs::Opus::OpusNative_Application::Voip{static_cast<int32_t>(0x800)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Application  Dissonance::Audio::Codecs::Opus::OpusNative_Application::Audio{static_cast<int32_t>(0x801)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_Application  Dissonance::Audio::Codecs::Opus::OpusNative_Application::RestrictedLowLatency{static_cast<int32_t>(0x803)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors::OpusNative_OpusErrors(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors::OpusNative_OpusErrors()   {
}
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors  Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors::Ok{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors  Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors::BadArg{static_cast<int32_t>(0xffffffff)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors  Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors::BufferToSmall{static_cast<int32_t>(0xfffffffe)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors  Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors::InternalError{static_cast<int32_t>(0xfffffffd)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors  Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors::InvalidPacket{static_cast<int32_t>(0xfffffffc)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors  Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors::Unimplemented{static_cast<int32_t>(0xfffffffb)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors  Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors::InvalidState{static_cast<int32_t>(0xfffffffa)};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors  Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors::AllocFail{static_cast<int32_t>(0xfffffff9)};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException::*)(::StringW)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804be150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException* Dissonance::Audio::Codecs::Opus::OpusNative_OpusException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException*>(message));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException::OpusNative_OpusException()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.get_Bitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::get_Bitrate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"get_Bitrate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.set_Bitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)(int32_t)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::set_Bitrate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f8110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"set_Bitrate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.get_EnableForwardErrorCorrection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::get_EnableForwardErrorCorrection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"get_EnableForwardErrorCorrection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.set_EnableForwardErrorCorrection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)(bool)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::set_EnableForwardErrorCorrection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f8120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"set_EnableForwardErrorCorrection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::get_PacketLoss)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805f80c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.set_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)(float_t)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::set_PacketLoss)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805f8150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"set_PacketLoss", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)(int32_t, int32_t)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1805f7dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.EncodeFloats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)(::System::ArraySegment_1<float_t>, ::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::EncodeFloats)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x1805f6b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"EncodeFloats", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::Reset)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805f78e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.OpusCtlIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)(::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl, int32_t)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::OpusCtlIn)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1805f73e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"OpusCtlIn", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.OpusCtlOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)(::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl, ::by_ref<int32_t>)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::OpusCtlOut)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1805f7620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"OpusCtlOut", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::Finalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f7180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                    {::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::Dispose)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805f69d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*& Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>* const& Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::__cordl_internal_set__encoder(::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr int32_t& Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::__cordl_internal_get__packetLoss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packetLoss;
}
constexpr int32_t const& Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::__cordl_internal_get__packetLoss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packetLoss;
}
constexpr void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::__cordl_internal_set__packetLoss(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____packetLoss = value;
}
constexpr bool& Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>();
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::get_Bitrate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"get_Bitrate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::set_Bitrate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"set_Bitrate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::get_EnableForwardErrorCorrection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"get_EnableForwardErrorCorrection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::set_EnableForwardErrorCorrection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"set_EnableForwardErrorCorrection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::get_PacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::set_PacketLoss(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"set_PacketLoss", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::_ctor(int32_t  srcSamplingRate, int32_t  srcChannelCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcSamplingRate, srcChannelCount);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::EncodeFloats(::System::ArraySegment_1<float_t>  sourcePcm, ::System::ArraySegment_1<uint8_t>  dstEncoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"EncodeFloats", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sourcePcm, dstEncoded);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::OpusCtlIn(::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  ctl, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"OpusCtlIn", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ctl, value);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::OpusCtlOut(::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  ctl, ::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"OpusCtlOut", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ctl, value);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder* Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::New_ctor(int32_t  srcSamplingRate, int32_t  srcChannelCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*>(srcSamplingRate, srcChannelCount));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder::OpusNative_OpusEncoder()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder.get_EnableForwardErrorCorrection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::get_EnableForwardErrorCorrection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {"get_EnableForwardErrorCorrection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder.set_EnableForwardErrorCorrection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::*)(bool)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::set_EnableForwardErrorCorrection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {"set_EnableForwardErrorCorrection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::*)(int32_t, int32_t)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1805f6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::Finalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f64d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                    {::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::Dispose)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805f62f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder.DecodeFloats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::*)(::Dissonance::Audio::Codecs::EncodedBuffer, ::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::DecodeFloats)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x1805f5cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {"DecodeFloats", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::EncodedBuffer>(), ::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::Reset)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805f64e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*& Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::__cordl_internal_get__decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>* const& Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::__cordl_internal_get__decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr void Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::__cordl_internal_set__decoder(::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decoder = value;
}
constexpr bool& Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::__cordl_internal_get__EnableForwardErrorCorrection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableForwardErrorCorrection_k__BackingField;
}
constexpr bool const& Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::__cordl_internal_get__EnableForwardErrorCorrection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableForwardErrorCorrection_k__BackingField;
}
constexpr void Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::__cordl_internal_set__EnableForwardErrorCorrection_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableForwardErrorCorrection_k__BackingField = value;
}
constexpr bool& Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>();
}
inline bool Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::get_EnableForwardErrorCorrection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {"get_EnableForwardErrorCorrection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::set_EnableForwardErrorCorrection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {"set_EnableForwardErrorCorrection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::_ctor(int32_t  outputSampleRate, int32_t  outputChannelCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputSampleRate, outputChannelCount);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::DecodeFloats(::Dissonance::Audio::Codecs::EncodedBuffer  srcEncodedBuffer, ::System::ArraySegment_1<float_t>  dstBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {"DecodeFloats", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::EncodedBuffer>(), ::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, srcEncodedBuffer, dstBuffer);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder* Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::New_ctor(int32_t  outputSampleRate, int32_t  outputChannelCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*>(outputSampleRate, outputChannelCount));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder::OpusNative_OpusDecoder()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::*)(int32_t)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805f8ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip.Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::Clip)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805f8b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*>(),
                        {"Clip", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::Reset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f8c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::__cordl_internal_get__disabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabled;
}
constexpr bool const& Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::__cordl_internal_get__disabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabled;
}
constexpr void Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::__cordl_internal_set__disabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabled = value;
}
constexpr ::ArrayW<float_t>& Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::__cordl_internal_get__memory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____memory;
}
constexpr ::ArrayW<float_t> const& Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::__cordl_internal_get__memory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____memory;
}
constexpr void Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::__cordl_internal_set__memory(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____memory = value;
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::_ctor(int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channels);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::Clip(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*>(),
                        {"Clip", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip* Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::New_ctor(int32_t  channels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*>(channels));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip::OpusNative_OpusSoftClip()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative.OpusVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative::OpusVersion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805f8a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative*>(),
                        {"OpusVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusNative._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusNative::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusNative::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Dissonance::Audio::Codecs::Opus::OpusNative::OpusVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative*>(),
                        {"OpusVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Opus::OpusNative::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusNative*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Codecs::Opus::OpusNative* Dissonance::Audio::Codecs::Opus::OpusNative::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Codecs::Opus::OpusNative*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative::OpusNative()   {
}
constexpr ::System::Runtime::InteropServices::CallingConvention  Dissonance::Audio::Codecs::Opus::OpusNative::Convention{static_cast<int32_t>(0x2)};
