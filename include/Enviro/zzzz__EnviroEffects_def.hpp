#pragma once
// IWYU pragma private; include "Enviro/EnviroEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroEffects)
namespace Enviro {
class EnviroEffectTypes;
}
namespace Enviro {
struct EnviroEffects_EnviroEffectSystemType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Enviro {
struct EnviroEffects_EnviroEffectSystemType;
}
namespace Enviro {
class EnviroEffects;
}
// Write type traits
MARK_VAL_T(::Enviro::EnviroEffects_EnviroEffectSystemType);
MARK_REF_T(::Enviro::EnviroEffects*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEffects_EnviroEffectSystemType, "Enviro", "EnviroEffects/EnviroEffectSystemType");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEffects*, "Enviro", "EnviroEffects");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroEffects/EnviroEffectSystemType
struct CORDL_TYPE EnviroEffects_EnviroEffectSystemType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroEffects_EnviroEffectSystemType_Unwrapped
enum struct __EnviroEffects_EnviroEffectSystemType_Unwrapped : int32_t {
__E_ParticleSystem = static_cast<int32_t>(0x0),
__E_VFXGraph = static_cast<int32_t>(0x1),
__E_Both = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroEffects_EnviroEffectSystemType_Unwrapped () const noexcept {
return static_cast<__EnviroEffects_EnviroEffectSystemType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroEffects_EnviroEffectSystemType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroEffects_EnviroEffectSystemType(int32_t  value__) noexcept;

/// @brief Field Both value: I32(2)
static ::Enviro::EnviroEffects_EnviroEffectSystemType const Both;

/// @brief Field ParticleSystem value: I32(0)
static ::Enviro::EnviroEffects_EnviroEffectSystemType const ParticleSystem;

/// @brief Field VFXGraph value: I32(1)
static ::Enviro::EnviroEffects_EnviroEffectSystemType const VFXGraph;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18443};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEffects_EnviroEffectSystemType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEffects_EnviroEffectSystemType) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroEffects::EnviroEffectSystemType, System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroEffects
class CORDL_TYPE EnviroEffects : public ::System::Object {
public:
// Declarations
using EnviroEffectSystemType = ::Enviro::EnviroEffects_EnviroEffectSystemType;

/// @brief Field effectTypes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectTypes, put=__cordl_internal_set_effectTypes)) ::System::Collections::Generic::List_1<::Enviro::EnviroEffectTypes*>*  effectTypes;

/// @brief Field enviroEffectSystemType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_enviroEffectSystemType, put=__cordl_internal_set_enviroEffectSystemType)) ::Enviro::EnviroEffects_EnviroEffectSystemType  enviroEffectSystemType;

/// @brief Field particeEmissionRateModifier, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_particeEmissionRateModifier, put=__cordl_internal_set_particeEmissionRateModifier)) float_t  particeEmissionRateModifier;

static inline ::Enviro::EnviroEffects* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroEffectTypes*>* const& __cordl_internal_get_effectTypes() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroEffectTypes*>*& __cordl_internal_get_effectTypes() ;

constexpr ::Enviro::EnviroEffects_EnviroEffectSystemType const& __cordl_internal_get_enviroEffectSystemType() const;

constexpr ::Enviro::EnviroEffects_EnviroEffectSystemType& __cordl_internal_get_enviroEffectSystemType() ;

constexpr float_t const& __cordl_internal_get_particeEmissionRateModifier() const;

constexpr float_t& __cordl_internal_get_particeEmissionRateModifier() ;

constexpr void __cordl_internal_set_effectTypes(::System::Collections::Generic::List_1<::Enviro::EnviroEffectTypes*>*  value) ;

constexpr void __cordl_internal_set_enviroEffectSystemType(::Enviro::EnviroEffects_EnviroEffectSystemType  value) ;

constexpr void __cordl_internal_set_particeEmissionRateModifier(float_t  value) ;

/// @brief Method .ctor, addr 0x18060cf10, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffects", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroEffects(EnviroEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffects", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroEffects(EnviroEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18444};

/// @brief Field enviroEffectSystemType, offset: 0x10, size: 0x4, def value: None
 ::Enviro::EnviroEffects_EnviroEffectSystemType  ___enviroEffectSystemType;

/// @brief Field effectTypes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroEffectTypes*>*  ___effectTypes;

/// @brief Field particeEmissionRateModifier, offset: 0x20, size: 0x4, def value: None
 float_t  ___particeEmissionRateModifier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEffects, ___enviroEffectSystemType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffects, ___effectTypes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffects, ___particeEmissionRateModifier) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEffects) == 0x28, "Size mismatch!");

} // namespace end def Enviro
