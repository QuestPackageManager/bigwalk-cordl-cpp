#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PropertySheet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PropertySheet)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheet;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PropertySheet*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PropertySheet*, "UnityEngine.Rendering.PostProcessing", "PropertySheet");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PropertySheet
class CORDL_TYPE PropertySheet : public ::System::Object {
public:
// Declarations
/// @brief Field <material>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__material_k__BackingField, put=__cordl_internal_set__material_k__BackingField)) ::UnityW<::UnityEngine::Material>  _material_k__BackingField;

/// @brief Field <properties>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__properties_k__BackingField, put=__cordl_internal_set__properties_k__BackingField)) ::UnityEngine::MaterialPropertyBlock*  _properties_k__BackingField;

 __declspec(property(get=get_material, put=set_material)) ::UnityW<::UnityEngine::Material>  material;

 __declspec(property(get=get_properties, put=set_properties)) ::UnityEngine::MaterialPropertyBlock*  properties;

/// @brief Method ClearKeywords, addr 0x181fcb940, size 0x10, virtual false, abstract: false, final false
inline void ClearKeywords() ;

/// @brief Method DisableKeyword, addr 0x181fcb950, size 0x10, virtual false, abstract: false, final false
inline void DisableKeyword(::StringW  keyword) ;

/// @brief Method EnableKeyword, addr 0x181fcb960, size 0x10, virtual false, abstract: false, final false
inline void EnableKeyword(::StringW  keyword) ;

static inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* New_ctor(::UnityEngine::Material*  material) ;

/// @brief Method Release, addr 0x181fcb970, size 0x50, virtual false, abstract: false, final false
inline void Release() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material_k__BackingField() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__properties_k__BackingField() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__properties_k__BackingField() ;

constexpr void __cordl_internal_set__material_k__BackingField(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__properties_k__BackingField(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method .ctor, addr 0x181fcb9c0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  material) ;

/// @brief Method get_material, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_material() ;

/// @brief Method get_properties, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* get_properties() ;

/// @brief Method set_material, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_material(::UnityEngine::Material*  value) ;

/// @brief Method set_properties, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_properties(::UnityEngine::MaterialPropertyBlock*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertySheet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertySheet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertySheet(PropertySheet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertySheet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertySheet(PropertySheet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18658};

/// @brief Field <properties>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____properties_k__BackingField;

/// @brief Field <material>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PropertySheet, ____properties_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PropertySheet, ____material_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PropertySheet) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
