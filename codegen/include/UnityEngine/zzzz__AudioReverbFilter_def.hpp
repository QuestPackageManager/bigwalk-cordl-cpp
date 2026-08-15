#pragma once
// IWYU pragma private; include "UnityEngine/AudioReverbFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioReverbFilter)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct AudioReverbPreset;
}
// Forward declare root types
namespace UnityEngine {
class AudioReverbFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioReverbFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioReverbFilter*, "UnityEngine", "AudioReverbFilter");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioReverbFilter
class CORDL_TYPE AudioReverbFilter : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(put=set_decayHFRatio)) float_t  decayHFRatio;

 __declspec(property(put=set_decayTime)) float_t  decayTime;

 __declspec(property(put=set_density)) float_t  density;

 __declspec(property(put=set_diffusion)) float_t  diffusion;

 __declspec(property(put=set_dryLevel)) float_t  dryLevel;

 __declspec(property(put=set_hfReference)) float_t  hfReference;

 __declspec(property(put=set_lfReference)) float_t  lfReference;

 __declspec(property(put=set_reflectionsDelay)) float_t  reflectionsDelay;

 __declspec(property(put=set_reflectionsLevel)) float_t  reflectionsLevel;

 __declspec(property(put=set_reverbDelay)) float_t  reverbDelay;

 __declspec(property(put=set_reverbLevel)) float_t  reverbLevel;

 __declspec(property(put=set_reverbPreset)) ::UnityEngine::AudioReverbPreset  reverbPreset;

 __declspec(property(put=set_room)) float_t  room;

 __declspec(property(put=set_roomHF)) float_t  roomHF;

 __declspec(property(put=set_roomLF)) float_t  roomLF;

static inline ::UnityEngine::AudioReverbFilter* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_decayHFRatio, addr 0x18223a2c0, size 0x40, virtual false, abstract: false, final false
inline void set_decayHFRatio(float_t  value) ;

/// @brief Method set_decayHFRatio_Injected, addr 0x18223a2b0, size 0x10, virtual false, abstract: false, final false
static inline void set_decayHFRatio_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_decayTime, addr 0x18223a310, size 0x40, virtual false, abstract: false, final false
inline void set_decayTime(float_t  value) ;

/// @brief Method set_decayTime_Injected, addr 0x18223a300, size 0x10, virtual false, abstract: false, final false
static inline void set_decayTime_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_density, addr 0x18223a360, size 0x40, virtual false, abstract: false, final false
inline void set_density(float_t  value) ;

/// @brief Method set_density_Injected, addr 0x18223a350, size 0x10, virtual false, abstract: false, final false
static inline void set_density_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_diffusion, addr 0x18223a3b0, size 0x40, virtual false, abstract: false, final false
inline void set_diffusion(float_t  value) ;

/// @brief Method set_diffusion_Injected, addr 0x18223a3a0, size 0x10, virtual false, abstract: false, final false
static inline void set_diffusion_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_dryLevel, addr 0x18223a400, size 0x40, virtual false, abstract: false, final false
inline void set_dryLevel(float_t  value) ;

/// @brief Method set_dryLevel_Injected, addr 0x18223a3f0, size 0x10, virtual false, abstract: false, final false
static inline void set_dryLevel_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_hfReference, addr 0x18223a450, size 0x40, virtual false, abstract: false, final false
inline void set_hfReference(float_t  value) ;

/// @brief Method set_hfReference_Injected, addr 0x18223a440, size 0x10, virtual false, abstract: false, final false
static inline void set_hfReference_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_lfReference, addr 0x18223a4a0, size 0x40, virtual false, abstract: false, final false
inline void set_lfReference(float_t  value) ;

/// @brief Method set_lfReference_Injected, addr 0x18223a490, size 0x10, virtual false, abstract: false, final false
static inline void set_lfReference_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_reflectionsDelay, addr 0x18223a4f0, size 0x40, virtual false, abstract: false, final false
inline void set_reflectionsDelay(float_t  value) ;

/// @brief Method set_reflectionsDelay_Injected, addr 0x18223a4e0, size 0x10, virtual false, abstract: false, final false
static inline void set_reflectionsDelay_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_reflectionsLevel, addr 0x18223a540, size 0x40, virtual false, abstract: false, final false
inline void set_reflectionsLevel(float_t  value) ;

/// @brief Method set_reflectionsLevel_Injected, addr 0x18223a530, size 0x10, virtual false, abstract: false, final false
static inline void set_reflectionsLevel_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_reverbDelay, addr 0x18223a590, size 0x40, virtual false, abstract: false, final false
inline void set_reverbDelay(float_t  value) ;

/// @brief Method set_reverbDelay_Injected, addr 0x18223a580, size 0x10, virtual false, abstract: false, final false
static inline void set_reverbDelay_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_reverbLevel, addr 0x18223a5e0, size 0x40, virtual false, abstract: false, final false
inline void set_reverbLevel(float_t  value) ;

/// @brief Method set_reverbLevel_Injected, addr 0x18223a5d0, size 0x10, virtual false, abstract: false, final false
static inline void set_reverbLevel_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_reverbPreset, addr 0x18223a630, size 0x30, virtual false, abstract: false, final false
inline void set_reverbPreset(::UnityEngine::AudioReverbPreset  value) ;

/// @brief Method set_reverbPreset_Injected, addr 0x18223a620, size 0x10, virtual false, abstract: false, final false
static inline void set_reverbPreset_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AudioReverbPreset  value) ;

/// @brief Method set_room, addr 0x18223a710, size 0x40, virtual false, abstract: false, final false
inline void set_room(float_t  value) ;

/// @brief Method set_roomHF, addr 0x18223a670, size 0x40, virtual false, abstract: false, final false
inline void set_roomHF(float_t  value) ;

/// @brief Method set_roomHF_Injected, addr 0x18223a660, size 0x10, virtual false, abstract: false, final false
static inline void set_roomHF_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_roomLF, addr 0x18223a6c0, size 0x40, virtual false, abstract: false, final false
inline void set_roomLF(float_t  value) ;

/// @brief Method set_roomLF_Injected, addr 0x18223a6b0, size 0x10, virtual false, abstract: false, final false
static inline void set_roomLF_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_room_Injected, addr 0x18223a700, size 0x10, virtual false, abstract: false, final false
static inline void set_room_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReverbFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReverbFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReverbFilter(AudioReverbFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReverbFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReverbFilter(AudioReverbFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20474};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioReverbFilter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
