#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FoamLodSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__LodSettings_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FoamLodSettings)
// Forward declare root types
namespace WaveHarmonic::Crest {
class FoamLodSettings;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FoamLodSettings*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FoamLodSettings*, "WaveHarmonic.Crest", "FoamLodSettings");
// Dependencies WaveHarmonic.Crest.LodSettings
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FoamLodSettings
class CORDL_TYPE FoamLodSettings : public ::WaveHarmonic::Crest::LodSettings {
public:
// Declarations
 __declspec(property(get=get_FilterWaves, put=set_FilterWaves)) int32_t  FilterWaves;

 __declspec(property(get=get_FoamFadeRate, put=set_FoamFadeRate)) float_t  FoamFadeRate;

 __declspec(property(get=get_Maximum, put=set_Maximum)) float_t  Maximum;

 __declspec(property(get=get_ShorelineFoamMaximumDepth, put=set_ShorelineFoamMaximumDepth)) float_t  ShorelineFoamMaximumDepth;

 __declspec(property(get=get_ShorelineFoamPriming, put=set_ShorelineFoamPriming)) float_t  ShorelineFoamPriming;

 __declspec(property(get=get_ShorelineFoamStrength, put=set_ShorelineFoamStrength)) float_t  ShorelineFoamStrength;

 __declspec(property(get=get_WaveFoamCoverage, put=set_WaveFoamCoverage)) float_t  WaveFoamCoverage;

 __declspec(property(get=get_WaveFoamStrength, put=set_WaveFoamStrength)) float_t  WaveFoamStrength;

/// @brief Field _FilterWaves, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__FilterWaves, put=__cordl_internal_set__FilterWaves)) int32_t  _FilterWaves;

/// @brief Field _FoamFadeRate, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__FoamFadeRate, put=__cordl_internal_set__FoamFadeRate)) float_t  _FoamFadeRate;

/// @brief Field _Maximum, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Maximum, put=__cordl_internal_set__Maximum)) float_t  _Maximum;

/// @brief Field _ShorelineFoamMaximumDepth, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShorelineFoamMaximumDepth, put=__cordl_internal_set__ShorelineFoamMaximumDepth)) float_t  _ShorelineFoamMaximumDepth;

/// @brief Field _ShorelineFoamPriming, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShorelineFoamPriming, put=__cordl_internal_set__ShorelineFoamPriming)) float_t  _ShorelineFoamPriming;

/// @brief Field _ShorelineFoamStrength, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShorelineFoamStrength, put=__cordl_internal_set__ShorelineFoamStrength)) float_t  _ShorelineFoamStrength;

/// @brief Field _WaveFoamCoverage, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__WaveFoamCoverage, put=__cordl_internal_set__WaveFoamCoverage)) float_t  _WaveFoamCoverage;

/// @brief Field _WaveFoamStrength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__WaveFoamStrength, put=__cordl_internal_set__WaveFoamStrength)) float_t  _WaveFoamStrength;

static inline ::WaveHarmonic::Crest::FoamLodSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__FilterWaves() const;

constexpr int32_t& __cordl_internal_get__FilterWaves() ;

constexpr float_t const& __cordl_internal_get__FoamFadeRate() const;

constexpr float_t& __cordl_internal_get__FoamFadeRate() ;

constexpr float_t const& __cordl_internal_get__Maximum() const;

constexpr float_t& __cordl_internal_get__Maximum() ;

constexpr float_t const& __cordl_internal_get__ShorelineFoamMaximumDepth() const;

constexpr float_t& __cordl_internal_get__ShorelineFoamMaximumDepth() ;

constexpr float_t const& __cordl_internal_get__ShorelineFoamPriming() const;

constexpr float_t& __cordl_internal_get__ShorelineFoamPriming() ;

constexpr float_t const& __cordl_internal_get__ShorelineFoamStrength() const;

constexpr float_t& __cordl_internal_get__ShorelineFoamStrength() ;

constexpr float_t const& __cordl_internal_get__WaveFoamCoverage() const;

constexpr float_t& __cordl_internal_get__WaveFoamCoverage() ;

constexpr float_t const& __cordl_internal_get__WaveFoamStrength() const;

constexpr float_t& __cordl_internal_get__WaveFoamStrength() ;

constexpr void __cordl_internal_set__FilterWaves(int32_t  value) ;

constexpr void __cordl_internal_set__FoamFadeRate(float_t  value) ;

constexpr void __cordl_internal_set__Maximum(float_t  value) ;

constexpr void __cordl_internal_set__ShorelineFoamMaximumDepth(float_t  value) ;

constexpr void __cordl_internal_set__ShorelineFoamPriming(float_t  value) ;

constexpr void __cordl_internal_set__ShorelineFoamStrength(float_t  value) ;

constexpr void __cordl_internal_set__WaveFoamCoverage(float_t  value) ;

constexpr void __cordl_internal_set__WaveFoamStrength(float_t  value) ;

/// @brief Method .ctor, addr 0x182575600, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FilterWaves, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_FilterWaves() ;

/// @brief Method get_FoamFadeRate, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_FoamFadeRate() ;

/// @brief Method get_Maximum, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Maximum() ;

/// @brief Method get_ShorelineFoamMaximumDepth, addr 0x1802e2da0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ShorelineFoamMaximumDepth() ;

/// @brief Method get_ShorelineFoamPriming, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_ShorelineFoamPriming() ;

/// @brief Method get_ShorelineFoamStrength, addr 0x1802f7fd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ShorelineFoamStrength() ;

/// @brief Method get_WaveFoamCoverage, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_WaveFoamCoverage() ;

/// @brief Method get_WaveFoamStrength, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_WaveFoamStrength() ;

/// @brief Method set_FilterWaves, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_FilterWaves(int32_t  value) ;

/// @brief Method set_FoamFadeRate, addr 0x1802f81c0, size 0x10, virtual false, abstract: false, final false
inline void set_FoamFadeRate(float_t  value) ;

/// @brief Method set_Maximum, addr 0x1802f43c0, size 0x10, virtual false, abstract: false, final false
inline void set_Maximum(float_t  value) ;

/// @brief Method set_ShorelineFoamMaximumDepth, addr 0x18046fb90, size 0x10, virtual false, abstract: false, final false
inline void set_ShorelineFoamMaximumDepth(float_t  value) ;

/// @brief Method set_ShorelineFoamPriming, addr 0x1802e2ff0, size 0x10, virtual false, abstract: false, final false
inline void set_ShorelineFoamPriming(float_t  value) ;

/// @brief Method set_ShorelineFoamStrength, addr 0x18046fb80, size 0x10, virtual false, abstract: false, final false
inline void set_ShorelineFoamStrength(float_t  value) ;

/// @brief Method set_WaveFoamCoverage, addr 0x180bb44a0, size 0x3450, virtual false, abstract: false, final false
inline void set_WaveFoamCoverage(float_t  value) ;

/// @brief Method set_WaveFoamStrength, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_WaveFoamStrength(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoamLodSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoamLodSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FoamLodSettings(FoamLodSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoamLodSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoamLodSettings(FoamLodSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16629};

/// @brief Field _Maximum, offset: 0x1c, size: 0x4, def value: None
 float_t  ____Maximum;

/// @brief Field _FoamFadeRate, offset: 0x20, size: 0x4, def value: None
 float_t  ____FoamFadeRate;

/// @brief Field _WaveFoamStrength, offset: 0x24, size: 0x4, def value: None
 float_t  ____WaveFoamStrength;

/// @brief Field _WaveFoamCoverage, offset: 0x28, size: 0x4, def value: None
 float_t  ____WaveFoamCoverage;

/// @brief Field _FilterWaves, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____FilterWaves;

/// @brief Field _ShorelineFoamMaximumDepth, offset: 0x30, size: 0x4, def value: None
 float_t  ____ShorelineFoamMaximumDepth;

/// @brief Field _ShorelineFoamStrength, offset: 0x34, size: 0x4, def value: None
 float_t  ____ShorelineFoamStrength;

/// @brief Field _ShorelineFoamPriming, offset: 0x38, size: 0x4, def value: None
 float_t  ____ShorelineFoamPriming;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::FoamLodSettings, ____Maximum) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FoamLodSettings, ____FoamFadeRate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FoamLodSettings, ____WaveFoamStrength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FoamLodSettings, ____WaveFoamCoverage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FoamLodSettings, ____FilterWaves) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FoamLodSettings, ____ShorelineFoamMaximumDepth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FoamLodSettings, ____ShorelineFoamStrength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FoamLodSettings, ____ShorelineFoamPriming) == 0x38, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::FoamLodSettings) == 0x40, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
