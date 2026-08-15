#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicReverbConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BasicReverbConfig)
// Forward declare root types
namespace GlobalNamespace {
class BasicReverbConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BasicReverbConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasicReverbConfig*, "", "BasicReverbConfig");
// Dependencies AudioAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicReverbConfig
class CORDL_TYPE BasicReverbConfig : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
/// @brief Field DecayHFRatio, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DecayHFRatio, put=__cordl_internal_set_DecayHFRatio)) float_t  DecayHFRatio;

/// @brief Field DecayTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_DecayTime, put=__cordl_internal_set_DecayTime)) float_t  DecayTime;

/// @brief Field Density, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Density, put=__cordl_internal_set_Density)) float_t  Density;

/// @brief Field Diffusion, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_Diffusion, put=__cordl_internal_set_Diffusion)) float_t  Diffusion;

/// @brief Field DryLevel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_DryLevel, put=__cordl_internal_set_DryLevel)) float_t  DryLevel;

/// @brief Field HFReference, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_HFReference, put=__cordl_internal_set_HFReference)) float_t  HFReference;

/// @brief Field LFReference, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_LFReference, put=__cordl_internal_set_LFReference)) float_t  LFReference;

/// @brief Field ReflectDelay, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReflectDelay, put=__cordl_internal_set_ReflectDelay)) float_t  ReflectDelay;

/// @brief Field Reflections, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Reflections, put=__cordl_internal_set_Reflections)) float_t  Reflections;

/// @brief Field Reverb, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Reverb, put=__cordl_internal_set_Reverb)) float_t  Reverb;

/// @brief Field ReverbDelay, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReverbDelay, put=__cordl_internal_set_ReverbDelay)) float_t  ReverbDelay;

/// @brief Field Room, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Room, put=__cordl_internal_set_Room)) float_t  Room;

/// @brief Field RoomHF, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_RoomHF, put=__cordl_internal_set_RoomHF)) float_t  RoomHF;

/// @brief Field RoomLF, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_RoomLF, put=__cordl_internal_set_RoomLF)) float_t  RoomLF;

static inline ::GlobalNamespace::BasicReverbConfig* New_ctor() ;

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

constexpr float_t const& __cordl_internal_get_ReflectDelay() const;

constexpr float_t& __cordl_internal_get_ReflectDelay() ;

constexpr float_t const& __cordl_internal_get_Reflections() const;

constexpr float_t& __cordl_internal_get_Reflections() ;

constexpr float_t const& __cordl_internal_get_Reverb() const;

constexpr float_t& __cordl_internal_get_Reverb() ;

constexpr float_t const& __cordl_internal_get_ReverbDelay() const;

constexpr float_t& __cordl_internal_get_ReverbDelay() ;

constexpr float_t const& __cordl_internal_get_Room() const;

constexpr float_t& __cordl_internal_get_Room() ;

constexpr float_t const& __cordl_internal_get_RoomHF() const;

constexpr float_t& __cordl_internal_get_RoomHF() ;

constexpr float_t const& __cordl_internal_get_RoomLF() const;

constexpr float_t& __cordl_internal_get_RoomLF() ;

constexpr void __cordl_internal_set_DecayHFRatio(float_t  value) ;

constexpr void __cordl_internal_set_DecayTime(float_t  value) ;

constexpr void __cordl_internal_set_Density(float_t  value) ;

constexpr void __cordl_internal_set_Diffusion(float_t  value) ;

constexpr void __cordl_internal_set_DryLevel(float_t  value) ;

constexpr void __cordl_internal_set_HFReference(float_t  value) ;

constexpr void __cordl_internal_set_LFReference(float_t  value) ;

constexpr void __cordl_internal_set_ReflectDelay(float_t  value) ;

constexpr void __cordl_internal_set_Reflections(float_t  value) ;

constexpr void __cordl_internal_set_Reverb(float_t  value) ;

constexpr void __cordl_internal_set_ReverbDelay(float_t  value) ;

constexpr void __cordl_internal_set_Room(float_t  value) ;

constexpr void __cordl_internal_set_RoomHF(float_t  value) ;

constexpr void __cordl_internal_set_RoomLF(float_t  value) ;

/// @brief Method .ctor, addr 0x18049c480, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicReverbConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicReverbConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicReverbConfig(BasicReverbConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicReverbConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicReverbConfig(BasicReverbConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17588};

/// @brief Field DryLevel, offset: 0x18, size: 0x4, def value: None
 float_t  ___DryLevel;

/// @brief Field Room, offset: 0x1c, size: 0x4, def value: None
 float_t  ___Room;

/// @brief Field RoomHF, offset: 0x20, size: 0x4, def value: None
 float_t  ___RoomHF;

/// @brief Field RoomLF, offset: 0x24, size: 0x4, def value: None
 float_t  ___RoomLF;

/// @brief Field DecayTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___DecayTime;

/// @brief Field DecayHFRatio, offset: 0x2c, size: 0x4, def value: None
 float_t  ___DecayHFRatio;

/// @brief Field Reflections, offset: 0x30, size: 0x4, def value: None
 float_t  ___Reflections;

/// @brief Field ReflectDelay, offset: 0x34, size: 0x4, def value: None
 float_t  ___ReflectDelay;

/// @brief Field Reverb, offset: 0x38, size: 0x4, def value: None
 float_t  ___Reverb;

/// @brief Field ReverbDelay, offset: 0x3c, size: 0x4, def value: None
 float_t  ___ReverbDelay;

/// @brief Field HFReference, offset: 0x40, size: 0x4, def value: None
 float_t  ___HFReference;

/// @brief Field LFReference, offset: 0x44, size: 0x4, def value: None
 float_t  ___LFReference;

/// @brief Field Diffusion, offset: 0x48, size: 0x4, def value: None
 float_t  ___Diffusion;

/// @brief Field Density, offset: 0x4c, size: 0x4, def value: None
 float_t  ___Density;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___DryLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___Room) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___RoomHF) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___RoomLF) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___DecayTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___DecayHFRatio) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___Reflections) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___ReflectDelay) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___Reverb) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___ReverbDelay) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___HFReference) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___LFReference) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___Diffusion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicReverbConfig, ___Density) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BasicReverbConfig) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
