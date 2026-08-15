#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/IVoiceEncoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IVoiceEncoder)
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Dissonance::Audio::Codecs {
class IVoiceEncoder;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Codecs::IVoiceEncoder*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::IVoiceEncoder*, "Dissonance.Audio.Codecs", "IVoiceEncoder");
// Dependencies 
namespace Dissonance::Audio::Codecs {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.IVoiceEncoder
class CORDL_TYPE IVoiceEncoder {
public:
// Declarations
 __declspec(property(get=get_FrameSize)) int32_t  FrameSize;

 __declspec(property(put=set_PacketLoss)) float_t  PacketLoss;

 __declspec(property(get=get_SampleRate)) int32_t  SampleRate;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Encode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> Encode(::System::ArraySegment_1<float_t>  samples, ::System::ArraySegment_1<uint8_t>  array) ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method get_FrameSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_FrameSize() ;

/// @brief Method get_SampleRate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_SampleRate() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_PacketLoss, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_PacketLoss(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceEncoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceEncoder(IVoiceEncoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16998};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Codecs
