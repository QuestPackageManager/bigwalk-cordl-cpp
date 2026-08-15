#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Identity/IdentityEncoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IdentityEncoder)
namespace Dissonance::Audio::Codecs {
class IVoiceEncoder;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Dissonance::Audio::Codecs::Identity {
class IdentityEncoder;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Codecs::Identity::IdentityEncoder*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Identity::IdentityEncoder*, "Dissonance.Audio.Codecs.Identity", "IdentityEncoder");
// Dependencies System.Object
namespace Dissonance::Audio::Codecs::Identity {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.Identity.IdentityEncoder
class CORDL_TYPE IdentityEncoder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FrameSize)) int32_t  FrameSize;

 __declspec(property(put=set_PacketLoss)) float_t  PacketLoss;

 __declspec(property(get=get_SampleRate)) int32_t  SampleRate;

/// @brief Field _frameSize, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameSize, put=__cordl_internal_set__frameSize)) int32_t  _frameSize;

/// @brief Field _sampleRate, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate, put=__cordl_internal_set__sampleRate)) int32_t  _sampleRate;

/// @brief Convert operator to "::Dissonance::Audio::Codecs::IVoiceEncoder"
constexpr operator  ::Dissonance::Audio::Codecs::IVoiceEncoder*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Encode, addr 0x1805f5bf0, size 0xc0, virtual true, abstract: false, final true
inline ::System::ArraySegment_1<uint8_t> Encode(::System::ArraySegment_1<float_t>  samples, ::System::ArraySegment_1<uint8_t>  array) ;

static inline ::Dissonance::Audio::Codecs::Identity::IdentityEncoder* New_ctor(int32_t  sampleRate, int32_t  frameSize) ;

/// @brief Method Reset, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get__frameSize() const;

constexpr int32_t& __cordl_internal_get__frameSize() ;

constexpr int32_t const& __cordl_internal_get__sampleRate() const;

constexpr int32_t& __cordl_internal_get__sampleRate() ;

constexpr void __cordl_internal_set__frameSize(int32_t  value) ;

constexpr void __cordl_internal_set__sampleRate(int32_t  value) ;

/// @brief Method .ctor, addr 0x1805f5cb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleRate, int32_t  frameSize) ;

/// @brief Method get_FrameSize, addr 0x1803924b0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_FrameSize() ;

/// @brief Method get_SampleRate, addr 0x180303b50, size 0x10, virtual true, abstract: false, final true
inline int32_t get_SampleRate() ;

/// @brief Convert to "::Dissonance::Audio::Codecs::IVoiceEncoder"
constexpr ::Dissonance::Audio::Codecs::IVoiceEncoder* i___Dissonance__Audio__Codecs__IVoiceEncoder() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_PacketLoss, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void set_PacketLoss(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IdentityEncoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IdentityEncoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IdentityEncoder(IdentityEncoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdentityEncoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdentityEncoder(IdentityEncoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17014};

/// @brief Field _sampleRate, offset: 0x10, size: 0x4, def value: None
 int32_t  ____sampleRate;

/// @brief Field _frameSize, offset: 0x14, size: 0x4, def value: None
 int32_t  ____frameSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::Identity::IdentityEncoder, ____sampleRate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Codecs::Identity::IdentityEncoder, ____frameSize) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::Identity::IdentityEncoder) == 0x18, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Identity
