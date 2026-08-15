#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobalPaintData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TVEGlobalPaintData)
// Forward declare root types
namespace TheVisualEngine {
class TVEGlobalPaintData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEGlobalPaintData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEGlobalPaintData*, "TheVisualEngine", "TVEGlobalPaintData");
// Dependencies System.Object, UnityEngine.Color
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEGlobalPaintData
class CORDL_TYPE TVEGlobalPaintData : public ::System::Object {
public:
// Declarations
/// @brief Field cutoutIntensity, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_cutoutIntensity, put=__cordl_internal_set_cutoutIntensity)) float_t  cutoutIntensity;

/// @brief Field tintingColor, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get_tintingColor, put=__cordl_internal_set_tintingColor)) ::UnityEngine::Color  tintingColor;

/// @brief Field tintingIntensity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_tintingIntensity, put=__cordl_internal_set_tintingIntensity)) float_t  tintingIntensity;

static inline ::TheVisualEngine::TVEGlobalPaintData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_cutoutIntensity() const;

constexpr float_t& __cordl_internal_get_cutoutIntensity() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_tintingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_tintingColor() ;

constexpr float_t const& __cordl_internal_get_tintingIntensity() const;

constexpr float_t& __cordl_internal_get_tintingIntensity() ;

constexpr void __cordl_internal_set_cutoutIntensity(float_t  value) ;

constexpr void __cordl_internal_set_tintingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_tintingIntensity(float_t  value) ;

/// @brief Method .ctor, addr 0x1804b9700, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEGlobalPaintData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobalPaintData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEGlobalPaintData(TVEGlobalPaintData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobalPaintData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEGlobalPaintData(TVEGlobalPaintData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19597};

/// @brief Field tintingIntensity, offset: 0x10, size: 0x4, def value: None
 float_t  ___tintingIntensity;

/// @brief Field tintingColor, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Color  ___tintingColor;

/// @brief Field cutoutIntensity, offset: 0x24, size: 0x4, def value: None
 float_t  ___cutoutIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEGlobalPaintData, ___tintingIntensity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGlobalPaintData, ___tintingColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGlobalPaintData, ___cutoutIntensity) == 0x24, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEGlobalPaintData) == 0x28, "Size mismatch!");

} // namespace end def TheVisualEngine
