#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeAudioOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnviroWeatherTypeAudioOverride)
namespace Enviro {
class EnviroAudioOverrideType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Enviro {
class EnviroWeatherTypeAudioOverride;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherTypeAudioOverride*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherTypeAudioOverride*, "Enviro", "EnviroWeatherTypeAudioOverride");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherTypeAudioOverride
class CORDL_TYPE EnviroWeatherTypeAudioOverride : public ::System::Object {
public:
// Declarations
/// @brief Field ambientOverride, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientOverride, put=__cordl_internal_set_ambientOverride)) ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*  ambientOverride;

/// @brief Field weatherOverride, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherOverride, put=__cordl_internal_set_weatherOverride)) ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*  weatherOverride;

static inline ::Enviro::EnviroWeatherTypeAudioOverride* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>* const& __cordl_internal_get_ambientOverride() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*& __cordl_internal_get_ambientOverride() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>* const& __cordl_internal_get_weatherOverride() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*& __cordl_internal_get_weatherOverride() ;

constexpr void __cordl_internal_set_ambientOverride(::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*  value) ;

constexpr void __cordl_internal_set_weatherOverride(::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*  value) ;

/// @brief Method .ctor, addr 0x1806296d0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherTypeAudioOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeAudioOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherTypeAudioOverride(EnviroWeatherTypeAudioOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeAudioOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherTypeAudioOverride(EnviroWeatherTypeAudioOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18514};

/// @brief Field ambientOverride, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*  ___ambientOverride;

/// @brief Field weatherOverride, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroAudioOverrideType*>*  ___weatherOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherTypeAudioOverride, ___ambientOverride) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeAudioOverride, ___weatherOverride) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherTypeAudioOverride) == 0x20, "Size mismatch!");

} // namespace end def Enviro
