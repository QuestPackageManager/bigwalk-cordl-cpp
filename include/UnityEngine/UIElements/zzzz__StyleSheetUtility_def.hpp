#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheetUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StyleSheetUtility)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Enum;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension_Unit;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
namespace UnityEngine::UIElements {
struct AngleUnit;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine::UIElements {
struct LengthUnit;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class StyleProperty;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct TimeUnit;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleSheetUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleSheetUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheetUtility*, "UnityEngine.UIElements", "StyleSheetUtility");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheetUtility
class CORDL_TYPE StyleSheetUtility : public ::System::Object {
public:
// Declarations
/// @brief Field SpecialEnumToStringCases, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpecialEnumToStringCases, put=setStaticF_SpecialEnumToStringCases)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  SpecialEnumToStringCases;

/// @brief Field SpecialStringToEnumCases, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpecialStringToEnumCases, put=setStaticF_SpecialStringToEnumCases)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  SpecialStringToEnumCases;

/// @brief Method ConvertCamelToDash, addr 0x1823ea9d0, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW ConvertCamelToDash(::StringW  camel) ;

/// @brief Method ConvertDashToHungarian, addr 0x1823eaa70, size 0x10, virtual false, abstract: false, final false
static inline ::StringW ConvertDashToHungarian(::StringW  dash) ;

/// @brief Method ConvertDashToUpperNoSpace, addr 0x1823eaa80, size 0x1e0, virtual false, abstract: false, final false
static inline ::StringW ConvertDashToUpperNoSpace(::StringW  dash, bool  firstCase, bool  addSpace) ;

/// @brief Method CreateInstanceWithHideFlags, addr 0x1823eac60, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::UIElements::StyleSheet> CreateInstanceWithHideFlags() ;

/// @brief Method GetDimensionUnitExportString, addr 0x1823eac90, size 0x140, virtual false, abstract: false, final false
static inline ::StringW GetDimensionUnitExportString(::UnityEngine::UIElements::StyleSheets::Dimension_Unit  unit) ;

/// @brief Method GetEnumExportString, addr 0x1823eadd0, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW GetEnumExportString(::System::Enum*  value) ;

/// @brief Method ToDimension, addr 0x1823eb2e0, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleSheets::Dimension ToDimension(::UnityEngine::UIElements::Angle  angle) ;

/// @brief Method ToDimension, addr 0x1823eb180, size 0x160, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleSheets::Dimension ToDimension(::UnityEngine::UIElements::Length  length) ;

/// @brief Method ToDimension, addr 0x1823eb0b0, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleSheets::Dimension ToDimension(::UnityEngine::UIElements::TimeValue  timeValue) ;

/// @brief Method ToDimensionUnit, addr 0x1823eaf30, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleSheets::Dimension_Unit ToDimensionUnit(::UnityEngine::UIElements::AngleUnit  unit) ;

/// @brief Method ToDimensionUnit, addr 0x1823eb000, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleSheets::Dimension_Unit ToDimensionUnit(::UnityEngine::UIElements::LengthUnit  unit) ;

/// @brief Method ToDimensionUnit, addr 0x1823eae80, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::StyleSheets::Dimension_Unit ToDimensionUnit(::UnityEngine::UIElements::TimeUnit  unit) ;

/// @brief Method TransferStylePropertyHandles, addr 0x1823eb450, size 0x410, virtual false, abstract: false, final false
static inline void TransferStylePropertyHandles(::UnityEngine::UIElements::StyleSheet*  fromStyleSheet, ::UnityEngine::UIElements::StyleProperty*  fromStyleProperty, ::UnityEngine::UIElements::StyleSheet*  toStyleSheet, ::UnityEngine::UIElements::StyleProperty*  toStyleProperty) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_SpecialEnumToStringCases() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_SpecialStringToEnumCases() ;

static inline void setStaticF_SpecialEnumToStringCases(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_SpecialStringToEnumCases(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyleSheetUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleSheetUtility(StyleSheetUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleSheetUtility(StyleSheetUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4267};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleSheetUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
