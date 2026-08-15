#pragma once
// IWYU pragma private; include "GlobalNamespace/PS4RichPresenceEntryLanguage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PS4RichPresenceEntryLanguage)
// Forward declare root types
namespace GlobalNamespace {
class PS4RichPresenceEntryLanguage;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PS4RichPresenceEntryLanguage*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PS4RichPresenceEntryLanguage*, "", "PS4RichPresenceEntryLanguage");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PS4RichPresenceEntryLanguage
class CORDL_TYPE PS4RichPresenceEntryLanguage : public ::System::Object {
public:
// Declarations
/// @brief Field gameStatus, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameStatus, put=__cordl_internal_set_gameStatus)) ::StringW  gameStatus;

/// @brief Field languageCode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_languageCode, put=__cordl_internal_set_languageCode)) ::StringW  languageCode;

static inline ::GlobalNamespace::PS4RichPresenceEntryLanguage* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_gameStatus() const;

constexpr ::StringW& __cordl_internal_get_gameStatus() ;

constexpr ::StringW const& __cordl_internal_get_languageCode() const;

constexpr ::StringW& __cordl_internal_get_languageCode() ;

constexpr void __cordl_internal_set_gameStatus(::StringW  value) ;

constexpr void __cordl_internal_set_languageCode(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PS4RichPresenceEntryLanguage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PS4RichPresenceEntryLanguage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS4RichPresenceEntryLanguage(PS4RichPresenceEntryLanguage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS4RichPresenceEntryLanguage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS4RichPresenceEntryLanguage(PS4RichPresenceEntryLanguage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20590};

/// @brief Field languageCode, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___languageCode;

/// @brief Field gameStatus, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___gameStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PS4RichPresenceEntryLanguage, ___languageCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4RichPresenceEntryLanguage, ___gameStatus) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PS4RichPresenceEntryLanguage) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
