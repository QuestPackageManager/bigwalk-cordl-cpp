#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerMapLayoutManager_RuleSet_Editor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerMapLayoutManager_RuleSet_Editor)
namespace Rewired::Data {
class ControllerMapLayoutManager_Rule_Editor;
}
namespace Rewired {
class ControllerMapLayoutManager_RuleSet;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Rewired::Data {
class ControllerMapLayoutManager_RuleSet_Editor;
}
// Write type traits
MARK_REF_T(::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor*, "Rewired.Data", "ControllerMapLayoutManager_RuleSet_Editor");
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ControllerMapLayoutManager_RuleSet_Editor
class CORDL_TYPE ControllerMapLayoutManager_RuleSet_Editor : public ::System::Object {
public:
// Declarations
/// @brief Field _id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) int32_t  _id;

/// @brief Field _name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _rules, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rules, put=__cordl_internal_set__rules)) ::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>*  _rules;

/// @brief Field _tag, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tag, put=__cordl_internal_set__tag)) ::StringW  _tag;

 __declspec(property(get=get_id, put=set_id)) int32_t  id;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_rules, put=set_rules)) ::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>*  rules;

 __declspec(property(get=get_tag, put=set_tag)) ::StringW  tag;

/// @brief Method Clone, addr 0x1818a1740, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor* Clone() ;

static inline ::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor* New_ctor() ;

static inline ::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor* New_ctor(::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ToRuntime, addr 0x1818a17d0, size 0xf0, virtual false, abstract: false, final false
inline ::Rewired::ControllerMapLayoutManager_RuleSet* ToRuntime() ;

constexpr int32_t const& __cordl_internal_get__id() const;

constexpr int32_t& __cordl_internal_get__id() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>* const& __cordl_internal_get__rules() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>*& __cordl_internal_get__rules() ;

constexpr ::StringW const& __cordl_internal_get__tag() const;

constexpr ::StringW& __cordl_internal_get__tag() ;

constexpr void __cordl_internal_set__id(int32_t  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__rules(::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>*  value) ;

constexpr void __cordl_internal_set__tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x1818a18c0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1818a1910, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_id, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_name, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_rules, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>* get_rules() ;

/// @brief Method get_tag, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_tag() ;

/// @brief Method set_id, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_id(int32_t  value) ;

/// @brief Method set_name, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_rules, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_rules(::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>*  value) ;

/// @brief Method set_tag, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_tag(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMapLayoutManager_RuleSet_Editor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapLayoutManager_RuleSet_Editor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMapLayoutManager_RuleSet_Editor(ControllerMapLayoutManager_RuleSet_Editor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapLayoutManager_RuleSet_Editor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMapLayoutManager_RuleSet_Editor(ControllerMapLayoutManager_RuleSet_Editor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2417};

/// @brief Field _id, offset: 0x10, size: 0x4, def value: None
 int32_t  ____id;

/// @brief Field _name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _tag, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____tag;

/// @brief Field _rules, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapLayoutManager_Rule_Editor*>*  ____rules;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor, ____tag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor, ____rules) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ControllerMapLayoutManager_RuleSet_Editor) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Data
