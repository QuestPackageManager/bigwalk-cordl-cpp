#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeEffectsOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnviroWeatherTypeEffectsOverride)
namespace Enviro {
class EnviroEffectsOverrideType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Enviro {
class EnviroWeatherTypeEffectsOverride;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherTypeEffectsOverride*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherTypeEffectsOverride*, "Enviro", "EnviroWeatherTypeEffectsOverride");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherTypeEffectsOverride
class CORDL_TYPE EnviroWeatherTypeEffectsOverride : public ::System::Object {
public:
// Declarations
/// @brief Field effectsOverride, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectsOverride, put=__cordl_internal_set_effectsOverride)) ::System::Collections::Generic::List_1<::Enviro::EnviroEffectsOverrideType*>*  effectsOverride;

static inline ::Enviro::EnviroWeatherTypeEffectsOverride* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroEffectsOverrideType*>* const& __cordl_internal_get_effectsOverride() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroEffectsOverrideType*>*& __cordl_internal_get_effectsOverride() ;

constexpr void __cordl_internal_set_effectsOverride(::System::Collections::Generic::List_1<::Enviro::EnviroEffectsOverrideType*>*  value) ;

/// @brief Method .ctor, addr 0x1806299b0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherTypeEffectsOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeEffectsOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherTypeEffectsOverride(EnviroWeatherTypeEffectsOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeEffectsOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherTypeEffectsOverride(EnviroWeatherTypeEffectsOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18517};

/// @brief Field effectsOverride, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroEffectsOverrideType*>*  ___effectsOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherTypeEffectsOverride, ___effectsOverride) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherTypeEffectsOverride) == 0x18, "Size mismatch!");

} // namespace end def Enviro
