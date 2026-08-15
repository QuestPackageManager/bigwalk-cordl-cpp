#pragma once
// IWYU pragma private; include "UnityEngine/DetailPrototype.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DetailPrototype)
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct DetailRenderMode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine {
class DetailPrototype;
}
// Write type traits
MARK_REF_T(::UnityEngine::DetailPrototype*);
DEFINE_IL2CPP_CLASS(::UnityEngine::DetailPrototype*, "UnityEngine", "DetailPrototype");
// Dependencies System.Object, UnityEngine.Color
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.DetailPrototype
class CORDL_TYPE DetailPrototype : public ::System::Object {
public:
// Declarations
/// @brief Field DefaultDryColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DefaultDryColor, put=setStaticF_DefaultDryColor)) ::UnityEngine::Color  DefaultDryColor;

/// @brief Field DefaultHealthColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_DefaultHealthColor, put=setStaticF_DefaultHealthColor)) ::UnityEngine::Color  DefaultHealthColor;

 __declspec(property(get=get_alignToGround, put=set_alignToGround)) float_t  alignToGround;

 __declspec(property(get=get_density, put=set_density)) float_t  density;

 __declspec(property(get=get_dryColor, put=set_dryColor)) ::UnityEngine::Color  dryColor;

 __declspec(property(get=get_healthyColor, put=set_healthyColor)) ::UnityEngine::Color  healthyColor;

 __declspec(property(get=get_holeEdgePadding, put=set_holeEdgePadding)) float_t  holeEdgePadding;

/// @brief Field m_AlignToGround, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AlignToGround, put=__cordl_internal_set_m_AlignToGround)) float_t  m_AlignToGround;

/// @brief Field m_Density, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Density, put=__cordl_internal_set_m_Density)) float_t  m_Density;

/// @brief Field m_DryColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_DryColor, put=__cordl_internal_set_m_DryColor)) ::UnityEngine::Color  m_DryColor;

/// @brief Field m_HealthyColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_HealthyColor, put=__cordl_internal_set_m_HealthyColor)) ::UnityEngine::Color  m_HealthyColor;

/// @brief Field m_HoleEdgePadding, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HoleEdgePadding, put=__cordl_internal_set_m_HoleEdgePadding)) float_t  m_HoleEdgePadding;

/// @brief Field m_MaxHeight, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxHeight, put=__cordl_internal_set_m_MaxHeight)) float_t  m_MaxHeight;

/// @brief Field m_MaxWidth, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxWidth, put=__cordl_internal_set_m_MaxWidth)) float_t  m_MaxWidth;

/// @brief Field m_MinHeight, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinHeight, put=__cordl_internal_set_m_MinHeight)) float_t  m_MinHeight;

/// @brief Field m_MinWidth, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinWidth, put=__cordl_internal_set_m_MinWidth)) float_t  m_MinWidth;

/// @brief Field m_NoiseSeed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NoiseSeed, put=__cordl_internal_set_m_NoiseSeed)) int32_t  m_NoiseSeed;

/// @brief Field m_NoiseSpread, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NoiseSpread, put=__cordl_internal_set_m_NoiseSpread)) float_t  m_NoiseSpread;

/// @brief Field m_PositionJitter, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PositionJitter, put=__cordl_internal_set_m_PositionJitter)) float_t  m_PositionJitter;

/// @brief Field m_Prototype, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Prototype, put=__cordl_internal_set_m_Prototype)) ::UnityW<::UnityEngine::GameObject>  m_Prototype;

/// @brief Field m_PrototypeTexture, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrototypeTexture, put=__cordl_internal_set_m_PrototypeTexture)) ::UnityW<::UnityEngine::Texture2D>  m_PrototypeTexture;

/// @brief Field m_RenderMode, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RenderMode, put=__cordl_internal_set_m_RenderMode)) int32_t  m_RenderMode;

/// @brief Field m_TargetCoverage, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TargetCoverage, put=__cordl_internal_set_m_TargetCoverage)) float_t  m_TargetCoverage;

/// @brief Field m_UseDensityScaling, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UseDensityScaling, put=__cordl_internal_set_m_UseDensityScaling)) int32_t  m_UseDensityScaling;

/// @brief Field m_UseInstancing, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UseInstancing, put=__cordl_internal_set_m_UseInstancing)) int32_t  m_UseInstancing;

/// @brief Field m_UsePrototypeMesh, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UsePrototypeMesh, put=__cordl_internal_set_m_UsePrototypeMesh)) int32_t  m_UsePrototypeMesh;

 __declspec(property(get=get_maxHeight, put=set_maxHeight)) float_t  maxHeight;

 __declspec(property(get=get_maxWidth, put=set_maxWidth)) float_t  maxWidth;

 __declspec(property(get=get_minHeight, put=set_minHeight)) float_t  minHeight;

 __declspec(property(get=get_minWidth, put=set_minWidth)) float_t  minWidth;

 __declspec(property(get=get_noiseSeed, put=set_noiseSeed)) int32_t  noiseSeed;

 __declspec(property(get=get_noiseSpread, put=set_noiseSpread)) float_t  noiseSpread;

 __declspec(property(get=get_positionJitter, put=set_positionJitter)) float_t  positionJitter;

 __declspec(property(get=get_prototype, put=set_prototype)) ::UnityW<::UnityEngine::GameObject>  prototype;

 __declspec(property(get=get_prototypeTexture, put=set_prototypeTexture)) ::UnityW<::UnityEngine::Texture2D>  prototypeTexture;

 __declspec(property(get=get_renderMode, put=set_renderMode)) ::UnityEngine::DetailRenderMode  renderMode;

 __declspec(property(get=get_targetCoverage, put=set_targetCoverage)) float_t  targetCoverage;

 __declspec(property(get=get_useDensityScaling, put=set_useDensityScaling)) bool  useDensityScaling;

 __declspec(property(get=get_useInstancing, put=set_useInstancing)) bool  useInstancing;

 __declspec(property(get=get_usePrototypeMesh, put=set_usePrototypeMesh)) bool  usePrototypeMesh;

/// @brief Method Equals, addr 0x18230e8a0, size 0x30, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x18230e8d0, size 0x240, virtual false, abstract: false, final false
inline bool Equals(::UnityEngine::DetailPrototype*  other) ;

/// @brief Method GetHashCode, addr 0x1815f4340, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::DetailPrototype* New_ctor() ;

constexpr float_t const& __cordl_internal_get_m_AlignToGround() const;

constexpr float_t& __cordl_internal_get_m_AlignToGround() ;

constexpr float_t const& __cordl_internal_get_m_Density() const;

constexpr float_t& __cordl_internal_get_m_Density() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_DryColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_DryColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_HealthyColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_HealthyColor() ;

constexpr float_t const& __cordl_internal_get_m_HoleEdgePadding() const;

constexpr float_t& __cordl_internal_get_m_HoleEdgePadding() ;

constexpr float_t const& __cordl_internal_get_m_MaxHeight() const;

constexpr float_t& __cordl_internal_get_m_MaxHeight() ;

constexpr float_t const& __cordl_internal_get_m_MaxWidth() const;

constexpr float_t& __cordl_internal_get_m_MaxWidth() ;

constexpr float_t const& __cordl_internal_get_m_MinHeight() const;

constexpr float_t& __cordl_internal_get_m_MinHeight() ;

constexpr float_t const& __cordl_internal_get_m_MinWidth() const;

constexpr float_t& __cordl_internal_get_m_MinWidth() ;

constexpr int32_t const& __cordl_internal_get_m_NoiseSeed() const;

constexpr int32_t& __cordl_internal_get_m_NoiseSeed() ;

constexpr float_t const& __cordl_internal_get_m_NoiseSpread() const;

constexpr float_t& __cordl_internal_get_m_NoiseSpread() ;

constexpr float_t const& __cordl_internal_get_m_PositionJitter() const;

constexpr float_t& __cordl_internal_get_m_PositionJitter() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Prototype() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Prototype() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_PrototypeTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_PrototypeTexture() ;

constexpr int32_t const& __cordl_internal_get_m_RenderMode() const;

constexpr int32_t& __cordl_internal_get_m_RenderMode() ;

constexpr float_t const& __cordl_internal_get_m_TargetCoverage() const;

constexpr float_t& __cordl_internal_get_m_TargetCoverage() ;

constexpr int32_t const& __cordl_internal_get_m_UseDensityScaling() const;

constexpr int32_t& __cordl_internal_get_m_UseDensityScaling() ;

constexpr int32_t const& __cordl_internal_get_m_UseInstancing() const;

constexpr int32_t& __cordl_internal_get_m_UseInstancing() ;

constexpr int32_t const& __cordl_internal_get_m_UsePrototypeMesh() const;

constexpr int32_t& __cordl_internal_get_m_UsePrototypeMesh() ;

constexpr void __cordl_internal_set_m_AlignToGround(float_t  value) ;

constexpr void __cordl_internal_set_m_Density(float_t  value) ;

constexpr void __cordl_internal_set_m_DryColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_HealthyColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_HoleEdgePadding(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_MinHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_MinWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_NoiseSeed(int32_t  value) ;

constexpr void __cordl_internal_set_m_NoiseSpread(float_t  value) ;

constexpr void __cordl_internal_set_m_PositionJitter(float_t  value) ;

constexpr void __cordl_internal_set_m_Prototype(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_PrototypeTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_m_RenderMode(int32_t  value) ;

constexpr void __cordl_internal_set_m_TargetCoverage(float_t  value) ;

constexpr void __cordl_internal_set_m_UseDensityScaling(int32_t  value) ;

constexpr void __cordl_internal_set_m_UseInstancing(int32_t  value) ;

constexpr void __cordl_internal_set_m_UsePrototypeMesh(int32_t  value) ;

/// @brief Method .ctor, addr 0x18230eb60, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_DefaultDryColor() ;

static inline ::UnityEngine::Color getStaticF_DefaultHealthColor() ;

/// @brief Method get_alignToGround, addr 0x1802e58b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_alignToGround() ;

/// @brief Method get_density, addr 0x18046faf0, size 0x10, virtual false, abstract: false, final false
inline float_t get_density() ;

/// @brief Method get_dryColor, addr 0x1802e30e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_dryColor() ;

/// @brief Method get_healthyColor, addr 0x1802f41b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_healthyColor() ;

/// @brief Method get_holeEdgePadding, addr 0x18046fb00, size 0x10, virtual false, abstract: false, final false
inline float_t get_holeEdgePadding() ;

/// @brief Method get_maxHeight, addr 0x1802f8070, size 0x10, virtual false, abstract: false, final false
inline float_t get_maxHeight() ;

/// @brief Method get_maxWidth, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t get_maxWidth() ;

/// @brief Method get_minHeight, addr 0x1802f8050, size 0x10, virtual false, abstract: false, final false
inline float_t get_minHeight() ;

/// @brief Method get_minWidth, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_minWidth() ;

/// @brief Method get_noiseSeed, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline int32_t get_noiseSeed() ;

/// @brief Method get_noiseSpread, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_noiseSpread() ;

/// @brief Method get_positionJitter, addr 0x180474bc0, size 0x10, virtual false, abstract: false, final false
inline float_t get_positionJitter() ;

/// @brief Method get_prototype, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_prototype() ;

/// @brief Method get_prototypeTexture, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_prototypeTexture() ;

/// @brief Method get_renderMode, addr 0x18039fc60, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::DetailRenderMode get_renderMode() ;

/// @brief Method get_targetCoverage, addr 0x180403860, size 0x10, virtual false, abstract: false, final false
inline float_t get_targetCoverage() ;

/// @brief Method get_useDensityScaling, addr 0x18230ec20, size 0x10, virtual false, abstract: false, final false
inline bool get_useDensityScaling() ;

/// @brief Method get_useInstancing, addr 0x18230ec30, size 0x10, virtual false, abstract: false, final false
inline bool get_useInstancing() ;

/// @brief Method get_usePrototypeMesh, addr 0x18230ec40, size 0x10, virtual false, abstract: false, final false
inline bool get_usePrototypeMesh() ;

static inline void setStaticF_DefaultDryColor(::UnityEngine::Color  value) ;

static inline void setStaticF_DefaultHealthColor(::UnityEngine::Color  value) ;

/// @brief Method set_alignToGround, addr 0x180474c70, size 0x10, virtual false, abstract: false, final false
inline void set_alignToGround(float_t  value) ;

/// @brief Method set_density, addr 0x18046fb40, size 0x10, virtual false, abstract: false, final false
inline void set_density(float_t  value) ;

/// @brief Method set_dryColor, addr 0x18187c9d0, size 0x10, virtual false, abstract: false, final false
inline void set_dryColor(::UnityEngine::Color  value) ;

/// @brief Method set_healthyColor, addr 0x1815b93b0, size 0x10, virtual false, abstract: false, final false
inline void set_healthyColor(::UnityEngine::Color  value) ;

/// @brief Method set_holeEdgePadding, addr 0x18046fb50, size 0x10, virtual false, abstract: false, final false
inline void set_holeEdgePadding(float_t  value) ;

/// @brief Method set_maxHeight, addr 0x18046fb60, size 0x10, virtual false, abstract: false, final false
inline void set_maxHeight(float_t  value) ;

/// @brief Method set_maxWidth, addr 0x180307250, size 0x10, virtual false, abstract: false, final false
inline void set_maxWidth(float_t  value) ;

/// @brief Method set_minHeight, addr 0x18046fb70, size 0x10, virtual false, abstract: false, final false
inline void set_minHeight(float_t  value) ;

/// @brief Method set_minWidth, addr 0x1802e2f60, size 0x10, virtual false, abstract: false, final false
inline void set_minWidth(float_t  value) ;

/// @brief Method set_noiseSeed, addr 0x1803d75f0, size 0x10, virtual false, abstract: false, final false
inline void set_noiseSeed(int32_t  value) ;

/// @brief Method set_noiseSpread, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_noiseSpread(float_t  value) ;

/// @brief Method set_positionJitter, addr 0x180474c60, size 0x10, virtual false, abstract: false, final false
inline void set_positionJitter(float_t  value) ;

/// @brief Method set_prototype, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_prototype(::UnityEngine::GameObject*  value) ;

/// @brief Method set_prototypeTexture, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_prototypeTexture(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_renderMode, addr 0x1804f67b0, size 0x10, virtual false, abstract: false, final false
inline void set_renderMode(::UnityEngine::DetailRenderMode  value) ;

/// @brief Method set_targetCoverage, addr 0x18230ec50, size 0x10, virtual false, abstract: false, final false
inline void set_targetCoverage(float_t  value) ;

/// @brief Method set_useDensityScaling, addr 0x18230ec60, size 0x10, virtual false, abstract: false, final false
inline void set_useDensityScaling(bool  value) ;

/// @brief Method set_useInstancing, addr 0x18230ec70, size 0x10, virtual false, abstract: false, final false
inline void set_useInstancing(bool  value) ;

/// @brief Method set_usePrototypeMesh, addr 0x18230ec80, size 0x100, virtual false, abstract: false, final false
inline void set_usePrototypeMesh(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetailPrototype() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetailPrototype", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DetailPrototype(DetailPrototype && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetailPrototype", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetailPrototype(DetailPrototype const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20324};

/// @brief Field m_Prototype, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_Prototype;

/// @brief Field m_PrototypeTexture, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___m_PrototypeTexture;

/// @brief Field m_HealthyColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_HealthyColor;

/// @brief Field m_DryColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_DryColor;

/// @brief Field m_MinWidth, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_MinWidth;

/// @brief Field m_MaxWidth, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_MaxWidth;

/// @brief Field m_MinHeight, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_MinHeight;

/// @brief Field m_MaxHeight, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_MaxHeight;

/// @brief Field m_NoiseSeed, offset: 0x50, size: 0x4, def value: None
 int32_t  ___m_NoiseSeed;

/// @brief Field m_NoiseSpread, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_NoiseSpread;

/// @brief Field m_Density, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_Density;

/// @brief Field m_HoleEdgePadding, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_HoleEdgePadding;

/// @brief Field m_RenderMode, offset: 0x60, size: 0x4, def value: None
 int32_t  ___m_RenderMode;

/// @brief Field m_UsePrototypeMesh, offset: 0x64, size: 0x4, def value: None
 int32_t  ___m_UsePrototypeMesh;

/// @brief Field m_UseInstancing, offset: 0x68, size: 0x4, def value: None
 int32_t  ___m_UseInstancing;

/// @brief Field m_UseDensityScaling, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___m_UseDensityScaling;

/// @brief Field m_AlignToGround, offset: 0x70, size: 0x4, def value: None
 float_t  ___m_AlignToGround;

/// @brief Field m_PositionJitter, offset: 0x74, size: 0x4, def value: None
 float_t  ___m_PositionJitter;

/// @brief Field m_TargetCoverage, offset: 0x78, size: 0x4, def value: None
 float_t  ___m_TargetCoverage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_Prototype) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_PrototypeTexture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_HealthyColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_DryColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_MinWidth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_MaxWidth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_MinHeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_MaxHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_NoiseSeed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_NoiseSpread) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_Density) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_HoleEdgePadding) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_RenderMode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_UsePrototypeMesh) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_UseInstancing) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_UseDensityScaling) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_AlignToGround) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_PositionJitter) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DetailPrototype, ___m_TargetCoverage) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::DetailPrototype) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
