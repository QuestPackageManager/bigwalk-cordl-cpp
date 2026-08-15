#pragma once
// IWYU pragma private; include "Dissonance/Audio/Fader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Fader)
// Forward declare root types
namespace Dissonance::Audio {
struct Fader;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Fader);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Fader, "Dissonance.Audio", "Fader");
// Dependencies 
namespace Dissonance::Audio {
// Is value type: true
// CS Name: Dissonance.Audio.Fader
struct CORDL_TYPE Fader {
public:
// Declarations
 __declspec(property(get=get_EndVolume, put=set_EndVolume)) float_t  EndVolume;

 __declspec(property(get=get_StartVolume, put=set_StartVolume)) float_t  StartVolume;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Method CalculateVolume, addr 0x1805e04f0, size 0x70, virtual false, abstract: false, final false
inline float_t CalculateVolume() ;

/// @brief Method FadeTo, addr 0x1805e0560, size 0x30, virtual false, abstract: false, final false
inline void FadeTo(float_t  target, float_t  duration) ;

/// @brief Method Update, addr 0x1805e0590, size 0x80, virtual false, abstract: false, final false
inline void Update(float_t  dt) ;

/// @brief Method get_EndVolume, addr 0x180303b40, size 0x10, virtual false, abstract: false, final false
inline float_t get_EndVolume() ;

/// @brief Method get_StartVolume, addr 0x180303b30, size 0x10, virtual false, abstract: false, final false
inline float_t get_StartVolume() ;

/// @brief Method get_Volume, addr 0x1802d56c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method set_EndVolume, addr 0x18051eae0, size 0x10, virtual false, abstract: false, final false
inline void set_EndVolume(float_t  value) ;

/// @brief Method set_StartVolume, addr 0x18051eaf0, size 0x10, virtual false, abstract: false, final false
inline void set_StartVolume(float_t  value) ;

/// @brief Method set_Volume, addr 0x18051eac0, size 0x10, virtual false, abstract: false, final false
inline void set_Volume(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Fader() ;

// Ctor Parameters [CppParam { name: "_Volume_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_fadeTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_EndVolume_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_StartVolume_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_elapsedTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr Fader(float_t  _Volume_k__BackingField, float_t  _fadeTime, float_t  _EndVolume_k__BackingField, float_t  _StartVolume_k__BackingField, float_t  _elapsedTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16958};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field <Volume>k__BackingField, offset: 0x0, size: 0x4, def value: None
 float_t  _Volume_k__BackingField;

/// @brief Field _fadeTime, offset: 0x4, size: 0x4, def value: None
 float_t  _fadeTime;

/// @brief Field <EndVolume>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  _EndVolume_k__BackingField;

/// @brief Field <StartVolume>k__BackingField, offset: 0xc, size: 0x4, def value: None
 float_t  _StartVolume_k__BackingField;

/// @brief Field _elapsedTime, offset: 0x10, size: 0x4, def value: None
 float_t  _elapsedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Fader, _Volume_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Fader, _fadeTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Fader, _EndVolume_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Fader, _StartVolume_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Fader, _elapsedTime) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Fader) == 0x14, "Size mismatch!");

} // namespace end def Dissonance::Audio
