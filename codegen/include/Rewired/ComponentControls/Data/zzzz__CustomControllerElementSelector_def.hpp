#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Data/CustomControllerElementSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomControllerElementSelector)
namespace Rewired::ComponentControls::Data {
struct CustomControllerElementSelector_ElementType;
}
namespace Rewired::ComponentControls::Data {
struct CustomControllerElementSelector_SelectorType;
}
namespace Rewired {
class ControllerElementIdentifier;
}
namespace Rewired {
class CustomController;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace Rewired::ComponentControls::Data {
struct CustomControllerElementSelector_ElementType;
}
namespace Rewired::ComponentControls::Data {
struct CustomControllerElementSelector_SelectorType;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerElementSelector;
}
// Write type traits
MARK_VAL_T(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType);
MARK_VAL_T(::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType);
MARK_REF_T(::Rewired::ComponentControls::Data::CustomControllerElementSelector*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType, "Rewired.ComponentControls.Data", "CustomControllerElementSelector/ElementType");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType, "Rewired.ComponentControls.Data", "CustomControllerElementSelector/SelectorType");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Data::CustomControllerElementSelector*, "Rewired.ComponentControls.Data", "CustomControllerElementSelector");
// Dependencies 
namespace Rewired::ComponentControls::Data {
// Is value type: true
// CS Name: Rewired.ComponentControls.Data.CustomControllerElementSelector/ElementType
struct CORDL_TYPE CustomControllerElementSelector_ElementType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomControllerElementSelector_ElementType_Unwrapped
enum struct __CustomControllerElementSelector_ElementType_Unwrapped : int32_t {
__E_Axis = static_cast<int32_t>(0x0),
__E_Button = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomControllerElementSelector_ElementType_Unwrapped () const noexcept {
return static_cast<__CustomControllerElementSelector_ElementType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerElementSelector_ElementType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomControllerElementSelector_ElementType(int32_t  value__) noexcept;

/// @brief Field Axis value: I32(0)
static ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType const Axis;

/// @brief Field Button value: I32(1)
static ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType const Button;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Data
// Dependencies 
namespace Rewired::ComponentControls::Data {
// Is value type: true
// CS Name: Rewired.ComponentControls.Data.CustomControllerElementSelector/SelectorType
struct CORDL_TYPE CustomControllerElementSelector_SelectorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomControllerElementSelector_SelectorType_Unwrapped
enum struct __CustomControllerElementSelector_SelectorType_Unwrapped : int32_t {
__E_Name = static_cast<int32_t>(0x0),
__E_Index = static_cast<int32_t>(0x1),
__E_Id = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomControllerElementSelector_SelectorType_Unwrapped () const noexcept {
return static_cast<__CustomControllerElementSelector_SelectorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerElementSelector_SelectorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomControllerElementSelector_SelectorType(int32_t  value__) noexcept;

/// @brief Field Id value: I32(2)
static ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType const Id;

/// @brief Field Index value: I32(1)
static ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType const Index;

/// @brief Field Name value: I32(0)
static ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType const Name;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2812};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Data
// Dependencies Rewired.ComponentControls.Data.CustomControllerElementSelector::ElementType, Rewired.ComponentControls.Data.CustomControllerElementSelector::SelectorType, System.Object
namespace Rewired::ComponentControls::Data {
// Is value type: false
// CS Name: Rewired.ComponentControls.Data.CustomControllerElementSelector
class CORDL_TYPE CustomControllerElementSelector : public ::System::Object {
public:
// Declarations
using ElementType = ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType;

using SelectorType = ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType;

/// @brief Field DrlWjydUoGbthBWmWmZGhVnVdhtE, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DrlWjydUoGbthBWmWmZGhVnVdhtE, put=__cordl_internal_set_DrlWjydUoGbthBWmWmZGhVnVdhtE)) int32_t  DrlWjydUoGbthBWmWmZGhVnVdhtE;

/// @brief Field _elementId, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__elementId, put=__cordl_internal_set__elementId)) int32_t  _elementId;

/// @brief Field _elementIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__elementIndex, put=__cordl_internal_set__elementIndex)) int32_t  _elementIndex;

/// @brief Field _elementName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__elementName, put=__cordl_internal_set__elementName)) ::StringW  _elementName;

/// @brief Field _elementType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__elementType, put=__cordl_internal_set__elementType)) ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  _elementType;

/// @brief Field _selectorType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectorType, put=__cordl_internal_set__selectorType)) ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType  _selectorType;

 __declspec(property(get=get_elementId, put=set_elementId)) int32_t  elementId;

 __declspec(property(get=get_elementIndex, put=set_elementIndex)) int32_t  elementIndex;

 __declspec(property(get=get_elementName, put=set_elementName)) ::StringW  elementName;

 __declspec(property(get=get_elementType, put=set_elementType)) ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  elementType;

/// @brief Field hiVuTzovuvqBTrMnKSfkBqaXhvfv, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_hiVuTzovuvqBTrMnKSfkBqaXhvfv, put=__cordl_internal_set_hiVuTzovuvqBTrMnKSfkBqaXhvfv)) int32_t  hiVuTzovuvqBTrMnKSfkBqaXhvfv;

 __declspec(property(get=get_isAssigned)) bool  isAssigned;

 __declspec(property(get=get_selectorType, put=set_selectorType)) ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType  selectorType;

/// @brief Method ClearCache, addr 0x1818efb90, size 0x10, virtual false, abstract: false, final false
inline void ClearCache() ;

/// @brief Method GetElementIndex, addr 0x1818efba0, size 0x220, virtual false, abstract: false, final false
inline int32_t GetElementIndex(::Rewired::CustomController*  customController) ;

/// @brief Method GetSelectorFormattedString, addr 0x1818efdc0, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetSelectorFormattedString() ;

static inline ::Rewired::ComponentControls::Data::CustomControllerElementSelector* New_ctor() ;

/// @brief Method ZDZNXWKFAeWpdrNxZtqrWtCSlJTE, addr 0x1818efe40, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* ZDZNXWKFAeWpdrNxZtqrWtCSlJTE(::Rewired::CustomController*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr int32_t const& __cordl_internal_get_DrlWjydUoGbthBWmWmZGhVnVdhtE() const;

constexpr int32_t& __cordl_internal_get_DrlWjydUoGbthBWmWmZGhVnVdhtE() ;

constexpr int32_t const& __cordl_internal_get__elementId() const;

constexpr int32_t& __cordl_internal_get__elementId() ;

constexpr int32_t const& __cordl_internal_get__elementIndex() const;

constexpr int32_t& __cordl_internal_get__elementIndex() ;

constexpr ::StringW const& __cordl_internal_get__elementName() const;

constexpr ::StringW& __cordl_internal_get__elementName() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType const& __cordl_internal_get__elementType() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType& __cordl_internal_get__elementType() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType const& __cordl_internal_get__selectorType() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType& __cordl_internal_get__selectorType() ;

constexpr int32_t const& __cordl_internal_get_hiVuTzovuvqBTrMnKSfkBqaXhvfv() const;

constexpr int32_t& __cordl_internal_get_hiVuTzovuvqBTrMnKSfkBqaXhvfv() ;

constexpr void __cordl_internal_set_DrlWjydUoGbthBWmWmZGhVnVdhtE(int32_t  value) ;

constexpr void __cordl_internal_set__elementId(int32_t  value) ;

constexpr void __cordl_internal_set__elementIndex(int32_t  value) ;

constexpr void __cordl_internal_set__elementName(::StringW  value) ;

constexpr void __cordl_internal_set__elementType(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  value) ;

constexpr void __cordl_internal_set__selectorType(::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType  value) ;

constexpr void __cordl_internal_set_hiVuTzovuvqBTrMnKSfkBqaXhvfv(int32_t  value) ;

/// @brief Method .ctor, addr 0x1818efe90, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_elementId, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementId() ;

/// @brief Method get_elementIndex, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementIndex() ;

/// @brief Method get_elementName, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_elementName() ;

/// @brief Method get_elementType, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType get_elementType() ;

/// @brief Method get_isAssigned, addr 0x1818efeb0, size 0x50, virtual false, abstract: false, final false
inline bool get_isAssigned() ;

/// @brief Method get_selectorType, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType get_selectorType() ;

/// @brief Method set_elementId, addr 0x1818eff00, size 0x20, virtual false, abstract: false, final false
inline void set_elementId(int32_t  value) ;

/// @brief Method set_elementIndex, addr 0x1818eff20, size 0x20, virtual false, abstract: false, final false
inline void set_elementIndex(int32_t  value) ;

/// @brief Method set_elementName, addr 0x1818eff40, size 0x50, virtual false, abstract: false, final false
inline void set_elementName(::StringW  value) ;

/// @brief Method set_elementType, addr 0x1818eff90, size 0x20, virtual false, abstract: false, final false
inline void set_elementType(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  value) ;

/// @brief Method set_selectorType, addr 0x1818effb0, size 0x20, virtual false, abstract: false, final false
inline void set_selectorType(::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerElementSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerElementSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControllerElementSelector(CustomControllerElementSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerElementSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControllerElementSelector(CustomControllerElementSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2813};

/// @brief Field _elementType, offset: 0x10, size: 0x4, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  ____elementType;

/// @brief Field _selectorType, offset: 0x14, size: 0x4, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType  ____selectorType;

/// @brief Field _elementName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____elementName;

/// @brief Field _elementIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ____elementIndex;

/// @brief Field _elementId, offset: 0x24, size: 0x4, def value: None
 int32_t  ____elementId;

/// @brief Field hiVuTzovuvqBTrMnKSfkBqaXhvfv, offset: 0x28, size: 0x4, def value: None
 int32_t  ___hiVuTzovuvqBTrMnKSfkBqaXhvfv;

/// @brief Field DrlWjydUoGbthBWmWmZGhVnVdhtE, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___DrlWjydUoGbthBWmWmZGhVnVdhtE;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementSelector, ____elementType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementSelector, ____selectorType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementSelector, ____elementName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementSelector, ____elementIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementSelector, ____elementId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementSelector, ___hiVuTzovuvqBTrMnKSfkBqaXhvfv) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerElementSelector, ___DrlWjydUoGbthBWmWmZGhVnVdhtE) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Data::CustomControllerElementSelector) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Data
