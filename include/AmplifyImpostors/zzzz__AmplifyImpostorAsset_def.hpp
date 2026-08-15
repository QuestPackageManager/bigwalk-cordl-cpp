#pragma once
// IWYU pragma private; include "AmplifyImpostors/AmplifyImpostorAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AmplifyImpostors/zzzz__ImpostorType_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AmplifyImpostorAsset)
namespace AmplifyImpostors {
class AmplifyImpostorBakePreset;
}
namespace AmplifyImpostors {
class TextureOutput;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace AmplifyImpostors {
class AmplifyImpostorAsset;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::AmplifyImpostorAsset*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::AmplifyImpostorAsset*, "AmplifyImpostors", "AmplifyImpostorAsset");
// Dependencies AmplifyImpostors.ImpostorType, UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.AmplifyImpostorAsset
class CORDL_TYPE AmplifyImpostorAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field DecoupleAxisFrames, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_DecoupleAxisFrames, put=__cordl_internal_set_DecoupleAxisFrames)) bool  DecoupleAxisFrames;

/// @brief Field HorizontalFrames, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_HorizontalFrames, put=__cordl_internal_set_HorizontalFrames)) int32_t  HorizontalFrames;

/// @brief Field ImpostorType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ImpostorType, put=__cordl_internal_set_ImpostorType)) ::AmplifyImpostors::ImpostorType  ImpostorType;

/// @brief Field LockedSizes, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_LockedSizes, put=__cordl_internal_set_LockedSizes)) bool  LockedSizes;

/// @brief Field Material, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Material, put=__cordl_internal_set_Material)) ::UnityW<::UnityEngine::Material>  Material;

/// @brief Field MaxVertices, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxVertices, put=__cordl_internal_set_MaxVertices)) int32_t  MaxVertices;

/// @brief Field Mesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Mesh, put=__cordl_internal_set_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

/// @brief Field NormalScale, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_NormalScale, put=__cordl_internal_set_NormalScale)) float_t  NormalScale;

/// @brief Field OverrideOutput, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OverrideOutput, put=__cordl_internal_set_OverrideOutput)) ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*  OverrideOutput;

/// @brief Field PixelPadding, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PixelPadding, put=__cordl_internal_set_PixelPadding)) int32_t  PixelPadding;

/// @brief Field Preset, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Preset, put=__cordl_internal_set_Preset)) ::UnityW<::AmplifyImpostors::AmplifyImpostorBakePreset>  Preset;

/// @brief Field SelectedSize, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedSize, put=__cordl_internal_set_SelectedSize)) int32_t  SelectedSize;

/// @brief Field ShapePoints, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShapePoints, put=__cordl_internal_set_ShapePoints)) ::ArrayW<::UnityEngine::Vector2>  ShapePoints;

/// @brief Field TexSize, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TexSize, put=__cordl_internal_set_TexSize)) ::UnityEngine::Vector2  TexSize;

/// @brief Field Tolerance, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tolerance, put=__cordl_internal_set_Tolerance)) float_t  Tolerance;

/// @brief Field Version, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) int32_t  Version;

/// @brief Field VerticalFrames, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_VerticalFrames, put=__cordl_internal_set_VerticalFrames)) int32_t  VerticalFrames;

static inline ::AmplifyImpostors::AmplifyImpostorAsset* New_ctor() ;

constexpr bool const& __cordl_internal_get_DecoupleAxisFrames() const;

constexpr bool& __cordl_internal_get_DecoupleAxisFrames() ;

constexpr int32_t const& __cordl_internal_get_HorizontalFrames() const;

constexpr int32_t& __cordl_internal_get_HorizontalFrames() ;

constexpr ::AmplifyImpostors::ImpostorType const& __cordl_internal_get_ImpostorType() const;

constexpr ::AmplifyImpostors::ImpostorType& __cordl_internal_get_ImpostorType() ;

constexpr bool const& __cordl_internal_get_LockedSizes() const;

constexpr bool& __cordl_internal_get_LockedSizes() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_Material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_Material() ;

constexpr int32_t const& __cordl_internal_get_MaxVertices() const;

constexpr int32_t& __cordl_internal_get_MaxVertices() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_Mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_Mesh() ;

constexpr float_t const& __cordl_internal_get_NormalScale() const;

constexpr float_t& __cordl_internal_get_NormalScale() ;

constexpr ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>* const& __cordl_internal_get_OverrideOutput() const;

constexpr ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*& __cordl_internal_get_OverrideOutput() ;

constexpr int32_t const& __cordl_internal_get_PixelPadding() const;

constexpr int32_t& __cordl_internal_get_PixelPadding() ;

constexpr ::UnityW<::AmplifyImpostors::AmplifyImpostorBakePreset> const& __cordl_internal_get_Preset() const;

constexpr ::UnityW<::AmplifyImpostors::AmplifyImpostorBakePreset>& __cordl_internal_get_Preset() ;

constexpr int32_t const& __cordl_internal_get_SelectedSize() const;

constexpr int32_t& __cordl_internal_get_SelectedSize() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_ShapePoints() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_ShapePoints() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_TexSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_TexSize() ;

constexpr float_t const& __cordl_internal_get_Tolerance() const;

constexpr float_t& __cordl_internal_get_Tolerance() ;

constexpr int32_t const& __cordl_internal_get_Version() const;

constexpr int32_t& __cordl_internal_get_Version() ;

constexpr int32_t const& __cordl_internal_get_VerticalFrames() const;

constexpr int32_t& __cordl_internal_get_VerticalFrames() ;

constexpr void __cordl_internal_set_DecoupleAxisFrames(bool  value) ;

constexpr void __cordl_internal_set_HorizontalFrames(int32_t  value) ;

constexpr void __cordl_internal_set_ImpostorType(::AmplifyImpostors::ImpostorType  value) ;

constexpr void __cordl_internal_set_LockedSizes(bool  value) ;

constexpr void __cordl_internal_set_Material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_MaxVertices(int32_t  value) ;

constexpr void __cordl_internal_set_Mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_NormalScale(float_t  value) ;

constexpr void __cordl_internal_set_OverrideOutput(::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*  value) ;

constexpr void __cordl_internal_set_PixelPadding(int32_t  value) ;

constexpr void __cordl_internal_set_Preset(::UnityW<::AmplifyImpostors::AmplifyImpostorBakePreset>  value) ;

constexpr void __cordl_internal_set_SelectedSize(int32_t  value) ;

constexpr void __cordl_internal_set_ShapePoints(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_TexSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_Tolerance(float_t  value) ;

constexpr void __cordl_internal_set_Version(int32_t  value) ;

constexpr void __cordl_internal_set_VerticalFrames(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d57f0, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmplifyImpostorAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmplifyImpostorAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmplifyImpostorAsset(AmplifyImpostorAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmplifyImpostorAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmplifyImpostorAsset(AmplifyImpostorAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20949};

/// @brief Field Material, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___Material;

/// @brief Field Mesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___Mesh;

/// @brief Field Version, offset: 0x28, size: 0x4, def value: None
 int32_t  ___Version;

/// @brief Field ImpostorType, offset: 0x2c, size: 0x4, def value: None
 ::AmplifyImpostors::ImpostorType  ___ImpostorType;

/// @brief Field LockedSizes, offset: 0x30, size: 0x1, def value: None
 bool  ___LockedSizes;

/// @brief Field SelectedSize, offset: 0x34, size: 0x4, def value: None
 int32_t  ___SelectedSize;

/// @brief Field TexSize, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___TexSize;

/// @brief Field DecoupleAxisFrames, offset: 0x40, size: 0x1, def value: None
 bool  ___DecoupleAxisFrames;

/// @brief Field HorizontalFrames, offset: 0x44, size: 0x4, def value: None
 int32_t  ___HorizontalFrames;

/// @brief Field VerticalFrames, offset: 0x48, size: 0x4, def value: None
 int32_t  ___VerticalFrames;

/// @brief Field PixelPadding, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___PixelPadding;

/// @brief Field MaxVertices, offset: 0x50, size: 0x4, def value: None
 int32_t  ___MaxVertices;

/// @brief Field Tolerance, offset: 0x54, size: 0x4, def value: None
 float_t  ___Tolerance;

/// @brief Field NormalScale, offset: 0x58, size: 0x4, def value: None
 float_t  ___NormalScale;

/// @brief Field ShapePoints, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___ShapePoints;

/// @brief Field Preset, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::AmplifyImpostors::AmplifyImpostorBakePreset>  ___Preset;

/// @brief Field OverrideOutput, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*  ___OverrideOutput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___Material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___Mesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___Version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___ImpostorType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___LockedSizes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___SelectedSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___TexSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___DecoupleAxisFrames) == 0x40, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___HorizontalFrames) == 0x44, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___VerticalFrames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___PixelPadding) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___MaxVertices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___Tolerance) == 0x54, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___NormalScale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___ShapePoints) == 0x60, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___Preset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostorAsset, ___OverrideOutput) == 0x70, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::AmplifyImpostorAsset) == 0x78, "Size mismatch!");

} // namespace end def AmplifyImpostors
