#pragma once
// IWYU pragma private; include "GlobalNamespace/PS4RichPresenceEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PS4RichPresenceEntry)
namespace GlobalNamespace {
class PS4RichPresenceEntryLanguage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4RichPresenceEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PS4RichPresenceEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PS4RichPresenceEntry*, "", "PS4RichPresenceEntry");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS4RichPresenceEntry
class CORDL_TYPE PS4RichPresenceEntry : public ::System::Object {
public:
// Declarations
/// @brief Field languageData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_languageData, put=__cordl_internal_set_languageData)) ::System::Collections::Generic::List_1<::GlobalNamespace::PS4RichPresenceEntryLanguage*>*  languageData;

static inline ::GlobalNamespace::PS4RichPresenceEntry* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PS4RichPresenceEntryLanguage*>* const& __cordl_internal_get_languageData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PS4RichPresenceEntryLanguage*>*& __cordl_internal_get_languageData() ;

constexpr void __cordl_internal_set_languageData(::System::Collections::Generic::List_1<::GlobalNamespace::PS4RichPresenceEntryLanguage*>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PS4RichPresenceEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PS4RichPresenceEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS4RichPresenceEntry(PS4RichPresenceEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS4RichPresenceEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS4RichPresenceEntry(PS4RichPresenceEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20589};

/// @brief Field languageData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PS4RichPresenceEntryLanguage*>*  ___languageData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PS4RichPresenceEntry, ___languageData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PS4RichPresenceEntry) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
