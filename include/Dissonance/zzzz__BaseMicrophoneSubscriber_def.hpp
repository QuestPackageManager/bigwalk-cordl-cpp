#pragma once
// IWYU pragma private; include "Dissonance/BaseMicrophoneSubscriber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseMicrophoneSubscriber)
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace Dissonance::Datastructures {
template<typename T>
class TransferBuffer_1;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance {
class BaseMicrophoneSubscriber;
}
// Write type traits
MARK_REF_T(::Dissonance::BaseMicrophoneSubscriber*);
DEFINE_IL2CPP_CLASS(::Dissonance::BaseMicrophoneSubscriber*, "Dissonance", "BaseMicrophoneSubscriber");
// Dependencies UnityEngine.MonoBehaviour
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.BaseMicrophoneSubscriber
class CORDL_TYPE BaseMicrophoneSubscriber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _format, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::NAudio::Wave::WaveFormat*  _format;

/// @brief Field _lostSamples, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__lostSamples, put=__cordl_internal_set__lostSamples)) int32_t  _lostSamples;

/// @brief Field _resetPending, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__resetPending, put=__cordl_internal_set__resetPending)) bool  _resetPending;

/// @brief Field _temporary, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__temporary, put=__cordl_internal_set__temporary)) ::ArrayW<float_t>  _temporary;

/// @brief Field _transfer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transfer, put=__cordl_internal_set__transfer)) ::Dissonance::Datastructures::TransferBuffer_1<float_t>*  _transfer;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr operator  ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept;

/// @brief Method Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData, addr 0x1805c5120, size 0xe0, virtual true, abstract: false, final true
inline void Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  buffer, ::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset, addr 0x1805c5200, size 0x30, virtual true, abstract: false, final true
inline void Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset() ;

static inline ::Dissonance::BaseMicrophoneSubscriber* New_ctor() ;

/// @brief Method ProcessAudio, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessAudio(::System::ArraySegment_1<float_t>  data) ;

/// @brief Method ResetAudioStream, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ResetAudioStream(::NAudio::Wave::WaveFormat*  waveFormat) ;

/// @brief Method Update, addr 0x1805c5230, size 0x130, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__format() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__format() ;

constexpr int32_t const& __cordl_internal_get__lostSamples() const;

constexpr int32_t& __cordl_internal_get__lostSamples() ;

constexpr bool const& __cordl_internal_get__resetPending() const;

constexpr bool& __cordl_internal_get__resetPending() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__temporary() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__temporary() ;

constexpr ::Dissonance::Datastructures::TransferBuffer_1<float_t>* const& __cordl_internal_get__transfer() const;

constexpr ::Dissonance::Datastructures::TransferBuffer_1<float_t>*& __cordl_internal_get__transfer() ;

constexpr void __cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value) ;

constexpr void __cordl_internal_set__lostSamples(int32_t  value) ;

constexpr void __cordl_internal_set__resetPending(bool  value) ;

constexpr void __cordl_internal_set__temporary(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__transfer(::Dissonance::Datastructures::TransferBuffer_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x1805c5360, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseMicrophoneSubscriber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseMicrophoneSubscriber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseMicrophoneSubscriber(BaseMicrophoneSubscriber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseMicrophoneSubscriber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseMicrophoneSubscriber(BaseMicrophoneSubscriber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16778};

/// @brief Field _format, offset: 0x20, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____format;

/// @brief Field _transfer, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Datastructures::TransferBuffer_1<float_t>*  ____transfer;

/// @brief Field _resetPending, offset: 0x30, size: 0x1, def value: None
 bool  ____resetPending;

/// @brief Field _lostSamples, offset: 0x34, size: 0x4, def value: None
 int32_t  ____lostSamples;

/// @brief Field _temporary, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____temporary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::BaseMicrophoneSubscriber, ____format) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::BaseMicrophoneSubscriber, ____transfer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::BaseMicrophoneSubscriber, ____resetPending) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::BaseMicrophoneSubscriber, ____lostSamples) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Dissonance::BaseMicrophoneSubscriber, ____temporary) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Dissonance::BaseMicrophoneSubscriber) == 0x40, "Size mismatch!");

} // namespace end def Dissonance
