#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerMapEnabler_Rule_Editor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerMapEnabler_Rule_Editor)
namespace Rewired::Data {
class ControllerSetSelector_Editor;
}
namespace Rewired::Utils::Interfaces {
class IDeepCloneable;
}
namespace Rewired {
class ControllerMapEnabler_Rule;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Data {
class ControllerMapEnabler_Rule_Editor;
}
// Write type traits
MARK_REF_T(::Rewired::Data::ControllerMapEnabler_Rule_Editor*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::ControllerMapEnabler_Rule_Editor*, "Rewired.Data", "ControllerMapEnabler_Rule_Editor");
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ControllerMapEnabler_Rule_Editor
class CORDL_TYPE ControllerMapEnabler_Rule_Editor : public ::System::Object {
public:
// Declarations
/// @brief Field _categoryIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__categoryIds, put=__cordl_internal_set__categoryIds)) ::System::Collections::Generic::List_1<int32_t>*  _categoryIds;

/// @brief Field _controllerSetSelector, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerSetSelector, put=__cordl_internal_set__controllerSetSelector)) ::Rewired::Data::ControllerSetSelector_Editor*  _controllerSetSelector;

/// @brief Field _enable, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__enable, put=__cordl_internal_set__enable)) bool  _enable;

/// @brief Field _layoutIds, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__layoutIds, put=__cordl_internal_set__layoutIds)) ::System::Collections::Generic::List_1<int32_t>*  _layoutIds;

/// @brief Field _tag, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__tag, put=__cordl_internal_set__tag)) ::StringW  _tag;

 __declspec(property(get=get_categoryIds, put=set_categoryIds)) ::System::Collections::Generic::List_1<int32_t>*  categoryIds;

 __declspec(property(get=get_controllerSetSelector, put=set_controllerSetSelector)) ::Rewired::Data::ControllerSetSelector_Editor*  controllerSetSelector;

 __declspec(property(get=get_enable, put=set_enable)) bool  enable;

 __declspec(property(get=get_layoutIds, put=set_layoutIds)) ::System::Collections::Generic::List_1<int32_t>*  layoutIds;

 __declspec(property(get=get_tag, put=set_tag)) ::StringW  tag;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

static inline ::Rewired::Data::ControllerMapEnabler_Rule_Editor* New_ctor() ;

static inline ::Rewired::Data::ControllerMapEnabler_Rule_Editor* New_ctor(::Rewired::Data::ControllerMapEnabler_Rule_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Rewired.Utils.Interfaces.IDeepCloneable.DeepClone, addr 0x1818a1430, size 0xb0, virtual true, abstract: false, final true
inline ::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone() ;

/// @brief Method ToRuntime, addr 0x1818a14e0, size 0xe0, virtual false, abstract: false, final false
inline ::Rewired::ControllerMapEnabler_Rule* ToRuntime() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__categoryIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__categoryIds() ;

constexpr ::Rewired::Data::ControllerSetSelector_Editor* const& __cordl_internal_get__controllerSetSelector() const;

constexpr ::Rewired::Data::ControllerSetSelector_Editor*& __cordl_internal_get__controllerSetSelector() ;

constexpr bool const& __cordl_internal_get__enable() const;

constexpr bool& __cordl_internal_get__enable() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__layoutIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__layoutIds() ;

constexpr ::StringW const& __cordl_internal_get__tag() const;

constexpr ::StringW& __cordl_internal_get__tag() ;

constexpr void __cordl_internal_set__categoryIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__controllerSetSelector(::Rewired::Data::ControllerSetSelector_Editor*  value) ;

constexpr void __cordl_internal_set__enable(bool  value) ;

constexpr void __cordl_internal_set__layoutIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x1818a1660, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818a15c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::ControllerMapEnabler_Rule_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_categoryIds, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_categoryIds() ;

/// @brief Method get_controllerSetSelector, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::ControllerSetSelector_Editor* get_controllerSetSelector() ;

/// @brief Method get_enable, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_enable() ;

/// @brief Method get_layoutIds, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_layoutIds() ;

/// @brief Method get_tag, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_tag() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

/// @brief Method set_categoryIds, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_categoryIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method set_controllerSetSelector, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_controllerSetSelector(::Rewired::Data::ControllerSetSelector_Editor*  value) ;

/// @brief Method set_enable, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_enable(bool  value) ;

/// @brief Method set_layoutIds, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_layoutIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method set_tag, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_tag(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMapEnabler_Rule_Editor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapEnabler_Rule_Editor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMapEnabler_Rule_Editor(ControllerMapEnabler_Rule_Editor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapEnabler_Rule_Editor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMapEnabler_Rule_Editor(ControllerMapEnabler_Rule_Editor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2416};

/// @brief Field _tag, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____tag;

/// @brief Field _enable, offset: 0x18, size: 0x1, def value: None
 bool  ____enable;

/// @brief Field _categoryIds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____categoryIds;

/// @brief Field _layoutIds, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____layoutIds;

/// @brief Field _controllerSetSelector, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Data::ControllerSetSelector_Editor*  ____controllerSetSelector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ControllerMapEnabler_Rule_Editor, ____tag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerMapEnabler_Rule_Editor, ____enable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerMapEnabler_Rule_Editor, ____categoryIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerMapEnabler_Rule_Editor, ____layoutIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerMapEnabler_Rule_Editor, ____controllerSetSelector) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ControllerMapEnabler_Rule_Editor) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Data
