#pragma once
// IWYU pragma private; include "Rewired/ControllerMapEnabler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KksbZTwLuzLjTBgSfpIqbygtAeKo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerMapEnabler)
namespace GlobalNamespace {
class KksbZTwLuzLjTBgSfpIqbygtAeKo;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired::Utils::Interfaces {
class IDeepCloneable;
}
namespace Rewired {
class ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK;
}
namespace Rewired {
class ControllerMapEnabler_RuleSet;
}
namespace Rewired {
class ControllerMapEnabler_Rule;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
class ControllerSetSelector;
}
namespace Rewired {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace Rewired {
class ControllerMapEnabler;
}
namespace Rewired {
class ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK;
}
namespace Rewired {
class ControllerMapEnabler_Rule;
}
namespace Rewired {
class ControllerMapEnabler_RuleSet;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerMapEnabler*);
MARK_REF_T(::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK*);
MARK_REF_T(::Rewired::ControllerMapEnabler_Rule*);
MARK_REF_T(::Rewired::ControllerMapEnabler_RuleSet*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMapEnabler*, "Rewired", "ControllerMapEnabler");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK*, "Rewired", "ControllerMapEnabler/BZumMxELvlwrHpCwgIyAmXeEeQBK");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMapEnabler_Rule*, "Rewired", "ControllerMapEnabler/Rule");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMapEnabler_RuleSet*, "Rewired", "ControllerMapEnabler/RuleSet");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMapEnabler/Rule
class CORDL_TYPE ControllerMapEnabler_Rule : public ::System::Object {
public:
// Declarations
/// @brief Field _categoryIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__categoryIds, put=__cordl_internal_set__categoryIds)) ::ArrayW<int32_t>  _categoryIds;

/// @brief Field _controllerSetSelector, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerSetSelector, put=__cordl_internal_set__controllerSetSelector)) ::Rewired::ControllerSetSelector*  _controllerSetSelector;

/// @brief Field _enable, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__enable, put=__cordl_internal_set__enable)) bool  _enable;

/// @brief Field _layoutIds, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__layoutIds, put=__cordl_internal_set__layoutIds)) ::ArrayW<int32_t>  _layoutIds;

/// @brief Field _preInitCategoryNames, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__preInitCategoryNames, put=__cordl_internal_set__preInitCategoryNames)) ::ArrayW<::StringW>  _preInitCategoryNames;

/// @brief Field _preInitLayoutNames, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__preInitLayoutNames, put=__cordl_internal_set__preInitLayoutNames)) ::ArrayW<::StringW>  _preInitLayoutNames;

/// @brief Field _tag, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__tag, put=__cordl_internal_set__tag)) ::StringW  _tag;

 __declspec(property(get=get_appliesToAllLayouts)) bool  appliesToAllLayouts;

 __declspec(property(get=get_categoryId, put=set_categoryId)) int32_t  categoryId;

 __declspec(property(get=get_categoryIds, put=set_categoryIds)) ::ArrayW<int32_t>  categoryIds;

 __declspec(property(get=get_categoryName, put=set_categoryName)) ::StringW  categoryName;

 __declspec(property(get=get_categoryNames, put=set_categoryNames)) ::ArrayW<::StringW>  categoryNames;

 __declspec(property(get=get_controllerSetSelector, put=set_controllerSetSelector)) ::Rewired::ControllerSetSelector*  controllerSetSelector;

 __declspec(property(get=get_enable, put=set_enable)) bool  enable;

 __declspec(property(get=get_isValid)) bool  isValid;

 __declspec(property(get=get_layoutId, put=set_layoutId)) int32_t  layoutId;

 __declspec(property(get=get_layoutIds, put=set_layoutIds)) ::ArrayW<int32_t>  layoutIds;

 __declspec(property(get=get_layoutName, put=set_layoutName)) ::StringW  layoutName;

 __declspec(property(get=get_layoutNames, put=set_layoutNames)) ::ArrayW<::StringW>  layoutNames;

 __declspec(property(get=get_tag, put=set_tag)) ::StringW  tag;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

/// @brief Method CheckNoControllerTypeError, addr 0x181997680, size 0x130, virtual false, abstract: false, final false
inline void CheckNoControllerTypeError() ;

/// @brief Method Initialize, addr 0x1819979f0, size 0x3a0, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method Matches, addr 0x181997d90, size 0xf0, virtual false, abstract: false, final false
inline bool Matches(::Rewired::ControllerMap*  map) ;

static inline ::Rewired::ControllerMapEnabler_Rule* New_ctor() ;

static inline ::Rewired::ControllerMapEnabler_Rule* New_ctor(::Rewired::ControllerMapEnabler_Rule*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerMapEnabler_Rule* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerSetSelector*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method Rewired.Utils.Interfaces.IDeepCloneable.DeepClone, addr 0x181997f50, size 0x100, virtual true, abstract: false, final true
inline ::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__categoryIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__categoryIds() ;

constexpr ::Rewired::ControllerSetSelector* const& __cordl_internal_get__controllerSetSelector() const;

constexpr ::Rewired::ControllerSetSelector*& __cordl_internal_get__controllerSetSelector() ;

constexpr bool const& __cordl_internal_get__enable() const;

constexpr bool& __cordl_internal_get__enable() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__layoutIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__layoutIds() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__preInitCategoryNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__preInitCategoryNames() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__preInitLayoutNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__preInitLayoutNames() ;

constexpr ::StringW const& __cordl_internal_get__tag() const;

constexpr ::StringW& __cordl_internal_get__tag() ;

constexpr void __cordl_internal_set__categoryIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__controllerSetSelector(::Rewired::ControllerSetSelector*  value) ;

constexpr void __cordl_internal_set__enable(bool  value) ;

constexpr void __cordl_internal_set__layoutIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__preInitCategoryNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__preInitLayoutNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x181998340, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181998050, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerMapEnabler_Rule*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181998200, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerSetSelector*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method get_appliesToAllLayouts, addr 0x1819983d0, size 0x20, virtual false, abstract: false, final false
inline bool get_appliesToAllLayouts() ;

/// @brief Method get_categoryId, addr 0x1819983f0, size 0x80, virtual false, abstract: false, final false
inline int32_t get_categoryId() ;

/// @brief Method get_categoryIds, addr 0x1819984f0, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_categoryIds() ;

/// @brief Method get_categoryName, addr 0x181998670, size 0xe0, virtual false, abstract: false, final false
inline ::StringW get_categoryName() ;

/// @brief Method get_categoryNames, addr 0x1819988c0, size 0x170, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_categoryNames() ;

/// @brief Method get_controllerSetSelector, addr 0x181998a90, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::ControllerSetSelector* get_controllerSetSelector() ;

/// @brief Method get_enable, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_enable() ;

/// @brief Method get_isValid, addr 0x181998af0, size 0x1a0, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// @brief Method get_layoutId, addr 0x181998e00, size 0x80, virtual false, abstract: false, final false
inline int32_t get_layoutId() ;

/// @brief Method get_layoutIds, addr 0x181998ea0, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_layoutIds() ;

/// @brief Method get_layoutName, addr 0x181998ef0, size 0x110, virtual false, abstract: false, final false
inline ::StringW get_layoutName() ;

/// @brief Method get_layoutNames, addr 0x181999110, size 0x1c0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_layoutNames() ;

/// @brief Method get_tag, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_tag() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

/// @brief Method set_categoryId, addr 0x181999370, size 0xa0, virtual false, abstract: false, final false
inline void set_categoryId(int32_t  value) ;

/// @brief Method set_categoryIds, addr 0x181999410, size 0x50, virtual false, abstract: false, final false
inline void set_categoryIds(::ArrayW<int32_t>  value) ;

/// @brief Method set_categoryName, addr 0x181999650, size 0x1a0, virtual false, abstract: false, final false
inline void set_categoryName(::StringW  value) ;

/// @brief Method set_categoryNames, addr 0x1819999d0, size 0x1e0, virtual false, abstract: false, final false
inline void set_categoryNames(::ArrayW<::StringW>  value) ;

/// @brief Method set_controllerSetSelector, addr 0x181999bb0, size 0x50, virtual false, abstract: false, final false
inline void set_controllerSetSelector(::Rewired::ControllerSetSelector*  value) ;

/// @brief Method set_enable, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_enable(bool  value) ;

/// @brief Method set_layoutId, addr 0x181999cf0, size 0xa0, virtual false, abstract: false, final false
inline void set_layoutId(int32_t  value) ;

/// @brief Method set_layoutIds, addr 0x181999d90, size 0x70, virtual false, abstract: false, final false
inline void set_layoutIds(::ArrayW<int32_t>  value) ;

/// @brief Method set_layoutName, addr 0x181999fc0, size 0x210, virtual false, abstract: false, final false
inline void set_layoutName(::StringW  value) ;

/// @brief Method set_layoutNames, addr 0x18199a1d0, size 0x210, virtual false, abstract: false, final false
inline void set_layoutNames(::ArrayW<::StringW>  value) ;

/// @brief Method set_tag, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_tag(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMapEnabler_Rule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapEnabler_Rule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMapEnabler_Rule(ControllerMapEnabler_Rule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapEnabler_Rule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMapEnabler_Rule(ControllerMapEnabler_Rule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2036};

/// @brief Field _tag, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____tag;

/// @brief Field _enable, offset: 0x18, size: 0x1, def value: None
 bool  ____enable;

/// @brief Field _categoryIds, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____categoryIds;

/// @brief Field _layoutIds, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____layoutIds;

/// @brief Field _controllerSetSelector, offset: 0x30, size: 0x8, def value: None
 ::Rewired::ControllerSetSelector*  ____controllerSetSelector;

/// @brief Field _preInitCategoryNames, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____preInitCategoryNames;

/// @brief Field _preInitLayoutNames, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____preInitLayoutNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMapEnabler_Rule, ____tag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler_Rule, ____enable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler_Rule, ____categoryIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler_Rule, ____layoutIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler_Rule, ____controllerSetSelector) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler_Rule, ____preInitCategoryNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler_Rule, ____preInitLayoutNames) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMapEnabler_Rule) == 0x48, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMapEnabler/RuleSet
class CORDL_TYPE ControllerMapEnabler_RuleSet : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) ::Rewired::ControllerMapEnabler_Rule*  Item[];

 __declspec(property(get=System_Collections_Generic_ICollection_Rewired_ControllerMapEnabler_Rule__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_Rewired_ControllerMapEnabler_Rule__IsReadOnly;

/// @brief Field _enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _rules, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rules, put=__cordl_internal_set__rules)) ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_Rule*>*  _rules;

/// @brief Field _tag, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__tag, put=__cordl_internal_set__tag)) ::StringW  _tag;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_rules, put=set_rules)) ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_Rule*>*  rules;

 __declspec(property(get=get_tag, put=set_tag)) ::StringW  tag;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr operator  ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Rewired::ControllerMapEnabler_Rule*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::Rewired::ControllerMapEnabler_Rule*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapEnabler_Rule*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapEnabler_Rule*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::Rewired::ControllerMapEnabler_Rule*>"
constexpr operator  ::System::Collections::Generic::IList_1<::Rewired::ControllerMapEnabler_Rule*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x1819959a0, size 0xc0, virtual true, abstract: false, final true
inline void Add(::Rewired::ControllerMapEnabler_Rule*  item) ;

/// @brief Method CheckList, addr 0x181995b70, size 0x50, virtual false, abstract: false, final false
inline void CheckList() ;

/// @brief Method Clear, addr 0x181995c50, size 0x90, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x181995d60, size 0x80, virtual true, abstract: false, final true
inline bool Contains(::Rewired::ControllerMapEnabler_Rule*  item) ;

/// @brief Method CopyTo, addr 0x181995e70, size 0x90, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::Rewired::ControllerMapEnabler_Rule*>  array, int32_t  arrayIndex) ;

/// @brief Method Find, addr 0x1819965e0, size 0x150, virtual false, abstract: false, final false
inline ::Rewired::ControllerMapEnabler_Rule* Find(::System::Predicate_1<::Rewired::ControllerMapEnabler_Rule*>*  predicate) ;

/// @brief Method FindIndex, addr 0x181996030, size 0x130, virtual false, abstract: false, final false
inline int32_t FindIndex(::System::Predicate_1<::Rewired::ControllerMapEnabler_Rule*>*  predicate) ;

/// @brief Method FindLast, addr 0x181996380, size 0x130, virtual false, abstract: false, final false
inline ::Rewired::ControllerMapEnabler_Rule* FindLast(::System::Predicate_1<::Rewired::ControllerMapEnabler_Rule*>*  predicate) ;

/// @brief Method FindLastIndex, addr 0x181996160, size 0x110, virtual false, abstract: false, final false
inline int32_t FindLastIndex(::System::Predicate_1<::Rewired::ControllerMapEnabler_Rule*>*  predicate) ;

/// @brief Method GetEnumerator, addr 0x181996920, size 0xa0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapEnabler_Rule*>* GetEnumerator() ;

/// @brief Method IndexOf, addr 0x181996a30, size 0x70, virtual true, abstract: false, final true
inline int32_t IndexOf(::Rewired::ControllerMapEnabler_Rule*  item) ;

/// @brief Method Insert, addr 0x181996aa0, size 0x90, virtual true, abstract: false, final true
inline void Insert(int32_t  index, ::Rewired::ControllerMapEnabler_Rule*  item) ;

static inline ::Rewired::ControllerMapEnabler_RuleSet* New_ctor() ;

static inline ::Rewired::ControllerMapEnabler_RuleSet* New_ctor(::Rewired::ControllerMapEnabler_RuleSet*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerMapEnabler_RuleSet* New_ctor(bool  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_Rule*>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method Remove, addr 0x181996cc0, size 0x80, virtual true, abstract: false, final true
inline bool Remove(::Rewired::ControllerMapEnabler_Rule*  item) ;

/// @brief Method RemoveAt, addr 0x181996bc0, size 0x80, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method Rewired.Utils.Interfaces.IDeepCloneable.DeepClone, addr 0x181996e70, size 0xb0, virtual true, abstract: false, final true
inline ::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone() ;

/// @brief Method System.Collections.Generic.ICollection<Rewired.ControllerMapEnabler.Rule>.get_IsReadOnly, addr 0x181996f20, size 0x80, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_Rewired_ControllerMapEnabler_Rule__get_IsReadOnly() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181996920, size 0xa0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_Rule*>* const& __cordl_internal_get__rules() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_Rule*>*& __cordl_internal_get__rules() ;

constexpr ::StringW const& __cordl_internal_get__tag() const;

constexpr ::StringW& __cordl_internal_get__tag() ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__rules(::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_Rule*>*  value) ;

constexpr void __cordl_internal_set__tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x181997300, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181997020, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerMapEnabler_RuleSet*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181997230, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_Rule*>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_Count, addr 0x181996a30, size 0x70, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x181997420, size 0x80, virtual true, abstract: false, final true
inline ::Rewired::ControllerMapEnabler_Rule* get_Item(int32_t  index) ;

/// @brief Method get_enabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_rules, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_Rule*>* get_rules() ;

/// @brief Method get_tag, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_tag() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Rewired::ControllerMapEnabler_Rule*>"
constexpr ::System::Collections::Generic::ICollection_1<::Rewired::ControllerMapEnabler_Rule*>* i___System__Collections__Generic__ICollection_1___Rewired__ControllerMapEnabler_Rule__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapEnabler_Rule*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapEnabler_Rule*>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerMapEnabler_Rule__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<::Rewired::ControllerMapEnabler_Rule*>"
constexpr ::System::Collections::Generic::IList_1<::Rewired::ControllerMapEnabler_Rule*>* i___System__Collections__Generic__IList_1___Rewired__ControllerMapEnabler_Rule__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x1819974a0, size 0x90, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, ::Rewired::ControllerMapEnabler_Rule*  value) ;

/// @brief Method set_enabled, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_rules, addr 0x181997620, size 0x60, virtual false, abstract: false, final false
inline void set_rules(::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_Rule*>*  value) ;

/// @brief Method set_tag, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_tag(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMapEnabler_RuleSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapEnabler_RuleSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMapEnabler_RuleSet(ControllerMapEnabler_RuleSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapEnabler_RuleSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMapEnabler_RuleSet(ControllerMapEnabler_RuleSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2037};

/// @brief Field className offset 0xffffffff size 0x8
static constexpr ::ConstString  className{u"ControllerMapEnabler.RuleSet"};

/// @brief Field _enabled, offset: 0x10, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _tag, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____tag;

/// @brief Field _rules, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_Rule*>*  ____rules;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMapEnabler_RuleSet, ____enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler_RuleSet, ____tag) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler_RuleSet, ____rules) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMapEnabler_RuleSet) == 0x28, "Size mismatch!");

} // namespace end def Rewired
// Dependencies KksbZTwLuzLjTBgSfpIqbygtAeKo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMapEnabler/BZumMxELvlwrHpCwgIyAmXeEeQBK
class CORDL_TYPE ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK : public ::System::Object {
public:
// Declarations
/// @brief Field ABoAdRPCulVjNClyUvEIfyyHeCwr, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ABoAdRPCulVjNClyUvEIfyyHeCwr, put=__cordl_internal_set_ABoAdRPCulVjNClyUvEIfyyHeCwr)) bool  ABoAdRPCulVjNClyUvEIfyyHeCwr;

/// @brief Field czEmJlfVfbPDSWCFgPYpabpFHOWkA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_czEmJlfVfbPDSWCFgPYpabpFHOWkA, put=__cordl_internal_set_czEmJlfVfbPDSWCFgPYpabpFHOWkA)) ::ArrayW<::GlobalNamespace::KksbZTwLuzLjTBgSfpIqbygtAeKo*>  czEmJlfVfbPDSWCFgPYpabpFHOWkA;

static inline ::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK* New_ctor(bool  _cordl_fixed_empty_name_whitespace, ::ArrayW<::GlobalNamespace::KksbZTwLuzLjTBgSfpIqbygtAeKo*>  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr bool const& __cordl_internal_get_ABoAdRPCulVjNClyUvEIfyyHeCwr() const;

constexpr bool& __cordl_internal_get_ABoAdRPCulVjNClyUvEIfyyHeCwr() ;

constexpr ::ArrayW<::GlobalNamespace::KksbZTwLuzLjTBgSfpIqbygtAeKo*> const& __cordl_internal_get_czEmJlfVfbPDSWCFgPYpabpFHOWkA() const;

constexpr ::ArrayW<::GlobalNamespace::KksbZTwLuzLjTBgSfpIqbygtAeKo*>& __cordl_internal_get_czEmJlfVfbPDSWCFgPYpabpFHOWkA() ;

constexpr void __cordl_internal_set_ABoAdRPCulVjNClyUvEIfyyHeCwr(bool  value) ;

constexpr void __cordl_internal_set_czEmJlfVfbPDSWCFgPYpabpFHOWkA(::ArrayW<::GlobalNamespace::KksbZTwLuzLjTBgSfpIqbygtAeKo*>  value) ;

/// @brief Method .ctor, addr 0x18159ac80, size 0x20, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, ::ArrayW<::GlobalNamespace::KksbZTwLuzLjTBgSfpIqbygtAeKo*>  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK(ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK(ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2038};

/// @brief Field ABoAdRPCulVjNClyUvEIfyyHeCwr, offset: 0x10, size: 0x1, def value: None
 bool  ___ABoAdRPCulVjNClyUvEIfyyHeCwr;

/// @brief Field czEmJlfVfbPDSWCFgPYpabpFHOWkA, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::KksbZTwLuzLjTBgSfpIqbygtAeKo*>  ___czEmJlfVfbPDSWCFgPYpabpFHOWkA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK, ___ABoAdRPCulVjNClyUvEIfyyHeCwr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK, ___czEmJlfVfbPDSWCFgPYpabpFHOWkA) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMapEnabler
class CORDL_TYPE ControllerMapEnabler : public ::System::Object {
public:
// Declarations
using BZumMxELvlwrHpCwgIyAmXeEeQBK = ::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK;

using Rule = ::Rewired::ControllerMapEnabler_Rule;

using RuleSet = ::Rewired::ControllerMapEnabler_RuleSet;

/// @brief Field JMyVHNRMyFgMEHxJqsjnjIivMVSm, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_JMyVHNRMyFgMEHxJqsjnjIivMVSm, put=__cordl_internal_set_JMyVHNRMyFgMEHxJqsjnjIivMVSm)) bool  JMyVHNRMyFgMEHxJqsjnjIivMVSm;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

/// @brief Field hmgZIkDtgyBbBFoVjVEJVkwjjSWj, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_hmgZIkDtgyBbBFoVjVEJVkwjjSWj, put=__cordl_internal_set_hmgZIkDtgyBbBFoVjVEJVkwjjSWj)) int32_t  hmgZIkDtgyBbBFoVjVEJVkwjjSWj;

 __declspec(property(get=get_ruleSets, put=set_ruleSets)) ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_RuleSet*>*  ruleSets;

/// @brief Field sFaArzRQmmyrBfgNNjoPjEuVgCivA, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sFaArzRQmmyrBfgNNjoPjEuVgCivA, put=__cordl_internal_set_sFaArzRQmmyrBfgNNjoPjEuVgCivA)) ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_RuleSet*>*  sFaArzRQmmyrBfgNNjoPjEuVgCivA;

/// @brief Field yFTIFsRuwhwHoFjAcYscnPfBxuKw, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_yFTIFsRuwhwHoFjAcYscnPfBxuKw, put=__cordl_internal_set_yFTIFsRuwhwHoFjAcYscnPfBxuKw)) ::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK*  yFTIFsRuwhwHoFjAcYscnPfBxuKw;

/// @brief Field zuNRabYObVJpywwVpBMqPjGkyzId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_zuNRabYObVJpywwVpBMqPjGkyzId, put=__cordl_internal_set_zuNRabYObVJpywwVpBMqPjGkyzId)) ::Rewired::Player*  zuNRabYObVJpywwVpBMqPjGkyzId;

/// @brief Method Apply, addr 0x181985710, size 0x270, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method ImportJson, addr 0x181985980, size 0x160, virtual false, abstract: false, final false
inline bool ImportJson(::StringW  jsonString) ;

/// @brief Method ImportXml, addr 0x181985ae0, size 0x160, virtual false, abstract: false, final false
inline bool ImportXml(::StringW  xmlString) ;

/// @brief Method LoadDefaults, addr 0x181985c40, size 0x1b0, virtual false, abstract: false, final false
inline void LoadDefaults() ;

static inline ::Rewired::ControllerMapEnabler* New_ctor(::Rewired::Player*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method ToJsonString, addr 0x181985df0, size 0x190, virtual false, abstract: false, final false
inline ::StringW ToJsonString() ;

/// @brief Method ToXmlString, addr 0x181985f80, size 0x190, virtual false, abstract: false, final false
inline ::StringW ToXmlString() ;

constexpr bool const& __cordl_internal_get_JMyVHNRMyFgMEHxJqsjnjIivMVSm() const;

constexpr bool& __cordl_internal_get_JMyVHNRMyFgMEHxJqsjnjIivMVSm() ;

constexpr int32_t const& __cordl_internal_get_hmgZIkDtgyBbBFoVjVEJVkwjjSWj() const;

constexpr int32_t& __cordl_internal_get_hmgZIkDtgyBbBFoVjVEJVkwjjSWj() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_RuleSet*>* const& __cordl_internal_get_sFaArzRQmmyrBfgNNjoPjEuVgCivA() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_RuleSet*>*& __cordl_internal_get_sFaArzRQmmyrBfgNNjoPjEuVgCivA() ;

constexpr ::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK* const& __cordl_internal_get_yFTIFsRuwhwHoFjAcYscnPfBxuKw() const;

constexpr ::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK*& __cordl_internal_get_yFTIFsRuwhwHoFjAcYscnPfBxuKw() ;

constexpr ::Rewired::Player* const& __cordl_internal_get_zuNRabYObVJpywwVpBMqPjGkyzId() const;

constexpr ::Rewired::Player*& __cordl_internal_get_zuNRabYObVJpywwVpBMqPjGkyzId() ;

constexpr void __cordl_internal_set_JMyVHNRMyFgMEHxJqsjnjIivMVSm(bool  value) ;

constexpr void __cordl_internal_set_hmgZIkDtgyBbBFoVjVEJVkwjjSWj(int32_t  value) ;

constexpr void __cordl_internal_set_sFaArzRQmmyrBfgNNjoPjEuVgCivA(::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_RuleSet*>*  value) ;

constexpr void __cordl_internal_set_yFTIFsRuwhwHoFjAcYscnPfBxuKw(::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK*  value) ;

constexpr void __cordl_internal_set_zuNRabYObVJpywwVpBMqPjGkyzId(::Rewired::Player*  value) ;

/// @brief Method .ctor, addr 0x181986110, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Player*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method gWRhFyLsLhQryPlaamCKDcPrEJrA, addr 0x1819861d0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject* gWRhFyLsLhQryPlaamCKDcPrEJrA() ;

/// @brief Method get_enabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_ruleSets, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_RuleSet*>* get_ruleSets() ;

/// @brief Method jQUrALJnyfHdpKKbaKISsgzQGpICA, addr 0x181986230, size 0x410, virtual false, abstract: false, final false
inline void jQUrALJnyfHdpKKbaKISsgzQGpICA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_enabled, addr 0x181986640, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_ruleSets, addr 0x181986650, size 0x50, virtual false, abstract: false, final false
inline void set_ruleSets(::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_RuleSet*>*  value) ;

/// @brief Method tZZyEeajDKEPzknggzCpElEhTHZh, addr 0x1819866a0, size 0xc0, virtual false, abstract: false, final false
inline bool tZZyEeajDKEPzknggzCpElEhTHZh(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMapEnabler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapEnabler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMapEnabler(ControllerMapEnabler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMapEnabler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMapEnabler(ControllerMapEnabler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2039};

/// @brief Field JMyVHNRMyFgMEHxJqsjnjIivMVSm, offset: 0x10, size: 0x1, def value: None
 bool  ___JMyVHNRMyFgMEHxJqsjnjIivMVSm;

/// @brief Field zuNRabYObVJpywwVpBMqPjGkyzId, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Player*  ___zuNRabYObVJpywwVpBMqPjGkyzId;

/// @brief Field yFTIFsRuwhwHoFjAcYscnPfBxuKw, offset: 0x20, size: 0x8, def value: None
 ::Rewired::ControllerMapEnabler_BZumMxELvlwrHpCwgIyAmXeEeQBK*  ___yFTIFsRuwhwHoFjAcYscnPfBxuKw;

/// @brief Field hmgZIkDtgyBbBFoVjVEJVkwjjSWj, offset: 0x28, size: 0x4, def value: None
 int32_t  ___hmgZIkDtgyBbBFoVjVEJVkwjjSWj;

/// @brief Field sFaArzRQmmyrBfgNNjoPjEuVgCivA, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::ControllerMapEnabler_RuleSet*>*  ___sFaArzRQmmyrBfgNNjoPjEuVgCivA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMapEnabler, ___JMyVHNRMyFgMEHxJqsjnjIivMVSm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler, ___zuNRabYObVJpywwVpBMqPjGkyzId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler, ___yFTIFsRuwhwHoFjAcYscnPfBxuKw) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler, ___hmgZIkDtgyBbBFoVjVEJVkwjjSWj) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMapEnabler, ___sFaArzRQmmyrBfgNNjoPjEuVgCivA) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMapEnabler) == 0x38, "Size mismatch!");

} // namespace end def Rewired
