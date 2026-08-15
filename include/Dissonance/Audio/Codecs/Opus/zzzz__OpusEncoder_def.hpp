#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Opus/OpusEncoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusEncoder)
namespace Dissonance::Audio::Codecs::Opus {
class OpusNative_OpusEncoder;
}
namespace Dissonance::Audio::Codecs {
class IVoiceEncoder;
}
namespace Dissonance {
struct AudioQuality;
}
namespace Dissonance {
struct FrameSize;
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
// Forward declare root types
namespace Dissonance::Audio::Codecs::Opus {
class OpusEncoder;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Codecs::Opus::OpusEncoder*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::OpusEncoder*, "Dissonance.Audio.Codecs.Opus", "OpusEncoder");
// Dependencies System.Object
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.Opus.OpusEncoder
class CORDL_TYPE OpusEncoder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FrameSize)) int32_t  FrameSize;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(put=set_PacketLoss)) float_t  PacketLoss;

/// @brief Field PermittedFrameSizesSamples, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PermittedFrameSizesSamples, put=setStaticF_PermittedFrameSizesSamples)) ::ArrayW<int32_t>  PermittedFrameSizesSamples;

 __declspec(property(get=get_SampleRate)) int32_t  SampleRate;

/// @brief Field _encoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*  _encoder;

/// @brief Field _frameSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameSize, put=__cordl_internal_set__frameSize)) int32_t  _frameSize;

/// @brief Convert operator to "::Dissonance::Audio::Codecs::IVoiceEncoder"
constexpr operator  ::Dissonance::Audio::Codecs::IVoiceEncoder*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1805f69b0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Encode, addr 0x1805f7010, size 0x170, virtual true, abstract: false, final true
inline ::System::ArraySegment_1<uint8_t> Encode(::System::ArraySegment_1<float_t>  samples, ::System::ArraySegment_1<uint8_t>  encodedBuffer) ;

/// @brief Method GetFrameSize, addr 0x1805f7190, size 0x1a0, virtual false, abstract: false, final false
static inline int32_t GetFrameSize(::Dissonance::FrameSize  size) ;

/// @brief Method GetTargetBitrate, addr 0x1805f7330, size 0xb0, virtual false, abstract: false, final false
static inline int32_t GetTargetBitrate(::Dissonance::AudioQuality  quality) ;

static inline ::Dissonance::Audio::Codecs::Opus::OpusEncoder* New_ctor(::Dissonance::AudioQuality  quality, ::Dissonance::FrameSize  frameSize, bool  fec) ;

/// @brief Method Reset, addr 0x1805f7a10, size 0x20, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder* const& __cordl_internal_get__encoder() const;

constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*& __cordl_internal_get__encoder() ;

constexpr int32_t const& __cordl_internal_get__frameSize() const;

constexpr int32_t& __cordl_internal_get__frameSize() ;

constexpr void __cordl_internal_set__encoder(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*  value) ;

constexpr void __cordl_internal_set__frameSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x1805f7b20, size 0x2b0, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::AudioQuality  quality, ::Dissonance::FrameSize  frameSize, bool  fec) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline ::ArrayW<int32_t> getStaticF_PermittedFrameSizesSamples() ;

/// @brief Method get_FrameSize, addr 0x1802f41a0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_FrameSize() ;

/// @brief Method get_SampleRate, addr 0x1805f8100, size 0x10, virtual true, abstract: false, final true
inline int32_t get_SampleRate() ;

/// @brief Convert to "::Dissonance::Audio::Codecs::IVoiceEncoder"
constexpr ::Dissonance::Audio::Codecs::IVoiceEncoder* i___Dissonance__Audio__Codecs__IVoiceEncoder() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

static inline void setStaticF_PermittedFrameSizesSamples(::ArrayW<int32_t>  value) ;

/// @brief Method set_PacketLoss, addr 0x1805f8240, size 0x100, virtual true, abstract: false, final true
inline void set_PacketLoss(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusEncoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusEncoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusEncoder(OpusEncoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusEncoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusEncoder(OpusEncoder const& ) = delete;

/// @brief Field FixedSampleRate offset 0xffffffff size 0x4
static constexpr int32_t  FixedSampleRate{static_cast<int32_t>(0xbb80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17012};

/// @brief Field _encoder, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*  ____encoder;

/// @brief Field _frameSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ____frameSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusEncoder, ____encoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Codecs::Opus::OpusEncoder, ____frameSize) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::OpusEncoder) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
