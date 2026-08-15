#pragma once
// IWYU pragma private; include "GlobalNamespace/PropertyBlockHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyBlockHelper)
namespace GlobalNamespace {
struct PropertyBlockHelper_ColorSetting;
}
namespace GlobalNamespace {
struct PropertyBlockHelper_FloatSetting;
}
namespace GlobalNamespace {
struct PropertyBlockHelper_TextureSetting;
}
namespace GlobalNamespace {
struct PropertyBlockHelper_VectorSetting;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
class PropertyBlockHelper;
}
namespace GlobalNamespace {
struct PropertyBlockHelper_ColorSetting;
}
namespace GlobalNamespace {
struct PropertyBlockHelper_FloatSetting;
}
namespace GlobalNamespace {
struct PropertyBlockHelper_TextureSetting;
}
namespace GlobalNamespace {
struct PropertyBlockHelper_VectorSetting;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropertyBlockHelper*);
MARK_VAL_T(::GlobalNamespace::PropertyBlockHelper_ColorSetting);
MARK_VAL_T(::GlobalNamespace::PropertyBlockHelper_FloatSetting);
MARK_VAL_T(::GlobalNamespace::PropertyBlockHelper_TextureSetting);
MARK_VAL_T(::GlobalNamespace::PropertyBlockHelper_VectorSetting);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropertyBlockHelper*, "", "PropertyBlockHelper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropertyBlockHelper_ColorSetting, "", "PropertyBlockHelper/ColorSetting");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropertyBlockHelper_FloatSetting, "", "PropertyBlockHelper/FloatSetting");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropertyBlockHelper_TextureSetting, "", "PropertyBlockHelper/TextureSetting");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropertyBlockHelper_VectorSetting, "", "PropertyBlockHelper/VectorSetting");
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropertyBlockHelper/ColorSetting
struct CORDL_TYPE PropertyBlockHelper_ColorSetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropertyBlockHelper_ColorSetting() ;

// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr PropertyBlockHelper_ColorSetting(::StringW  propertyName, ::UnityEngine::Color  color) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field propertyName, offset: 0x0, size: 0x8, def value: None
 ::StringW  propertyName;

/// @brief Field color, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Color  color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper_ColorSetting, propertyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper_ColorSetting, color) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropertyBlockHelper_ColorSetting) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropertyBlockHelper/VectorSetting
struct CORDL_TYPE PropertyBlockHelper_VectorSetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropertyBlockHelper_VectorSetting() ;

// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "vector4", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr PropertyBlockHelper_VectorSetting(::StringW  propertyName, ::UnityEngine::Vector4  vector4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4961};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field propertyName, offset: 0x0, size: 0x8, def value: None
 ::StringW  propertyName;

/// @brief Field vector4, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Vector4  vector4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper_VectorSetting, propertyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper_VectorSetting, vector4) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropertyBlockHelper_VectorSetting) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropertyBlockHelper/TextureSetting
struct CORDL_TYPE PropertyBlockHelper_TextureSetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropertyBlockHelper_TextureSetting() ;

// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }]
constexpr PropertyBlockHelper_TextureSetting(::StringW  propertyName, ::UnityW<::UnityEngine::Texture>  texture) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4962};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field propertyName, offset: 0x0, size: 0x8, def value: None
 ::StringW  propertyName;

/// @brief Field texture, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  texture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper_TextureSetting, propertyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper_TextureSetting, texture) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropertyBlockHelper_TextureSetting) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropertyBlockHelper/FloatSetting
struct CORDL_TYPE PropertyBlockHelper_FloatSetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropertyBlockHelper_FloatSetting() ;

// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: None }]
constexpr PropertyBlockHelper_FloatSetting(::StringW  propertyName, float_t  floatValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4963};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field propertyName, offset: 0x0, size: 0x8, def value: None
 ::StringW  propertyName;

/// @brief Field floatValue, offset: 0x8, size: 0x4, def value: None
 float_t  floatValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper_FloatSetting, propertyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper_FloatSetting, floatValue) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropertyBlockHelper_FloatSetting) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PropertyBlockHelper::ColorSetting, PropertyBlockHelper::FloatSetting, PropertyBlockHelper::TextureSetting, PropertyBlockHelper::VectorSetting, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropertyBlockHelper
class CORDL_TYPE PropertyBlockHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ColorSetting = ::GlobalNamespace::PropertyBlockHelper_ColorSetting;

using FloatSetting = ::GlobalNamespace::PropertyBlockHelper_FloatSetting;

using TextureSetting = ::GlobalNamespace::PropertyBlockHelper_TextureSetting;

using VectorSetting = ::GlobalNamespace::PropertyBlockHelper_VectorSetting;

/// @brief Field _replacementMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__replacementMaterial, put=__cordl_internal_set__replacementMaterial)) ::UnityW<::UnityEngine::Material>  _replacementMaterial;

/// @brief Field additonalRenderers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_additonalRenderers, put=__cordl_internal_set_additonalRenderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  additonalRenderers;

/// @brief Field colorSettings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorSettings, put=__cordl_internal_set_colorSettings)) ::ArrayW<::GlobalNamespace::PropertyBlockHelper_ColorSetting>  colorSettings;

/// @brief Field dummyColorPickerForHexUse, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_dummyColorPickerForHexUse, put=__cordl_internal_set_dummyColorPickerForHexUse)) ::UnityEngine::Color  dummyColorPickerForHexUse;

/// @brief Field floatSettings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_floatSettings, put=__cordl_internal_set_floatSettings)) ::ArrayW<::GlobalNamespace::PropertyBlockHelper_FloatSetting>  floatSettings;

 __declspec(property(get=get_getBlock)) ::UnityEngine::MaterialPropertyBlock*  getBlock;

 __declspec(property(get=get_replacementMaterial)) ::UnityW<::UnityEngine::Material>  replacementMaterial;

/// @brief Field targetRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::Renderer>  targetRenderer;

/// @brief Field targetSubmesh, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetSubmesh, put=__cordl_internal_set_targetSubmesh)) int32_t  targetSubmesh;

/// @brief Field textureSettings, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureSettings, put=__cordl_internal_set_textureSettings)) ::ArrayW<::GlobalNamespace::PropertyBlockHelper_TextureSetting>  textureSettings;

/// @brief Field vectorSettings, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_vectorSettings, put=__cordl_internal_set_vectorSettings)) ::ArrayW<::GlobalNamespace::PropertyBlockHelper_VectorSetting>  vectorSettings;

/// @brief Method Awake, addr 0x1803ee760, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PropertyBlockHelper* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803ee790, size 0x60, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Refresh, addr 0x1803ee7f0, size 0x2f0, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method ReplaceWithMaterialInstance, addr 0x1803eeae0, size 0x100, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> ReplaceWithMaterialInstance(::UnityEngine::Renderer*  renderer, int32_t  submeshIndex, ::UnityEngine::Material*  materialInstance) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__replacementMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__replacementMaterial() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_additonalRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_additonalRenderers() ;

constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_ColorSetting> const& __cordl_internal_get_colorSettings() const;

constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_ColorSetting>& __cordl_internal_get_colorSettings() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_dummyColorPickerForHexUse() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_dummyColorPickerForHexUse() ;

constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_FloatSetting> const& __cordl_internal_get_floatSettings() const;

constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_FloatSetting>& __cordl_internal_get_floatSettings() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_targetRenderer() ;

constexpr int32_t const& __cordl_internal_get_targetSubmesh() const;

constexpr int32_t& __cordl_internal_get_targetSubmesh() ;

constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_TextureSetting> const& __cordl_internal_get_textureSettings() const;

constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_TextureSetting>& __cordl_internal_get_textureSettings() ;

constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_VectorSetting> const& __cordl_internal_get_vectorSettings() const;

constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_VectorSetting>& __cordl_internal_get_vectorSettings() ;

constexpr void __cordl_internal_set__replacementMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_additonalRenderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_colorSettings(::ArrayW<::GlobalNamespace::PropertyBlockHelper_ColorSetting>  value) ;

constexpr void __cordl_internal_set_dummyColorPickerForHexUse(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_floatSettings(::ArrayW<::GlobalNamespace::PropertyBlockHelper_FloatSetting>  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_targetSubmesh(int32_t  value) ;

constexpr void __cordl_internal_set_textureSettings(::ArrayW<::GlobalNamespace::PropertyBlockHelper_TextureSetting>  value) ;

constexpr void __cordl_internal_set_vectorSettings(::ArrayW<::GlobalNamespace::PropertyBlockHelper_VectorSetting>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_getBlock, addr 0x1803eebe0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* get_getBlock() ;

/// @brief Method get_replacementMaterial, addr 0x1803eec10, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_replacementMaterial() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyBlockHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyBlockHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyBlockHelper(PropertyBlockHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyBlockHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyBlockHelper(PropertyBlockHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4964};

/// @brief Field _replacementMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____replacementMaterial;

/// @brief Field targetRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___targetRenderer;

/// @brief Field additonalRenderers, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___additonalRenderers;

/// @brief Field targetSubmesh, offset: 0x38, size: 0x4, def value: None
 int32_t  ___targetSubmesh;

/// @brief Field floatSettings, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropertyBlockHelper_FloatSetting>  ___floatSettings;

/// @brief Field colorSettings, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropertyBlockHelper_ColorSetting>  ___colorSettings;

/// @brief Field textureSettings, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropertyBlockHelper_TextureSetting>  ___textureSettings;

/// @brief Field vectorSettings, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropertyBlockHelper_VectorSetting>  ___vectorSettings;

/// @brief Field dummyColorPickerForHexUse, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___dummyColorPickerForHexUse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper, ____replacementMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper, ___targetRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper, ___additonalRenderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper, ___targetSubmesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper, ___floatSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper, ___colorSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper, ___textureSettings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper, ___vectorSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropertyBlockHelper, ___dummyColorPickerForHexUse) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropertyBlockHelper) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
