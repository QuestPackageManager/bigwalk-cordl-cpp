#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Opus/OpusNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusNative)
namespace Dissonance::Audio::Codecs::Opus {
struct OpusNative_Application;
}
namespace Dissonance::Audio::Codecs::Opus {
struct OpusNative_Bandwidth;
}
namespace Dissonance::Audio::Codecs::Opus {
struct OpusNative_Ctl;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusDecoder;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusEncoder;
}
namespace Dissonance::Audio::Codecs::Opus {
struct OpusNative_OpusErrors;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusException;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusNativeMethods;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusSoftClip;
}
namespace Dissonance::Audio::Codecs {
struct EncodedBuffer;
}
namespace Dissonance::Threading {
template<typename T>
class LockedValue_1;
}
namespace Dissonance {
class Log;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Dissonance::Audio::Codecs::Opus {
struct OpusNative_Application;
}
namespace Dissonance::Audio::Codecs::Opus {
struct OpusNative_Bandwidth;
}
namespace Dissonance::Audio::Codecs::Opus {
struct OpusNative_Ctl;
}
namespace Dissonance::Audio::Codecs::Opus {
struct OpusNative_OpusErrors;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusDecoder;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusEncoder;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusException;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusNativeMethods;
}
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusSoftClip;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Codecs::Opus::OpusNative_Application);
MARK_VAL_T(::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth);
MARK_VAL_T(::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl);
MARK_VAL_T(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors);
MARK_REF_T(::Dissonance::Audio::Codecs::Opus::OpusNative*);
MARK_REF_T(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*);
MARK_REF_T(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*);
MARK_REF_T(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException*);
MARK_REF_T(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*);
MARK_REF_T(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusNative_Application, "Dissonance.Audio.Codecs.Opus", "OpusNative/Application");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth, "Dissonance.Audio.Codecs.Opus", "OpusNative/Bandwidth");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl, "Dissonance.Audio.Codecs.Opus", "OpusNative/Ctl");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors, "Dissonance.Audio.Codecs.Opus", "OpusNative/OpusErrors");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusNative*, "Dissonance.Audio.Codecs.Opus", "OpusNative");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder*, "Dissonance.Audio.Codecs.Opus", "OpusNative/OpusDecoder");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*, "Dissonance.Audio.Codecs.Opus", "OpusNative/OpusEncoder");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException*, "Dissonance.Audio.Codecs.Opus", "OpusNative/OpusException");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods*, "Dissonance.Audio.Codecs.Opus", "OpusNative/OpusNativeMethods");
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*, "Dissonance.Audio.Codecs.Opus", "OpusNative/OpusSoftClip");
// Dependencies System.Object
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.Opus.OpusNative/OpusNativeMethods
class CORDL_TYPE OpusNative_OpusNativeMethods : public ::System::Object {
public:
// Declarations
/// @brief Method dissonance_opus_decoder_ctl_in, addr 0x1805f8340, size 0xa0, virtual false, abstract: false, final false
static inline int32_t dissonance_opus_decoder_ctl_in(::System::IntPtr  st, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  request, int32_t  value) ;

/// @brief Method dissonance_opus_decoder_ctl_out, addr 0x1805f83e0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t dissonance_opus_decoder_ctl_out(::System::IntPtr  st, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  request, ::by_ref<int32_t>  value) ;

/// @brief Method dissonance_opus_encoder_ctl_in, addr 0x1805f8480, size 0xa0, virtual false, abstract: false, final false
static inline int32_t dissonance_opus_encoder_ctl_in(::System::IntPtr  st, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  request, int32_t  value) ;

/// @brief Method dissonance_opus_encoder_ctl_out, addr 0x1805f8520, size 0xa0, virtual false, abstract: false, final false
static inline int32_t dissonance_opus_encoder_ctl_out(::System::IntPtr  st, ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  request, ::by_ref<int32_t>  value) ;

/// @brief Method opus_decode_float, addr 0x1805f85c0, size 0xc0, virtual false, abstract: false, final false
static inline int32_t opus_decode_float(::System::IntPtr  decoder, ::System::IntPtr  byteData, int32_t  dataLength, ::System::IntPtr  floatPcm, int32_t  frameSize, bool  decodeFEC) ;

/// @brief Method opus_decoder_create, addr 0x1805f8680, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr opus_decoder_create(int32_t  samplingRate, int32_t  channels, ::by_ref<int32_t>  error) ;

/// @brief Method opus_decoder_destroy, addr 0x1805f8710, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr opus_decoder_destroy(::System::IntPtr  decoder) ;

/// @brief Method opus_encode_float, addr 0x1805f8790, size 0xb0, virtual false, abstract: false, final false
static inline int32_t opus_encode_float(::System::IntPtr  encoder, ::System::IntPtr  floatPcm, int32_t  frameSize, ::System::IntPtr  byteEncoded, int32_t  maxEncodedLength) ;

/// @brief Method opus_encoder_create, addr 0x1805f8840, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr opus_encoder_create(int32_t  samplingRate, int32_t  channels, int32_t  application, ::by_ref<int32_t>  error) ;

/// @brief Method opus_encoder_destroy, addr 0x1805f88e0, size 0x80, virtual false, abstract: false, final false
static inline void opus_encoder_destroy(::System::IntPtr  encoder) ;

/// @brief Method opus_get_version_string, addr 0x1805f8960, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr opus_get_version_string() ;

/// @brief Method opus_pcm_soft_clip, addr 0x1805f89d0, size 0xb0, virtual false, abstract: false, final false
static inline void opus_pcm_soft_clip(::System::IntPtr  pcm, int32_t  frameSize, int32_t  channels, ::ArrayW<float_t>  softClipMem) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusNative_OpusNativeMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusNative_OpusNativeMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusNative_OpusNativeMethods(OpusNative_OpusNativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusNative_OpusNativeMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusNative_OpusNativeMethods(OpusNative_OpusNativeMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17001};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
// Dependencies 
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: true
// CS Name: Dissonance.Audio.Codecs.Opus.OpusNative/Ctl
struct CORDL_TYPE OpusNative_Ctl {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusNative_Ctl_Unwrapped
enum struct __OpusNative_Ctl_Unwrapped : int32_t {
__E_SetBitrateRequest = static_cast<int32_t>(0xfa2),
__E_GetBitrateRequest = static_cast<int32_t>(0xfa3),
__E_SetInbandFECRequest = static_cast<int32_t>(0xfac),
__E_GetInbandFECRequest = static_cast<int32_t>(0xfad),
__E_SetPacketLossPercRequest = static_cast<int32_t>(0xfae),
__E_GetPacketLossPercRequest = static_cast<int32_t>(0xfaf),
__E_ResetState = static_cast<int32_t>(0xfbc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusNative_Ctl_Unwrapped () const noexcept {
return static_cast<__OpusNative_Ctl_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpusNative_Ctl() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OpusNative_Ctl(int32_t  value__) noexcept;

/// @brief Field GetBitrateRequest value: I32(4003)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl const GetBitrateRequest;

/// @brief Field GetInbandFECRequest value: I32(4013)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl const GetInbandFECRequest;

/// @brief Field GetPacketLossPercRequest value: I32(4015)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl const GetPacketLossPercRequest;

/// @brief Field ResetState value: I32(4028)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl const ResetState;

/// @brief Field SetBitrateRequest value: I32(4002)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl const SetBitrateRequest;

/// @brief Field SetInbandFECRequest value: I32(4012)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl const SetInbandFECRequest;

/// @brief Field SetPacketLossPercRequest value: I32(4014)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl const SetPacketLossPercRequest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17002};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
// Dependencies 
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: true
// CS Name: Dissonance.Audio.Codecs.Opus.OpusNative/Bandwidth
struct CORDL_TYPE OpusNative_Bandwidth {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusNative_Bandwidth_Unwrapped
enum struct __OpusNative_Bandwidth_Unwrapped : int32_t {
__E_Narrowband = static_cast<int32_t>(0x44d),
__E_Mediumband = static_cast<int32_t>(0x44e),
__E_Wideband = static_cast<int32_t>(0x44f),
__E_SuperWideband = static_cast<int32_t>(0x450),
__E_Fullband = static_cast<int32_t>(0x451),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusNative_Bandwidth_Unwrapped () const noexcept {
return static_cast<__OpusNative_Bandwidth_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpusNative_Bandwidth() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OpusNative_Bandwidth(int32_t  value__) noexcept;

/// @brief Field Fullband value: I32(1105)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth const Fullband;

/// @brief Field Mediumband value: I32(1102)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth const Mediumband;

/// @brief Field Narrowband value: I32(1101)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth const Narrowband;

/// @brief Field SuperWideband value: I32(1104)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth const SuperWideband;

/// @brief Field Wideband value: I32(1103)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth const Wideband;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17003};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
// Dependencies 
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: true
// CS Name: Dissonance.Audio.Codecs.Opus.OpusNative/Application
struct CORDL_TYPE OpusNative_Application {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusNative_Application_Unwrapped
enum struct __OpusNative_Application_Unwrapped : int32_t {
__E_Voip = static_cast<int32_t>(0x800),
__E_Audio = static_cast<int32_t>(0x801),
__E_RestrictedLowLatency = static_cast<int32_t>(0x803),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusNative_Application_Unwrapped () const noexcept {
return static_cast<__OpusNative_Application_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpusNative_Application() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OpusNative_Application(int32_t  value__) noexcept;

/// @brief Field Audio value: I32(2049)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Application const Audio;

/// @brief Field RestrictedLowLatency value: I32(2051)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Application const RestrictedLowLatency;

/// @brief Field Voip value: I32(2048)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_Application const Voip;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_Application, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusNative_Application) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
// Dependencies 
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: true
// CS Name: Dissonance.Audio.Codecs.Opus.OpusNative/OpusErrors
struct CORDL_TYPE OpusNative_OpusErrors {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusNative_OpusErrors_Unwrapped
enum struct __OpusNative_OpusErrors_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_BadArg = static_cast<int32_t>(0xffffffff),
__E_BufferToSmall = static_cast<int32_t>(0xfffffffe),
__E_InternalError = static_cast<int32_t>(0xfffffffd),
__E_InvalidPacket = static_cast<int32_t>(0xfffffffc),
__E_Unimplemented = static_cast<int32_t>(0xfffffffb),
__E_InvalidState = static_cast<int32_t>(0xfffffffa),
__E_AllocFail = static_cast<int32_t>(0xfffffff9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusNative_OpusErrors_Unwrapped () const noexcept {
return static_cast<__OpusNative_OpusErrors_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpusNative_OpusErrors() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OpusNative_OpusErrors(int32_t  value__) noexcept;

/// @brief Field AllocFail value: I32(-7)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors const AllocFail;

/// @brief Field BadArg value: I32(-1)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors const BadArg;

/// @brief Field BufferToSmall value: I32(-2)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors const BufferToSmall;

/// @brief Field InternalError value: I32(-3)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors const InternalError;

/// @brief Field InvalidPacket value: I32(-4)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors const InvalidPacket;

/// @brief Field InvalidState value: I32(-6)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors const InvalidState;

/// @brief Field Ok value: I32(0)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors const Ok;

/// @brief Field Unimplemented value: I32(-5)
static ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors const Unimplemented;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17005};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
// Dependencies System.Exception
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.Opus.OpusNative/OpusException
class CORDL_TYPE OpusNative_OpusException : public ::System::Exception {
public:
// Declarations
static inline ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x1804be150, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusNative_OpusException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusNative_OpusException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusNative_OpusException(OpusNative_OpusException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusNative_OpusException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusNative_OpusException(OpusNative_OpusException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17006};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException) == 0x90, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
// Dependencies System.Object
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.Opus.OpusNative/OpusEncoder
class CORDL_TYPE OpusNative_OpusEncoder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Bitrate, put=set_Bitrate)) int32_t  Bitrate;

 __declspec(property(get=get_EnableForwardErrorCorrection, put=set_EnableForwardErrorCorrection)) bool  EnableForwardErrorCorrection;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_PacketLoss, put=set_PacketLoss)) float_t  PacketLoss;

/// @brief Field _disposed, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _encoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  _encoder;

/// @brief Field _packetLoss, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__packetLoss, put=__cordl_internal_set__packetLoss)) int32_t  _packetLoss;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1805f69d0, size 0x1a0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EncodeFloats, addr 0x1805f6b70, size 0x4a0, virtual false, abstract: false, final false
inline int32_t EncodeFloats(::System::ArraySegment_1<float_t>  sourcePcm, ::System::ArraySegment_1<uint8_t>  dstEncoded) ;

/// @brief Method Finalize, addr 0x1805f7180, size 0x10, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder* New_ctor(int32_t  srcSamplingRate, int32_t  srcChannelCount) ;

/// @brief Method OpusCtlIn, addr 0x1805f73e0, size 0x240, virtual false, abstract: false, final false
inline int32_t OpusCtlIn(::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  ctl, int32_t  value) ;

/// @brief Method OpusCtlOut, addr 0x1805f7620, size 0x2c0, virtual false, abstract: false, final false
inline int32_t OpusCtlOut(::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl  ctl, ::by_ref<int32_t>  value) ;

/// @brief Method Reset, addr 0x1805f78e0, size 0x130, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>* const& __cordl_internal_get__encoder() const;

constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*& __cordl_internal_get__encoder() ;

constexpr int32_t const& __cordl_internal_get__packetLoss() const;

constexpr int32_t& __cordl_internal_get__packetLoss() ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__encoder(::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set__packetLoss(int32_t  value) ;

/// @brief Method .ctor, addr 0x1805f7dd0, size 0x290, virtual false, abstract: false, final false
inline void _ctor(int32_t  srcSamplingRate, int32_t  srcChannelCount) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Bitrate, addr 0x1805f8060, size 0x30, virtual false, abstract: false, final false
inline int32_t get_Bitrate() ;

/// @brief Method get_EnableForwardErrorCorrection, addr 0x1805f8090, size 0x30, virtual false, abstract: false, final false
inline bool get_EnableForwardErrorCorrection() ;

/// @brief Method get_PacketLoss, addr 0x1805f80c0, size 0x40, virtual false, abstract: false, final false
inline float_t get_PacketLoss() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_Bitrate, addr 0x1805f8110, size 0x10, virtual false, abstract: false, final false
inline void set_Bitrate(int32_t  value) ;

/// @brief Method set_EnableForwardErrorCorrection, addr 0x1805f8120, size 0x30, virtual false, abstract: false, final false
inline void set_EnableForwardErrorCorrection(bool  value) ;

/// @brief Method set_PacketLoss, addr 0x1805f8150, size 0xf0, virtual false, abstract: false, final false
inline void set_PacketLoss(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusNative_OpusEncoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusNative_OpusEncoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusNative_OpusEncoder(OpusNative_OpusEncoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusNative_OpusEncoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusNative_OpusEncoder(OpusNative_OpusEncoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17007};

/// @brief Field _encoder, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  ____encoder;

/// @brief Field _packetLoss, offset: 0x18, size: 0x4, def value: None
 int32_t  ____packetLoss;

/// @brief Field _disposed, offset: 0x1c, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder, ____encoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder, ____packetLoss) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder, ____disposed) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
// Dependencies System.Object
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.Opus.OpusNative/OpusDecoder
class CORDL_TYPE OpusNative_OpusDecoder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EnableForwardErrorCorrection, put=set_EnableForwardErrorCorrection)) bool  EnableForwardErrorCorrection;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field <EnableForwardErrorCorrection>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnableForwardErrorCorrection_k__BackingField, put=__cordl_internal_set__EnableForwardErrorCorrection_k__BackingField)) bool  _EnableForwardErrorCorrection_k__BackingField;

/// @brief Field _decoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoder, put=__cordl_internal_set__decoder)) ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  _decoder;

/// @brief Field _disposed, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method DecodeFloats, addr 0x1805f5cc0, size 0x5e0, virtual false, abstract: false, final false
inline int32_t DecodeFloats(::Dissonance::Audio::Codecs::EncodedBuffer  srcEncodedBuffer, ::System::ArraySegment_1<float_t>  dstBuffer) ;

/// @brief Method Dispose, addr 0x1805f62f0, size 0x1a0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x1805f64d0, size 0x10, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder* New_ctor(int32_t  outputSampleRate, int32_t  outputChannelCount) ;

/// @brief Method Reset, addr 0x1805f64e0, size 0x130, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get__EnableForwardErrorCorrection_k__BackingField() const;

constexpr bool& __cordl_internal_get__EnableForwardErrorCorrection_k__BackingField() ;

constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>* const& __cordl_internal_get__decoder() const;

constexpr ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*& __cordl_internal_get__decoder() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr void __cordl_internal_set__EnableForwardErrorCorrection_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__decoder(::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

/// @brief Method .ctor, addr 0x1805f6720, size 0x290, virtual false, abstract: false, final false
inline void _ctor(int32_t  outputSampleRate, int32_t  outputChannelCount) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_EnableForwardErrorCorrection, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_EnableForwardErrorCorrection() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_EnableForwardErrorCorrection, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_EnableForwardErrorCorrection(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusNative_OpusDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusNative_OpusDecoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusNative_OpusDecoder(OpusNative_OpusDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusNative_OpusDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusNative_OpusDecoder(OpusNative_OpusDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17008};

/// @brief Field _decoder, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Threading::LockedValue_1<::System::IntPtr>*  ____decoder;

/// @brief Field <EnableForwardErrorCorrection>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____EnableForwardErrorCorrection_k__BackingField;

/// @brief Field _disposed, offset: 0x19, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder, ____decoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder, ____EnableForwardErrorCorrection_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder, ____disposed) == 0x19, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
// Dependencies System.Object
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.Opus.OpusNative/OpusSoftClip
class CORDL_TYPE OpusNative_OpusSoftClip : public ::System::Object {
public:
// Declarations
/// @brief Field _disabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__disabled, put=__cordl_internal_set__disabled)) bool  _disabled;

/// @brief Field _memory, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__memory, put=__cordl_internal_set__memory)) ::ArrayW<float_t>  _memory;

/// @brief Method Clip, addr 0x1805f8b00, size 0x170, virtual false, abstract: false, final false
inline void Clip(::System::ArraySegment_1<float_t>  samples) ;

static inline ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip* New_ctor(int32_t  channels) ;

/// @brief Method Reset, addr 0x1805f8c70, size 0x30, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get__disabled() const;

constexpr bool& __cordl_internal_get__disabled() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__memory() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__memory() ;

constexpr void __cordl_internal_set__disabled(bool  value) ;

constexpr void __cordl_internal_set__memory(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x1805f8ca0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(int32_t  channels) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusNative_OpusSoftClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusNative_OpusSoftClip", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusNative_OpusSoftClip(OpusNative_OpusSoftClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusNative_OpusSoftClip", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusNative_OpusSoftClip(OpusNative_OpusSoftClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17009};

/// @brief Field _disabled, offset: 0x10, size: 0x1, def value: None
 bool  ____disabled;

/// @brief Field _memory, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t>  ____memory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip, ____disabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip, ____memory) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
// Dependencies System.Object, System.Runtime.InteropServices.CallingConvention
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.Opus.OpusNative
class CORDL_TYPE OpusNative : public ::System::Object {
public:
// Declarations
using Application = ::Dissonance::Audio::Codecs::Opus::OpusNative_Application;

using Bandwidth = ::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth;

using Ctl = ::Dissonance::Audio::Codecs::Opus::OpusNative_Ctl;

using OpusDecoder = ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusDecoder;

using OpusEncoder = ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder;

using OpusErrors = ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusErrors;

using OpusException = ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusException;

using OpusNativeMethods = ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusNativeMethods;

using OpusSoftClip = ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip;

static inline ::Dissonance::Audio::Codecs::Opus::OpusNative* New_ctor() ;

/// @brief Method OpusVersion, addr 0x1805f8a80, size 0x80, virtual false, abstract: false, final false
static inline ::StringW OpusVersion() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusNative() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusNative", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusNative(OpusNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusNative", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusNative(OpusNative const& ) = delete;

/// @brief Field Convention value: I32(2)
static ::System::Runtime::InteropServices::CallingConvention const Convention;

/// @brief Field ImportString offset 0xffffffff size 0x8
static constexpr ::ConstString  ImportString{u"opus"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17010};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusNative) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
