#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioBasicReverb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioBasicReverb)
namespace GlobalNamespace {
class AudioBasicReverb_SortByPriority;
}
namespace GlobalNamespace {
class BasicReverbZone;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioBasicReverb;
}
namespace GlobalNamespace {
class AudioBasicReverb_SortByPriority;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioBasicReverb*);
MARK_REF_T(::GlobalNamespace::AudioBasicReverb_SortByPriority*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioBasicReverb*, "", "AudioBasicReverb");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioBasicReverb_SortByPriority*, "", "AudioBasicReverb/SortByPriority");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioBasicReverb/SortByPriority
class CORDL_TYPE AudioBasicReverb_SortByPriority : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::BasicReverbZone>>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::BasicReverbZone>>*() noexcept;

/// @brief Method Compare, addr 0x180482d40, size 0x80, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::BasicReverbZone*  x, ::GlobalNamespace::BasicReverbZone*  y) ;

static inline ::GlobalNamespace::AudioBasicReverb_SortByPriority* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::BasicReverbZone>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::BasicReverbZone>>* i___System__Collections__Generic__IComparer_1___UnityW___GlobalNamespace__BasicReverbZone__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBasicReverb_SortByPriority() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBasicReverb_SortByPriority", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBasicReverb_SortByPriority(AudioBasicReverb_SortByPriority && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBasicReverb_SortByPriority", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBasicReverb_SortByPriority(AudioBasicReverb_SortByPriority const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17485};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioBasicReverb_SortByPriority) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioBasicReverb
class CORDL_TYPE AudioBasicReverb : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SortByPriority = ::GlobalNamespace::AudioBasicReverb_SortByPriority;

/// @brief Field Bypass, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Bypass, put=__cordl_internal_set_Bypass)) bool  Bypass;

 __declspec(property(get=get_DecayHFRatio, put=set_DecayHFRatio)) float_t  DecayHFRatio;

 __declspec(property(get=get_DecayTime, put=set_DecayTime)) float_t  DecayTime;

 __declspec(property(get=get_Density, put=set_Density)) float_t  Density;

 __declspec(property(get=get_Diffusion, put=set_Diffusion)) float_t  Diffusion;

 __declspec(property(get=get_DryLevel, put=set_DryLevel)) float_t  DryLevel;

 __declspec(property(get=get_HFReference, put=set_HFReference)) float_t  HFReference;

 __declspec(property(get=get_LFReference, put=set_LFReference)) float_t  LFReference;

 __declspec(property(get=get_Mixer, put=set_Mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  Mixer;

 __declspec(property(get=get_ReflectDelay, put=set_ReflectDelay)) float_t  ReflectDelay;

 __declspec(property(get=get_Reflections, put=set_Reflections)) float_t  Reflections;

 __declspec(property(get=get_Reverb, put=set_Reverb)) float_t  Reverb;

 __declspec(property(get=get_ReverbDelay, put=set_ReverbDelay)) float_t  ReverbDelay;

 __declspec(property(get=get_Room, put=set_Room)) float_t  Room;

 __declspec(property(get=get_RoomHF, put=set_RoomHF)) float_t  RoomHF;

 __declspec(property(get=get_RoomLF, put=set_RoomLF)) float_t  RoomLF;

/// @brief Field <DecayHFRatio>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__DecayHFRatio_k__BackingField, put=__cordl_internal_set__DecayHFRatio_k__BackingField)) float_t  _DecayHFRatio_k__BackingField;

/// @brief Field <DecayTime>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__DecayTime_k__BackingField, put=__cordl_internal_set__DecayTime_k__BackingField)) float_t  _DecayTime_k__BackingField;

/// @brief Field <Density>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__Density_k__BackingField, put=__cordl_internal_set__Density_k__BackingField)) float_t  _Density_k__BackingField;

/// @brief Field <Diffusion>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__Diffusion_k__BackingField, put=__cordl_internal_set__Diffusion_k__BackingField)) float_t  _Diffusion_k__BackingField;

/// @brief Field <DryLevel>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__DryLevel_k__BackingField, put=__cordl_internal_set__DryLevel_k__BackingField)) float_t  _DryLevel_k__BackingField;

/// @brief Field <HFReference>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__HFReference_k__BackingField, put=__cordl_internal_set__HFReference_k__BackingField)) float_t  _HFReference_k__BackingField;

/// @brief Field <LFReference>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__LFReference_k__BackingField, put=__cordl_internal_set__LFReference_k__BackingField)) float_t  _LFReference_k__BackingField;

/// @brief Field <Mixer>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mixer_k__BackingField, put=__cordl_internal_set__Mixer_k__BackingField)) ::UnityW<::UnityEngine::Audio::AudioMixer>  _Mixer_k__BackingField;

/// @brief Field <ReflectDelay>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ReflectDelay_k__BackingField, put=__cordl_internal_set__ReflectDelay_k__BackingField)) float_t  _ReflectDelay_k__BackingField;

/// @brief Field <Reflections>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__Reflections_k__BackingField, put=__cordl_internal_set__Reflections_k__BackingField)) float_t  _Reflections_k__BackingField;

/// @brief Field <ReverbDelay>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__ReverbDelay_k__BackingField, put=__cordl_internal_set__ReverbDelay_k__BackingField)) float_t  _ReverbDelay_k__BackingField;

/// @brief Field <Reverb>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Reverb_k__BackingField, put=__cordl_internal_set__Reverb_k__BackingField)) float_t  _Reverb_k__BackingField;

/// @brief Field <RoomHF>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__RoomHF_k__BackingField, put=__cordl_internal_set__RoomHF_k__BackingField)) float_t  _RoomHF_k__BackingField;

/// @brief Field <RoomLF>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__RoomLF_k__BackingField, put=__cordl_internal_set__RoomLF_k__BackingField)) float_t  _RoomLF_k__BackingField;

/// @brief Field <Room>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__Room_k__BackingField, put=__cordl_internal_set__Room_k__BackingField)) float_t  _Room_k__BackingField;

/// @brief Field _reverbZones, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__reverbZones, put=__cordl_internal_set__reverbZones)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BasicReverbZone>>*  _reverbZones;

/// @brief Field s_sort, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_sort, put=setStaticF_s_sort)) ::GlobalNamespace::AudioBasicReverb_SortByPriority*  s_sort;

/// @brief Method EnterReverbZone, addr 0x18046ed90, size 0xa0, virtual false, abstract: false, final false
inline void EnterReverbZone(::GlobalNamespace::BasicReverbZone*  reverbZone) ;

/// @brief Method ExitReverbZone, addr 0x18046ee30, size 0x30, virtual false, abstract: false, final false
inline void ExitReverbZone(::GlobalNamespace::BasicReverbZone*  reverbZone) ;

/// @brief Method Initialize, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::Audio::AudioMixer*  mixer) ;

static inline ::GlobalNamespace::AudioBasicReverb* New_ctor() ;

/// @brief Method UpdateReverb, addr 0x18046ee60, size 0xbe0, virtual false, abstract: false, final false
inline void UpdateReverb() ;

constexpr bool const& __cordl_internal_get_Bypass() const;

constexpr bool& __cordl_internal_get_Bypass() ;

constexpr float_t const& __cordl_internal_get__DecayHFRatio_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DecayHFRatio_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DecayTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DecayTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Density_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Density_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Diffusion_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Diffusion_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DryLevel_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DryLevel_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__HFReference_k__BackingField() const;

constexpr float_t& __cordl_internal_get__HFReference_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__LFReference_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LFReference_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__Mixer_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__Mixer_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ReflectDelay_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ReflectDelay_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Reflections_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Reflections_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ReverbDelay_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ReverbDelay_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Reverb_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Reverb_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__RoomHF_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RoomHF_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__RoomLF_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RoomLF_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Room_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Room_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BasicReverbZone>>* const& __cordl_internal_get__reverbZones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BasicReverbZone>>*& __cordl_internal_get__reverbZones() ;

constexpr void __cordl_internal_set_Bypass(bool  value) ;

constexpr void __cordl_internal_set__DecayHFRatio_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DecayTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Density_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Diffusion_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DryLevel_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__HFReference_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__LFReference_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Mixer_k__BackingField(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set__ReflectDelay_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Reflections_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ReverbDelay_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Reverb_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RoomHF_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RoomLF_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Room_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__reverbZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BasicReverbZone>>*  value) ;

/// @brief Method .ctor, addr 0x18046fa80, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::AudioBasicReverb_SortByPriority* getStaticF_s_sort() ;

/// @brief Method get_DecayHFRatio, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t get_DecayHFRatio() ;

/// @brief Method get_DecayTime, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_DecayTime() ;

/// @brief Method get_Density, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Density() ;

/// @brief Method get_Diffusion, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Diffusion() ;

/// @brief Method get_DryLevel, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DryLevel() ;

/// @brief Method get_HFReference, addr 0x18046faf0, size 0x10, virtual false, abstract: false, final false
inline float_t get_HFReference() ;

/// @brief Method get_LFReference, addr 0x18046fb00, size 0x10, virtual false, abstract: false, final false
inline float_t get_LFReference() ;

/// @brief Method get_Mixer, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioMixer> get_Mixer() ;

/// @brief Method get_ReflectDelay, addr 0x1802f8070, size 0x10, virtual false, abstract: false, final false
inline float_t get_ReflectDelay() ;

/// @brief Method get_Reflections, addr 0x1802f8050, size 0x10, virtual false, abstract: false, final false
inline float_t get_Reflections() ;

/// @brief Method get_Reverb, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_Reverb() ;

/// @brief Method get_ReverbDelay, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_ReverbDelay() ;

/// @brief Method get_Room, addr 0x1802e2da0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Room() ;

/// @brief Method get_RoomHF, addr 0x1802f7fd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_RoomHF() ;

/// @brief Method get_RoomLF, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_RoomLF() ;

static inline void setStaticF_s_sort(::GlobalNamespace::AudioBasicReverb_SortByPriority*  value) ;

/// @brief Method set_DecayHFRatio, addr 0x180307250, size 0x10, virtual false, abstract: false, final false
inline void set_DecayHFRatio(float_t  value) ;

/// @brief Method set_DecayTime, addr 0x1802e2f60, size 0x10, virtual false, abstract: false, final false
inline void set_DecayTime(float_t  value) ;

/// @brief Method set_Density, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void set_Density(float_t  value) ;

/// @brief Method set_Diffusion, addr 0x18046fb20, size 0x10, virtual false, abstract: false, final false
inline void set_Diffusion(float_t  value) ;

/// @brief Method set_DryLevel, addr 0x18046fb30, size 0x10, virtual false, abstract: false, final false
inline void set_DryLevel(float_t  value) ;

/// @brief Method set_HFReference, addr 0x18046fb40, size 0x10, virtual false, abstract: false, final false
inline void set_HFReference(float_t  value) ;

/// @brief Method set_LFReference, addr 0x18046fb50, size 0x10, virtual false, abstract: false, final false
inline void set_LFReference(float_t  value) ;

/// @brief Method set_Mixer, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_Mixer(::UnityEngine::Audio::AudioMixer*  value) ;

/// @brief Method set_ReflectDelay, addr 0x18046fb60, size 0x10, virtual false, abstract: false, final false
inline void set_ReflectDelay(float_t  value) ;

/// @brief Method set_Reflections, addr 0x18046fb70, size 0x10, virtual false, abstract: false, final false
inline void set_Reflections(float_t  value) ;

/// @brief Method set_Reverb, addr 0x1803561c0, size 0x10, virtual false, abstract: false, final false
inline void set_Reverb(float_t  value) ;

/// @brief Method set_ReverbDelay, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_ReverbDelay(float_t  value) ;

/// @brief Method set_Room, addr 0x18046fb90, size 0x10, virtual false, abstract: false, final false
inline void set_Room(float_t  value) ;

/// @brief Method set_RoomHF, addr 0x18046fb80, size 0x10, virtual false, abstract: false, final false
inline void set_RoomHF(float_t  value) ;

/// @brief Method set_RoomLF, addr 0x1802e2ff0, size 0x10, virtual false, abstract: false, final false
inline void set_RoomLF(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBasicReverb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBasicReverb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBasicReverb(AudioBasicReverb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBasicReverb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBasicReverb(AudioBasicReverb const& ) = delete;

/// @brief Field LERP_SPEED offset 0xffffffff size 0x4
static constexpr float_t  LERP_SPEED{static_cast<float_t>(5.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17486};

/// @brief Field Bypass, offset: 0x20, size: 0x1, def value: None
 bool  ___Bypass;

/// @brief Field <Mixer>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ____Mixer_k__BackingField;

/// @brief Field <DryLevel>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  ____DryLevel_k__BackingField;

/// @brief Field <Room>k__BackingField, offset: 0x34, size: 0x4, def value: None
 float_t  ____Room_k__BackingField;

/// @brief Field <RoomHF>k__BackingField, offset: 0x38, size: 0x4, def value: None
 float_t  ____RoomHF_k__BackingField;

/// @brief Field <RoomLF>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 float_t  ____RoomLF_k__BackingField;

/// @brief Field <DecayTime>k__BackingField, offset: 0x40, size: 0x4, def value: None
 float_t  ____DecayTime_k__BackingField;

/// @brief Field <DecayHFRatio>k__BackingField, offset: 0x44, size: 0x4, def value: None
 float_t  ____DecayHFRatio_k__BackingField;

/// @brief Field <Reflections>k__BackingField, offset: 0x48, size: 0x4, def value: None
 float_t  ____Reflections_k__BackingField;

/// @brief Field <ReflectDelay>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 float_t  ____ReflectDelay_k__BackingField;

/// @brief Field <Reverb>k__BackingField, offset: 0x50, size: 0x4, def value: None
 float_t  ____Reverb_k__BackingField;

/// @brief Field <ReverbDelay>k__BackingField, offset: 0x54, size: 0x4, def value: None
 float_t  ____ReverbDelay_k__BackingField;

/// @brief Field <HFReference>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____HFReference_k__BackingField;

/// @brief Field <LFReference>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 float_t  ____LFReference_k__BackingField;

/// @brief Field <Diffusion>k__BackingField, offset: 0x60, size: 0x4, def value: None
 float_t  ____Diffusion_k__BackingField;

/// @brief Field <Density>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____Density_k__BackingField;

/// @brief Field _reverbZones, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BasicReverbZone>>*  ____reverbZones;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ___Bypass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____Mixer_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____DryLevel_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____Room_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____RoomHF_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____RoomLF_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____DecayTime_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____DecayHFRatio_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____Reflections_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____ReflectDelay_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____Reverb_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____ReverbDelay_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____HFReference_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____LFReference_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____Diffusion_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____Density_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBasicReverb, ____reverbZones) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioBasicReverb) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
