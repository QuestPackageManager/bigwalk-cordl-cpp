#pragma once
// IWYU pragma private; include "GlobalNamespace/TapeDelay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioFilterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TapeDelay)
// Forward declare root types
namespace GlobalNamespace {
class TapeDelay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TapeDelay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TapeDelay*, "", "TapeDelay");
// Dependencies AudioFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: TapeDelay
class CORDL_TYPE TapeDelay : public ::GlobalNamespace::AudioFilterBase {
public:
// Declarations
 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

 __declspec(property(get=get_DecayRatio, put=set_DecayRatio)) float_t  DecayRatio;

 __declspec(property(get=get_Delay, put=set_Delay)) int32_t  Delay;

 __declspec(property(get=get_DryMix, put=set_DryMix)) float_t  DryMix;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

 __declspec(property(get=get_WetMix, put=set_WetMix)) float_t  WetMix;

/// @brief Field _bufferMask, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferMask, put=__cordl_internal_set__bufferMask)) int32_t  _bufferMask;

/// @brief Field _bypass, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _channels, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__channels, put=__cordl_internal_set__channels)) int32_t  _channels;

/// @brief Field _decayRatio, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__decayRatio, put=__cordl_internal_set__decayRatio)) float_t  _decayRatio;

/// @brief Field _delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__delay, put=__cordl_internal_set__delay)) int32_t  _delay;

/// @brief Field _delayBuffers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__delayBuffers, put=__cordl_internal_set__delayBuffers)) ::ArrayW<::ArrayW<float_t>>  _delayBuffers;

/// @brief Field _delayLengths, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__delayLengths, put=__cordl_internal_set__delayLengths)) ::ArrayW<float_t>  _delayLengths;

/// @brief Field _deltaDelayLengthPerSample, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltaDelayLengthPerSample, put=__cordl_internal_set__deltaDelayLengthPerSample)) ::ArrayW<float_t>  _deltaDelayLengthPerSample;

/// @brief Field _dryMix, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__dryMix, put=__cordl_internal_set__dryMix)) float_t  _dryMix;

/// @brief Field _internalBypass, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Field _sampleRate, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate, put=__cordl_internal_set__sampleRate)) int32_t  _sampleRate;

/// @brief Field _targetDelayLength, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetDelayLength, put=__cordl_internal_set__targetDelayLength)) float_t  _targetDelayLength;

/// @brief Field _transitionSamplesRemaining, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__transitionSamplesRemaining, put=__cordl_internal_set__transitionSamplesRemaining)) int32_t  _transitionSamplesRemaining;

/// @brief Field _wetMix, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__wetMix, put=__cordl_internal_set__wetMix)) float_t  _wetMix;

/// @brief Field _writeHead, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__writeHead, put=__cordl_internal_set__writeHead)) int32_t  _writeHead;

/// @brief Method Awake, addr 0x1804a5bb0, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Init, addr 0x1804a5c40, size 0x170, virtual false, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::TapeDelay* New_ctor() ;

/// @brief Method ProcessSamples, addr 0x1804a5db0, size 0x3d0, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method UpdateVariables, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

constexpr int32_t const& __cordl_internal_get__bufferMask() const;

constexpr int32_t& __cordl_internal_get__bufferMask() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr int32_t const& __cordl_internal_get__channels() const;

constexpr int32_t& __cordl_internal_get__channels() ;

constexpr float_t const& __cordl_internal_get__decayRatio() const;

constexpr float_t& __cordl_internal_get__decayRatio() ;

constexpr int32_t const& __cordl_internal_get__delay() const;

constexpr int32_t& __cordl_internal_get__delay() ;

constexpr ::ArrayW<::ArrayW<float_t>> const& __cordl_internal_get__delayBuffers() const;

constexpr ::ArrayW<::ArrayW<float_t>>& __cordl_internal_get__delayBuffers() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__delayLengths() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__delayLengths() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__deltaDelayLengthPerSample() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__deltaDelayLengthPerSample() ;

constexpr float_t const& __cordl_internal_get__dryMix() const;

constexpr float_t& __cordl_internal_get__dryMix() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr int32_t const& __cordl_internal_get__sampleRate() const;

constexpr int32_t& __cordl_internal_get__sampleRate() ;

constexpr float_t const& __cordl_internal_get__targetDelayLength() const;

constexpr float_t& __cordl_internal_get__targetDelayLength() ;

constexpr int32_t const& __cordl_internal_get__transitionSamplesRemaining() const;

constexpr int32_t& __cordl_internal_get__transitionSamplesRemaining() ;

constexpr float_t const& __cordl_internal_get__wetMix() const;

constexpr float_t& __cordl_internal_get__wetMix() ;

constexpr int32_t const& __cordl_internal_get__writeHead() const;

constexpr int32_t& __cordl_internal_get__writeHead() ;

constexpr void __cordl_internal_set__bufferMask(int32_t  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__channels(int32_t  value) ;

constexpr void __cordl_internal_set__decayRatio(float_t  value) ;

constexpr void __cordl_internal_set__delay(int32_t  value) ;

constexpr void __cordl_internal_set__delayBuffers(::ArrayW<::ArrayW<float_t>>  value) ;

constexpr void __cordl_internal_set__delayLengths(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__deltaDelayLengthPerSample(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__dryMix(float_t  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

constexpr void __cordl_internal_set__sampleRate(int32_t  value) ;

constexpr void __cordl_internal_set__targetDelayLength(float_t  value) ;

constexpr void __cordl_internal_set__transitionSamplesRemaining(int32_t  value) ;

constexpr void __cordl_internal_set__wetMix(float_t  value) ;

constexpr void __cordl_internal_set__writeHead(int32_t  value) ;

/// @brief Method .ctor, addr 0x18049c3e0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Bypass, addr 0x18049c410, size 0x10, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_DecayRatio, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DecayRatio() ;

/// @brief Method get_Delay, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Delay() ;

/// @brief Method get_DryMix, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DryMix() ;

/// @brief Method get_InternalBypass, addr 0x1803561b0, size 0x10, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

/// @brief Method get_WetMix, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_WetMix() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Bypass, addr 0x18049c420, size 0x10, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_DecayRatio, addr 0x18049c430, size 0x30, virtual false, abstract: false, final false
inline void set_DecayRatio(float_t  value) ;

/// @brief Method set_Delay, addr 0x18049c460, size 0x20, virtual false, abstract: false, final false
inline void set_Delay(int32_t  value) ;

/// @brief Method set_DryMix, addr 0x18049a6b0, size 0x30, virtual false, abstract: false, final false
inline void set_DryMix(float_t  value) ;

/// @brief Method set_InternalBypass, addr 0x180499eb0, size 0x10, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

/// @brief Method set_WetMix, addr 0x18049a680, size 0x30, virtual false, abstract: false, final false
inline void set_WetMix(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapeDelay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapeDelay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapeDelay(TapeDelay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapeDelay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapeDelay(TapeDelay const& ) = delete;

/// @brief Field MAX_DELAY offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DELAY{static_cast<int32_t>(0x1388)};

/// @brief Field TRANSITION_DURATION offset 0xffffffff size 0x4
static constexpr float_t  TRANSITION_DURATION{static_cast<float_t>(1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17620};

/// @brief Field _delay, offset: 0x20, size: 0x4, def value: None
 int32_t  ____delay;

/// @brief Field _decayRatio, offset: 0x24, size: 0x4, def value: None
 float_t  ____decayRatio;

/// @brief Field _dryMix, offset: 0x28, size: 0x4, def value: None
 float_t  ____dryMix;

/// @brief Field _wetMix, offset: 0x2c, size: 0x4, def value: None
 float_t  ____wetMix;

/// @brief Field _internalBypass, offset: 0x30, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x31, size: 0x1, def value: None
 bool  ____bypass;

/// @brief Field _delayBuffers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t>>  ____delayBuffers;

/// @brief Field _delayLengths, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ____delayLengths;

/// @brief Field _deltaDelayLengthPerSample, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ____deltaDelayLengthPerSample;

/// @brief Field _transitionSamplesRemaining, offset: 0x50, size: 0x4, def value: None
 int32_t  ____transitionSamplesRemaining;

/// @brief Field _bufferMask, offset: 0x54, size: 0x4, def value: None
 int32_t  ____bufferMask;

/// @brief Field _channels, offset: 0x58, size: 0x4, def value: None
 int32_t  ____channels;

/// @brief Field _sampleRate, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____sampleRate;

/// @brief Field _writeHead, offset: 0x60, size: 0x4, def value: None
 int32_t  ____writeHead;

/// @brief Field _targetDelayLength, offset: 0x64, size: 0x4, def value: None
 float_t  ____targetDelayLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TapeDelay, ____delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____decayRatio) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____dryMix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____wetMix) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____internalBypass) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____bypass) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____delayBuffers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____delayLengths) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____deltaDelayLengthPerSample) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____transitionSamplesRemaining) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____bufferMask) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____channels) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____sampleRate) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____writeHead) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TapeDelay, ____targetDelayLength) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TapeDelay) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
