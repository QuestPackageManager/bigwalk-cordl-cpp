#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleProperty)
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct FilterFunctionType;
}
namespace UnityEngine::UIElements {
struct MaterialDefinition;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleProperty*, "UnityEngine.UIElements", "StyleProperty");
// Dependencies System.Object, UnityEngine.UIElements.StyleSheets.StylePropertyId, UnityEngine.UIElements.StyleValueHandle
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleProperty
class CORDL_TYPE StyleProperty : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_handleCount)) int32_t  handleCount;

 __declspec(property(get=get_id)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id;

 __declspec(property(get=get_isCustomProperty)) bool  isCustomProperty;

/// @brief Field m_CustomName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CustomName, put=__cordl_internal_set_m_CustomName)) ::StringW  m_CustomName;

/// @brief Field m_Id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Id, put=__cordl_internal_set_m_Id)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId  m_Id;

/// @brief Field m_Line, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Line, put=__cordl_internal_set_m_Line)) int32_t  m_Line;

/// @brief Field m_Values, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Values, put=__cordl_internal_set_m_Values)) ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  m_Values;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field requireVariableResolve, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_requireVariableResolve, put=__cordl_internal_set_requireVariableResolve)) bool  requireVariableResolve;

 __declspec(property(get=get_values, put=set_values)) ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  values;

/// @brief Method CacheId, addr 0x1823da1b0, size 0xe0, virtual false, abstract: false, final false
inline void CacheId(::StringW  value) ;

/// @brief Method ConvertDimensionToFilterFloat, addr 0x1823da290, size 0xa0, virtual false, abstract: false, final false
static inline float_t ConvertDimensionToFilterFloat(::UnityEngine::UIElements::StyleSheets::Dimension  dim) ;

static inline ::UnityEngine::UIElements::StyleProperty* New_ctor() ;

/// @brief Method ToFilterFunctionType, addr 0x1823da330, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::FilterFunctionType ToFilterFunctionType(::UnityEngine::UIElements::StyleValueFunction  function) ;

/// @brief Method TryGetMaterialDefinition, addr 0x1823da3b0, size 0x700, virtual false, abstract: false, final false
inline bool TryGetMaterialDefinition(::UnityEngine::UIElements::StyleSheet*  styleSheet, ::by_ref<::UnityEngine::UIElements::MaterialDefinition>  value) ;

constexpr ::StringW const& __cordl_internal_get_m_CustomName() const;

constexpr ::StringW& __cordl_internal_get_m_CustomName() ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& __cordl_internal_get_m_Id() const;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& __cordl_internal_get_m_Id() ;

constexpr int32_t const& __cordl_internal_get_m_Line() const;

constexpr int32_t& __cordl_internal_get_m_Line() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> const& __cordl_internal_get_m_Values() const;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>& __cordl_internal_get_m_Values() ;

constexpr bool const& __cordl_internal_get_requireVariableResolve() const;

constexpr bool& __cordl_internal_get_requireVariableResolve() ;

constexpr void __cordl_internal_set_m_CustomName(::StringW  value) ;

constexpr void __cordl_internal_set_m_Id(::UnityEngine::UIElements::StyleSheets::StylePropertyId  value) ;

constexpr void __cordl_internal_set_m_Line(int32_t  value) ;

constexpr void __cordl_internal_set_m_Values(::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  value) ;

constexpr void __cordl_internal_set_requireVariableResolve(bool  value) ;

/// @brief Method .ctor, addr 0x1823daab0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_handleCount, addr 0x1823dab30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_handleCount() ;

/// @brief Method get_id, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId get_id() ;

/// @brief Method get_isCustomProperty, addr 0x1823dab40, size 0x10, virtual false, abstract: false, final false
inline bool get_isCustomProperty() ;

/// @brief Method get_name, addr 0x1823dab50, size 0x60, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_values, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> get_values() ;

/// @brief Method set_name, addr 0x1823da1b0, size 0xe0, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_values, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_values(::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyleProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyleProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleProperty(StyleProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleProperty(StyleProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4256};

/// @brief Field m_Id, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::UIElements::StyleSheets::StylePropertyId  ___m_Id;

/// @brief Field m_CustomName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_CustomName;

/// @brief Field m_Line, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_Line;

/// @brief Field m_Values, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  ___m_Values;

/// @brief Field requireVariableResolve, offset: 0x30, size: 0x1, def value: None
 bool  ___requireVariableResolve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleProperty, ___m_Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleProperty, ___m_CustomName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleProperty, ___m_Line) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleProperty, ___m_Values) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleProperty, ___requireVariableResolve) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleProperty) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
