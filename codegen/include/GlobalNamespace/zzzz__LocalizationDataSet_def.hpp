#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationDataSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LocalizationEntry_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizationDataSet)
namespace GlobalNamespace {
struct LocalizationLanguage;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizationDataSet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalizationDataSet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizationDataSet*, "", "LocalizationDataSet");
// Dependencies LocalizationEntry, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizationDataSet
class CORDL_TYPE LocalizationDataSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field items, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::ArrayW<::GlobalNamespace::LocalizationEntry*>  items;

/// @brief Field missingKeyString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_missingKeyString, put=__cordl_internal_set_missingKeyString)) ::StringW  missingKeyString;

/// @brief Method GetStringForCurrentLanguage, addr 0x1804023f0, size 0x40, virtual false, abstract: false, final false
inline ::StringW GetStringForCurrentLanguage(::StringW  key) ;

/// @brief Method GetTranslatedString, addr 0x180402430, size 0xf0, virtual false, abstract: false, final false
inline ::StringW GetTranslatedString(::StringW  key, ::GlobalNamespace::LocalizationLanguage  language) ;

static inline ::GlobalNamespace::LocalizationDataSet* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::LocalizationEntry*> const& __cordl_internal_get_items() const;

constexpr ::ArrayW<::GlobalNamespace::LocalizationEntry*>& __cordl_internal_get_items() ;

constexpr ::StringW const& __cordl_internal_get_missingKeyString() const;

constexpr ::StringW& __cordl_internal_get_missingKeyString() ;

constexpr void __cordl_internal_set_items(::ArrayW<::GlobalNamespace::LocalizationEntry*>  value) ;

constexpr void __cordl_internal_set_missingKeyString(::StringW  value) ;

/// @brief Method .ctor, addr 0x180402520, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x180402560, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::LocalizationDataSet> get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationDataSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationDataSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationDataSet(LocalizationDataSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationDataSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationDataSet(LocalizationDataSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5010};

/// @brief Field missingKeyString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___missingKeyString;

/// @brief Field items, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::LocalizationEntry*>  ___items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizationDataSet, ___missingKeyString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationDataSet, ___items) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizationDataSet) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
