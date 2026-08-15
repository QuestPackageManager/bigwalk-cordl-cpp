#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/DetailPrototypeSerializable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__DetailRenderMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DetailPrototypeSerializable)
namespace System {
class Object;
}
namespace UnityEngine {
class DetailPrototype;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class DetailPrototypeSerializable;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::DetailPrototypeSerializable*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::DetailPrototypeSerializable*, "JBooth.MicroVerseCore", "DetailPrototypeSerializable");
// Dependencies System.Object, UnityEngine.Color, UnityEngine.DetailRenderMode
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.DetailPrototypeSerializable
class CORDL_TYPE DetailPrototypeSerializable : public ::System::Object {
public:
// Declarations
/// @brief Field alignToGround, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_alignToGround, put=__cordl_internal_set_alignToGround)) float_t  alignToGround;

/// @brief Field density, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_density, put=__cordl_internal_set_density)) float_t  density;

/// @brief Field dryColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_dryColor, put=__cordl_internal_set_dryColor)) ::UnityEngine::Color  dryColor;

/// @brief Field healthyColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_healthyColor, put=__cordl_internal_set_healthyColor)) ::UnityEngine::Color  healthyColor;

/// @brief Field holeEdgePadding, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_holeEdgePadding, put=__cordl_internal_set_holeEdgePadding)) float_t  holeEdgePadding;

/// @brief Field maxHeight, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHeight, put=__cordl_internal_set_maxHeight)) float_t  maxHeight;

/// @brief Field maxWidth, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxWidth, put=__cordl_internal_set_maxWidth)) float_t  maxWidth;

/// @brief Field minHeight, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHeight, put=__cordl_internal_set_minHeight)) float_t  minHeight;

/// @brief Field minWidth, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_minWidth, put=__cordl_internal_set_minWidth)) float_t  minWidth;

/// @brief Field noiseSeed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_noiseSeed, put=__cordl_internal_set_noiseSeed)) int32_t  noiseSeed;

/// @brief Field noiseSpread, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_noiseSpread, put=__cordl_internal_set_noiseSpread)) float_t  noiseSpread;

/// @brief Field positionJitter, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionJitter, put=__cordl_internal_set_positionJitter)) float_t  positionJitter;

/// @brief Field prototype, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototype, put=__cordl_internal_set_prototype)) ::UnityW<::UnityEngine::GameObject>  prototype;

/// @brief Field prototypeTexture, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototypeTexture, put=__cordl_internal_set_prototypeTexture)) ::UnityW<::UnityEngine::Texture2D>  prototypeTexture;

/// @brief Field renderMode, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderMode, put=__cordl_internal_set_renderMode)) ::UnityEngine::DetailRenderMode  renderMode;

/// @brief Field targetCoverage, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetCoverage, put=__cordl_internal_set_targetCoverage)) float_t  targetCoverage;

/// @brief Field useDensityScaling, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_useDensityScaling, put=__cordl_internal_set_useDensityScaling)) bool  useDensityScaling;

/// @brief Field useInstancing, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_useInstancing, put=__cordl_internal_set_useInstancing)) bool  useInstancing;

/// @brief Field usePrototypeMesh, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_usePrototypeMesh, put=__cordl_internal_set_usePrototypeMesh)) bool  usePrototypeMesh;

/// @brief Method Equals, addr 0x18142b090, size 0x60, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x18142aca0, size 0x3f0, virtual false, abstract: false, final false
inline bool Equals(::JBooth::MicroVerseCore::DetailPrototypeSerializable*  x) ;

/// @brief Method GetHashCode, addr 0x18142b0f0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetHashCode, addr 0x18142b100, size 0x230, virtual false, abstract: false, final false
inline int32_t GetHashCode(::JBooth::MicroVerseCore::DetailPrototypeSerializable*  t) ;

/// @brief Method GetPrototype, addr 0x18142b330, size 0x450, virtual false, abstract: false, final false
inline ::UnityEngine::DetailPrototype* GetPrototype() ;

/// @brief Method IsEqualToDetail, addr 0x18142b780, size 0x4d0, virtual false, abstract: false, final false
inline bool IsEqualToDetail(::UnityEngine::DetailPrototype*  detail) ;

/// @brief Method IsValid, addr 0x18142bc50, size 0x50, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::JBooth::MicroVerseCore::DetailPrototypeSerializable* New_ctor() ;

static inline ::JBooth::MicroVerseCore::DetailPrototypeSerializable* New_ctor(::UnityEngine::DetailPrototype*  d) ;

/// @brief Method ResetToMesh, addr 0x18142bca0, size 0x70, virtual false, abstract: false, final false
inline void ResetToMesh(bool  seed) ;

/// @brief Method ResetToTexture, addr 0x18142bd10, size 0xc0, virtual false, abstract: false, final false
inline void ResetToTexture() ;

constexpr float_t const& __cordl_internal_get_alignToGround() const;

constexpr float_t& __cordl_internal_get_alignToGround() ;

constexpr float_t const& __cordl_internal_get_density() const;

constexpr float_t& __cordl_internal_get_density() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_dryColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_dryColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_healthyColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_healthyColor() ;

constexpr float_t const& __cordl_internal_get_holeEdgePadding() const;

constexpr float_t& __cordl_internal_get_holeEdgePadding() ;

constexpr float_t const& __cordl_internal_get_maxHeight() const;

constexpr float_t& __cordl_internal_get_maxHeight() ;

constexpr float_t const& __cordl_internal_get_maxWidth() const;

constexpr float_t& __cordl_internal_get_maxWidth() ;

constexpr float_t const& __cordl_internal_get_minHeight() const;

constexpr float_t& __cordl_internal_get_minHeight() ;

constexpr float_t const& __cordl_internal_get_minWidth() const;

constexpr float_t& __cordl_internal_get_minWidth() ;

constexpr int32_t const& __cordl_internal_get_noiseSeed() const;

constexpr int32_t& __cordl_internal_get_noiseSeed() ;

constexpr float_t const& __cordl_internal_get_noiseSpread() const;

constexpr float_t& __cordl_internal_get_noiseSpread() ;

constexpr float_t const& __cordl_internal_get_positionJitter() const;

constexpr float_t& __cordl_internal_get_positionJitter() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prototype() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prototype() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_prototypeTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_prototypeTexture() ;

constexpr ::UnityEngine::DetailRenderMode const& __cordl_internal_get_renderMode() const;

constexpr ::UnityEngine::DetailRenderMode& __cordl_internal_get_renderMode() ;

constexpr float_t const& __cordl_internal_get_targetCoverage() const;

constexpr float_t& __cordl_internal_get_targetCoverage() ;

constexpr bool const& __cordl_internal_get_useDensityScaling() const;

constexpr bool& __cordl_internal_get_useDensityScaling() ;

constexpr bool const& __cordl_internal_get_useInstancing() const;

constexpr bool& __cordl_internal_get_useInstancing() ;

constexpr bool const& __cordl_internal_get_usePrototypeMesh() const;

constexpr bool& __cordl_internal_get_usePrototypeMesh() ;

constexpr void __cordl_internal_set_alignToGround(float_t  value) ;

constexpr void __cordl_internal_set_density(float_t  value) ;

constexpr void __cordl_internal_set_dryColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_healthyColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_holeEdgePadding(float_t  value) ;

constexpr void __cordl_internal_set_maxHeight(float_t  value) ;

constexpr void __cordl_internal_set_maxWidth(float_t  value) ;

constexpr void __cordl_internal_set_minHeight(float_t  value) ;

constexpr void __cordl_internal_set_minWidth(float_t  value) ;

constexpr void __cordl_internal_set_noiseSeed(int32_t  value) ;

constexpr void __cordl_internal_set_noiseSpread(float_t  value) ;

constexpr void __cordl_internal_set_positionJitter(float_t  value) ;

constexpr void __cordl_internal_set_prototype(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_prototypeTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_renderMode(::UnityEngine::DetailRenderMode  value) ;

constexpr void __cordl_internal_set_targetCoverage(float_t  value) ;

constexpr void __cordl_internal_set_useDensityScaling(bool  value) ;

constexpr void __cordl_internal_set_useInstancing(bool  value) ;

constexpr void __cordl_internal_set_usePrototypeMesh(bool  value) ;

/// @brief Method .ctor, addr 0x18142bf50, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18142bdd0, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::DetailPrototype*  d) ;

/// @brief Method op_Equality, addr 0x18142bfb0, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::JBooth::MicroVerseCore::DetailPrototypeSerializable*  obj1, ::JBooth::MicroVerseCore::DetailPrototypeSerializable*  obj2) ;

/// @brief Method op_Inequality, addr 0x18142bfd0, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::JBooth::MicroVerseCore::DetailPrototypeSerializable*  obj1, ::JBooth::MicroVerseCore::DetailPrototypeSerializable*  obj2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetailPrototypeSerializable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetailPrototypeSerializable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DetailPrototypeSerializable(DetailPrototypeSerializable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetailPrototypeSerializable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetailPrototypeSerializable(DetailPrototypeSerializable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17997};

/// @brief Field prototype, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prototype;

/// @brief Field alignToGround, offset: 0x18, size: 0x4, def value: None
 float_t  ___alignToGround;

/// @brief Field density, offset: 0x1c, size: 0x4, def value: None
 float_t  ___density;

/// @brief Field dryColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___dryColor;

/// @brief Field healthyColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___healthyColor;

/// @brief Field holeEdgePadding, offset: 0x40, size: 0x4, def value: None
 float_t  ___holeEdgePadding;

/// @brief Field minWidth, offset: 0x44, size: 0x4, def value: None
 float_t  ___minWidth;

/// @brief Field maxWidth, offset: 0x48, size: 0x4, def value: None
 float_t  ___maxWidth;

/// @brief Field minHeight, offset: 0x4c, size: 0x4, def value: None
 float_t  ___minHeight;

/// @brief Field maxHeight, offset: 0x50, size: 0x4, def value: None
 float_t  ___maxHeight;

/// @brief Field noiseSeed, offset: 0x54, size: 0x4, def value: None
 int32_t  ___noiseSeed;

/// @brief Field noiseSpread, offset: 0x58, size: 0x4, def value: None
 float_t  ___noiseSpread;

/// @brief Field positionJitter, offset: 0x5c, size: 0x4, def value: None
 float_t  ___positionJitter;

/// @brief Field prototypeTexture, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___prototypeTexture;

/// @brief Field renderMode, offset: 0x68, size: 0x4, def value: None
 ::UnityEngine::DetailRenderMode  ___renderMode;

/// @brief Field targetCoverage, offset: 0x6c, size: 0x4, def value: None
 float_t  ___targetCoverage;

/// @brief Field useInstancing, offset: 0x70, size: 0x1, def value: None
 bool  ___useInstancing;

/// @brief Field useDensityScaling, offset: 0x71, size: 0x1, def value: None
 bool  ___useDensityScaling;

/// @brief Field usePrototypeMesh, offset: 0x72, size: 0x1, def value: None
 bool  ___usePrototypeMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___prototype) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___alignToGround) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___density) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___dryColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___healthyColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___holeEdgePadding) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___minWidth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___maxWidth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___minHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___maxHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___noiseSeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___noiseSpread) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___positionJitter) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___prototypeTexture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___renderMode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___targetCoverage) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___useInstancing) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___useDensityScaling) == 0x71, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailPrototypeSerializable, ___usePrototypeMesh) == 0x72, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::DetailPrototypeSerializable) == 0x78, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
