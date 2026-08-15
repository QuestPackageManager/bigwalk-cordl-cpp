#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizationEntry)
namespace GlobalNamespace {
struct LocalizationLanguage;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizationEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalizationEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizationEntry*, "", "LocalizationEntry");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizationEntry
class CORDL_TYPE LocalizationEntry : public ::System::Object {
public:
// Declarations
/// @brief Field brazilianPortuguese, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_brazilianPortuguese, put=__cordl_internal_set_brazilianPortuguese)) ::StringW  brazilianPortuguese;

/// @brief Field english, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_english, put=__cordl_internal_set_english)) ::StringW  english;

/// @brief Field europeanSpanish, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_europeanSpanish, put=__cordl_internal_set_europeanSpanish)) ::StringW  europeanSpanish;

/// @brief Field french, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_french, put=__cordl_internal_set_french)) ::StringW  french;

/// @brief Field german, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_german, put=__cordl_internal_set_german)) ::StringW  german;

/// @brief Field italian, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_italian, put=__cordl_internal_set_italian)) ::StringW  italian;

/// @brief Field japanese, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_japanese, put=__cordl_internal_set_japanese)) ::StringW  japanese;

/// @brief Field key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) ::StringW  key;

/// @brief Field korean, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_korean, put=__cordl_internal_set_korean)) ::StringW  korean;

/// @brief Field latinAmericanSpanish, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_latinAmericanSpanish, put=__cordl_internal_set_latinAmericanSpanish)) ::StringW  latinAmericanSpanish;

/// @brief Field polish, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_polish, put=__cordl_internal_set_polish)) ::StringW  polish;

/// @brief Field russian, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_russian, put=__cordl_internal_set_russian)) ::StringW  russian;

/// @brief Field simplifiedChinese, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_simplifiedChinese, put=__cordl_internal_set_simplifiedChinese)) ::StringW  simplifiedChinese;

/// @brief Field traditionalChinese, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_traditionalChinese, put=__cordl_internal_set_traditionalChinese)) ::StringW  traditionalChinese;

/// @brief Field turkish, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_turkish, put=__cordl_internal_set_turkish)) ::StringW  turkish;

/// @brief Method GetTranslatedString, addr 0x180402580, size 0xb0, virtual false, abstract: false, final false
inline ::StringW GetTranslatedString(::GlobalNamespace::LocalizationLanguage  language) ;

static inline ::GlobalNamespace::LocalizationEntry* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_brazilianPortuguese() const;

constexpr ::StringW& __cordl_internal_get_brazilianPortuguese() ;

constexpr ::StringW const& __cordl_internal_get_english() const;

constexpr ::StringW& __cordl_internal_get_english() ;

constexpr ::StringW const& __cordl_internal_get_europeanSpanish() const;

constexpr ::StringW& __cordl_internal_get_europeanSpanish() ;

constexpr ::StringW const& __cordl_internal_get_french() const;

constexpr ::StringW& __cordl_internal_get_french() ;

constexpr ::StringW const& __cordl_internal_get_german() const;

constexpr ::StringW& __cordl_internal_get_german() ;

constexpr ::StringW const& __cordl_internal_get_italian() const;

constexpr ::StringW& __cordl_internal_get_italian() ;

constexpr ::StringW const& __cordl_internal_get_japanese() const;

constexpr ::StringW& __cordl_internal_get_japanese() ;

constexpr ::StringW const& __cordl_internal_get_key() const;

constexpr ::StringW& __cordl_internal_get_key() ;

constexpr ::StringW const& __cordl_internal_get_korean() const;

constexpr ::StringW& __cordl_internal_get_korean() ;

constexpr ::StringW const& __cordl_internal_get_latinAmericanSpanish() const;

constexpr ::StringW& __cordl_internal_get_latinAmericanSpanish() ;

constexpr ::StringW const& __cordl_internal_get_polish() const;

constexpr ::StringW& __cordl_internal_get_polish() ;

constexpr ::StringW const& __cordl_internal_get_russian() const;

constexpr ::StringW& __cordl_internal_get_russian() ;

constexpr ::StringW const& __cordl_internal_get_simplifiedChinese() const;

constexpr ::StringW& __cordl_internal_get_simplifiedChinese() ;

constexpr ::StringW const& __cordl_internal_get_traditionalChinese() const;

constexpr ::StringW& __cordl_internal_get_traditionalChinese() ;

constexpr ::StringW const& __cordl_internal_get_turkish() const;

constexpr ::StringW& __cordl_internal_get_turkish() ;

constexpr void __cordl_internal_set_brazilianPortuguese(::StringW  value) ;

constexpr void __cordl_internal_set_english(::StringW  value) ;

constexpr void __cordl_internal_set_europeanSpanish(::StringW  value) ;

constexpr void __cordl_internal_set_french(::StringW  value) ;

constexpr void __cordl_internal_set_german(::StringW  value) ;

constexpr void __cordl_internal_set_italian(::StringW  value) ;

constexpr void __cordl_internal_set_japanese(::StringW  value) ;

constexpr void __cordl_internal_set_key(::StringW  value) ;

constexpr void __cordl_internal_set_korean(::StringW  value) ;

constexpr void __cordl_internal_set_latinAmericanSpanish(::StringW  value) ;

constexpr void __cordl_internal_set_polish(::StringW  value) ;

constexpr void __cordl_internal_set_russian(::StringW  value) ;

constexpr void __cordl_internal_set_simplifiedChinese(::StringW  value) ;

constexpr void __cordl_internal_set_traditionalChinese(::StringW  value) ;

constexpr void __cordl_internal_set_turkish(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationEntry(LocalizationEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationEntry(LocalizationEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5009};

/// @brief Field key, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___key;

/// @brief Field english, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___english;

/// @brief Field french, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___french;

/// @brief Field german, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___german;

/// @brief Field europeanSpanish, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___europeanSpanish;

/// @brief Field russian, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___russian;

/// @brief Field korean, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___korean;

/// @brief Field japanese, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___japanese;

/// @brief Field brazilianPortuguese, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___brazilianPortuguese;

/// @brief Field simplifiedChinese, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___simplifiedChinese;

/// @brief Field italian, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___italian;

/// @brief Field polish, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___polish;

/// @brief Field latinAmericanSpanish, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___latinAmericanSpanish;

/// @brief Field turkish, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___turkish;

/// @brief Field traditionalChinese, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___traditionalChinese;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___english) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___french) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___german) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___europeanSpanish) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___russian) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___korean) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___japanese) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___brazilianPortuguese) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___simplifiedChinese) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___italian) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___polish) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___latinAmericanSpanish) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___turkish) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationEntry, ___traditionalChinese) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizationEntry) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
