#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFilterBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioFilterBase)
namespace GlobalNamespace {
class IAudioFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioFilterBase;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioFilterBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioFilterBase*, "", "AudioFilterBase");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioFilterBase
class CORDL_TYPE AudioFilterBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

/// @brief Field s_outputSampleRate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_outputSampleRate, put=setStaticF_s_outputSampleRate)) int32_t  s_outputSampleRate;

/// @brief Convert operator to "::GlobalNamespace::IAudioFilter"
constexpr operator  ::GlobalNamespace::IAudioFilter*() noexcept;

/// @brief Method CaptureAudioConfig, addr 0x180499ad0, size 0x80, virtual false, abstract: false, final false
static inline void CaptureAudioConfig() ;

static inline ::GlobalNamespace::AudioFilterBase* New_ctor() ;

/// @brief Method OnAudioConfigurationChanged, addr 0x180499b50, size 0x30, virtual false, abstract: false, final false
static inline void OnAudioConfigurationChanged(bool  deviceWasChanged) ;

/// @brief Method ProcessSamples, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method UpdateVariables, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_s_outputSampleRate() ;

/// @brief Method get_Bypass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_InternalBypass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

/// @brief Method get_OutputSampleRate, addr 0x180499bb0, size 0x20, virtual false, abstract: false, final false
static inline int32_t get_OutputSampleRate() ;

/// @brief Convert to "::GlobalNamespace::IAudioFilter"
constexpr ::GlobalNamespace::IAudioFilter* i___GlobalNamespace__IAudioFilter() noexcept;

static inline void setStaticF_s_outputSampleRate(int32_t  value) ;

/// @brief Method set_Bypass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_InternalBypass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioFilterBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioFilterBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioFilterBase(AudioFilterBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioFilterBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioFilterBase(AudioFilterBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17596};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioFilterBase) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
