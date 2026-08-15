#pragma once
// IWYU pragma private; include "Enviro/EnviroAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroAudio)
namespace Enviro {
class EnviroAudioClip;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Enviro {
class EnviroAudio;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroAudio*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroAudio*, "Enviro", "EnviroAudio");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroAudio
class CORDL_TYPE EnviroAudio : public ::System::Object {
public:
// Declarations
/// @brief Field ambientClips, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientClips, put=__cordl_internal_set_ambientClips)) ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  ambientClips;

/// @brief Field ambientMasterVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientMasterVolume, put=__cordl_internal_set_ambientMasterVolume)) float_t  ambientMasterVolume;

/// @brief Field thunderClips, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_thunderClips, put=__cordl_internal_set_thunderClips)) ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  thunderClips;

/// @brief Field thunderMasterVolume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_thunderMasterVolume, put=__cordl_internal_set_thunderMasterVolume)) float_t  thunderMasterVolume;

/// @brief Field weatherClips, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherClips, put=__cordl_internal_set_weatherClips)) ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  weatherClips;

/// @brief Field weatherMasterVolume, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_weatherMasterVolume, put=__cordl_internal_set_weatherMasterVolume)) float_t  weatherMasterVolume;

static inline ::Enviro::EnviroAudio* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>* const& __cordl_internal_get_ambientClips() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*& __cordl_internal_get_ambientClips() ;

constexpr float_t const& __cordl_internal_get_ambientMasterVolume() const;

constexpr float_t& __cordl_internal_get_ambientMasterVolume() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>* const& __cordl_internal_get_thunderClips() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*& __cordl_internal_get_thunderClips() ;

constexpr float_t const& __cordl_internal_get_thunderMasterVolume() const;

constexpr float_t& __cordl_internal_get_thunderMasterVolume() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>* const& __cordl_internal_get_weatherClips() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*& __cordl_internal_get_weatherClips() ;

constexpr float_t const& __cordl_internal_get_weatherMasterVolume() const;

constexpr float_t& __cordl_internal_get_weatherMasterVolume() ;

constexpr void __cordl_internal_set_ambientClips(::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  value) ;

constexpr void __cordl_internal_set_ambientMasterVolume(float_t  value) ;

constexpr void __cordl_internal_set_thunderClips(::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  value) ;

constexpr void __cordl_internal_set_thunderMasterVolume(float_t  value) ;

constexpr void __cordl_internal_set_weatherClips(::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  value) ;

constexpr void __cordl_internal_set_weatherMasterVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x1805fda30, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroAudio", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroAudio(EnviroAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroAudio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroAudio(EnviroAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18434};

/// @brief Field ambientClips, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  ___ambientClips;

/// @brief Field weatherClips, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  ___weatherClips;

/// @brief Field thunderClips, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  ___thunderClips;

/// @brief Field ambientMasterVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ___ambientMasterVolume;

/// @brief Field weatherMasterVolume, offset: 0x2c, size: 0x4, def value: None
 float_t  ___weatherMasterVolume;

/// @brief Field thunderMasterVolume, offset: 0x30, size: 0x4, def value: None
 float_t  ___thunderMasterVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroAudio, ___ambientClips) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudio, ___weatherClips) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudio, ___thunderClips) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudio, ___ambientMasterVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudio, ___weatherMasterVolume) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudio, ___thunderMasterVolume) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroAudio) == 0x38, "Size mismatch!");

} // namespace end def Enviro
