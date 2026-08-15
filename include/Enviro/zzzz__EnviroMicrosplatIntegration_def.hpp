#pragma once
// IWYU pragma private; include "Enviro/EnviroMicrosplatIntegration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroMicrosplatIntegration)
// Forward declare root types
namespace Enviro {
class EnviroMicrosplatIntegration;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroMicrosplatIntegration*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroMicrosplatIntegration*, "Enviro", "EnviroMicrosplatIntegration");
// Dependencies UnityEngine.MonoBehaviour
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroMicrosplatIntegration
class CORDL_TYPE EnviroMicrosplatIntegration : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field UpdatePuddles, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_UpdatePuddles, put=__cordl_internal_set_UpdatePuddles)) bool  UpdatePuddles;

/// @brief Field UpdateRainRipples, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_UpdateRainRipples, put=__cordl_internal_set_UpdateRainRipples)) bool  UpdateRainRipples;

/// @brief Field UpdateSnow, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_UpdateSnow, put=__cordl_internal_set_UpdateSnow)) bool  UpdateSnow;

/// @brief Field UpdateStreams, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_UpdateStreams, put=__cordl_internal_set_UpdateStreams)) bool  UpdateStreams;

/// @brief Field UpdateWetness, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_UpdateWetness, put=__cordl_internal_set_UpdateWetness)) bool  UpdateWetness;

/// @brief Field minWetness, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_minWetness, put=__cordl_internal_set_minWetness)) float_t  minWetness;

static inline ::Enviro::EnviroMicrosplatIntegration* New_ctor() ;

/// @brief Method Update, addr 0x1803c25a0, size 0x230, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_UpdatePuddles() const;

constexpr bool& __cordl_internal_get_UpdatePuddles() ;

constexpr bool const& __cordl_internal_get_UpdateRainRipples() const;

constexpr bool& __cordl_internal_get_UpdateRainRipples() ;

constexpr bool const& __cordl_internal_get_UpdateSnow() const;

constexpr bool& __cordl_internal_get_UpdateSnow() ;

constexpr bool const& __cordl_internal_get_UpdateStreams() const;

constexpr bool& __cordl_internal_get_UpdateStreams() ;

constexpr bool const& __cordl_internal_get_UpdateWetness() const;

constexpr bool& __cordl_internal_get_UpdateWetness() ;

constexpr float_t const& __cordl_internal_get_minWetness() const;

constexpr float_t& __cordl_internal_get_minWetness() ;

constexpr void __cordl_internal_set_UpdatePuddles(bool  value) ;

constexpr void __cordl_internal_set_UpdateRainRipples(bool  value) ;

constexpr void __cordl_internal_set_UpdateSnow(bool  value) ;

constexpr void __cordl_internal_set_UpdateStreams(bool  value) ;

constexpr void __cordl_internal_set_UpdateWetness(bool  value) ;

constexpr void __cordl_internal_set_minWetness(float_t  value) ;

/// @brief Method .ctor, addr 0x1803c27d0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroMicrosplatIntegration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroMicrosplatIntegration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroMicrosplatIntegration(EnviroMicrosplatIntegration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroMicrosplatIntegration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroMicrosplatIntegration(EnviroMicrosplatIntegration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5813};

/// @brief Field UpdateWetness, offset: 0x20, size: 0x1, def value: None
 bool  ___UpdateWetness;

/// @brief Field minWetness, offset: 0x24, size: 0x4, def value: None
 float_t  ___minWetness;

/// @brief Field UpdateRainRipples, offset: 0x28, size: 0x1, def value: None
 bool  ___UpdateRainRipples;

/// @brief Field UpdatePuddles, offset: 0x29, size: 0x1, def value: None
 bool  ___UpdatePuddles;

/// @brief Field UpdateStreams, offset: 0x2a, size: 0x1, def value: None
 bool  ___UpdateStreams;

/// @brief Field UpdateSnow, offset: 0x2b, size: 0x1, def value: None
 bool  ___UpdateSnow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroMicrosplatIntegration, ___UpdateWetness) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroMicrosplatIntegration, ___minWetness) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroMicrosplatIntegration, ___UpdateRainRipples) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroMicrosplatIntegration, ___UpdatePuddles) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroMicrosplatIntegration, ___UpdateStreams) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroMicrosplatIntegration, ___UpdateSnow) == 0x2b, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroMicrosplatIntegration) == 0x30, "Size mismatch!");

} // namespace end def Enviro
