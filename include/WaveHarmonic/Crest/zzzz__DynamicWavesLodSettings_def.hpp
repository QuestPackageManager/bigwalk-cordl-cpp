#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DynamicWavesLodSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__LodSettings_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DynamicWavesLodSettings)
// Forward declare root types
namespace WaveHarmonic::Crest {
class DynamicWavesLodSettings;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DynamicWavesLodSettings*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DynamicWavesLodSettings*, "WaveHarmonic.Crest", "DynamicWavesLodSettings");
// Dependencies WaveHarmonic.Crest.LodSettings
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DynamicWavesLodSettings
class CORDL_TYPE DynamicWavesLodSettings : public ::WaveHarmonic::Crest::LodSettings {
public:
// Declarations
 __declspec(property(get=get_CourantNumber, put=set_CourantNumber)) float_t  CourantNumber;

 __declspec(property(get=get_Damping, put=set_Damping)) float_t  Damping;

 __declspec(property(get=get_DisplaceClamp, put=set_DisplaceClamp)) float_t  DisplaceClamp;

 __declspec(property(get=get_GravityMultiplier, put=set_GravityMultiplier)) float_t  GravityMultiplier;

 __declspec(property(get=get_HorizontalDisplace, put=set_HorizontalDisplace)) float_t  HorizontalDisplace;

 __declspec(property(get=get_VerticalDisplacementCullingContributions, put=set_VerticalDisplacementCullingContributions)) float_t  VerticalDisplacementCullingContributions;

/// @brief Field _CourantNumber, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__CourantNumber, put=__cordl_internal_set__CourantNumber)) float_t  _CourantNumber;

/// @brief Field _Damping, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Damping, put=__cordl_internal_set__Damping)) float_t  _Damping;

/// @brief Field _DisplaceClamp, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__DisplaceClamp, put=__cordl_internal_set__DisplaceClamp)) float_t  _DisplaceClamp;

/// @brief Field _GravityMultiplier, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__GravityMultiplier, put=__cordl_internal_set__GravityMultiplier)) float_t  _GravityMultiplier;

/// @brief Field _HorizontalDisplace, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__HorizontalDisplace, put=__cordl_internal_set__HorizontalDisplace)) float_t  _HorizontalDisplace;

/// @brief Field _VerticalDisplacementCullingContributions, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__VerticalDisplacementCullingContributions, put=__cordl_internal_set__VerticalDisplacementCullingContributions)) float_t  _VerticalDisplacementCullingContributions;

static inline ::WaveHarmonic::Crest::DynamicWavesLodSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get__CourantNumber() const;

constexpr float_t& __cordl_internal_get__CourantNumber() ;

constexpr float_t const& __cordl_internal_get__Damping() const;

constexpr float_t& __cordl_internal_get__Damping() ;

constexpr float_t const& __cordl_internal_get__DisplaceClamp() const;

constexpr float_t& __cordl_internal_get__DisplaceClamp() ;

constexpr float_t const& __cordl_internal_get__GravityMultiplier() const;

constexpr float_t& __cordl_internal_get__GravityMultiplier() ;

constexpr float_t const& __cordl_internal_get__HorizontalDisplace() const;

constexpr float_t& __cordl_internal_get__HorizontalDisplace() ;

constexpr float_t const& __cordl_internal_get__VerticalDisplacementCullingContributions() const;

constexpr float_t& __cordl_internal_get__VerticalDisplacementCullingContributions() ;

constexpr void __cordl_internal_set__CourantNumber(float_t  value) ;

constexpr void __cordl_internal_set__Damping(float_t  value) ;

constexpr void __cordl_internal_set__DisplaceClamp(float_t  value) ;

constexpr void __cordl_internal_set__GravityMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__HorizontalDisplace(float_t  value) ;

constexpr void __cordl_internal_set__VerticalDisplacementCullingContributions(float_t  value) ;

/// @brief Method .ctor, addr 0x1825751e0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CourantNumber, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_CourantNumber() ;

/// @brief Method get_Damping, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Damping() ;

/// @brief Method get_DisplaceClamp, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_DisplaceClamp() ;

/// @brief Method get_GravityMultiplier, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_GravityMultiplier() ;

/// @brief Method get_HorizontalDisplace, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_HorizontalDisplace() ;

/// @brief Method get_VerticalDisplacementCullingContributions, addr 0x1802e2da0, size 0x10, virtual false, abstract: false, final false
inline float_t get_VerticalDisplacementCullingContributions() ;

/// @brief Method set_CourantNumber, addr 0x1802f81c0, size 0x10, virtual false, abstract: false, final false
inline void set_CourantNumber(float_t  value) ;

/// @brief Method set_Damping, addr 0x1802f43c0, size 0x10, virtual false, abstract: false, final false
inline void set_Damping(float_t  value) ;

/// @brief Method set_DisplaceClamp, addr 0x180bb44a0, size 0x3450, virtual false, abstract: false, final false
inline void set_DisplaceClamp(float_t  value) ;

/// @brief Method set_GravityMultiplier, addr 0x18046fb30, size 0x10, virtual false, abstract: false, final false
inline void set_GravityMultiplier(float_t  value) ;

/// @brief Method set_HorizontalDisplace, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_HorizontalDisplace(float_t  value) ;

/// @brief Method set_VerticalDisplacementCullingContributions, addr 0x18046fb90, size 0x10, virtual false, abstract: false, final false
inline void set_VerticalDisplacementCullingContributions(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicWavesLodSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicWavesLodSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicWavesLodSettings(DynamicWavesLodSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicWavesLodSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicWavesLodSettings(DynamicWavesLodSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16628};

/// @brief Field _Damping, offset: 0x1c, size: 0x4, def value: None
 float_t  ____Damping;

/// @brief Field _CourantNumber, offset: 0x20, size: 0x4, def value: None
 float_t  ____CourantNumber;

/// @brief Field _HorizontalDisplace, offset: 0x24, size: 0x4, def value: None
 float_t  ____HorizontalDisplace;

/// @brief Field _DisplaceClamp, offset: 0x28, size: 0x4, def value: None
 float_t  ____DisplaceClamp;

/// @brief Field _GravityMultiplier, offset: 0x2c, size: 0x4, def value: None
 float_t  ____GravityMultiplier;

/// @brief Field _VerticalDisplacementCullingContributions, offset: 0x30, size: 0x4, def value: None
 float_t  ____VerticalDisplacementCullingContributions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DynamicWavesLodSettings, ____Damping) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DynamicWavesLodSettings, ____CourantNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DynamicWavesLodSettings, ____HorizontalDisplace) == 0x24, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DynamicWavesLodSettings, ____DisplaceClamp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DynamicWavesLodSettings, ____GravityMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DynamicWavesLodSettings, ____VerticalDisplacementCullingContributions) == 0x30, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DynamicWavesLodSettings) == 0x38, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
