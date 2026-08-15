#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterReverb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityFilterBase_def.hpp"
#include "UnityEngine/zzzz__AudioReverbPreset_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnityFilterReverb)
namespace GlobalNamespace {
class AudioSourceRefs;
}
namespace UnityEngine {
class AudioReverbFilter;
}
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityFilterReverb;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityFilterReverb*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityFilterReverb*, "", "UnityFilterReverb");
// Dependencies UnityEngine.AudioReverbPreset, UnityFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityFilterReverb
class CORDL_TYPE UnityFilterReverb : public ::GlobalNamespace::UnityFilterBase {
public:
// Declarations
/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

/// @brief Field DecayHFRatio, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_DecayHFRatio, put=__cordl_internal_set_DecayHFRatio)) float_t  DecayHFRatio;

/// @brief Field DecayTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DecayTime, put=__cordl_internal_set_DecayTime)) float_t  DecayTime;

/// @brief Field Density, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_Density, put=__cordl_internal_set_Density)) float_t  Density;

/// @brief Field Diffusion, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Diffusion, put=__cordl_internal_set_Diffusion)) float_t  Diffusion;

/// @brief Field DryLevel, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DryLevel, put=__cordl_internal_set_DryLevel)) float_t  DryLevel;

 __declspec(property(get=get_Filter, put=set_Filter)) ::UnityW<::UnityEngine::Behaviour>  Filter;

/// @brief Field HFReference, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_HFReference, put=__cordl_internal_set_HFReference)) float_t  HFReference;

 __declspec(property(get=get_IsDebugBypassed)) bool  IsDebugBypassed;

/// @brief Field LFReference, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_LFReference, put=__cordl_internal_set_LFReference)) float_t  LFReference;

/// @brief Field Preset, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Preset, put=__cordl_internal_set_Preset)) ::UnityEngine::AudioReverbPreset  Preset;

/// @brief Field ReflectionsDelay, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReflectionsDelay, put=__cordl_internal_set_ReflectionsDelay)) float_t  ReflectionsDelay;

/// @brief Field ReflectionsLevel, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReflectionsLevel, put=__cordl_internal_set_ReflectionsLevel)) float_t  ReflectionsLevel;

/// @brief Field ReverbDelay, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReverbDelay, put=__cordl_internal_set_ReverbDelay)) float_t  ReverbDelay;

/// @brief Field ReverbLevel, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReverbLevel, put=__cordl_internal_set_ReverbLevel)) float_t  ReverbLevel;

/// @brief Field Room, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Room, put=__cordl_internal_set_Room)) float_t  Room;

/// @brief Field RoomHF, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_RoomHF, put=__cordl_internal_set_RoomHF)) float_t  RoomHF;

/// @brief Field RoomLF, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_RoomLF, put=__cordl_internal_set_RoomLF)) float_t  RoomLF;

/// @brief Field _filter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__filter, put=__cordl_internal_set__filter)) ::UnityW<::UnityEngine::AudioReverbFilter>  _filter;

static inline ::GlobalNamespace::UnityFilterReverb* New_ctor() ;

/// @brief Method SetFilter, addr 0x1804a69b0, size 0x30, virtual true, abstract: false, final false
inline void SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs) ;

/// @brief Method UpdateValues, addr 0x1804a69e0, size 0x1b0, virtual true, abstract: false, final false
inline void UpdateValues() ;

constexpr float_t const& __cordl_internal_get_DecayHFRatio() const;

constexpr float_t& __cordl_internal_get_DecayHFRatio() ;

constexpr float_t const& __cordl_internal_get_DecayTime() const;

constexpr float_t& __cordl_internal_get_DecayTime() ;

constexpr float_t const& __cordl_internal_get_Density() const;

constexpr float_t& __cordl_internal_get_Density() ;

constexpr float_t const& __cordl_internal_get_Diffusion() const;

constexpr float_t& __cordl_internal_get_Diffusion() ;

constexpr float_t const& __cordl_internal_get_DryLevel() const;

constexpr float_t& __cordl_internal_get_DryLevel() ;

constexpr float_t const& __cordl_internal_get_HFReference() const;

constexpr float_t& __cordl_internal_get_HFReference() ;

constexpr float_t const& __cordl_internal_get_LFReference() const;

constexpr float_t& __cordl_internal_get_LFReference() ;

constexpr ::UnityEngine::AudioReverbPreset const& __cordl_internal_get_Preset() const;

constexpr ::UnityEngine::AudioReverbPreset& __cordl_internal_get_Preset() ;

constexpr float_t const& __cordl_internal_get_ReflectionsDelay() const;

constexpr float_t& __cordl_internal_get_ReflectionsDelay() ;

constexpr float_t const& __cordl_internal_get_ReflectionsLevel() const;

constexpr float_t& __cordl_internal_get_ReflectionsLevel() ;

constexpr float_t const& __cordl_internal_get_ReverbDelay() const;

constexpr float_t& __cordl_internal_get_ReverbDelay() ;

constexpr float_t const& __cordl_internal_get_ReverbLevel() const;

constexpr float_t& __cordl_internal_get_ReverbLevel() ;

constexpr float_t const& __cordl_internal_get_Room() const;

constexpr float_t& __cordl_internal_get_Room() ;

constexpr float_t const& __cordl_internal_get_RoomHF() const;

constexpr float_t& __cordl_internal_get_RoomHF() ;

constexpr float_t const& __cordl_internal_get_RoomLF() const;

constexpr float_t& __cordl_internal_get_RoomLF() ;

constexpr ::UnityW<::UnityEngine::AudioReverbFilter> const& __cordl_internal_get__filter() const;

constexpr ::UnityW<::UnityEngine::AudioReverbFilter>& __cordl_internal_get__filter() ;

constexpr void __cordl_internal_set_DecayHFRatio(float_t  value) ;

constexpr void __cordl_internal_set_DecayTime(float_t  value) ;

constexpr void __cordl_internal_set_Density(float_t  value) ;

constexpr void __cordl_internal_set_Diffusion(float_t  value) ;

constexpr void __cordl_internal_set_DryLevel(float_t  value) ;

constexpr void __cordl_internal_set_HFReference(float_t  value) ;

constexpr void __cordl_internal_set_LFReference(float_t  value) ;

constexpr void __cordl_internal_set_Preset(::UnityEngine::AudioReverbPreset  value) ;

constexpr void __cordl_internal_set_ReflectionsDelay(float_t  value) ;

constexpr void __cordl_internal_set_ReflectionsLevel(float_t  value) ;

constexpr void __cordl_internal_set_ReverbDelay(float_t  value) ;

constexpr void __cordl_internal_set_ReverbLevel(float_t  value) ;

constexpr void __cordl_internal_set_Room(float_t  value) ;

constexpr void __cordl_internal_set_RoomHF(float_t  value) ;

constexpr void __cordl_internal_set_RoomLF(float_t  value) ;

constexpr void __cordl_internal_set__filter(::UnityW<::UnityEngine::AudioReverbFilter>  value) ;

/// @brief Method .ctor, addr 0x1804a6b90, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Filter, addr 0x1802d97e0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Behaviour> get_Filter() ;

/// @brief Method get_IsDebugBypassed, addr 0x1804a6c00, size 0x20, virtual true, abstract: false, final false
inline bool get_IsDebugBypassed() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Filter, addr 0x1804a6c20, size 0x30, virtual true, abstract: false, final false
inline void set_Filter(::UnityEngine::Behaviour*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityFilterReverb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterReverb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityFilterReverb(UnityFilterReverb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterReverb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityFilterReverb(UnityFilterReverb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17627};

/// @brief Field _filter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioReverbFilter>  ____filter;

/// @brief Field Preset, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::AudioReverbPreset  ___Preset;

/// @brief Field DryLevel, offset: 0x2c, size: 0x4, def value: None
 float_t  ___DryLevel;

/// @brief Field Room, offset: 0x30, size: 0x4, def value: None
 float_t  ___Room;

/// @brief Field RoomHF, offset: 0x34, size: 0x4, def value: None
 float_t  ___RoomHF;

/// @brief Field RoomLF, offset: 0x38, size: 0x4, def value: None
 float_t  ___RoomLF;

/// @brief Field DecayTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ___DecayTime;

/// @brief Field DecayHFRatio, offset: 0x40, size: 0x4, def value: None
 float_t  ___DecayHFRatio;

/// @brief Field ReflectionsLevel, offset: 0x44, size: 0x4, def value: None
 float_t  ___ReflectionsLevel;

/// @brief Field ReflectionsDelay, offset: 0x48, size: 0x4, def value: None
 float_t  ___ReflectionsDelay;

/// @brief Field ReverbLevel, offset: 0x4c, size: 0x4, def value: None
 float_t  ___ReverbLevel;

/// @brief Field ReverbDelay, offset: 0x50, size: 0x4, def value: None
 float_t  ___ReverbDelay;

/// @brief Field HFReference, offset: 0x54, size: 0x4, def value: None
 float_t  ___HFReference;

/// @brief Field LFReference, offset: 0x58, size: 0x4, def value: None
 float_t  ___LFReference;

/// @brief Field Diffusion, offset: 0x5c, size: 0x4, def value: None
 float_t  ___Diffusion;

/// @brief Field Density, offset: 0x60, size: 0x4, def value: None
 float_t  ___Density;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ____filter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___Preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___DryLevel) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___Room) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___RoomHF) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___RoomLF) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___DecayTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___DecayHFRatio) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___ReflectionsLevel) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___ReflectionsDelay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___ReverbLevel) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___ReverbDelay) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___HFReference) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___LFReference) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___Diffusion) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterReverb, ___Density) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityFilterReverb) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
